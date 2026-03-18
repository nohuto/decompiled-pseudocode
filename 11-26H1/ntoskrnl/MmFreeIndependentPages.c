/*
 * XREFs of MmFreeIndependentPages @ 0x140308D40
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x140343D08 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x1404E4914 (IopLiveDumpFreeDumpBuffers.c)
 *     HvlStartBootLogicalProcessors @ 0x1405B9968 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x1405C0B08 (HvlpInitializeHvCrashdump.c)
 *     IopLiveDumpReleaseResources @ 0x1405D164C (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x1405D304C (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     KeAllocateProcessorProfileStructures @ 0x1405E4550 (KeAllocateProcessorProfileStructures.c)
 *     KiFreeProcessorStacks @ 0x1405EB2E0 (KiFreeProcessorStacks.c)
 *     KiFreeProcessorStateInitializationParameters @ 0x1405EB404 (KiFreeProcessorStateInitializationParameters.c)
 *     ExDeletePoolTagTable @ 0x1406CBB38 (ExDeletePoolTagTable.c)
 *     HvlDeleteProcessor @ 0x140791814 (HvlDeleteProcessor.c)
 *     MmAllocateIsrStack @ 0x140875DEC (MmAllocateIsrStack.c)
 *     MmFreeIsrStack @ 0x140875EE8 (MmFreeIsrStack.c)
 *     HvpFreeBin @ 0x1408B78AC (HvpFreeBin.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 *     MiBadShareCount @ 0x1402DC710 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402DC770 (MiPfnShareCountIsZero.c)
 *     MiDecreaseUsedPtesInPfn @ 0x140309000 (MiDecreaseUsedPtesInPfn.c)
 *     MiLockAndDecrementShareCount @ 0x1403091DC (MiLockAndDecrementShareCount.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x140309350 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     MiReturnResident @ 0x14036E2C0 (MiReturnResident.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MmFreeIndependentPages(unsigned __int64 a1, unsigned __int64 a2)
{
  _BOOL8 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r13
  unsigned __int64 *v6; // rsi
  unsigned __int8 CurrentIrql; // r14
  __int64 v8; // r15
  unsigned __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // rcx
  int IsPfnFromChargedSlabAllocation; // ebx
  ULONG_PTR v13; // r9
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 result; // rax
  int v19; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+10h]
  unsigned __int64 *v21; // [rsp+C0h] [rbp+18h]
  unsigned __int64 *v22; // [rsp+C8h] [rbp+20h]

  v2 = (a2 & 0xFFF) != 0;
  v3 = a2 >> 12;
  v4 = v2 + v3;
  v5 = v2 + v3;
  v6 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v20 = 0LL;
  v22 = v6;
  v21 = &v6[v2 + v3];
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, v3);
  }
  v8 = 0LL;
  v9 = v4;
  do
  {
    v10 = 48 * (*(_QWORD *)(48 * ((*v6 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 40) & 0xFFFFFFFFFFLL)
        - 0x220000000000LL;
    v11 = 48 * ((*v6 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    *v6 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    IsPfnFromChargedSlabAllocation = MiIsPfnFromChargedSlabAllocation(v11);
    v14 = MiLockAndDecrementShareCount(v13);
    if ( IsPfnFromChargedSlabAllocation )
    {
      --v5;
      --v9;
    }
    else if ( v14 == 3 )
    {
      ++v8;
    }
    v19 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v19);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v10 + 34) & 7) != 6 )
      MiBadShareCount(v10);
    v15 = *(_QWORD *)(v10 + 24);
    *(_QWORD *)(v10 + 24) = ((v15 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ (v15 ^ ((v15 & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0xC000000000000000uLL;
    if ( (v15 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      MiPfnShareCountIsZero(v10, 0LL);
    MiDecreaseUsedPtesInPfn(v10, 1uLL);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (++v20 & 0x3F) == 0 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      v17 = KeGetCurrentIrql();
      if ( (_BYTE)v17 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v16) = 2;
        KiRaiseIrqlProcessIrqlFlags(v17, v16);
      }
    }
    ++v6;
  }
  while ( v6 < v21 );
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  MiReleasePtes((__int64)&stru_140E36558.WaitBlockList, v22, v4);
  result = qword_140E3D858;
  if ( qword_140E3D858 )
  {
    MiReturnCommit(&MiSystemPartition, v9 - v8, 0LL);
    result = MiReturnResident(&MiSystemPartition, v5);
    _InterlockedAdd64((volatile signed __int64 *)&stru_140E36558.Timer.Processor, -(__int64)v9);
  }
  return result;
}
