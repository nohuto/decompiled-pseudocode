/*
 * XREFs of MiHugeRangeIsZeroed @ 0x1406F10CC
 * Callers:
 *     MiPartitionTransferAllocateHugeRange @ 0x140882D00 (MiPartitionTransferAllocateHugeRange.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiHugeRangeIsZeroed(__int64 a1, int a2)
{
  return (*(_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8LL * (a2 & 0x3FFFFF)) & 0x10000LL) == 0;
}
