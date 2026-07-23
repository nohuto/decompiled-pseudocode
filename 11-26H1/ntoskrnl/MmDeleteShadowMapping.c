/*
 * XREFs of MmDeleteShadowMapping @ 0x14087BFD8
 * Callers:
 *     KeAllocateProcessorProfileStructures @ 0x1405E6EC0 (KeAllocateProcessorProfileStructures.c)
 *     KiUnshadowKernelSectionByAddress @ 0x1405F9C94 (KiUnshadowKernelSectionByAddress.c)
 *     KiShadowProcessorAllocation @ 0x140BFE350 (KiShadowProcessorAllocation.c)
 *     KiUnshadowProcessorAllocation @ 0x140BFE5DC (KiUnshadowProcessorAllocation.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MiVaToFlushVm @ 0x140283968 (MiVaToFlushVm.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14042A570 (MiReadWriteAnyLevelShadowPte.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MmDeleteShadowMapping(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 PteAddress; // rbp
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v7; // r15
  struct _KPROCESS *Process; // r12
  void *v9; // rax
  struct _KLOCK_ENTRIES *v10; // r9
  PEPROCESS v11; // r14
  AutoBoost *v12; // rax
  void *v13; // rdx
  signed __int8 v14; // cf
  AutoBoost *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 result; // rax
  _OWORD v20[3]; // [rsp+38h] [rbp-150h] BYREF
  _BYTE v21[208]; // [rsp+70h] [rbp-118h] BYREF

  memset(v20, 0, sizeof(v20));
  memset_0(v21, 0, 0xC8uLL);
  PteAddress = MiGetPteAddress(a1);
  v5 = MiGetPteAddress(a2 + a1 - 1);
  CurrentThread = KeGetCurrentThread();
  v7 = v5;
  Process = CurrentThread->ApcState.Process;
  v9 = MiVaToFlushVm(a1);
  MiInitializeTbFlushList((__int64)v21, (__int64)v9, 20, 8, 1);
  MiInsertTbFlushEntry((__int64)v21, a1 & 0xFFFFFFFFFFFFF000uLL, a2 >> 12, 0);
  v11 = PsInitialSystemProcess;
  if ( Process != PsInitialSystemProcess )
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v20);
  --CurrentThread->SpecialApcDisable;
  v12 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E2DAB0, 0LL, 0LL, v10);
  v14 = _interlockedbittestandset64(&stru_140E2DAB0.Header.Lock, 0LL);
  v15 = v12;
  if ( v14 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E2DAB0, v12, (__int64)&stru_140E2DAB0);
  if ( v15 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v15, v13);
    else
      *((_BYTE *)v15 + 10) = 1;
  }
  for ( ; PteAddress <= v7; PteAddress += 8LL )
    MiReadWriteAnyLevelShadowPte(PteAddress, 0, 1, *(ULONG_PTR *)&CLFS_LSN_NULL_EXT);
  MiFlushTbList((__int64)v21);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E2DAB0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E2DAB0.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140E2DAB0);
  result = 1LL;
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = (__int64)&CurrentThread->152;
    if ( *(_QWORD *)result != result )
      result = KiCheckForKernelApcDelivery(v17, v16);
  }
  if ( Process != v11 )
    return (__int64)KiUnstackDetachProcess((__int64)v20, 0);
  return result;
}
