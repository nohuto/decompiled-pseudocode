/*
 * XREFs of ?GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z @ 0x140215844
 * Callers:
 *     ?IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z @ 0x140215EF0 (-IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x14004C8A0 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x14006A864 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerEventTarget(
        PERESOURCE *this,
        const struct CPointerInfoNode *a2,
        HWND *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax
  int v11; // r8d
  HWND WindowHandle; // rax
  CInputDest *v14; // [rsp+50h] [rbp+8h] BYREF

  if ( !tagDomLock::IsLockedShared(this + 4) )
  {
    LODWORD(v14) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 16031);
  }
  if ( (*(_DWORD *)a2 & 0x100) == 0 )
  {
    LODWORD(v14) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 16043);
  }
  v14 = 0LL;
  v9 = *((unsigned int *)PtiCurrent(v7, v6) + 340);
  if ( (v9 & 0x2000) != 0 || (v10 = PtiCurrent(v9, v8), v11 = 0, _bittest64((const signed __int64 *)v10 + 170, 0x25u)) )
    v11 = 1;
  CTouchProcessor::GetPointerCapture(this, *((_QWORD *)a2 + 2), v11, &v14, 0LL);
  if ( v14 )
    WindowHandle = CInputDest::GetWindowHandle(v14);
  else
    WindowHandle = (HWND)*((_QWORD *)a2 + 24);
  *a3 = WindowHandle;
  return 1LL;
}
