/*
 * XREFs of sub_140196370 @ 0x140196370
 * Callers:
 *     <none>
 * Callees:
 *     sub_140195FA4 @ 0x140195FA4 (sub_140195FA4.c)
 *     sub_14019618C @ 0x14019618C (sub_14019618C.c)
 */

__int64 __fastcall sub_140196370(_QWORD *a1, int a2, __int64 a3)
{
  if ( a2 == 2 )
    return sub_14019618C(*(_QWORD *)(a1[6] + 16LL), a1[7], a3);
  if ( a2 == 7 )
    return sub_140195FA4(a3, a1);
  return 3221225659LL;
}
