/*
 * XREFs of sub_1400A4B30 @ 0x1400A4B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400A4B30(__int64 a1)
{
  return _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 - 424) + 164LL), 0, 0) & 1;
}
