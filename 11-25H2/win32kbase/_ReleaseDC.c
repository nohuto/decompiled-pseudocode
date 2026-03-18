/*
 * XREFs of _ReleaseDC @ 0x140047B90
 * Callers:
 *     UserGetMonitorDC @ 0x1400A2330 (UserGetMonitorDC.c)
 * Callees:
 *     ReleaseCacheDC @ 0x140046EA0 (ReleaseCacheDC.c)
 */

_BOOL8 __fastcall ReleaseDC(__int64 a1)
{
  return (unsigned int)ReleaseCacheDC(a1, 0LL) != 2;
}
