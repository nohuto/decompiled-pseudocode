/*
 * XREFs of _anonymous_namespace_::GetLogoTileScaleFactor @ 0x1805E6394
 * Callers:
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x1805EB290 (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

float anonymous_namespace_::GetLogoTileScaleFactor()
{
  HMONITOR v0; // rax
  int v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v0 = MonitorFromWindow(0LL, 1u);
  GetScaleFactorForMonitor(v0, &v2);
  return (float)v2 / 100.0;
}
