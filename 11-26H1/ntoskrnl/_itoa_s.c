/*
 * XREFs of _itoa_s @ 0x14053D620
 * Callers:
 *     <none>
 * Callees:
 *     xtoa_s @ 0x14053D80C (xtoa_s.c)
 */

errno_t __cdecl itoa_s(int Value, char *DstBuf, size_t Size, int Radix)
{
  int v4; // eax
  int v6; // r9d

  v4 = 0;
  v6 = 10;
  if ( Radix == 10 && Value < 0 )
    v4 = 1;
  else
    v6 = Radix;
  return xtoa_s(Value, (_DWORD)DstBuf, Size, v6, v4);
}
