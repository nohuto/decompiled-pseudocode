/*
 * XREFs of MiHugeRangeIsZeroed @ 0x1406EC42C
 * Callers:
 *     MiPartitionTransferAllocateHugeRange @ 0x14087C900 (MiPartitionTransferAllocateHugeRange.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiHugeRangeIsZeroed(__int64 a1, int a2)
{
  return (*(_QWORD *)(*(_QWORD *)((char *)&stru_140E2EB88.116 + 4) + 8LL * (a2 & 0x3FFFFF)) & 0x10000LL) == 0;
}
