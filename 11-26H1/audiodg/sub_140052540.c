/*
 * XREFs of sub_140052540 @ 0x140052540
 * Callers:
 *     sub_14002FA30 @ 0x14002FA30 (sub_14002FA30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140052540(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax

  v2 = *a2;
  *(_BYTE *)(a1 + 16) = 1;
  result = a1;
  *(_OWORD *)a1 = v2;
  return result;
}
