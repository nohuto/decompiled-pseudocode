/*
 * XREFs of MmCommitSessionMappedView @ 0x140AD1F80
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiLocatePagefileSubsection @ 0x140342390 (MiLocatePagefileSubsection.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiChargeSegmentCommit @ 0x14099AB90 (MiChargeSegmentCommit.c)
 */

__int64 __fastcall MmCommitSessionMappedView(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v5; // rsi
  __int64 PteAddress; // r14
  __int64 v7; // rax
  __int64 v8; // r14
  struct _KLOCK_ENTRIES *v9; // r9
  AutoBoost *v10; // rax
  void *v11; // rdx
  signed __int8 v12; // cf
  AutoBoost *v13; // rbp
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v15; // rcx
  unsigned int *v16; // rax
  __int64 *v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  bool v20; // zf
  unsigned __int64 v22; // r8
  unsigned __int64 *v23; // r10
  unsigned __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // r8
  unsigned __int64 v27; // rdx
  int v28; // esi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned __int64 v33; // [rsp+60h] [rbp+8h] BYREF

  v3 = a2 + a1;
  if ( v3 <= a1 )
    return 3221225712LL;
  CurrentThread = KeGetCurrentThread();
  v5 = a1 & 0xFFFFFFFFFFFFF000uLL;
  PteAddress = MiGetPteAddress((v3 - 1) | 0xFFF);
  v7 = MiGetPteAddress(v5);
  --CurrentThread->SpecialApcDisable;
  v8 = ((PteAddress - v7) >> 3) + 1;
  v10 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E34D88, 0LL, 0LL, v9);
  v12 = _interlockedbittestandset64(&stru_140E34D88.Header.Lock, 0LL);
  v13 = v10;
  if ( v12 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E34D88, v10, (__int64)&stru_140E34D88);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v11);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  Flink = stru_140E34D88.Header.WaitListHead.Flink;
  while ( Flink )
  {
    v22 = (unsigned __int64)Flink[5].Blink & 0xFFFFFFFFFFFFF000uLL;
    if ( (struct _LIST_ENTRY *)v5 >= (struct _LIST_ENTRY *)((char *)Flink[2].Flink + v22) )
    {
      Flink = Flink->Blink;
    }
    else
    {
      if ( v5 >= v22 )
        break;
      Flink = Flink->Flink;
    }
  }
  if ( !Flink )
    KeBugCheckEx(0xD7u, v5, 2uLL, 0LL, 0LL);
  v15 = Flink[3].Flink->Flink;
  if ( v15[4].Flink )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E34D88, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E34D88.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140E34D88);
    v20 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v20 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v32, v31);
    return 3221225505LL;
  }
  else
  {
    v33 = (unsigned __int64)Flink[1].Blink + ((v5 - ((unsigned __int64)Flink[5].Blink & 0xFFFFFFFFFFFFF000uLL)) >> 12);
    v16 = MiLocatePagefileSubsection((unsigned int *)&v15[8], &v33);
    v17 = (__int64 *)v16;
    if ( !v16 )
    {
LABEL_12:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E34D88, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E34D88.Header.Lock);
      KeAbPostRelease((unsigned __int64)&stru_140E34D88);
      v20 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v20
        && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v19, v18);
      }
      return 3221225712LL;
    }
    v23 = (unsigned __int64 *)(*((_QWORD *)v16 + 1) + 8 * v33);
    v24 = v8 + v33;
    v25 = v17;
    v26 = v8 + v33;
    while ( 1 )
    {
      v27 = *((unsigned int *)v25 + 11);
      if ( v24 <= v27 )
        break;
      v25 = (__int64 *)v25[2];
      v24 = v26 - v27;
      v26 -= v27;
      if ( !v25 )
        goto LABEL_12;
    }
    v28 = MiChargeSegmentCommit(v17, v23, v8);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E34D88, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E34D88.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140E34D88);
    v20 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v20 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v30, v29);
    return v28 == 0 ? 0xC000012D : 0;
  }
}
