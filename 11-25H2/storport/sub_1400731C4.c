/*
 * XREFs of sub_1400731C4 @ 0x1400731C4
 * Callers:
 *     sub_140054728 @ 0x140054728 (sub_140054728.c)
 *     sub_140072E00 @ 0x140072E00 (sub_140072E00.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1400731C4(int *a1)
{
  int v1; // eax

  v1 = *a1;
  if ( *a1 == 1 )
  {
    if ( (unsigned int)a1[1] >= 0x20 )
      return (unsigned int)(v1 - 1) <= 1;
  }
  else
  {
    if ( v1 != 2 )
      return (unsigned int)(v1 - 1) <= 1;
    if ( (unsigned int)a1[1] >= 0x28 )
      return 1;
  }
  return 0;
}
