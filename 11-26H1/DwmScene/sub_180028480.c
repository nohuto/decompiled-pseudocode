/*
 * XREFs of sub_180028480 @ 0x180028480
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800540C4 @ 0x1800540C4 (sub_1800540C4.c)
 */

__int64 __fastcall sub_180028480(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    return sub_1800540C4();
  return result;
}
