/*
 * XREFs of MiUpdateExistingPageFile @ 0x140872760
 * Callers:
 *     MiGetPagingFileHandle @ 0x140871CE8 (MiGetPagingFileHandle.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     MiIssuePageExtendRequest @ 0x14049E560 (MiIssuePageExtendRequest.c)
 *     MiQueuePageFileExtension @ 0x1404DFC08 (MiQueuePageFileExtension.c)
 *     MiAttemptChangePagingFileMaximum @ 0x1406FD33C (MiAttemptChangePagingFileMaximum.c)
 *     MiCheckAndUpdatePagingFileMinimum @ 0x1406FD928 (MiCheckAndUpdatePagingFileMinimum.c)
 *     MiIncreaseCommitLimits @ 0x14070A538 (MiIncreaseCommitLimits.c)
 *     MiReduceCommitLimits @ 0x14070A82C (MiReduceCommitLimits.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiUpdateExistingPageFile(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  LARGE_INTEGER v4; // r12
  struct _KTHREAD *CurrentThread; // rdi
  volatile signed __int64 *v7; // rsi
  __int64 v8; // r14
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // r15
  int v12; // r11d
  unsigned int v13; // edx
  __int64 QuadPart; // r10
  __int64 i; // r12
  unsigned __int16 v16; // r8
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  bool v20; // zf
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // r13d
  unsigned int v25; // ecx
  unsigned int v26; // r15d
  __int64 v27; // rdx
  __int64 v28; // rcx
  LARGE_INTEGER v29; // r12
  char v30; // al
  unsigned int v31; // esi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  $241382875694CED3D471BC5892DE3337 *v37; // rcx
  int v38; // r13d
  __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned int v41; // r9d
  _BYTE v42[24]; // [rsp+30h] [rbp-39h] BYREF
  LARGE_INTEGER v43; // [rsp+48h] [rbp-21h]
  __int64 v44; // [rsp+50h] [rbp-19h]
  unsigned int v45; // [rsp+58h] [rbp-11h]
  unsigned int v46; // [rsp+5Ch] [rbp-Dh]
  int v47; // [rsp+60h] [rbp-9h]
  struct _KEVENT Event; // [rsp+68h] [rbp-1h] BYREF
  char v49; // [rsp+84h] [rbp+1Bh]
  char v50; // [rsp+87h] [rbp+1Eh]
  LARGE_INTEGER Timeout; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned __int64 v53; // [rsp+E0h] [rbp+77h]

  v4 = *(LARGE_INTEGER *)a1;
  CurrentThread = KeGetCurrentThread();
  v53 = *(_QWORD *)(a1 + 48);
  v7 = (volatile signed __int64 *)(v4.QuadPart + 1184);
  Timeout = v4;
  v8 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v9 = (AutoBoost *)KeAbPreAcquire(v4.QuadPart + 1184, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v4.QuadPart + 1184), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4.QuadPart + 1184), v9, v4.QuadPart + 1184);
  v12 = 1;
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  v13 = *(_DWORD *)(v4.QuadPart + 22296);
  QuadPart = v4.QuadPart;
  for ( i = 0LL; ; i = (unsigned int)(v12 + i) )
  {
    if ( (unsigned int)i >= v13 )
    {
      if ( (_DWORD)i != v13 )
        goto LABEL_26;
      if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v7);
      KeAbPostRelease((unsigned __int64)v7);
      v20 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v20
        && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v23, v22);
      }
      return 3221226021LL;
    }
    v8 = *(_QWORD *)(QuadPart + 8 * i + 22304);
    v16 = *(_WORD *)(v8 + 172);
    if ( (v16 & 0x840) == 0 && *(_QWORD *)(*(_QWORD *)(v8 + 24) + 40LL) == *(_QWORD *)(v53 + 40) )
      break;
  }
  v17 = v16;
  LOWORD(v17) = ~v16;
  if ( (v12 & (v17 >> 4)) != (*(_BYTE *)(a1 + 40) == 0) )
  {
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v7);
    KeAbPostRelease((unsigned __int64)v7);
    v20 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v20 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v19, v18);
    return 3221225485LL;
  }
LABEL_26:
  v24 = *(_DWORD *)(a1 + 12);
  v25 = *(_DWORD *)(v8 + 4);
  v26 = *(_DWORD *)(a1 + 8);
  if ( v24 >= v25 )
  {
    if ( v26 >= *(_DWORD *)(v8 + 8) )
    {
      if ( v24 > v25 )
      {
        if ( (*(_BYTE *)(v8 + 172) & 0x10) != 0 )
        {
          v53 = 0LL;
        }
        else
        {
          v53 = v24 - v25;
          MiIncreaseCommitLimits(QuadPart, 0LL, v53, 0LL, 0, 0LL);
        }
        v38 = MiAttemptChangePagingFileMaximum(v8, v24);
        if ( v38 < 0 )
        {
          if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v7);
          KeAbPostRelease((unsigned __int64)v7);
          v20 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v20
            && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v40, v39);
          }
          if ( v53 )
            MiReduceCommitLimits(Timeout.QuadPart, 0LL, v53);
          return (unsigned int)v38;
        }
      }
      v31 = 0;
      if ( v26 > *(_DWORD *)(v8 + 8) )
      {
        while ( v26 <= *(_DWORD *)v8 )
        {
          if ( MiCheckAndUpdatePagingFileMinimum((unsigned int *)v8, v26) )
            goto LABEL_54;
        }
        v41 = i;
        v29 = Timeout;
        MiIssuePageExtendRequest(Timeout.QuadPart, v26 - *(_DWORD *)v8, 1, v41);
        if ( *(_DWORD *)(v8 + 8) < v26 )
          v31 = -1073741670;
        goto LABEL_55;
      }
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 16) & 0x400000) == 0 )
      {
        if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v7);
        KeAbPostRelease((unsigned __int64)v7);
        v20 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v20
          && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v33, v32);
        }
        return 3221225712LL;
      }
      if ( v24 != v25 )
        goto LABEL_47;
      MiCheckAndUpdatePagingFileMinimum((unsigned int *)v8, v26);
      v31 = 0;
    }
LABEL_54:
    v29 = Timeout;
LABEL_55:
    if ( *(_BYTE *)(a1 + 41) )
      *(_WORD *)(v8 + 172) |= 0x80u;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v29.QuadPart + 1184), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v29.QuadPart + 1184));
    KeAbPostRelease(v29.QuadPart + 1184);
    v20 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v20 )
    {
      v37 = &CurrentThread->152;
      if ( ($241382875694CED3D471BC5892DE3337 *)v37->ApcState.ApcListHead[0].Flink != v37 )
        KiCheckForKernelApcDelivery((__int64)v37, v36);
    }
    return v31;
  }
  if ( (*(_DWORD *)(a1 + 16) & 0x400000) == 0 )
  {
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v7);
    KeAbPostRelease((unsigned __int64)v7);
    v20 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v20 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v28, v27);
    return 3221225713LL;
  }
  if ( v26 <= *(_DWORD *)(v8 + 8) )
  {
    memset_0(v42, 0, 0x60uLL);
    v29 = Timeout;
    v30 = *(_BYTE *)(v8 + 172) & 0xF;
    v50 |= 0x80u;
    v49 = v30;
    v43 = Timeout;
    v44 = -1LL;
    v45 = v24;
    v46 = v26;
    v47 = -1;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    MiQueuePageFileExtension((__int64)v42, 0x11u);
    Timeout.QuadPart = -3000000000LL;
    while ( KeWaitForSingleObject(&Event, WrKernel, 0, 0, &Timeout) )
      ;
    v31 = v47;
    goto LABEL_55;
  }
LABEL_47:
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((unsigned __int64)v7);
  v20 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v20 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v35, v34);
  return 3221225659LL;
}
