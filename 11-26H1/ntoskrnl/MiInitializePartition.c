/*
 * XREFs of MiInitializePartition @ 0x14086F740
 * Callers:
 *     MmCreatePartition @ 0x14087015C (MmCreatePartition.c)
 *     MiCreatePfnDatabase @ 0x140CF8B98 (MiCreatePfnDatabase.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     KeInitializeTimer @ 0x14047D670 (KeInitializeTimer.c)
 *     MiInitializePfnListHead @ 0x140481F18 (MiInitializePfnListHead.c)
 *     InitializeSListHead @ 0x140492D50 (InitializeSListHead.c)
 *     MiInitializeNuma @ 0x1406E7EDC (MiInitializeNuma.c)
 *     MiProtectPageListLocks @ 0x1406F5688 (MiProtectPageListLocks.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1406FC6DC (MiInitializeWorkingSetManagerParameters.c)
 *     MiPopulateFreeKernelShadowStackCacheEntries @ 0x1407040A4 (MiPopulateFreeKernelShadowStackCacheEntries.c)
 *     MiInitializeCombining @ 0x140709638 (MiInitializeCombining.c)
 *     MiInitializeCommitment @ 0x14070A674 (MiInitializeCommitment.c)
 *     MiInitializeSections @ 0x14086B0B8 (MiInitializeSections.c)
 *     MiInitializePartitionFreeZeroLists @ 0x14086FDC8 (MiInitializePartitionFreeZeroLists.c)
 */

