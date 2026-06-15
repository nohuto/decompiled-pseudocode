/*
 * XREFs of sub_1400AD170 @ 0x1400AD170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

double __fastcall sub_1400AD170(__int64 a1)
{
  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 - 8) + 1312LL) + 64LL), 0xFFFFFFF7);
  _InterlockedExchange((volatile __int32 *)(a1 - 1216), 1);
  return sub_1400B6010(a1);
}
