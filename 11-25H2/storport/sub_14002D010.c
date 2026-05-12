/*
 * XREFs of sub_14002D010 @ 0x14002D010
 * Callers:
 *     sub_140054728 @ 0x140054728 (sub_140054728.c)
 *     sub_140072EC4 @ 0x140072EC4 (sub_140072EC4.c)
 *     sub_1400750D4 @ 0x1400750D4 (sub_1400750D4.c)
 *     sub_14007842C @ 0x14007842C (sub_14007842C.c)
 *     sub_140127AAC @ 0x140127AAC (sub_140127AAC.c)
 *     sub_14012C7A0 @ 0x14012C7A0 (sub_14012C7A0.c)
 *     sub_14012F368 @ 0x14012F368 (sub_14012F368.c)
 * Callees:
 *     <none>
 */

int *__fastcall sub_14002D010(int *a1, unsigned int a2)
{
  int v2; // eax

  v2 = *a1;
  if ( *a1 == 1 )
  {
    if ( a2 < a1[2] )
      return &a1[16 * (unsigned __int64)a2 + 4];
    return 0LL;
  }
  if ( v2 != 2 && v2 != 3 || a2 >= a1[2] )
    return 0LL;
  return &a1[16 * (unsigned __int64)a2 + 6];
}
