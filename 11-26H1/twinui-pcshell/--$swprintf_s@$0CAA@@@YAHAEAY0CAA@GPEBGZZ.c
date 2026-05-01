/*
 * XREFs of ??$swprintf_s@$0CAA@@@YAHAEAY0CAA@GPEBGZZ @ 0x18030FFF4
 * Callers:
 *     ?LaunchGameOverlayWithStartupTipsFlag@BroadcastDVRComponent@@AEAAJPEAUHWND__@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x180171630 (-LaunchGameOverlayWithStartupTipsFlag@BroadcastDVRComponent@@AEAAJPEAUHWND__@@PEAUBroadcastDVRAc.c)
 * Callees:
 *     vswprintf_s @ 0x1802C9FAC (vswprintf_s.c)
 */

int swprintf_s<512>(wchar_t *a1, const wchar_t *a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return vswprintf_s(a1, 0x200uLL, a2, va);
}
