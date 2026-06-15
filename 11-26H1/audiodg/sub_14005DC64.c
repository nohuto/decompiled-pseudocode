/*
 * XREFs of sub_14005DC64 @ 0x14005DC64
 * Callers:
 *     sub_14005E264 @ 0x14005E264 (sub_14005E264.c)
 * Callees:
 *     sub_14005DD58 @ 0x14005DD58 (sub_14005DD58.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14005DC64(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = off_1400BC1D0;
  sub_14005DD58(a1 + 24);
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 24) = off_1400BC1B0;
  sub_1400B6010(qword_1400E8490);
  return a1;
}
