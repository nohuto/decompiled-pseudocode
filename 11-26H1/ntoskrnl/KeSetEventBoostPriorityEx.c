/*
 * XREFs of KeSetEventBoostPriorityEx @ 0x140419658
 * Callers:
 *     FsRtlReleaseEofLock @ 0x140419310 (FsRtlReleaseEofLock.c)
 *     KeSetEventBoostPriority @ 0x14052B490 (KeSetEventBoostPriority.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140987E24 (IopWaitAndAcquireFileObjectLock.c)
 *     NtSetEventEx @ 0x140A5BF10 (NtSetEventEx.c)
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KeAbPreWakeupThread @ 0x140269824 (KeAbPreWakeupThread.c)
 *     KiTryUnwaitThread @ 0x140272B24 (KiTryUnwaitThread.c)
 *     KiRemoveBoostThread @ 0x140273850 (KiRemoveBoostThread.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x14027BEB0 (KiSignalThread.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiWaitSatisfyMutant @ 0x14043A4D0 (KiWaitSatisfyMutant.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeSetEventBoostPriorityEx(
        __int64 a1,
        __int64 a2,
        signed int *a3,
        struct _KTHREAD *a4,
        char a5,
        char a6)
{
  __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v9; // esi
  struct _KPRCB *CurrentPrcb; // r14
  void *v11; // r8
  __int64 v12; // rax
  int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 *v17; // rcx
  char v18; // al
  char v19; // r12
  __int64 v20; // rbp
  int v21; // eax
  bool v22; // bl
  signed int v23; // eax
  int v25; // eax
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  _BYTE *v27; // rcx
  char v28; // al
  bool v29; // zf
  unsigned int v30; // [rsp+30h] [rbp-58h]
  __int64 v31; // [rsp+38h] [rbp-50h]
  __int64 v32; // [rsp+40h] [rbp-48h]
  unsigned __int8 v33; // [rsp+48h] [rbp-40h]
  int v34; // [rsp+90h] [rbp+8h] BYREF
  _QWORD *v35; // [rsp+98h] [rbp+10h]
  struct _KTHREAD *v36; // [rsp+A8h] [rbp+20h]

  v36 = a4;
  v35 = (_QWORD *)a2;
  v7 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v9 = 2;
  v33 = CurrentIrql;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v7, a2, (__int64)a3);
  v12 = v7 + 8;
  v30 = *(_DWORD *)(v7 + 4);
  v13 = 0;
  *(_DWORD *)(v7 + 4) = 1;
  v14 = *(_QWORD *)(v7 + 8);
  while ( v14 != v12 )
  {
    v15 = *(_QWORD *)v14;
    v16 = v14;
    v17 = *(__int64 **)(v14 + 8);
    v31 = *(_QWORD *)v14;
    if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 || *v17 != v14 )
      __fastfail(3u);
    *v17 = v15;
    *(_QWORD *)(v15 + 8) = v17;
    v18 = *(_BYTE *)(v14 + 16);
    switch ( v18 )
    {
      case 1:
        v19 = 0;
        v20 = *(_QWORD *)(v14 + 24);
        v32 = *(unsigned __int16 *)(v14 + 18);
        v34 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v34);
          while ( *(_QWORD *)(v20 + 64) );
        }
        if ( *(_BYTE *)(v20 + 388) == 5 )
        {
          v19 = KiSignalThread((__int64)CurrentPrcb, v20, v32, v16);
          if ( v19 )
          {
            if ( v35 )
            {
              *v35 = v20;
              v27 = *(_BYTE **)(v16 + 32);
              if ( (*v27 & 0x7F) == 2 )
                KiWaitSatisfyMutant(v27, v20, CurrentPrcb);
            }
          }
        }
        v14 = v31;
        *(_QWORD *)(v20 + 64) = 0LL;
        ++*(_BYTE *)(v16 + 17);
        v12 = v7 + 8;
        if ( v19 )
        {
          v21 = *(_DWORD *)(v7 + 4) - 1;
          *(_DWORD *)(v7 + 4) = v21;
          if ( !v21 )
          {
            ++v13;
            goto LABEL_18;
          }
LABEL_35:
          v12 = v7 + 8;
        }
        break;
      case 2:
        *(_BYTE *)(v14 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v14 + 24), (_QWORD *)v14, (__int64)v11);
        v25 = *(_DWORD *)(v7 + 4) - 1;
        *(_DWORD *)(v7 + 4) = v25;
        if ( !v25 )
          goto LABEL_18;
        goto LABEL_34;
      case 4:
        *(_BYTE *)(v14 + 17) = 5;
        *(_DWORD *)(v7 + 4) = 0;
        KiInsertQueueDpc(*(_QWORD *)(v14 + 24), v7, v14, 0LL, 0);
LABEL_34:
        v14 = v31;
        goto LABEL_35;
      default:
        v28 = KiTryUnwaitThread((__int64)CurrentPrcb, v14, 256LL, 0LL);
        v14 = v31;
        v29 = v28 == 0;
        v12 = v7 + 8;
        if ( !v29 )
        {
          --v13;
          goto LABEL_35;
        }
        break;
    }
  }
LABEL_18:
  if ( v35 )
    v22 = v13 > 0;
  else
    v22 = 0;
  _InterlockedAnd((volatile signed __int32 *)v7, 0xFFFFFF7F);
  if ( (a6 & 1) != 0 )
  {
    if ( *a3 )
    {
      Next = CurrentPrcb->DeferredReadyListHead.Next;
      if ( Next )
        KeAbPreWakeupThread((AutoBoost *)&Next[-27], v36, v11);
    }
    goto LABEL_22;
  }
  v23 = KiRemoveBoostThread(CurrentPrcb, (__int64)CurrentPrcb->CurrentThread, (__int64)v11);
  if ( a3 )
  {
    if ( !*a3 )
      goto LABEL_22;
    if ( *a3 > v23 )
      v23 = *a3;
  }
  if ( !v22 )
  {
LABEL_22:
    v23 = a5;
    v9 = 1;
  }
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, v9, v23, v33);
  return v30;
}
