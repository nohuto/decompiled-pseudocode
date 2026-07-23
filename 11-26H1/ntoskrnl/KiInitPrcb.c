/*
 * XREFs of KiInitPrcb @ 0x140BF9C24
 * Callers:
 *     KiInitializeBootStructures @ 0x140BFB890 (KiInitializeBootStructures.c)
 * Callees:
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     InitializeSListHead @ 0x140492D50 (InitializeSListHead.c)
 *     KiInitializeSharedReadyQueue @ 0x1405EE010 (KiInitializeSharedReadyQueue.c)
 *     KiInitializeSoftwareInterruptBatch @ 0x1405F411C (KiInitializeSoftwareInterruptBatch.c)
 *     KeAbInitializeDpc @ 0x1405F9E20 (KeAbInitializeDpc.c)
 *     KiIntSteerInitPrcb @ 0x1405FA3E0 (KiIntSteerInitPrcb.c)
 *     KiInitializeBugcheckRecoveryProcessor @ 0x1405FCDCC (KiInitializeBugcheckRecoveryProcessor.c)
 *     KiInitializeDpcList @ 0x1405FDA18 (KiInitializeDpcList.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall KiInitPrcb(__int64 a1, int a2)
{
  __int64 *v2; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  __int16 v7; // di
  __int64 v8; // rcx
  __int64 v9; // rdi
  char *v10; // rbx
  __int64 v11; // rsi
  void *result; // rax

  v2 = (__int64 *)(a1 + 33856);
  *(_DWORD *)(a1 + 33752) = 0;
  *(_DWORD *)(a1 + 33760) = 1;
  *(_DWORD *)(a1 + 34420) = 0;
  *(_QWORD *)(a1 + 34424) = 0LL;
  *(_QWORD *)(a1 + 11528) = 0LL;
  v5 = 32LL;
  v6 = a1 + 33856;
  do
  {
    v2[1] = v6;
    *v2 = v6;
    v6 += 16LL;
    v2 += 2;
    --v5;
  }
  while ( v5 );
  KiInitializeSharedReadyQueue(*(_QWORD *)(a1 + 36488), a1);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 36488) + 576LL;
  KiInitializeDpcList((_QWORD *)(a1 + 14400));
  *(_QWORD *)(a1 + 14416) = 0LL;
  *(_QWORD *)(a1 + 14424) = 0LL;
  *(_DWORD *)(a1 + 14524) = 0;
  *(_BYTE *)(a1 + 14522) = 0;
  *(_DWORD *)(a1 + 14504) = KiMaximumDpcQueueDepth;
  *(_DWORD *)(a1 + 14512) = KiMinimumDpcRate;
  *(_DWORD *)(a1 + 34388) = KiAdjustDpcThreshold;
  KeInitializeDpc((PRKDPC)(a1 + 33632), (PKDEFERRED_ROUTINE)KiDpcWatchdog, 0LL);
  v7 = a2 + 2048;
  if ( !*(_QWORD *)(a1 + 33688) )
    *(_WORD *)(a1 + 33634) = v7;
  *(_BYTE *)(a1 + 33633) = 2;
  KeInitializeDpc((PRKDPC)(a1 + 41424), (PKDEFERRED_ROUTINE)KiSlistRollbackDpc, 0LL);
  if ( !*(_QWORD *)(a1 + 41480) )
    *(_WORD *)(a1 + 41426) = v7;
  KiInitializeBugcheckRecoveryProcessor(a1);
  *(_QWORD *)(a1 + 14376) = -1LL;
  *(_QWORD *)(a1 + 33736) = a1 + 33728;
  *(_QWORD *)(a1 + 33728) = a1 + 33728;
  InitializeSListHead((PSLIST_HEADER)(a1 + 14336));
  KeGetPcr()->NtTib.ArbitraryUserPointer = (void *)(a1 + 1840);
  *(_QWORD *)(a1 + 2072) = &CcBcbSpinLock;
  *(_QWORD *)(a1 + 2064) = 0LL;
  *(_QWORD *)(a1 + 1928) = &CcMasterSpinLock;
  *(_QWORD *)(a1 + 1912) = &CcVacbSpinLock;
  *(_QWORD *)(a1 + 1944) = &NonPagedPoolLock;
  *(_QWORD *)(a1 + 1960) = &IopCancelSpinLock;
  *(_QWORD *)(a1 + 1992) = &IopVpbSpinLock;
  *(_QWORD *)(a1 + 2008) = &IopDatabaseLock;
  *(_QWORD *)(a1 + 2024) = &IopCompletionLock;
  *(_QWORD *)(a1 + 2040) = &NtfsStructLock;
  *(_QWORD *)(a1 + 2056) = &AfdWorkQueueSpinLock;
  *(_QWORD *)(a1 + 1920) = 0LL;
  *(_QWORD *)(a1 + 1904) = 0LL;
  *(_QWORD *)(a1 + 1936) = 0LL;
  *(_QWORD *)(a1 + 1952) = 0LL;
  *(_QWORD *)(a1 + 1984) = 0LL;
  *(_QWORD *)(a1 + 2000) = 0LL;
  *(_QWORD *)(a1 + 2016) = 0LL;
  *(_QWORD *)(a1 + 2032) = 0LL;
  *(_QWORD *)(a1 + 2048) = 0LL;
  *(_QWORD *)(a1 + 2096) = 0LL;
  *(_QWORD *)(a1 + 2104) = 0LL;
  *(_DWORD *)(a1 + 36896) = (3 * (_WORD)a2) & 0x3FF;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 33744) = 0LL;
  *(_DWORD *)(a1 + 33696) = 1;
  KeInitializeDpc((PRKDPC)(a1 + 37160), (PKDEFERRED_ROUTINE)KiEntropyDpcRoutine, (PVOID)(a1 + 36896));
  SymCryptEntropyAccumulatorInit0(a1 + 37376);
  if ( a2 )
  {
    SymCryptEntropyAccumulatorInit1(a1 + 37376, 0LL);
  }
  else
  {
    KiClockPollCycle = KiClockKeepAliveCycle;
    KiReverseStallIpiLock = 0LL;
    CcBcbSpinLock = 0LL;
    CcMasterSpinLock = 0LL;
    CcVacbSpinLock = 0LL;
    IopCancelSpinLock = 0LL;
    IopCompletionLock = 0LL;
    IopDatabaseLock = 0LL;
    IopVpbSpinLock = 0LL;
    NonPagedPoolLock = 0LL;
    NtfsStructLock = 0LL;
    AfdWorkQueueSpinLock = 0LL;
    KiDpcCorralLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)2097184;
    memset_0(&KiDpcCorralLock.SListFaultAddress, 0, 0x100uLL);
  }
  KiIntSteerInitPrcb(a1);
  KeAbInitializeDpc(v8, a2);
  KiInitializeSoftwareInterruptBatch((_DWORD *)(a1 + 13784));
  *(_DWORD *)(a1 + 35796) = 0;
  v9 = a1 + 44802;
  v10 = (char *)(a1 + 44808);
  v11 = 5LL;
  do
  {
    *(_QWORD *)(v9 - 2) = 2097153LL;
    result = memset_0(v10, 0, 0x100uLL);
    v10 += 264;
    v9 += 264LL;
    --v11;
  }
  while ( v11 );
  return result;
}
