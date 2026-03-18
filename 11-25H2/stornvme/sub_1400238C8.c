/*
 * XREFs of sub_1400238C8 @ 0x1400238C8
 * Callers:
 *     sub_140019450 @ 0x140019450 (sub_140019450.c)
 * Callees:
 *     sub_1400237A8 @ 0x1400237A8 (sub_1400237A8.c)
 */

__int64 __fastcall sub_1400238C8(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax

  v1 = a1 + 4320;
  *(_OWORD *)(a1 + 4320) = 0LL;
  v3 = sub_1400237A8(a1);
  if ( !v3 )
    return 3238002691LL;
  if ( !v1 || v3 == -112 )
    return 3238002694LL;
  return StorPortExtendedFunction(38LL, a1, v1, v3 + 112);
}
