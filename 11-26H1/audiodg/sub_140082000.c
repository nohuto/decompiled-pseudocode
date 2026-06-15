/*
 * XREFs of sub_140082000 @ 0x140082000
 * Callers:
 *     sub_140080C8C @ 0x140080C8C (sub_140080C8C.c)
 *     sub_1400833D0 @ 0x1400833D0 (sub_1400833D0.c)
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140082000(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  if ( *a1 != a2 )
  {
    result = j_j__o_free(*a1);
    *a1 = a2;
  }
  return result;
}
