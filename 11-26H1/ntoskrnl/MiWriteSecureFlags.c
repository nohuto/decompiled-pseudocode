/*
 * XREFs of MiWriteSecureFlags @ 0x1404C73A4
 * Callers:
 *     MiInitializeHugeIoRanges @ 0x14086E0C0 (MiInitializeHugeIoRanges.c)
 *     MmAdjustSecuredVirtualMemorySize @ 0x14087103C (MmAdjustSecuredVirtualMemorySize.c)
 *     MiInitializeDataVad @ 0x140996B10 (MiInitializeDataVad.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14099B400 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAddSecureEntry @ 0x140A03278 (MiAddSecureEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall MiWriteSecureFlags(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
}
