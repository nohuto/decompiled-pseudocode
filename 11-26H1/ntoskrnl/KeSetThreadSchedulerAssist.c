/*
 * XREFs of KeSetThreadSchedulerAssist @ 0x1403C99B8
 * Callers:
 *     VmSetThreadSchedulerAssist @ 0x1403C99A0 (VmSetThreadSchedulerAssist.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140204620 (KeSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseThreadStateLock @ 0x140305180 (KiReleaseThreadStateLock.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x14030F3D0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KeCheckAndApplyBamQos @ 0x140332380 (KeCheckAndApplyBamQos.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403342E0 (KiAcquireThreadStateLockForWrite.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x140380C70 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiClearPriorityFloor @ 0x1403823E0 (KiClearPriorityFloor.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1403C9D80 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     EtwTraceXSchedulerPriorityKickReceive @ 0x1406C9004 (EtwTraceXSchedulerPriorityKickReceive.c)
 */

void __fastcall KeSetThreadSchedulerAssist(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdi
  struct _KPRCB *CurrentPrcb; // rsi
  int v9; // edi
  _DWORD *v10; // rcx
  unsigned __int64 ProcessorCount; // rcx
  unsigned __int64 *v12; // r8
  int v13; // ecx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rax
  __int64 *Prcbs; // rdi
  __int64 v16; // r14
  __int64 v17; // rcx
  volatile signed __int32 **v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 *v20; // r8
  __int64 v21; // r8
  __int64 v22; // r9
  struct _KPRCB *v23; // [rsp+20h] [rbp-30h] BYREF
  __int128 v24; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v25[24]; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int8 v26; // [rsp+80h] [rbp+30h] BYREF
  struct _SINGLE_LIST_ENTRY v27; // [rsp+88h] [rbp+38h] BYREF

  v26 = 0;
  v27.Next = 0LL;
  if ( (_DWORD)a3 )
  {
    if ( (_DWORD)a3 != 1 )
    {
      if ( (_DWORD)a3 == 2 || (_DWORD)a3 == 3 )
      {
        if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
          EtwTraceXSchedulerPriorityKickReceive(BugCheckParameter1, (unsigned int)a3);
        KiAcquireThreadLockRaiseToDpc(BugCheckParameter1, &v26);
      }
      else
      {
        if ( (_DWORD)a3 != 4 )
          return;
        KiAcquireThreadLockRaiseToDpc(BugCheckParameter1, &v26);
        v6 = *(_QWORD *)(BugCheckParameter1 + 968);
        if ( !v6 )
          goto LABEL_10;
        _InterlockedIncrement64((volatile signed __int64 *)(v6 + 40));
        if ( *(_QWORD *)(v6 + 40) == *(_QWORD *)(v6 + 48) || *(_BYTE *)(BugCheckParameter1 + 388) != 1 )
          goto LABEL_10;
      }
      KiUpdateVpBackingThreadPriorityFromTopLevel((struct _KTHREAD *)BugCheckParameter1);
LABEL_10:
      LOBYTE(v4) = v26;
      *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
      KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v27, v4, v5);
      return;
    }
    v7 = *(_QWORD *)(BugCheckParameter1 + 968);
    if ( v7 )
    {
      KiAcquireThreadLockRaiseToDpc(BugCheckParameter1, &v26);
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = *(_DWORD *)(v7 + 4);
      if ( v9 >= 7 )
        goto LABEL_25;
      *(_BYTE *)(BugCheckParameter1 + 1122) = v9;
      if ( v9 )
      {
        v10 = *(_DWORD **)(BugCheckParameter1 + 968);
        if ( v10 )
        {
          if ( v10[7] || v10[8] || (v10[5] & 0x4000) != 0 || (*v10 & 0x200000) != 0 )
            v9 = 0;
        }
      }
      if ( v9 == *(unsigned __int8 *)(BugCheckParameter1 + 516) )
        goto LABEL_25;
      v24 = (unsigned __int64)CurrentPrcb;
      memset(v25, 0, sizeof(v25));
      KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 1, (unsigned __int64 *)&v24 + 1);
      *(_BYTE *)(BugCheckParameter1 + 516) = v9;
      if ( !CurrentPrcb->NextThread )
      {
        v13 = *(_DWORD *)(BugCheckParameter1 + 120) >> 1;
        v23 = CurrentPrcb;
        ProcessorCount = v13 & 1;
        if ( (_DWORD)ProcessorCount )
        {
          if ( (_DWORD)ProcessorCount != 1 )
            goto LABEL_34;
          CoreControlBlock = CurrentPrcb->CoreControlBlock;
          ProcessorCount = CoreControlBlock->ProcessorCount;
          Prcbs = (__int64 *)CoreControlBlock->Prcbs;
          if ( !CoreControlBlock->ProcessorCount )
            goto LABEL_34;
        }
        else
        {
          Prcbs = (__int64 *)&v23;
          LODWORD(ProcessorCount) = 1;
        }
        v16 = (unsigned int)ProcessorCount;
        do
        {
          v17 = *Prcbs;
          *(_BYTE *)(*(_QWORD *)(*Prcbs + 56) + 64LL) ^= (*(_BYTE *)(BugCheckParameter1 + 516) ^ *(_BYTE *)(*(_QWORD *)(*Prcbs + 56) + 64LL)) & 7;
          KiUpdateThreadQosGroupingSummaries(v17);
          ++Prcbs;
          --v16;
        }
        while ( v16 );
      }
LABEL_34:
      KiReleaseThreadStateLock(ProcessorCount, (__int64)&v24, v12);
LABEL_25:
      *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
      KeCheckAndApplyBamQos((__int64)CurrentPrcb);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v26);
      __writecr8(v26);
    }
  }
  else if ( a2 )
  {
    *(_QWORD *)(BugCheckParameter1 + 968) = a2;
    *(_DWORD *)(BugCheckParameter1 + 1024) = 32;
    _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 120), 0x16u);
    _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter1, 0x16u);
    KeSetActualBasePriorityThread(BugCheckParameter1, 1LL, a3);
  }
  else if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
  {
    KiAcquireThreadLockRaiseToDpc(BugCheckParameter1, &v26);
    if ( *(_DWORD *)(BugCheckParameter1 + 1024) != 32 )
    {
      KiClearPriorityFloor(BugCheckParameter1, &v27, *(char *)(BugCheckParameter1 + 1024), 1);
      *(_DWORD *)(BugCheckParameter1 + 1024) = 32;
    }
    v24 = 0LL;
    memset(v25, 0, sizeof(v25));
    KiAcquireThreadStateLockForWrite(BugCheckParameter1, (__int64)&v24, v18);
    _interlockedbittestandreset((volatile signed __int32 *)(BugCheckParameter1 + 120), 0x16u);
    *(_QWORD *)(BugCheckParameter1 + 968) = 0LL;
    _interlockedbittestandreset((volatile signed __int32 *)BugCheckParameter1, 0x16u);
    KiReleaseThreadStateLock(v19, (__int64)&v24, v20);
    LOBYTE(v21) = v26;
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v27, v21, v22);
    KeSetPriorityThread((PKTHREAD)BugCheckParameter1, *(char *)(BugCheckParameter1 + 563));
  }
}
