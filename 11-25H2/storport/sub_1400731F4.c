/*
 * XREFs of sub_1400731F4 @ 0x1400731F4
 * Callers:
 *     sub_140054728 @ 0x140054728 (sub_140054728.c)
 *     sub_1400750D4 @ 0x1400750D4 (sub_1400750D4.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1400731F4(int *a1)
{
  int v1; // eax

  v1 = *a1;
  if ( *a1 == 1 )
  {
    if ( (unsigned int)a1[1] < 0x10 )
      return 0;
  }
  else if ( v1 == 2 )
  {
    return (unsigned int)a1[1] >= 0x18;
  }
  if ( v1 != 3 )
    return (unsigned int)(v1 - 1) <= 2;
  return (unsigned int)a1[1] >= 0x18;
}
