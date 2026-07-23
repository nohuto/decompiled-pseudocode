/*
 * XREFs of _itow_s @ 0x14053D970
 * Callers:
 *     RtlpFindRegTziForCurrentYear @ 0x14061CC94 (RtlpFindRegTziForCurrentYear.c)
 * Callees:
 *     xtow_s @ 0x14053DB64 (xtow_s.c)
 */

errno_t __cdecl itow_s(int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  int v4; // eax
  int v6; // r9d

  v4 = 0;
  v6 = 10;
  if ( Radix == 10 && Val < 0 )
    v4 = 1;
  else
    v6 = Radix;
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, v6, v4);
}
