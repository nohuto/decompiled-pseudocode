/*
 * XREFs of ?CheckAndDismissWindowResizeHighlight@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x140142920
 * Callers:
 *     ?ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z @ 0x1401428C0 (-ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x14006A864 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     EditionTouchResizeAction @ 0x140249098 (EditionTouchResizeAction.c)
 *     IsTouchResizeActionSupported @ 0x1402492B8 (IsTouchResizeActionSupported.c)
 */

void __fastcall CTouchProcessor::CheckAndDismissWindowResizeHighlight(PERESOURCE *this, struct CPointerCaptureInfo *a2)
{
  int v3; // edi
  HWND WindowHandle; // rsi

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3845LL);
  if ( (*((_DWORD *)a2 + 33) & 1) != 0 )
  {
    v3 = *((_DWORD *)a2 + 32);
    if ( v3 < 10 || v3 > 17 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3851LL);
    WindowHandle = CInputDest::GetWindowHandle((struct CPointerCaptureInfo *)((char *)a2 + 8));
    if ( (int)IsTouchResizeActionSupported() >= 0 )
      EditionTouchResizeAction(WindowHandle, (unsigned int)(v3 - 9), 1LL);
    *((_DWORD *)a2 + 33) &= ~1u;
  }
}
