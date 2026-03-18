/*
 * XREFs of EtwpCovSampCaptureContextStart @ 0x14083075C
 * Callers:
 *     EtwpCoverageSamplerStart @ 0x1408314FC (EtwpCoverageSamplerStart.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402767B0 (KeQueryMaximumProcessorCountEx.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     KeInitializeDpc @ 0x140481A50 (KeInitializeDpc.c)
 *     InitializeSListHead @ 0x140499200 (InitializeSListHead.c)
 *     ExSaAllocate @ 0x1404993B0 (ExSaAllocate.c)
 *     KeSetBasePriorityThread @ 0x140528B30 (KeSetBasePriorityThread.c)
 *     EtwpCovSampLookasideGrow @ 0x1406C8AEC (EtwpCovSampLookasideGrow.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwSetInformationThread @ 0x140723590 (ZwSetInformationThread.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x140830DEC (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x140830E80 (EtwpCovSampLookasideInitialize.c)
 *     EtwpCovSampStackHashTableAlloc @ 0x140830FA0 (EtwpCovSampStackHashTableAlloc.c)
 *     EtwpCovSampStrideSamplerInitialize @ 0x14083103C (EtwpCovSampStrideSamplerInitialize.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x140A03170 (PsCreateSystemThreadEx.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x140B5CF58 (EtwpCovSampCaptureFreeLookasides.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpCovSampCaptureContextStart(_DWORD *a1)
{
  PVOID *v1; // rdi
  PVOID *Pool2; // rax
  int v4; // ebx
  volatile __int32 **v5; // r15
  __int64 v6; // rdx
  PVOID v7; // rax
  __int64 v8; // rax
  struct _KTHREAD *v9; // rcx
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
  volatile __int32 *v20; // r14
  PVOID Object; // [rsp+50h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-28h] BYREF
  ULONG v24; // [rsp+60h] [rbp-20h]
  _DWORD ThreadInformation[4]; // [rsp+68h] [rbp-18h] BYREF

  v1 = (PVOID *)ExpSysDbgLock.TracingPrivate[0];
  Handle = 0LL;
  if ( !ExpSysDbgLock.TracingPrivate[0] )
  {
    Pool2 = (PVOID *)ExAllocatePool2(0x40uLL);
    v1 = Pool2;
    if ( !Pool2 )
    {
      v4 = -1073741670;
      goto LABEL_30;
    }
    memset_0(Pool2, 0, 0x540uLL);
    v1[1] = (PVOID)-1LL;
    KeInitializeEvent((PRKEVENT)(v1 + 130), NotificationEvent, 0);
    KeInitializeDpc((PRKDPC)(v1 + 122), (PKDEFERRED_ROUTINE)EtwpCovSampCaptureRebalanceDpc, v1);
    InitializeSListHead((PSLIST_HEADER)v1 + 67);
    KeInitializeEvent((PRKEVENT)v1 + 46, NotificationEvent, 0);
    KeInitializeDpc((PRKDPC)(v1 + 141), (PKDEFERRED_ROUTINE)EtwpCovSampCaptureQueueDpc, v1);
    KeInitializeDpc((PRKDPC)(v1 + 149), (PKDEFERRED_ROUTINE)EtwpCovSampCaptureCleanupDpc, v1);
    KeInitializeEvent((PRKEVENT)(v1 + 157), NotificationEvent, 0);
    *((_DWORD *)v1 + 323) = (*a1 >> 11) & 1;
    ExpSysDbgLock.TracingPrivate[0] = (unsigned __int64)v1;
  }
  v5 = (volatile __int32 **)(v1 + 118);
  v1[119] = v1 + 118;
  v1[118] = v1 + 118;
  v1[121] = v1 + 120;
  v1[120] = v1 + 120;
  EtwpCovSampLookasideControlInitialize(
    v1,
    v1 + 80,
    EtwpCovSampCaptureAllocateApc,
    (unsigned int)(3 * a1[9]) >> 2,
    a1[9]);
  EtwpCovSampLookasideControlInitialize(
    v1,
    v1 + 90,
    EtwpCovSampCaptureAllocateCaptureBuffer,
    (unsigned int)(3 * a1[8]) >> 2,
    a1[8]);
  if ( a1[19] )
  {
    EtwpCovSampStackHashTableAlloc(v1 + 165);
    EtwpCovSampStackHashTableAlloc(v1 + 166);
    v7 = v1[165];
    if ( !v7 || !v1[166] )
      goto LABEL_27;
    v1[164] = v7;
    v1[167] = (PVOID)(unsigned int)ExGenRandom(0, v6);
  }
  if ( v1[1] != (PVOID)-1LL )
    goto LABEL_12;
  v8 = ExSaAllocate(344, 0);
  if ( v8 == -1 )
  {
LABEL_27:
    v4 = -1073741670;
    goto LABEL_25;
  }
  v1[1] = (PVOID)v8;
LABEL_12:
  v9 = (struct _KTHREAD *)*v1;
  if ( *v1 )
    goto LABEL_15;
  v4 = PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, 0LL, 0LL, 0LL, EtwpCovSampCaptureWorkerThread, v1, 0LL, 0LL);
  if ( v4 < 0 )
  {
LABEL_25:
    if ( v1[1] != (PVOID)-1LL )
      EtwpCovSampCaptureFreeLookasides(v1);
    goto LABEL_30;
  }
  Object = 0LL;
  ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
  *v1 = Object;
  ThreadInformation[0] = 1;
  ThreadInformation[1] = 1;
  ThreadInformation[2] = 1;
  ZwSetInformationThread(Handle, ThreadIdealProcessorEx|ThreadIsIoPending, ThreadInformation, 0xCu);
  v9 = (struct _KTHREAD *)*v1;
LABEL_15:
  v10 = *a1 & 0x200;
  KeSetBasePriorityThread(v9, (v10 != 0) - 1);
  *((_DWORD *)v1 + 326) = v10 != 0;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v12 = MaximumProcessorCount;
  v24 = MaximumProcessorCount;
  if ( MaximumProcessorCount )
  {
    v13 = 0LL;
    do
    {
      v14 = ((unsigned int)v1[1] >> 13) & 0x3FFFF;
      _BitScanReverse(&v15, v14);
      v16 = *(_QWORD *)(v13 + ExSaPageArrays);
      v17 = ((unsigned __int64)v1[1] >> 4) & 0x1FF;
      LODWORD(Object) = 0;
      v18 = (_QWORD *)((*(_QWORD *)(*(_QWORD *)(v16 + 8LL * (v15 - 2)) + 8 * (v14 ^ (unsigned int)(1 << v15)) + 8)
                      + 8 * v17
                      + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      memset_0(v18 + 1, 0, 0x148uLL);
      *v18 = 0LL;
      EtwpCovSampLookasideInitialize(v1, v18 + 2, v1 + 80);
      EtwpCovSampLookasideInitialize(v1, v18 + 10, v1 + 90);
      EtwpCovSampStrideSamplerInitialize(v18 + 18, (unsigned int)a1[10], (unsigned int)a1[11]);
      EtwpCovSampStrideSamplerInitialize(v18 + 23, (unsigned int)a1[12], (unsigned int)a1[13]);
      EtwpCovSampStrideSamplerInitialize(v18 + 28, (unsigned int)a1[14], (unsigned int)a1[15]);
      EtwpCovSampStrideSamplerInitialize(v18 + 33, (unsigned int)a1[16], (unsigned int)a1[17]);
      v13 += 8LL;
      --v12;
    }
    while ( v12 );
    LODWORD(v12) = v24;
    v5 = (volatile __int32 **)(v1 + 118);
  }
  EtwpCovSampLookasideControlInitialize(
    v1,
    v1 + 100,
    EtwpCovSampCaptureAllocateSampleBuffer,
    (unsigned int)(3 * a1[7] * v12) >> 2,
    a1[7] * v12);
  EtwpCovSampLookasideInitialize(v1, v1 + 110, v1 + 100);
  v19 = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v1 + 266) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v1 + 267) = v19;
  *((_DWORD *)v1 + 322) = 0;
  *((_DWORD *)v1 + 324) = a1[18];
  *((_DWORD *)v1 + 325) = a1[6];
  _InterlockedExchange((volatile __int32 *)v1 + 320, 1);
  v20 = *v5;
  *((_DWORD *)v1 + 321) = 0;
  while ( v20 != (volatile __int32 *)v5 )
  {
    _InterlockedExchange(v20 + 6, 1);
    *((_DWORD *)v20 + 7) = 0;
    while ( *((_DWORD *)v20 + 9) < *(_DWORD *)(*((_QWORD *)v20 + 2) + 56LL)
         && *((_DWORD *)v20 + 9) < *((_DWORD *)v20 + 10) )
    {
      v4 = EtwpCovSampLookasideGrow((__int64)v1, (__int64)(v20 - 4));
      if ( v4 < 0 )
        goto LABEL_25;
    }
    v20 = *(volatile __int32 **)v20;
  }
  v4 = 0;
LABEL_30:
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)v4;
}
