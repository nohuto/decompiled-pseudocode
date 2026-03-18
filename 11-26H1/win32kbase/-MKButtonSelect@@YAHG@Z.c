/*
 * XREFs of ?MKButtonSelect@@YAHG@Z @ 0x140212730
 * Callers:
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1401496E0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140227B14 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 */

__int64 __fastcall MKButtonSelect(int a1, int a2, int a3)
{
  *(_WORD *)(W32GetUserSessionState(a1, a2, a3) + 20638) = a1;
  ApiSetEditionPostAccessibilitySettingChangedEvent(3LL);
  return 0LL;
}
