/*
 * XREFs of sub_140011590 @ 0x140011590
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400115CC @ 0x1400115CC (sub_1400115CC.c)
 *     sub_1400115FC @ 0x1400115FC (sub_1400115FC.c)
 */

__int64 __fastcall sub_140011590(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax

  v2 = (_QWORD *)(a1 + 16);
  result = sub_1400115CC(a1 + 16);
  if ( *v2 != a2 )
    return sub_1400115FC(v2, a2);
  return result;
}
