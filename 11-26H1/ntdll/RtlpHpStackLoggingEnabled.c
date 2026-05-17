/*
 * XREFs of RtlpHpStackLoggingEnabled @ 0x1800895B0
 * Callers:
 *     RtlpHpFreeHeapSlow @ 0x180089330 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpAllocateHeapSlow @ 0x180097E10 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpReAllocateHeapSlow @ 0x1800B0E90 (RtlpHpReAllocateHeapSlow.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180144D20 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlpHpStackLoggingEnabled(__int64 a1)
{
  return (dword_1801C7858 & 1) != 0
      && (dword_1801C7858 & 2) != 0
      && NtCurrentPeb()->ProcessHeap
      && a1 != qword_1801CB148[2 * (unsigned int)dword_18017C068[BYTE1(RtlpHpEnvHandle)]];
}
