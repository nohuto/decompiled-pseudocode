/*
 * XREFs of ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x14006A348
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x14006AA00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHH@Z @ 0x14006C440 (-UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEB.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1400685B8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x14006A864 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x140173EB4 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CTouchProcessor::SetPointerInfoNodeTargetInt(
        CTouchProcessor *this,
        struct CPointerInfoNode *a2,
        const struct CInputDest *a3,
        int a4,
        const struct tagPOINT *a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  CInputDest *v12; // rcx
  HWND WindowHandle; // rsi
  unsigned int v14; // edx
  int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // rdx
  _DWORD v18[28]; // [rsp+30h] [rbp-B8h] BYREF
  char v19; // [rsp+A0h] [rbp-48h]

  if ( !(unsigned int)CPointerInfoNode::IsValid(a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12000LL);
  *((_DWORD *)a2 + 1) &= ~0x100u;
  *((_QWORD *)a2 + 24) = CInputDest::GetWindowHandle(a3);
  if ( *((_DWORD *)a2 + 111) )
  {
    WindowHandle = CInputDest::GetWindowHandle(v12);
    if ( CInputDest::GetWindowHandle((struct CPointerInfoNode *)((char *)a2 + 352)) != WindowHandle )
    {
      memset(v18, 0, sizeof(v18));
      v19 = 0;
      CInputDest::SetupFromInputDestAndWindow(v18, (char *)a2 + 352, WindowHandle, 1LL);
      CInputDest::operator=((__int64)a2 + 352, (__int64)v18);
      if ( v18[23] )
        HMAssignmentUnlock(&v18[20], v17);
    }
  }
  v14 = *(_DWORD *)a2 | 0x100;
  *((_DWORD *)a2 + 36) = a4;
  *(_DWORD *)a2 = v14;
  if ( a9 )
  {
    v14 |= 0x200u;
    *(_DWORD *)a2 = v14;
  }
  if ( !a8 )
  {
    if ( a9 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12040LL);
    *(_DWORD *)a2 &= ~0x200u;
    v14 = *(_DWORD *)a2;
  }
  if ( a7 )
  {
    v14 = v14 & 0xFFFFF3FF | 0x400;
    *(_DWORD *)a2 = v14;
  }
  if ( a5 )
    *(struct tagPOINT *)((char *)a2 + 148) = *a5;
  if ( a8 )
  {
    if ( (v14 & 0x40000) != 0 )
      return;
    v15 = a6 << 18;
    v16 = (v14 ^ (a6 << 18)) & 0xFFFBFFFF;
    goto LABEL_15;
  }
  if ( (v14 & 0x20000) == 0 )
  {
    v15 = a6 << 17;
    v16 = (v14 ^ (a6 << 17)) & 0xFFFDFFFF;
LABEL_15:
    *(_DWORD *)a2 = v15 ^ v16;
  }
}
