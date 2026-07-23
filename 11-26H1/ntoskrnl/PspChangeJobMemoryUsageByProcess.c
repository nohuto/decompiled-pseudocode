/*
 * XREFs of PspChangeJobMemoryUsageByProcess @ 0x140A05C20
 * Callers:
 *     MiReturnFullProcessCharges @ 0x1404C3598 (MiReturnFullProcessCharges.c)
 *     MiChargeFullProcessCommitment @ 0x140998924 (MiChargeFullProcessCommitment.c)
 *     MmAssignProcessToJob @ 0x140A05AEC (MmAssignProcessToJob.c)
 *     MmDeleteProcessAddressSpace @ 0x140B41970 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PspSendJobNotification @ 0x1404C9CC0 (PspSendJobNotification.c)
 *     PspScheduleEnforcementWorker @ 0x14077EA5C (PspScheduleEnforcementWorker.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x140A06E50 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspLockJobMemoryLimitsExclusive @ 0x140A07050 (PspLockJobMemoryLimitsExclusive.c)
 */

char __fastcall PspChangeJobMemoryUsageByProcess(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v6; // bp
  struct _KTHREAD *CurrentThread; // rsi
  AutoBoost *v8; // rax
  AutoBoost *v9; // rdi
  __int64 v10; // r14
  struct _KLOCK_ENTRIES *v11; // rax
  __int64 v12; // rdi
  $241382875694CED3D471BC5892DE3337 *v14; // rcx
  unsigned __int64 v16; // r12
  AutoBoost *v17; // rax
  void *v18; // rdx
  AutoBoost *v19; // r15
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r15
  BOOL v22; // ecx
  int v23; // eax
  unsigned __int64 v24; // r8
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  int v30; // eax
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  struct _KLOCK_ENTRIES *i; // rdi
  __int64 v34; // rax
  int v35; // [rsp+20h] [rbp-68h]
  __int64 v36; // [rsp+28h] [rbp-60h]
  __int64 v37; // [rsp+30h] [rbp-58h]
  unsigned __int64 v38; // [rsp+30h] [rbp-58h]
  struct _KLOCK_ENTRIES *v39; // [rsp+38h] [rbp-50h]
  __int64 v41; // [rsp+98h] [rbp+10h]
  struct _KLOCK_ENTRIES *v42; // [rsp+A8h] [rbp+20h]

  v42 = a4;
  v41 = a2;
  if ( (a1 & 2) == 0 || !*(_QWORD *)(a3 + 672) )
    return 1;
  v6 = 1;
  CurrentThread = KeGetCurrentThread();
  v37 = *(_QWORD *)(*(_QWORD *)(a3 + 632) + 1312LL);
  v36 = 0LL;
  v35 = 0;
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  if ( v37 )
  {
    v8 = (AutoBoost *)KeAbPreAcquire(v37 + 1264, 0LL, 0LL, a4);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 1264), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v37 + 1264), v8, v37 + 1264);
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v9, (void *)a2);
      else
        *((_BYTE *)v9 + 10) = 1;
    }
    a4 = v42;
  }
  v10 = v37;
  if ( (a1 & 4) != 0 )
  {
    v11 = a4;
    a4 = 0LL;
    v42 = 0LL;
  }
  else
  {
    v11 = *(struct _KLOCK_ENTRIES **)(a3 + 632);
  }
  v39 = v11;
  v12 = (__int64)v11;
  if ( v11 != a4 )
  {
    while ( 1 )
    {
      v16 = 0LL;
      if ( v12 != v10 )
      {
        v17 = (AutoBoost *)KeAbPreAcquire(v12 + 1264, 0LL, 0LL, a4);
        v19 = v17;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 1264), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v12 + 1264), v17, v12 + 1264);
        if ( v19 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v19, v18);
          else
            *((_BYTE *)v19 + 10) = 1;
        }
      }
      a4 = (struct _KLOCK_ENTRIES *)v41;
      v20 = *(_QWORD *)(v12 + 1208);
      v21 = v20 + v41;
      if ( v41 <= 0 )
      {
        if ( v21 > v20 )
        {
          PspUnlockJobMemoryLimitsExclusive(v12, v10, 0LL);
          v28 = v12;
          if ( !v6 )
            v28 = v36;
          v6 = 0;
          v36 = v28;
          goto LABEL_49;
        }
      }
      else if ( v21 < v20 )
      {
        PspUnlockJobMemoryLimitsExclusive(v12, v10, 0LL);
        v34 = v12;
        if ( !v6 )
          v34 = v36;
        v6 = 0;
        v36 = v34;
        goto LABEL_49;
      }
      v22 = 0;
      v23 = *(_DWORD *)(v12 + 256);
      v24 = v21 + *(_QWORD *)(v12 + 1568);
      v38 = v24;
      if ( (v23 & 0x200000) != 0 && v24 > *(_QWORD *)(v12 + 704) )
        v22 = v41 > 0;
      if ( (v23 & 0x200) != 0 && v21 > *(_QWORD *)(v12 + 696) && v41 > 0 || v22 )
        break;
      if ( v6 )
      {
        *(_QWORD *)(v12 + 1208) = v21;
LABEL_38:
        v25 = *(_QWORD *)(v12 + 1216);
        if ( v25 )
        {
          v29 = *(_QWORD *)(v25 + 40);
          if ( (*(_DWORD *)v25 & 0x200000) == 0 )
            v24 = v21;
          v30 = 0;
          if ( v29 && (__int64)a4 > 0 && v24 > v29 )
            v30 = 512;
          v31 = *(_QWORD *)(v25 + 32);
          if ( v31 && (__int64)a4 <= 0 && v24 < v31 )
            v30 |= 0x8000u;
          v35 |= v30;
        }
      }
