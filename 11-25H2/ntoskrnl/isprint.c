/*
 * XREFs of isprint @ 0x1404FC290
 * Callers:
 *     SmSanitizeString @ 0x140600BC8 (SmSanitizeString.c)
 * Callees:
 *     <none>
 */

int __cdecl isprint(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_140E00150[v1] & 0x157;
}
