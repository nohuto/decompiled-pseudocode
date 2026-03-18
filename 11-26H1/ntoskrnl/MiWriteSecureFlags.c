/*
 * XREFs of MiWriteSecureFlags @ 0x1404CD974
 * Callers:
 *     MiInitializeHugeIoRanges @ 0x140867CE0 (MiInitializeHugeIoRanges.c)
 *     MmAdjustSecuredVirtualMemorySize @ 0x14086AC5C (MmAdjustSecuredVirtualMemorySize.c)
 *     MiAddSecureEntry @ 0x14095D9B8 (MiAddSecureEntry.c)
 *     MiInitializeDataVad @ 0x1409C5B30 (MiInitializeDataVad.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1409CA420 (MiAllocateNewSubAllocatedRegion.c)
 * Callees:
 *     <none>
 */

void __fastcall MiWriteSecureFlags(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
}
