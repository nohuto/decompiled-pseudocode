/*
 * XREFs of LOCK_ADDRESS_SPACE @ 0x1403175E4
 * Callers:
 *     MiBeginProcessClean @ 0x140315D5C (MiBeginProcessClean.c)
 *     MiLockAddressSpaceToo @ 0x140317094 (MiLockAddressSpaceToo.c)
 *     MiDeleteEmptyPageTables @ 0x140317278 (MiDeleteEmptyPageTables.c)
 *     MiDeleteFinalPageTables @ 0x1404C7A8C (MiDeleteFinalPageTables.c)
 *     MiReleaseCommitForResetPages @ 0x1406E9B50 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406E9CDC (MiReleaseOutSwappedProcessCommit.c)
 *     MiResizeAweBitMap @ 0x14087F5D8 (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x14087F7C0 (NtFreeUserPhysicalPages.c)
 *     MiMapViewOfDataSection @ 0x140995790 (MiMapViewOfDataSection.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140999F24 (MiAllocateFromSubAllocatedRegion.c)
 *     MiMapViewOfImageSection @ 0x14099E35C (MiMapViewOfImageSection.c)
 *     MmCleanProcessAddressSpace @ 0x140A00B64 (MmCleanProcessAddressSpace.c)
 *     MiReserveUserMemory @ 0x140A00E9C (MiReserveUserMemory.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0228C (MiMapViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x140A02A08 (MiMapLockedPagesInUserSpace.c)
 *     MiLockVadRange @ 0x140A0666C (MiLockVadRange.c)
 *     MiInsertProcessVads @ 0x140A085A8 (MiInsertProcessVads.c)
 *     MiInitializeVadBitMap @ 0x140A08F10 (MiInitializeVadBitMap.c)
 *     MiInitializeVadCellBitMap @ 0x140A09018 (MiInitializeVadCellBitMap.c)
 *     MiAllocateEnclaveVad @ 0x140B6C330 (MiAllocateEnclaveVad.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
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
