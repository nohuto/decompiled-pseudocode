/*
 * XREFs of ?CheckAndDismissWindowResizeHighlight@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1401FB018
 * Callers:
 *     ?ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z @ 0x1400C5F5C (-ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1400B8074 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     EditionTouchResizeAction @ 0x14023EB8C (EditionTouchResizeAction.c)
 *     IsTouchResizeActionSupported @ 0x14023EFC8 (IsTouchResizeActionSupported.c)
 */

void __fastcall CTouchProcessor::CheckAndDismissWindowResizeHighlight(PERESOURCE *this, struct CPointerCaptureInfo *a2)
{
  int v3; // edi
  HWND WindowHandle; // rsi

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3861);
  if ( (*((_DWORD *)a2 + 33) & 1) != 0 )
  {
    v3 = *((_DWORD *)a2 + 32);
    if ( (unsigned int)(v3 - 10) > 7 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3867);
    WindowHandle = CInputDest::GetWindowHandle((struct CPointerCaptureInfo *)((char *)a2 + 8));
    if ( (int)IsTouchResizeActionSupported() >= 0 )
      EditionTouchResizeAction(WindowHandle, (unsigned int)(v3 - 9), 1LL);
    *((_DWORD *)a2 + 33) &= ~1u;
  }
}
