/*
 * XREFs of RtlExtendedMagicDivide @ 0x14047B5B0
 * Callers:
 *     RtlTimeToSecondsSince1980 @ 0x14047B530 (RtlTimeToSecondsSince1980.c)
 *     RtlTimeToSecondsSince1970 @ 0x14047B570 (RtlTimeToSecondsSince1970.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __stdcall RtlExtendedMagicDivide(LARGE_INTEGER Dividend, LARGE_INTEGER MagicDivisor, CCHAR ShiftCount)
{
  LARGE_INTEGER v4; // rcx
  unsigned __int64 v5; // rdx

  v4.QuadPart = -Dividend.QuadPart;
  if ( v4.QuadPart < 0 )
    v4 = Dividend;
  v5 = (unsigned __int64)(((unsigned __int64)v4.QuadPart * (unsigned __int128)(unsigned __int64)MagicDivisor.QuadPart) >> 64) >> ShiftCount;
  if ( Dividend.QuadPart < 0 )
    return (LARGE_INTEGER)-(__int64)v5;
  return (LARGE_INTEGER)v5;
}
