/*
 * XREFs of MiIsVaRangeAvailable @ 0x14099F404
 * Callers:
 *     MiSelectDataMapAddress @ 0x140995DF0 (MiSelectDataMapAddress.c)
 *     MiSelectImageMapAddress @ 0x14099EAF8 (MiSelectImageMapAddress.c)
 *     MiReserveUserMemoryInsertVad @ 0x140A0146C (MiReserveUserMemoryInsertVad.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0228C (MiMapViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x140A02A08 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateEnclaveVad @ 0x140B6C330 (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiCheckForConflictingVadExistence @ 0x140479ED0 (MiCheckForConflictingVadExistence.c)
 *     MmIsBelowLowestUserAddress @ 0x14047D050 (MmIsBelowLowestUserAddress.c)
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
