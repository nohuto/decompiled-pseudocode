/*
 * XREFs of sub_140048290 @ 0x140048290
 * Callers:
 *     sub_1400373B0 @ 0x1400373B0 (sub_1400373B0.c)
 *     sub_14006EA98 @ 0x14006EA98 (sub_14006EA98.c)
 * Callees:
 *     sub_140009AA8 @ 0x140009AA8 (sub_140009AA8.c)
 */

__int64 __fastcall sub_140048290(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(*(_QWORD *)sub_140009AA8((_QWORD *)(a1 + 16), a2) + 32LL);
}
