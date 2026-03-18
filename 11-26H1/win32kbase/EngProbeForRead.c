/*
 * XREFs of EngProbeForRead @ 0x1401438F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngProbeForRead(PVOID Address, SIZE_T Length, ULONG Alignment)
{
  ProbeForRead(Address, Length, Alignment);
}