LABEL_39:
      if ( (__int64)a4 > 0 )
      {
        if ( v21 > *(_QWORD *)(v12 + 720) )
          *(_QWORD *)(v12 + 720) = v21;
        v16 = *(_QWORD *)(a3 + 984);
      }
      if ( v12 != v10 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 1264), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v12 + 1264));
        KeAbPostRelease(v12 + 1264);
      }
      if ( v16 && v16 > *(_QWORD *)(v12 + 712) )
      {
        _m_prefetchw((const void *)(v12 + 712));
        v26 = *(_QWORD *)(v12 + 712);
        do
        {
          if ( v16 <= v26 )
            break;
          v27 = v26;
          v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 712), v16, v26);
        }
        while ( v26 != v27 );
      }
LABEL_49:
      v12 = *(_QWORD *)(v12 + 1304);
      a2 = 1LL;
      if ( (struct _KLOCK_ENTRIES *)v12 == v42 )
      {
        if ( v6 )
        {
          if ( v35 )
            PspScheduleEnforcementWorker(v10);
        }
        else
        {
          for ( i = v39; i != (struct _KLOCK_ENTRIES *)v36; i = (struct _KLOCK_ENTRIES *)i[12].Entries[0].OwnerTree.Root )
          {
            PspLockJobMemoryLimitsExclusive(i, v10, 0LL);
            i[11].Entries[0].OwnerTree.Min = (_RTL_BALANCED_NODE *)((char *)i[11].Entries[0].OwnerTree.Min - v41);
            PspUnlockJobMemoryLimitsExclusive(i, v10, 0LL);
          }
        }
        goto LABEL_15;
      }
    }
    if ( (a1 & 1) != 0 )
    {
      *(_QWORD *)(v12 + 1208) = v21;
    }
    else if ( v6 )
    {
      v32 = v12;
      v6 = 0;
      goto LABEL_79;
    }
    v32 = v36;
LABEL_79:
    v36 = v32;
    if ( *(_QWORD *)(v12 + 552) && (*(_DWORD *)(v12 + 1104) & 0x200) != 0 && (*(_DWORD *)(a3 + 496) & 0x24) == 4 )
    {
      _InterlockedOr((volatile signed __int32 *)(a3 + 496), 0x20u);
      PspSendJobNotification(v12, 10LL, *(_QWORD *)(a3 + 464), 1);
      v24 = v38;
      a4 = (struct _KLOCK_ENTRIES *)v41;
    }
    if ( !v6 )
      goto LABEL_39;
    goto LABEL_38;
  }
LABEL_15:
  if ( v10 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 1264), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v10 + 1264));
    KeAbPostRelease(v10 + 1264);
  }
  if ( CurrentThread )
  {
    if ( CurrentThread->SpecialApcDisable++ == -1 )
    {
      v14 = &CurrentThread->152;
      if ( ($241382875694CED3D471BC5892DE3337 *)v14->ApcState.ApcListHead[0].Flink != v14 )
        KiCheckForKernelApcDelivery((__int64)v14, a2);
    }
  }
  return v6;
}
