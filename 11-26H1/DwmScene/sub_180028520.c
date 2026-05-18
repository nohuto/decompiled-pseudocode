/*
 * XREFs of sub_180028520 @ 0x180028520
 * Callers:
 *     <none>
 * Callees:
 *     sub_180054278 @ 0x180054278 (sub_180054278.c)
 */

__int64 __fastcall sub_180028520(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    return sub_180054278();
  return result;
}
