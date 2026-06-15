/*
 * XREFs of sub_14005DD58 @ 0x14005DD58
 * Callers:
 *     sub_14005DC64 @ 0x14005DC64 (sub_14005DC64.c)
 *     sub_14005E33C @ 0x14005E33C (sub_14005E33C.c)
 *     sub_14005E544 @ 0x14005E544 (sub_14005E544.c)
 * Callees:
 *     sub_14005DCD0 @ 0x14005DCD0 (sub_14005DCD0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14005DD58(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_BYTE *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0LL;
  sub_14005DCD0(a1 + 72, a2);
  return a1;
}
