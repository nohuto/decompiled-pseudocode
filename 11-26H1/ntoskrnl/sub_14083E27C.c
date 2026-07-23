/*
 * XREFs of sub_14083E27C @ 0x14083E27C
 * Callers:
 *     sub_1406D1560 @ 0x1406D1560 (sub_1406D1560.c)
 *     sub_14083E550 @ 0x14083E550 (sub_14083E550.c)
 *     ExpGenuinePolicyPostProcess @ 0x14083E920 (ExpGenuinePolicyPostProcess.c)
 *     sub_14083F540 @ 0x14083F540 (sub_14083F540.c)
 *     sub_14083F5C0 @ 0x14083F5C0 (sub_14083F5C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14083E27C(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
{
  __int64 result; // rax

  result = 0LL;
  *a4 = 4;
  if ( a3 < 4 )
    return 3221225507LL;
  if ( a1 )
    *a1 = 4;
  if ( a2 )
    *a2 = a5;
  return result;
}
