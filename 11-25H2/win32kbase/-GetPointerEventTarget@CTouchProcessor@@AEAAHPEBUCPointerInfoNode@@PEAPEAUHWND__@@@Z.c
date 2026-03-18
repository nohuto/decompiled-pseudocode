/*
 * XREFs of ?GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z @ 0x14020305C
 * Callers:
 *     ?IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z @ 0x140205300 (-IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1400B8074 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1400D1578 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerEventTarget(
        PERESOURCE *this,
        const struct CPointerInfoNode *a2,
        HWND *a3)
{
  struct tagTHREADINFO *v6; // rax
  int v7; // r8d
  CInputDest *v9; // [rsp+50h] [rbp+8h] BYREF

  if ( !tagDomLock::IsLockedShared(this + 4) )
  {
    LODWORD(v9) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 16099);
  }
  if ( (*(_DWORD *)a2 & 0x100) == 0 )
  {
    LODWORD(v9) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 16111);
  }
  v9 = 0LL;
  if ( (*((_DWORD *)PtiCurrent() + 340) & 0x2000LL) != 0
    || (v6 = PtiCurrent(), v7 = 0, (*((_QWORD *)v6 + 170) & 0x2000000000LL) != 0) )
  {
    v7 = 1;
  }
  CTouchProcessor::GetPointerCapture((CTouchProcessor *)this, *((_QWORD *)a2 + 2), v7, &v9, 0LL);
  if ( v9 )
    *a3 = CInputDest::GetWindowHandle(v9);
  else
    *a3 = (HWND)*((_QWORD *)a2 + 24);
  return 1LL;
}
