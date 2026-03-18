/*
 * XREFs of MiIsVaRangeAvailable @ 0x1409CE424
 * Callers:
 *     MiReserveUserMemoryInsertVad @ 0x14095BBAC (MiReserveUserMemoryInsertVad.c)
 *     MiMapViewOfPhysicalSection @ 0x14095C9CC (MiMapViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x14095D148 (MiMapLockedPagesInUserSpace.c)
 *     MiSelectDataMapAddress @ 0x1409C4E10 (MiSelectDataMapAddress.c)
 *     MiSelectImageMapAddress @ 0x1409CDB18 (MiSelectImageMapAddress.c)
 *     MiAllocateEnclaveVad @ 0x140B693A0 (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiCheckForConflictingVadExistence @ 0x140480590 (MiCheckForConflictingVadExistence.c)
 *     MmIsBelowLowestUserAddress @ 0x140483720 (MmIsBelowLowestUserAddress.c)
 */

_BOOL8 __fastcall MiIsVaRangeAvailable(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  __int64 v8; // r10

  return (!MmIsBelowLowestUserAddress(a2) || *(_QWORD *)(v8 + 1600))
      && v6 > v5
      && v5 >= v7
      && v6 <= a5
      && !(unsigned int)MiCheckForConflictingVadExistence(v8, v5, v6);
}
