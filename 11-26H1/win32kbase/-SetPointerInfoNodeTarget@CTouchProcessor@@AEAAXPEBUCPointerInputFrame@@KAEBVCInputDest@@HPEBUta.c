/*
 * XREFs of ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x14006A5D4
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x14006AA00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x140213800 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1400685B8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x14006A12C (-SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x14006A864 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x14006BE60 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x14006C3AC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHH@Z @ 0x14006C440 (-UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEB.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x140173EB4 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CTouchProcessor::SetPointerInfoNodeTarget(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        const struct CInputDest *a4,
        int a5,
        const struct tagPOINT *a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  struct CPointerInfoNode *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // edi
  unsigned __int64 v18; // rcx
  HWND WindowHandle; // rbp
  unsigned int v20; // edx
  unsigned int v21; // eax
  __int64 v22; // rdx
  _DWORD v24[28]; // [rsp+60h] [rbp-D8h] BYREF
  char v25; // [rsp+D0h] [rbp-68h]

  v12 = CTouchProcessor::LookupNode(this, a2, a3);
  v16 = *((unsigned int *)PtiCurrent(v14, v13) + 340);
  if ( (v16 & 0x2000) != 0 || (v17 = 0, _bittest64((const signed __int64 *)PtiCurrent(v16, v15) + 170, 0x25u)) )
    v17 = 1;
  if ( !(unsigned int)CPointerInfoNode::IsValid(v12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12000LL);
  *((_DWORD *)v12 + 1) &= ~0x100u;
  *((_QWORD *)v12 + 24) = CInputDest::GetWindowHandle(a4);
  if ( *((_DWORD *)v12 + 111) )
  {
    WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v18);
    if ( CInputDest::GetWindowHandle((struct CPointerInfoNode *)((char *)v12 + 352)) != WindowHandle )
    {
      memset(v24, 0, sizeof(v24));
      v25 = 0;
      CInputDest::SetupFromInputDestAndWindow(v24, (char *)v12 + 352, WindowHandle, 1LL);
      CInputDest::operator=((__int64)v12 + 352, (__int64)v24);
      if ( v24[23] )
        HMAssignmentUnlock(&v24[20], v22);
    }
  }
  v20 = *(_DWORD *)v12 | 0x100;
  *((_DWORD *)v12 + 36) = a5;
  *(_DWORD *)v12 = v20;
  if ( a10 )
  {
    v20 |= 0x200u;
    *(_DWORD *)v12 = v20;
  }
  if ( !v17 )
  {
    if ( a10 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12040LL);
    *(_DWORD *)v12 &= ~0x200u;
    v20 = *(_DWORD *)v12;
  }
  if ( a8 )
  {
    v20 = v20 & 0xFFFFF3FF | 0x400;
    *(_DWORD *)v12 = v20;
  }
  if ( a6 )
    *(struct tagPOINT *)((char *)v12 + 148) = *a6;
  if ( !v17 )
  {
    if ( (v20 & 0x20000) != 0 )
      goto LABEL_18;
    v18 = (unsigned int)(a7 << 17);
    v21 = (v20 ^ (a7 << 17)) & 0xFFFDFFFF;
    goto LABEL_17;
  }
  if ( (v20 & 0x40000) == 0 )
  {
    v18 = (unsigned int)(a7 << 18);
    v21 = (v20 ^ (a7 << 18)) & 0xFFFBFFFF;
LABEL_17:
    *(_DWORD *)v12 = v18 ^ v21;
  }
LABEL_18:
  if ( a9 && CPointerInfoNode::GetHistoryCount(v12) > 1 )
    CTouchProcessor::UpdateHistoryWithTarget(this, a2, v12, a4, a5, a6, a7, v17, a10);
  if ( a7 )
  {
    if ( !v17 )
      CTouchProcessor::SetQFrameNonCoalescable((CTouchProcessor *)v18, a2, v12);
  }
}
