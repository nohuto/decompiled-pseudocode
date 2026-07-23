/*
 * XREFs of MiValidateSectionRetry @ 0x1404E1FB4
 * Callers:
 *     MiValidateSectionCreate @ 0x14099C8D4 (MiValidateSectionCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiValidateSectionRetry(_DWORD *a1, unsigned int a2, int a3)
{
  int v3; // r9d
  int v4; // eax

  if ( a2 != -1073741789 )
    return a2;
  v3 = a1[11];
  if ( a3 >= v3 )
    return a2;
  v4 = a1[10];
  if ( (v4 & 1) != 0 )
  {
    a1[9] |= 4u;
  }
  else
  {
    a1[10] = v4 | 1;
    if ( v3 == 1 )
      a1[9] &= ~4u;
  }
  return 0LL;
}
