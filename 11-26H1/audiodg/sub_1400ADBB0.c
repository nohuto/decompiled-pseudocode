/*
 * XREFs of sub_1400ADBB0 @ 0x1400ADBB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140016F18 @ 0x140016F18 (sub_140016F18.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_1400ADBB0(__int64 a1, char a2)
{
  *(_DWORD *)(a1 + 44) = -1073741823;
  sub_140016F18((void **)(a1 + 16));
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
