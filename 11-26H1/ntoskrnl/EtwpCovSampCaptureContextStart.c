/*
 * XREFs of EtwpCovSampCaptureContextStart @ 0x14083699C
 * Callers:
 *     EtwpCoverageSamplerStart @ 0x14083773C (EtwpCoverageSamplerStart.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     KeQueryMaximumProcessorCountEx @ 0x140275D20 (KeQueryMaximumProcessorCountEx.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     InitializeSListHead @ 0x140492D50 (InitializeSListHead.c)
 *     ExSaAllocate @ 0x140492F00 (ExSaAllocate.c)
 *     KeSetBasePriorityThread @ 0x14052B1A0 (KeSetBasePriorityThread.c)
 *     EtwpCovSampLookasideGrow @ 0x1406CCACC (EtwpCovSampLookasideGrow.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwSetInformationThread @ 0x140728160 (ZwSetInformationThread.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x14083702C (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x1408370C0 (EtwpCovSampLookasideInitialize.c)
 *     EtwpCovSampStackHashTableAlloc @ 0x1408371E0 (EtwpCovSampStackHashTableAlloc.c)
 *     EtwpCovSampStrideSamplerInitialize @ 0x14083727C (EtwpCovSampStrideSamplerInitialize.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThreadEx @ 0x140A78DE0 (PsCreateSystemThreadEx.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x140B600D8 (EtwpCovSampCaptureFreeLookasides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpCovSampCaptureContextStart(_DWORD *a1)
{
  struct _LIST_ENTRY *Blink; // rdi
  struct _LIST_ENTRY *Pool2; // rax
  int v4; // ebx
  struct _LIST_ENTRY *v5; // r15
  __int64 v6; // rdx
  struct _LIST_ENTRY *v7; // rax
  __int64 v8; // rax
  struct _KTHREAD *Flink; // rcx
  int v10; // ebx
  ULONG MaximumProcessorCount; // eax
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // r11
  unsigned int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // rax
  _QWORD *v18; // rbx
  int v19; // eax
  struct _LIST_ENTRY *v20; // r14
  PVOID Object; // [rsp+50h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-28h] BYREF
  ULONG v24; // [rsp+60h] [rbp-20h]
  _DWORD ThreadInformation[4]; // [rsp+68h] [rbp-18h] BYREF

  Blink = ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
  Handle = 0LL;
  if ( !ExpSysDbgLock.InGlobalUpdateVpThreadPriorityList )
  {
    Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(0x40uLL);
    Blink = Pool2;
    if ( !Pool2 )
    {
      v4 = -1073741670;
      goto LABEL_30;
    }
    memset_0(Pool2, 0, 0x540uLL);
    Blink->Blink = (struct _LIST_ENTRY *)-1LL;
    KeInitializeEvent((PRKEVENT)&Blink[65], NotificationEvent, 0);
    KeInitializeDpc((PRKDPC)&Blink[61], (PKDEFERRED_ROUTINE)EtwpCovSampCaptureRebalanceDpc, Blink);
    InitializeSListHead((PSLIST_HEADER)&Blink[67]);
    KeInitializeEvent((PRKEVENT)&Blink[69], NotificationEvent, 0);
    KeInitializeDpc((PRKDPC)&Blink[70].Blink, (PKDEFERRED_ROUTINE)EtwpCovSampCaptureQueueDpc, Blink);
    KeInitializeDpc((PRKDPC)&Blink[74].Blink, (PKDEFERRED_ROUTINE)EtwpCovSampCaptureCleanupDpc, Blink);
    KeInitializeEvent((PRKEVENT)&Blink[78].Blink, NotificationEvent, 0);
    HIDWORD(Blink[80].Blink) = (*a1 >> 11) & 1;
    ExpSysDbgLock.InGlobalUpdateVpThreadPriorityList = (unsigned __int64)Blink;
  }
  v5 = Blink + 59;
  Blink[59].Blink = Blink + 59;
  Blink[59].Flink = Blink + 59;
  Blink[60].Blink = Blink + 60;
  Blink[60].Flink = Blink + 60;
  EtwpCovSampLookasideControlInitialize(
    Blink,
    &Blink[40],
    EtwpCovSampCaptureAllocateApc,
    (unsigned int)(3 * a1[9]) >> 2,
    a1[9]);
  EtwpCovSampLookasideControlInitialize(
    Blink,
    &Blink[45],
    EtwpCovSampCaptureAllocateCaptureBuffer,
    (unsigned int)(3 * a1[8]) >> 2,
    a1[8]);
  if ( a1[19] )
  {
    EtwpCovSampStackHashTableAlloc(&Blink[82].Blink);
    EtwpCovSampStackHashTableAlloc(&Blink[83]);
    v7 = Blink[82].Blink;
    if ( !v7 || !Blink[83].Flink )
      goto LABEL_27;
    Blink[82].Flink = v7;
    Blink[83].Blink = (struct _LIST_ENTRY *)(unsigned int)ExGenRandom(0, v6);
  }
  if ( Blink->Blink != (struct _LIST_ENTRY *)-1LL )
    goto LABEL_12;
  v8 = ExSaAllocate(344, 0);
  if ( v8 == -1 )
  {
LABEL_27:
    v4 = -1073741670;
    goto LABEL_25;
  }
  Blink->Blink = (struct _LIST_ENTRY *)v8;
LABEL_12:
  Flink = (struct _KTHREAD *)Blink->Flink;
  if ( Blink->Flink )
    goto LABEL_15;
  v4 = PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, 0LL, 0LL, 0LL, EtwpCovSampCaptureWorkerThread, Blink, 0LL, 0LL);
  if ( v4 < 0 )
  {
LABEL_25:
    if ( Blink->Blink != (struct _LIST_ENTRY *)-1LL )
      EtwpCovSampCaptureFreeLookasides(Blink);
    goto LABEL_30;
  }
  Object = 0LL;
  ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
  Blink->Flink = (struct _LIST_ENTRY *)Object;
  ThreadInformation[0] = 1;
  ThreadInformation[1] = 1;
  ThreadInformation[2] = 1;
  ZwSetInformationThread(Handle, ThreadPowerThrottlingState, ThreadInformation, 0xCu);
  Flink = (struct _KTHREAD *)Blink->Flink;
LABEL_15:
  v10 = *a1 & 0x200;
  KeSetBasePriorityThread(Flink, (v10 != 0) - 1);
  LODWORD(Blink[81].Blink) = v10 != 0;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v12 = MaximumProcessorCount;
  v24 = MaximumProcessorCount;
  if ( MaximumProcessorCount )
  {
    v13 = 0LL;
    do
    {
      v14 = ((unsigned int)Blink->Blink >> 13) & 0x3FFFF;
      _BitScanReverse(&v15, v14);
      v16 = *(_QWORD *)((char *)ExSaPageGroupDescriptorArrayLock.SListFaultAddress + v13);
      v17 = ((unsigned __int64)Blink->Blink >> 4) & 0x1FF;
      LODWORD(Object) = 0;
      v18 = (_QWORD *)((*(_QWORD *)(*(_QWORD *)(v16 + 8LL * (v15 - 2)) + 8 * (v14 ^ (unsigned int)(1 << v15)) + 8)
                      + 8 * v17
                      + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      memset_0(v18 + 1, 0, 0x148uLL);
      *v18 = 0LL;
      EtwpCovSampLookasideInitialize(Blink, v18 + 2, &Blink[40]);
      EtwpCovSampLookasideInitialize(Blink, v18 + 10, &Blink[45]);
      EtwpCovSampStrideSamplerInitialize(v18 + 18, (unsigned int)a1[10], (unsigned int)a1[11]);
      EtwpCovSampStrideSamplerInitialize(v18 + 23, (unsigned int)a1[12], (unsigned int)a1[13]);
      EtwpCovSampStrideSamplerInitialize(v18 + 28, (unsigned int)a1[14], (unsigned int)a1[15]);
      EtwpCovSampStrideSamplerInitialize(v18 + 33, (unsigned int)a1[16], (unsigned int)a1[17]);
      v13 += 8LL;
      --v12;
    }
    while ( v12 );
    LODWORD(v12) = v24;
    v5 = Blink + 59;
  }
  EtwpCovSampLookasideControlInitialize(
    Blink,
    &Blink[50],
    EtwpCovSampCaptureAllocateSampleBuffer,
    (unsigned int)(3 * a1[7] * v12) >> 2,
    a1[7] * v12);
  EtwpCovSampLookasideInitialize(Blink, &Blink[55], &Blink[50]);
  v19 = MEMORY[0xFFFFF78000000320];
  LODWORD(Blink[66].Blink) = MEMORY[0xFFFFF78000000320];
  HIDWORD(Blink[66].Blink) = v19;
  LODWORD(Blink[80].Blink) = 0;
  LODWORD(Blink[81].Flink) = a1[18];
  HIDWORD(Blink[81].Flink) = a1[6];
  _InterlockedExchange((volatile __int32 *)&Blink[80], 1);
  v20 = v5->Flink;
  HIDWORD(Blink[80].Flink) = 0;
  while ( v20 != v5 )
  {
    _InterlockedExchange((volatile __int32 *)&v20[1].Blink, 1);
    HIDWORD(v20[1].Blink) = 0;
    while ( HIDWORD(v20[2].Flink) < LODWORD(v20[1].Flink[3].Blink) && HIDWORD(v20[2].Flink) < LODWORD(v20[2].Blink) )
    {
      v4 = EtwpCovSampLookasideGrow((__int64)Blink, (__int64)&v20[-1]);
      if ( v4 < 0 )
        goto LABEL_25;
    }
    v20 = v20->Flink;
  }
  v4 = 0;
LABEL_30:
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)v4;
}
