/*
 * XREFs of LOCK_ADDRESS_SPACE @ 0x1403155B4
 * Callers:
 *     MiBeginProcessClean @ 0x140313D2C (MiBeginProcessClean.c)
 *     MiLockAddressSpaceToo @ 0x140315064 (MiLockAddressSpaceToo.c)
 *     MiDeleteEmptyPageTables @ 0x140315248 (MiDeleteEmptyPageTables.c)
 *     MiDeleteFinalPageTables @ 0x1404CE05C (MiDeleteFinalPageTables.c)
 *     MiReleaseCommitForResetPages @ 0x1406E4EA0 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406E502C (MiReleaseOutSwappedProcessCommit.c)
 *     MiResizeAweBitMap @ 0x1408791F8 (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x1408793E0 (NtFreeUserPhysicalPages.c)
 *     MmCleanProcessAddressSpace @ 0x14095B2A4 (MmCleanProcessAddressSpace.c)
 *     MiReserveUserMemory @ 0x14095B5DC (MiReserveUserMemory.c)
 *     MiMapViewOfPhysicalSection @ 0x14095C9CC (MiMapViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x14095D148 (MiMapLockedPagesInUserSpace.c)
 *     MiLockVadRange @ 0x140960DAC (MiLockVadRange.c)
 *     MiInsertProcessVads @ 0x140962720 (MiInsertProcessVads.c)
 *     MiInitializeVadBitMap @ 0x140963088 (MiInitializeVadBitMap.c)
 *     MiInitializeVadCellBitMap @ 0x140963190 (MiInitializeVadCellBitMap.c)
 *     MiMapViewOfDataSection @ 0x1409C47B0 (MiMapViewOfDataSection.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1409C8F44 (MiAllocateFromSubAllocatedRegion.c)
 *     MiMapViewOfImageSection @ 0x1409CD37C (MiMapViewOfImageSection.c)
 *     MiAllocateEnclaveVad @ 0x140B693A0 (MiAllocateEnclaveVad.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

__int64 __fastcall LOCK_ADDRESS_SPACE(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rdi
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rbx
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  v4 = (unsigned __int64 *)(a2 + 600);
  v6 = (AutoBoost *)KeAbPreAcquire(a2 + 600, 0LL, 0LL, a4);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v6, (__int64)v4);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  result = *(_DWORD *)(a1 + 1448) | 1u;
  *(_DWORD *)(a1 + 1448) = result;
  return result;
}
