/*
 * XREFs of IopMaskInterrupt @ 0x140424338
 * Callers:
 *     IoReportInterruptInactive @ 0x140423850 (IoReportInterruptInactive.c)
 * Callees:
 *     KeMaskInterrupt @ 0x140424930 (KeMaskInterrupt.c)
 */

__int64 __fastcall IopMaskInterrupt(__int64 a1)
{
  return KeMaskInterrupt(a1 + 392, __popcnt(*(_QWORD *)(a1 - 104)), a1 - 96, a1 + 320);
}
