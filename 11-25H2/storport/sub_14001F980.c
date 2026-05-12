/*
 * XREFs of sub_14001F980 @ 0x14001F980
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1400212C0 @ 0x1400212C0 (sub_1400212C0.c)
 */

__int64 __fastcall sub_14001F980(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al

  v4 = sub_1400212C0(a1, a2, a3);
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 4960) + 80LL));
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 4960) + 88LL));
  return v4 == 0 ? 0xC100000C : 0;
}