void __fastcall MiInitializePartition(ULONG *DeferredContext, __int16 a2)
{
  unsigned int v2; // eax
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // r12
  _QWORD *v7; // rdi
  struct _KEVENT *v8; // r15
  _QWORD *v9; // rdi
  char *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // r11
  int v16; // edx
  __int64 v17; // rax
  _DWORD *v18; // rcx
  __int64 v19; // rdi
  unsigned __int64 v20; // rax
  signed int v21; // eax
  int v22; // edx
  char *v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rcx
  struct _KEVENT *v26; // rdi
  char *v27; // r15
  __int64 v28; // rcx
  __m128i si128; // xmm0
  struct _KEVENT *v30; // rdi
  _QWORD *v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
  __int64 v35; // rsi
  struct _KEVENT *v36; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  struct _KLOCK_ENTRIES *v38; // r9
  AutoBoost *v39; // rax
  void *v40; // rdx
  signed __int8 v41; // cf
  AutoBoost *v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx

  v2 = 0;
  DeferredContext[2] = 305535296;
  *(_WORD *)DeferredContext = a2;
  v4 = 16LL;
  if ( DeferredContext == &MiSystemPartition )
  {
    qword_140E2EC80 = 0LL;
    qword_140E2ECA8 = (__int64)&qword_140E2ECA0;
    qword_140E2ECA0 = &qword_140E2ECA0;
    qword_140E2ECE0 = 0LL;
  }
  else
  {
    v2 = 16;
  }
  _InterlockedOr((volatile signed __int32 *)DeferredContext + 1, v2);
  KeInitializeEvent((PRKEVENT)(DeferredContext + 22), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(DeferredContext + 28), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(DeferredContext + 34), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(DeferredContext + 40), SynchronizationEvent, 0);
  v5 = 3LL;
  v6 = 3LL;
  v7 = DeferredContext + 4222;
  v8 = (struct _KEVENT *)(DeferredContext + 4216);
  do
  {
    KeInitializeEvent(v8, NotificationEvent, 0);
    v8 += 2;
    *v7 = -1LL;
    v7 += 6;
    --v6;
  }
  while ( v6 );
  MiInitializePartitionFreeZeroLists(DeferredContext);
  MiInitializePfnListHead((__int64)(DeferredContext + 816), 0);
  MiInitializePfnListHead((__int64)(DeferredContext + 848), 1);
  MiInitializePfnListHead((__int64)(DeferredContext + 880), 2);
  v9 = DeferredContext + 3056;
  v10 = (char *)(DeferredContext + 912);
  do
  {
    MiInitializePfnListHead((__int64)v10, 2);
    v17 = (unsigned int)(v16 + 62);
    do
    {
      *(v9 - 512) = -1LL;
      *v9++ = -1LL;
      --v17;
    }
    while ( v17 );
    v10 = (char *)(v11 + 88);
  }
  while ( v12 != 1 );
  *((_QWORD *)DeferredContext + 940) = v13;
  *((_QWORD *)DeferredContext + 941) = v14;
  *((_QWORD *)DeferredContext + 942) = v15;
  *((_QWORD *)DeferredContext + 2106) = DeferredContext + 4210;
  *((_QWORD *)DeferredContext + 2105) = DeferredContext + 4210;
  if ( KeNumberNodes )
  {
    v18 = (_DWORD *)(*((_QWORD *)DeferredContext + 2) + 14128LL);
    v19 = (unsigned __int16)KeNumberNodes;
    do
    {
      v20 = __rdtsc();
      *v18 = (((unsigned __int64)HIDWORD(v20) << 32) | (unsigned int)v20) >> 4;
      v18 += 14080;
      --v19;
    }
    while ( v19 );
  }
  v21 = (unsigned int)(*((_QWORD *)DeferredContext + 2786) / 0x64uLL)
      / (dword_140E2D90C
       * (unsigned int)(unsigned __int16)KeNumberNodes);
  if ( v21 >= 4 )
  {
    if ( (unsigned int)v21 > 0x10 )
      v21 = 16;
  }
  else
  {
    v21 = 4;
  }
  DeferredContext[4342] = v21;
  KeInitializeEvent((PRKEVENT)(DeferredContext + 4336), NotificationEvent, 0);
  MiInitializePfnListHead((__int64)(DeferredContext + 5808), 3);
  MiInitializePfnListHead((__int64)(DeferredContext + 5840), 4);
  MiInitializePfnListHead((__int64)(DeferredContext + 1088), 3);
  MiInitializePfnListHead((__int64)(DeferredContext + 1120), v22);
  v23 = (char *)(DeferredContext + 1152);
  v24 = 16LL;
  do
  {
    MiInitializePfnListHead((__int64)v23, 3);
    v23 = (char *)(v25 + 88);
    --v24;
  }
  while ( v24 );
  v26 = (struct _KEVENT *)(DeferredContext + 1924);
  v27 = (char *)(DeferredContext + 1504);
  do
  {
    MiInitializePfnListHead((__int64)v27, 3);
    KeInitializeEvent(v26, SynchronizationEvent, 0);
    v27 += 88;
    ++v26;
    --v4;
  }
  while ( v4 );
  MiInitializePfnListHead((__int64)(DeferredContext + 1856), 5);
  *((_QWORD *)DeferredContext + 945) = v28;
  *((_QWORD *)DeferredContext + 943) = DeferredContext + 5808;
  *((_QWORD *)DeferredContext + 944) = DeferredContext + 5840;
  *((_QWORD *)DeferredContext + 2134) = -1LL;
  MiProtectPageListLocks((__int64)DeferredContext);
  si128 = _mm_load_si128((const __m128i *)&_xmm_fffffffefffffffefffffffefffffffe);
  v30 = (struct _KEVENT *)(DeferredContext + 4146);
  *((__m128i *)DeferredContext + 1028) = si128;
  *((__m128i *)DeferredContext + 1029) = si128;
  do
  {
    KeInitializeEvent(v30, NotificationEvent, 1u);
    v30 = (struct _KEVENT *)((char *)v30 + 32);
    --v5;
  }
  while ( v5 );
  MiPopulateFreeKernelShadowStackCacheEntries((_SLIST_HEADER *)DeferredContext);
  v31 = DeferredContext + 722;
  *((_QWORD *)DeferredContext + 33) = 0LL;
  v32 = 9LL;
  do
  {
    *v31 = -1LL;
    v31 += 4;
    --v32;
  }
  while ( v32 );
  KeInitializeEvent((PRKEVENT)(DeferredContext + 70), NotificationEvent, 0);
  memset64(DeferredContext + 80, (unsigned __int64)(DeferredContext + 70), 0xBuLL);
  MiInitializeWorkingSetManagerParameters((__int64)DeferredContext);
  KeInitializeEvent((PRKEVENT)(DeferredContext + 230), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)DeferredContext + 36, SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)DeferredContext + 37, NotificationEvent, 0);
  DeferredContext[212] = 20;
  *((_QWORD *)DeferredContext + 135) = 0LL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)DeferredContext + 135);
  _InterlockedExchange64((volatile __int64 *)DeferredContext + 135, 1LL);
  KeInitializeEvent((PRKEVENT)(DeferredContext + 206), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)DeferredContext + 42, NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)DeferredContext + 48, NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(DeferredContext + 194), SynchronizationEvent, 0);
  *((_QWORD *)DeferredContext + 96) = DeferredContext + 190;
  *((_QWORD *)DeferredContext + 95) = DeferredContext + 190;
  KeInitializeEvent((PRKEVENT)(DeferredContext + 262), SynchronizationEvent, 0);
  *((_QWORD *)DeferredContext + 130) = DeferredContext + 258;
  *((_QWORD *)DeferredContext + 129) = DeferredContext + 258;
  if ( DeferredContext == &MiSystemPartition )
  {
    v33 = qword_140FBF250 << 8;
    *((_QWORD *)DeferredContext + 2126) = qword_140FBF250 << 8;
    v34 = qword_140FBF258 << 8;
    *((_QWORD *)DeferredContext + 2127) = qword_140FBF258 << 8;
    if ( v34 < v33 && v34 )
      *((_QWORD *)DeferredContext + 2127) = v33;
  }
  else
  {
    MiInitializeCommitment((__int64)DeferredContext);
  }
  MiInitializeNuma((__int64)DeferredContext);
  *((_QWORD *)DeferredContext + 160) = 0LL;
  *((_QWORD *)DeferredContext + 157) = MiContractWsSwapPageFileWorker;
  *((_QWORD *)DeferredContext + 158) = DeferredContext;
  *((_QWORD *)DeferredContext + 155) = 0LL;
  DeferredContext[325] = -1;
  KeInitializeEvent((PRKEVENT)(DeferredContext + 356), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)DeferredContext + 62, NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(DeferredContext + 362), NotificationEvent, 0);
  InitializeSListHead((PSLIST_HEADER)DeferredContext + 92);
  KeInitializeTimer((PKTIMER)(DeferredContext + 334));
  MiInitializeSections((__int64)DeferredContext);
  MiInitializeCombining((__int64)DeferredContext, (_QWORD *)DeferredContext + 2207);
  v35 = 2LL;
  *((_QWORD *)DeferredContext + 2676) = DeferredContext + 5350;
  v36 = (struct _KEVENT *)(DeferredContext + 5522);
  *((_QWORD *)DeferredContext + 2675) = DeferredContext + 5350;
  *((_QWORD *)DeferredContext + 2678) = DeferredContext + 5354;
  *((_QWORD *)DeferredContext + 2677) = DeferredContext + 5354;
  *((_QWORD *)DeferredContext + 2759) = 0LL;
  *((_QWORD *)DeferredContext + 2756) = DeferredContext + 5514;
  DeferredContext[5510] = 64;
  do
  {
    KeInitializeEvent(v36, NotificationEvent, 0);
    v36 = (struct _KEVENT *)((char *)v36 + 32);
    --v35;
  }
  while ( v35 );
  *((_QWORD *)DeferredContext + 2769) = 0LL;
  DeferredContext[4540] = 5;
  *((_QWORD *)DeferredContext + 2267) = MiEmptyAccessLogs;
  *((_QWORD *)DeferredContext + 2268) = DeferredContext;
  *((_QWORD *)DeferredContext + 2265) = 0LL;
  KeInitializeDpc((PRKDPC)DeferredContext + 284, (PKDEFERRED_ROUTINE)MiAllocatePfnRepurposeLogDispatch, DeferredContext);
  *((_QWORD *)DeferredContext + 265) = 1LL;
  *((_QWORD *)DeferredContext + 266) = 1LL;
  *((_QWORD *)DeferredContext + 267) = 1LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v39 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E2ED08, 0LL, 0LL, v38);
  v41 = _interlockedbittestandset64(&stru_140E2ED08.Header.Lock, 0LL);
  v42 = v39;
  if ( v41 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E2ED08, v39, (__int64)&stru_140E2ED08);
  if ( v42 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v42, v40);
    else
      *((_BYTE *)v42 + 10) = 1;
  }
  _InterlockedOr((volatile signed __int32 *)DeferredContext + 1, 2u);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E2ED08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E2ED08.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140E2ED08);
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery(v44, v43);
  }
}
