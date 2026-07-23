/*
 * XREFs of RtlpHpStackLoggingEnabled @ 0x1800809B0
 * Callers:
 *     RtlpHpFreeHeapSlow @ 0x180080730 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpReAllocateHeapSlow @ 0x180080A04 (RtlpHpReAllocateHeapSlow.c)
 *     RtlpHpAllocateHeapSlow @ 0x180096F60 (RtlpHpAllocateHeapSlow.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180144BD0 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlpHpStackLoggingEnabled(__int64 a1)
{
  return (dword_1801C68A8 & 1) != 0
      && (dword_1801C68A8 & 2) != 0
      && NtCurrentPeb()->ProcessHeap
      && a1 != qword_1801CA198[2 * (unsigned int)dword_18017B028[BYTE1(RtlpHpEnvHandle)]];
}
