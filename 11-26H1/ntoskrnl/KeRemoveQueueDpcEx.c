/*
 * XREFs of KeRemoveQueueDpcEx @ 0x140430460
 * Callers:
 *     KiCheckAndRearmForceIdle @ 0x140338EAC (KiCheckAndRearmForceIdle.c)
 *     EtwpFreeCompression @ 0x140430384 (EtwpFreeCompression.c)
 *     KeRemoveQueueDpc @ 0x140430440 (KeRemoveQueueDpc.c)
 *     KeMaskInterrupt @ 0x140431A20 (KeMaskInterrupt.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x1404BE7C0 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     KeClearForceIdle @ 0x1404BECEC (KeClearForceIdle.c)
 *     KeSrcuFree @ 0x1405F7980 (KeSrcuFree.c)
 *     KiSrcuNotifyWorkerAcquire @ 0x1405F8054 (KiSrcuNotifyWorkerAcquire.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405FC548 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     DifKeRemoveQueueDpcWrapper @ 0x140667950 (DifKeRemoveQueueDpcWrapper.c)
 *     ExpCancelTimer @ 0x1406D2CE0 (ExpCancelTimer.c)
 *     VfWdCheckForSettingsChange @ 0x140C3FF60 (VfWdCheckForSettingsChange.c)
 * Callees:
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KeGenericProcessorCallback @ 0x14037BD24 (KeGenericProcessorCallback.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     KiGetDeepIdleProcessors @ 0x140452A7C (KiGetDeepIdleProcessors.c)
 *     KiSelectDpcData @ 0x14045B230 (KiSelectDpcData.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireReleaseDpcData @ 0x1405FD77C (KiAcquireReleaseDpcData.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall KeRemoveQueueDpcEx(int *a1, char a2)
{
  char v2; // di
  char v4; // r12
  bool v5; // al
  __int64 v6; // r9
  __int64 v7; // r14
  bool v8; // r13
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v12; // eax
  __int64 v13; // rdx
  unsigned __int32 v14; // ett
  int v15; // r15d
  unsigned __int16 v16; // ax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 *v20; // r8
  _QWORD *v21; // rdx
  __int64 *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rax
  struct _KPRCB *v28; // rax
  __int64 Group; // rdx
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rsi
  unsigned __int16 i; // cx
  _DWORD v35[3]; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned __int16 *v36[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v37; // [rsp+48h] [rbp-C0h]
  int v38; // [rsp+4Ah] [rbp-BEh]
  __int16 v39; // [rsp+4Eh] [rbp-BAh]
  struct _KAFFINITY_EX v40; // [rsp+58h] [rbp-B0h] BYREF
  struct _KAFFINITY_EX v41; // [rsp+168h] [rbp+60h] BYREF

  v2 = a2;
  memset_0(&v41.8, 0, sizeof(v41.8));
  v38 = 0;
  v39 = 0;
  v35[0] = 0;
  memset_0(&v40.8, 0, sizeof(v40.8));
  v4 = 0;
  v5 = KeDisableInterrupts();
  v7 = *((_QWORD *)a1 + 7);
  v8 = v5;
  if ( v7 )
  {
    v15 = *a1;
    v16 = HIWORD(*a1) - 2048;
    if ( HIWORD(*a1) < 0x800u )
      v16 = HIWORD(*a1);
    v17 = KiProcessorBlock[v16];
    if ( (_BYTE)v15 != 26 || (v18 = 14448LL, !*(_BYTE *)(v17 + 14520)) )
      v18 = 14400LL;
    v19 = v17 + v18;
    KxAcquireSpinLock((PKSPIN_LOCK)(v17 + v18 + 16));
    if ( v7 == *((_QWORD *)a1 + 7) && v15 == *a1 )
    {
      v20 = (__int64 *)(a1 + 2);
      v21 = (_QWORD *)v19;
      --*(_DWORD *)(v19 + 24);
      v22 = *(__int64 **)v19;
      if ( *(int **)v19 != a1 + 2 )
      {
        do
        {
          v21 = v22;
          v22 = (__int64 *)*v22;
        }
        while ( v22 != v20 );
      }
      v23 = *v20;
      *v21 = *v20;
      if ( !v23 )
        *(_QWORD *)(v19 + 8) = v21;
      *((_QWORD *)a1 + 7) = 0LL;
      v4 = 1;
      v24 = *(_QWORD *)(v17 + 36600);
      if ( v24 && v19 == v17 + 14400 )
        _InterlockedDecrement((volatile signed __int32 *)(v24 + 28));
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(v19 + 16));
    v2 = a2;
  }
  if ( v8 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v12 = *SchedulerAssist;
      do
      {
        v13 = v12;
        LODWORD(v13) = v12 & 0xFFDFFFFF;
        v14 = v12;
        v12 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v12 & 0xFFDFFFFF, v12);
      }
      while ( v14 != v12 );
      if ( (v12 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v13, SchedulerAssist, v6);
    }
    _enable();
  }
  if ( v2 && *((_QWORD *)a1 + 2) )
  {
    *(_QWORD *)&v41.Count = 2097153LL;
    memset_0(&v41.8, 0, sizeof(v41.8));
    *(_QWORD *)&v40.Count = 2097153LL;
    memset_0(&v40.8, 0, sizeof(v40.8));
    KiGetDeepIdleProcessors(&v41, &v40);
    v25 = 0;
    if ( v40.Count )
    {
      v26 = *((_QWORD *)a1 + 2);
      do
      {
        v27 = v25++;
        v40.Bitmap[v27] &= v26;
      }
      while ( v25 < v40.Count );
    }
    v28 = KeGetCurrentPrcb();
    Group = v28->Group;
    if ( v40.Count > (unsigned __int16)Group )
      v40.Bitmap[Group] &= ~v28->GroupSetMember;
    v36[1] = (unsigned __int16 *)v40.Bitmap[0];
    v37 = 0;
    v36[0] = (unsigned __int16 *)&v40;
    while ( !(unsigned int)KeEnumerateNextProcessor(v35, v36) )
    {
      v30 = KiProcessorBlock[v35[0]];
      v31 = KiSelectDpcData(v30, a1);
      v32 = v31;
      if ( !v7 )
        KiAcquireReleaseDpcData(v31);
      if ( *(int **)(v32 + 32) != a1 && (unsigned int)v40.Count > *(unsigned __int8 *)(v30 + 208) )
        v40.Bitmap[*(unsigned __int8 *)(v30 + 208)] &= ~*(_QWORD *)(v30 + 200);
    }
    for ( i = 0; i < v40.Count; ++i )
    {
      if ( v40.Bitmap[i] )
      {
        KeGenericProcessorCallback((__int64 *)&v40, (__int64)xHalTimerWatchdogStop, 0LL, 2);
        return v4;
      }
    }
  }
  return v4;
}
