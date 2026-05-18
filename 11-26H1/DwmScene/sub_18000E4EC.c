/*
 * XREFs of sub_18000E4EC @ 0x18000E4EC
 * Callers:
 *     sub_18000D990 @ 0x18000D990 (sub_18000D990.c)
 *     sub_180015784 @ 0x180015784 (sub_180015784.c)
 *     sub_180017198 @ 0x180017198 (sub_180017198.c)
 *     sub_1800172BC @ 0x1800172BC (sub_1800172BC.c)
 *     sub_1800173E0 @ 0x1800173E0 (sub_1800173E0.c)
 *     sub_1800174D0 @ 0x1800174D0 (sub_1800174D0.c)
 *     sub_18001759C @ 0x18001759C (sub_18001759C.c)
 *     sub_180017668 @ 0x180017668 (sub_180017668.c)
 *     sub_1800D7E4B @ 0x1800D7E4B (sub_1800D7E4B.c)
 *     sub_1800D88B8 @ 0x1800D88B8 (sub_1800D88B8.c)
 *     sub_1800D88DC @ 0x1800D88DC (sub_1800D88DC.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 */

__int64 __fastcall sub_18000E4EC(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18000C444(v1);
  return result;
}
