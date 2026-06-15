/*
 * XREFs of sub_140034FDC @ 0x140034FDC
 * Callers:
 *     sub_140034FA0 @ 0x140034FA0 (sub_140034FA0.c)
 * Callees:
 *     sub_14003501C @ 0x14003501C (sub_14003501C.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140034FDC(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = off_1400BA728;
  if ( *(_QWORD *)(a1 + 16) )
    sub_14003501C();
  result = j_j__o_free(*(_QWORD *)(a1 + 32), a2);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
