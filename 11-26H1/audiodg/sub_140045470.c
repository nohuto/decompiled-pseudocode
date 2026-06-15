/*
 * XREFs of sub_140045470 @ 0x140045470
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140045470(__int64 a1)
{
  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 - 336) + 164LL), 0xFFFFFFFD);
  _InterlockedExchange((volatile __int32 *)(a1 - 248), 1);
  sub_1400B6010(a1);
  return 0LL;
}
