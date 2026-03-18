/*
 * XREFs of _ReleaseDC @ 0x14003BBD0
 * Callers:
 *     UserGetMonitorDC @ 0x140035F78 (UserGetMonitorDC.c)
 * Callees:
 *     ReleaseCacheDC @ 0x14003BF80 (ReleaseCacheDC.c)
 */

_BOOL8 __fastcall ReleaseDC(__int64 a1)
{
  return (unsigned int)ReleaseCacheDC(a1, 0LL) != 2;
}
