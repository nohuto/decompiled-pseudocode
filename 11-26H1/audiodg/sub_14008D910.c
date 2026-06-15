/*
 * XREFs of sub_14008D910 @ 0x14008D910
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_140089834 @ 0x140089834 (sub_140089834.c)
 */

__int64 __fastcall sub_14008D910(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl

  *(_DWORD *)(a1 + 68) = -1073741823;
  *(_QWORD *)a1 = off_1400BEEB0;
  v4 = a2;
  sub_140089834((_QWORD *)a1, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
