/*
 * XREFs of MmCreateShadowMapping @ 0x140875970
 * Callers:
 *     KeAllocateProcessorProfileStructures @ 0x1405E4550 (KeAllocateProcessorProfileStructures.c)
 *     KiShadowKernelSectionByAddress @ 0x1405F725C (KiShadowKernelSectionByAddress.c)
 *     KiShadowProcessorAllocation @ 0x140BF8350 (KiShadowProcessorAllocation.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MiCleanupPageTablePages @ 0x1402A55AC (MiCleanupPageTablePages.c)
 *     MiInitializeColorBase @ 0x1402A5898 (MiInitializeColorBase.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     MiGetPageTablePages @ 0x140339E00 (MiGetPageTablePages.c)
 *     MiUnlinkPageChainHead @ 0x140365EF0 (MiUnlinkPageChainHead.c)
 *     MiSimpleInsertPage @ 0x1403C5100 (MiSimpleInsertPage.c)
 *     MiGetPteAddress @ 0x1404468C0 (MiGetPteAddress.c)
 *     MiInitializeLargePfnList @ 0x1404617F0 (MiInitializeLargePfnList.c)
 *     MiPageTablesNeeded @ 0x1406F562C (MiPageTablesNeeded.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MiMakeShadowPageTableRange @ 0x140875858 (MiMakeShadowPageTableRange.c)
 */

__int64 __fastcall MmCreateShadowMapping(unsigned __int64 PteAddress, __int64 a2)
{
  __int64 v2; // r12
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  __int64 *v7; // rax
  __int64 v8; // rax
  struct _KLOCK_ENTRIES *v9; // r9
  __int64 *v10; // rdx
  __int64 v11; // r8
  struct _KTHREAD *CurrentThread; // rdi
  PEPROCESS v13; // r14
  struct _KPROCESS *Process; // r13
  AutoBoost *v15; // rax
  void *v16; // rdx
  AutoBoost *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  bool v20; // zf
  __int128 v21; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h]
  _BYTE v23[72]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v24[24]; // [rsp+98h] [rbp-68h] BYREF
  ULONG *v25; // [rsp+B0h] [rbp-50h]
  int v26; // [rsp+C8h] [rbp-38h]
  int v27; // [rsp+D0h] [rbp-30h]
  _BYTE v28[40]; // [rsp+E8h] [rbp-18h] BYREF
  _OWORD v29[3]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v30[8]; // [rsp+140h] [rbp+40h] BYREF

  v2 = a2 - 1;
  v22 = 0LL;
  v21 = 0LL;
  memset(v29, 0, sizeof(v29));
  memset_0(v23, 0, 0xB8uLL);
  v4 = PteAddress + v2;
  MiInitializeLargePfnList((__int64)v23);
  v26 = 11;
  v25 = &MiSystemPartition;
  v27 = 1;
  MiInitializeColorBase(PteAddress, 0, (__int64)v28);
  v5 = MiPageTablesNeeded(PteAddress, v4);
  if ( (int)MiGetPageTablePages((__int64)v23, v5, 0, (__int64)&v21) < 0 )
    return 0LL;
  while ( 1 )
  {
    v7 = MiUnlinkPageChainHead((__int64)&v21);
    if ( !v7 )
      break;
    MiSimpleInsertPage((__int64)v24, (__int64)(v7 + 0x44000000000LL) / 48, 2);
  }
  do
  {
    PteAddress = MiGetPteAddress(PteAddress);
    v8 = MiGetPteAddress(v4);
    *v10 = v8;
    v4 = v8;
    *(v10 - 1) = PteAddress;
  }
  while ( v11 != 1 );
  CurrentThread = KeGetCurrentThread();
  v13 = PsInitialSystemProcess;
  Process = CurrentThread->ApcState.Process;
  if ( Process != PsInitialSystemProcess )
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v29);
  --CurrentThread->SpecialApcDisable;
  v15 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E2D930, 0LL, 0LL, v9);
  v17 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140E2D930, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E2D930, v15, (__int64)&stru_140E2D930);
  if ( v17 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v17, v16);
    else
      *((_BYTE *)v17 + 10) = 1;
  }
  MiMakeShadowPageTableRange(PteAddress, v4, (__int64)v30, 3, (__int64)v23);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E2D930, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E2D930.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140E2D930);
  v20 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v20 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v19, v18);
  if ( Process != v13 )
    KiUnstackDetachProcess((__int64)v29, 0);
  MiCleanupPageTablePages((__int64)v23);
  return 1LL;
}
