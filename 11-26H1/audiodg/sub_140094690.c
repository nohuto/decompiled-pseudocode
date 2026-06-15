/*
 * XREFs of sub_140094690 @ 0x140094690
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140094690(__int64 a1, char a2)
{
  *(_QWORD *)a1 = off_1400BF3E8;
  *(_DWORD *)(a1 + 12) = -1073741823;
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
