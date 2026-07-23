/*
 * XREFs of ChkSum @ 0x1801020B0
 * Callers:
 *     LdrVerifyMappedImageMatchesChecksum @ 0x180145EF0 (LdrVerifyMappedImageMatchesChecksum.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall ChkSum(unsigned int a1, unsigned __int16 *a2, int a3)
{
  int v4; // ecx

  for ( ; a3; --a3 )
  {
    v4 = *a2++;
    a1 = (unsigned __int16)(a1 + v4) + ((a1 + v4) >> 16);
  }
  return a1 + HIWORD(a1);
}
