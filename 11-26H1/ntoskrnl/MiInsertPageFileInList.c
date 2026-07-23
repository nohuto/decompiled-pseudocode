/*
 * XREFs of MiInsertPageFileInList @ 0x14087206C
 * Callers:
 *     MiCreatePagingFile @ 0x140871844 (MiCreatePagingFile.c)
 *     MmStoreRegister @ 0x140883A7C (MmStoreRegister.c)
 *     MiCreateSpecialPurposeMemoryPageFile @ 0x14088488C (MiCreateSpecialPurposeMemoryPageFile.c)
 * Callees:
 *     MiNumberWsSwapPagefiles @ 0x140207558 (MiNumberWsSwapPagefiles.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     MiUpdateReserveClusterInfo @ 0x14049E3C8 (MiUpdateReserveClusterInfo.c)
 *     MiMakePartitionActive @ 0x1404A3310 (MiMakePartitionActive.c)
 *     MiUpdatePageFileList @ 0x1406FDC54 (MiUpdatePageFileList.c)
 *     MiIncreaseCommitLimits @ 0x14070A538 (MiIncreaseCommitLimits.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PsCreateSystemThreadEx @ 0x140A78DE0 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall MiInsertPageFileInList(unsigned int *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r8
  _QWORD *v6; // rdx
  __int64 v7; // r14
  struct _KTHREAD *CurrentThread; // rsi
  volatile signed __int64 *v9; // rdi
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  bool v15; // zf
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct _KLOCK_ENTRIES *v19; // r9
  AutoBoost *v20; // rax
  AutoBoost *v21; // rcx
  unsigned int v22; // ecx
  int v23; // r8d
  __int16 v24; // dx
  char v25; // r11
  __int64 *v26; // r9
  __int64 v27; // r10
  __int64 v28; // rax
  unsigned __int8 v29; // cf
  int v30; // eax
  __int16 v31; // ax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  KPRIORITY v38; // edx
  BOOLEAN v39; // r8
  unsigned __int64 v40; // [rsp+50h] [rbp-19h]
  unsigned __int64 v41; // [rsp+58h] [rbp-11h]
  struct _KEVENT Event[4]; // [rsp+60h] [rbp-9h] BYREF
  AutoBoost *v43; // [rsp+D0h] [rbp+67h]
  unsigned int v44; // [rsp+D0h] [rbp+67h]
  int PartitionActive; // [rsp+D8h] [rbp+6Fh]
  HANDLE Handle; // [rsp+E0h] [rbp+77h] BYREF
  PVOID Object; // [rsp+E8h] [rbp+7Fh] BYREF

  v41 = *a1;
  *((_BYTE *)a1 + 174) |= 1u;
  v4 = 0LL;
  v40 = a1[1];
  Handle = 0LL;
  memset(Event, 0, 32);
  if ( a1[10] )
  {
    do
    {
      v6 = *(_QWORD **)(*((_QWORD *)a1 + 4) + 8 * v4);
      v4 = (unsigned int)(v4 + 1);
      *v6 = 2575857425LL;
    }
    while ( (unsigned int)v4 < a1[10] );
  }
  v7 = *((_QWORD *)a1 + 28);
  CurrentThread = KeGetCurrentThread();
  v9 = (volatile signed __int64 *)(v7 + 1184);
  --CurrentThread->SpecialApcDisable;
  v10 = (AutoBoost *)KeAbPreAcquire(v7 + 1184, 0LL, 0LL, a4);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 1184), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 + 1184), v10, v7 + 1184);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v11);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  if ( HIDWORD(stru_140E2ED08.RelativeTimerBias) )
  {
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 1184));
    KeAbPostRelease(v7 + 1184);
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v14, v13);
    return 3221225738LL;
  }
  if ( !*(_QWORD *)(v7 + 248) )
  {
    Object = 0LL;
    PartitionActive = MiMakePartitionActive(v7);
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 1184));
    KeAbPostRelease(v7 + 1184);
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v18, v17);
    if ( !PartitionActive )
      return 3221225773LL;
    *(_QWORD *)&Event[0].Header.Lock = v7;
    KeInitializeEvent((PRKEVENT)&Event[0].Header.WaitListHead, NotificationEvent, 0);
    result = PsCreateSystemThreadEx(
               &Handle,
               0x1FFFFFLL,
               0LL,
               *(_QWORD *)(*(_QWORD *)(v7 + 256) + 128LL),
               0LL,
               MiModifiedPageWriter,
               Event,
               0LL,
               0LL);
    if ( (int)result < 0 )
      return result;
    ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x66506D4Du, (__int64)&Object, 0LL, 0LL);
    KeWaitForSingleObject(&Event[0].Header.WaitListHead, WrKernel, 0, 0, 0LL);
    --CurrentThread->SpecialApcDisable;
    v20 = (AutoBoost *)KeAbPreAcquire(v7 + 1184, 0LL, 0LL, v19);
    v21 = v20;
    v43 = v20;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    {
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 + 1184), v20, v7 + 1184);
      v21 = v43;
    }
    if ( v21 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v21, (void *)1);
      else
        *((_BYTE *)v21 + 10) = 1;
    }
    if ( *(PVOID *)(v7 + 1072) == Object )
      *(_QWORD *)(v7 + 248) = Handle;
    else
      ObCloseHandle(Handle, 0);
    ObfDereferenceObjectWithTag(Object, 0x66506D4Du);
  }
  v22 = *(_DWORD *)(v7 + 22296);
  v44 = v22;
  if ( v22 >= 0x10 )
  {
LABEL_56:
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 1184));
    KeAbPostRelease(v7 + 1184);
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v35, v34);
    return 3221225623LL;
  }
  v23 = 0;
  v24 = *((_WORD *)a1 + 86) ^ ((unsigned __int8)v22 ^ (unsigned __int8)*((_WORD *)a1 + 86)) & 0xF;
  v25 = 1;
  *((_WORD *)a1 + 86) = v24;
  if ( !v22 )
    goto LABEL_44;
  v26 = (__int64 *)(v7 + 22304);
  v27 = v22;
  do
  {
    v28 = *v26++;
    v29 = _bittest16((const signed __int16 *)(v28 + 172), 0xBu);
    v30 = v23 + 1;
    if ( !v29 )
      v30 = v23;
    v23 = v30;
    --v27;
  }
  while ( v27 );
  if ( !v30 )
  {
LABEL_44:
    v31 = *((_WORD *)a1 + 86);
    if ( (v31 & 0x50) == 0 )
    {
      MiIncreaseCommitLimits(v7, v41, v40, 0LL, 0, (__int64)a1);
      if ( (a1[43] & 0x20) == 0 && !*(_DWORD *)(v7 + 1180) )
        *(_DWORD *)(v7 + 1180) = 1;
      goto LABEL_63;
    }
    if ( (v31 & 0x10) == 0 || !(unsigned int)MiNumberWsSwapPagefiles(v7) )
    {
      MiUpdatePageFileList((__int64)a1, v25);
      *(_QWORD *)(v7 + 8LL * v44 + 22304) = a1;
      *(_DWORD *)(v7 + 22296) = v44 + 1;
LABEL_63:
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 1184));
      KeAbPostRelease(v7 + 1184);
      v15 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v15
        && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v37, v36);
      }
      MiUpdateReserveClusterInfo(v7, 0LL, 0);
      KeSetEvent((PRKEVENT)(v7 + 1008), v38, v39);
      return 0LL;
    }
    goto LABEL_56;
  }
  if ( (v24 & 0x810) == 0 )
  {
    *((_WORD *)a1 + 86) = v24 | 0x20;
    goto LABEL_44;
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 1184));
  KeAbPostRelease(v7 + 1184);
  v15 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v15 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v33, v32);
  return 3221225659LL;
}
