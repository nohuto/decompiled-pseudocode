/*
 * XREFs of sub_1400370EC @ 0x1400370EC
 * Callers:
 *     sub_140009400 @ 0x140009400 (sub_140009400.c)
 *     sub_140009934 @ 0x140009934 (sub_140009934.c)
 *     sub_140047DB4 @ 0x140047DB4 (sub_140047DB4.c)
 * Callees:
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_1400370EC(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( !v2 )
    sub_14004639C(2147500037LL, a2);
  return v2 + 16;
}
