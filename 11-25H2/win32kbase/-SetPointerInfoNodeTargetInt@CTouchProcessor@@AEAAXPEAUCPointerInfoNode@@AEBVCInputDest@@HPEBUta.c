/*
 * XREFs of ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1400C5818
 * Callers:
 *     ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x1400C4F80 (-UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1400C56E8 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHH@Z @ 0x1400C59D8 (-UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEB.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1400B8074 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C4964 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1401F6E78 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1401F7170 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
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
  int v17; // [rsp+20h] [rbp-C8h]
  _BYTE v18[128]; // [rsp+30h] [rbp-B8h] BYREF

  if ( !(unsigned int)CPointerInfoNode::IsValid(a2) )
  {
    v17 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12023LL);
  }
  *((_DWORD *)a2 + 1) &= ~0x100u;
  *((_QWORD *)a2 + 24) = CInputDest::GetWindowHandle(a3);
  if ( *((_DWORD *)a2 + 111) )
  {
    WindowHandle = CInputDest::GetWindowHandle(v12);
    if ( CInputDest::GetWindowHandle((struct CPointerInfoNode *)((char *)a2 + 352)) != WindowHandle )
    {
      memset(v18, 0, 113);
      CInputDest::SetupFromInputDestAndWindow(v18, (char *)a2 + 352, WindowHandle, 1LL, v17);
      CInputDest::operator=((char *)a2 + 352, v18);
      CInputDest::~CInputDest((CInputDest *)v18);
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
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12063LL);
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
  }
  else
  {
    if ( (v14 & 0x20000) != 0 )
      return;
    v15 = a6 << 17;
    v16 = (v14 ^ (a6 << 17)) & 0xFFFDFFFF;
  }
  *(_DWORD *)a2 = v15 ^ v16;
}
