/*
 * XREFs of IopUnmaskInterrupt @ 0x140430ACC
 * Callers:
 *     IoReportInterruptActive @ 0x140430A20 (IoReportInterruptActive.c)
 * Callees:
 *     KeUnmaskInterrupt @ 0x140430AF4 (KeUnmaskInterrupt.c)
 */

__int64 __fastcall IopUnmaskInterrupt(__int64 a1)
{
  return KeUnmaskInterrupt(a1 + 392, __popcnt(*(_QWORD *)(a1 - 104)), a1 - 96);
}
