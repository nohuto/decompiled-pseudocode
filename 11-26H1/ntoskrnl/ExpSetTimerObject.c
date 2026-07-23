/*
 * XREFs of ExpSetTimerObject @ 0x1406D2DD8
 * Callers:
 *     NtSetTimerEx @ 0x1404253F0 (NtSetTimerEx.c)
 *     NtSetTimer @ 0x140425C90 (NtSetTimer.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219CA0 (KeSetCoalescableTimer.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     KeInitializeApc @ 0x14044ED90 (KeInitializeApc.c)
 *     ObDereferenceObjectExWithTag2 @ 0x1404791B8 (ObDereferenceObjectExWithTag2.c)
 *     PsInsertVirtualizedTimer @ 0x1404B24F4 (PsInsertVirtualizedTimer.c)
 *     PoDestroyReasonContext @ 0x140503E30 (PoDestroyReasonContext.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExpCancelTimer @ 0x1406D2CE0 (ExpCancelTimer.c)
 *     ExpCheckTestsigningEnabled @ 0x14077F3DC (ExpCheckTestsigningEnabled.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     ExpCheckWakeTimerAccess @ 0x140ABF740 (ExpCheckWakeTimerAccess.c)
 */

__int64 __fastcall ExpSetTimerObject(
        PKTIMER a1,
        char a2,
        PKSPIN_LOCK *a3,
        struct _KLOCK_ENTRIES *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        unsigned int a8,
        ULONG TolerableDelay,
        _BYTE *a10)
{
  unsigned int v11; // r12d
  struct _KTHREAD *CurrentThread; // rcx
  __int64 result; // rax
  AutoBoost *v14; // rax
  volatile unsigned __int8 *v15; // rdx
  AutoBoost *v16; // rdi
  signed __int8 v17; // cf
  _KPROCESS *Process; // r13
  __int64 CurrentIrql; // rdi
  struct _KLOCK_ENTRIES *v20; // r9
  AutoBoost *v21; // rax
  volatile unsigned __int8 *v22; // rdx
  AutoBoost *v23; // rdi
  unsigned __int8 v24; // di
  struct _KTHREAD *v25; // rdi
  struct _LIST_ENTRY *p_TimerListEntry; // rax
  struct _LIST_ENTRY *p_StackBase; // rdi
  struct _LIST_ENTRY *Blink; // rdx
  KSPIN_LOCK **v29; // r8
  KSPIN_LOCK *v30; // rdi
  __int64 ProcessTimerDelay; // rcx
  unsigned int v32; // edx
  ULONG v33; // ecx
  unsigned int v34; // eax
  __int64 v35; // rax
  _QWORD *v36; // rdi
  unsigned __int8 v37; // r13
  struct _LIST_ENTRY *v38; // rax
  struct _LIST_ENTRY *KernelShadowStack; // rcx
  __int64 v40; // rdx
  struct _LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v43; // rcx
  char v44; // [rsp+40h] [rbp-78h]
  char v45; // [rsp+41h] [rbp-77h]
  __int16 v46; // [rsp+44h] [rbp-74h] BYREF
  int v47; // [rsp+48h] [rbp-70h]
  int v48; // [rsp+4Ch] [rbp-6Ch] BYREF
  unsigned int SignalState; // [rsp+50h] [rbp-68h]
  PKSPIN_LOCK SpinLock; // [rsp+58h] [rbp-60h]
  __int64 v51; // [rsp+68h] [rbp-50h]
  struct _KTHREAD *v52; // [rsp+70h] [rbp-48h]
  PKDPC Dpc; // [rsp+78h] [rbp-40h]

  v46 = 0;
  v48 = 0;
  v11 = 0;
  v47 = 0;
  v45 = 0;
  v52 = 0LL;
  if ( a6 )
  {
    if ( a7 )
    {
      if ( !(unsigned __int8)ExpCheckTestsigningEnabled() )
      {
        CurrentThread = KeGetCurrentThread();
        LOBYTE(CurrentThread) = CurrentThread->PreviousMode;
        result = ExpCheckWakeTimerAccess(CurrentThread);
        v11 = result;
        v47 = result;
        if ( (_DWORD)result )
          return result;
      }
    }
    if ( (int)qword_140F11240 >= 2 || BYTE3(PpmIdlePolicyLock.Padding[3]) )
    {
      v45 = 1;
      v52 = KeGetCurrentThread();
      --v52->KernelApcDisable;
      v14 = (AutoBoost *)KeAbPreAcquire((__int64)&ExSaPageGroupDescriptorArrayLock.1008, 0LL, 0LL, a4);
      v16 = v14;
      v17 = _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock.1008, 0LL);
      if ( v17 )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)&ExSaPageGroupDescriptorArrayLock.1008,
          v14,
          (__int64)&ExSaPageGroupDescriptorArrayLock.1008);
      if ( v16 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
        {
          LOBYTE(v15) = 2;
          AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v16 + 33), v15, 1);
        }
        else
        {
          *((_BYTE *)v16 + 10) = 1;
        }
      }
    }
    else
    {
      v11 = 1073741861;
      v47 = 1073741861;
      a6 = 0LL;
    }
  }
  Dpc = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v44 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v51 = CurrentIrql;
  if ( (_BYTE)CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  if ( a2 && (*(_DWORD *)&Process->0 & 0x10) != 0 )
  {
    KxAcquireSpinLock((PKSPIN_LOCK)&Process[3].CpuPartitionList);
    v44 = 1;
  }
  KxAcquireSpinLock((PKSPIN_LOCK)&a1[1]);
  if ( !v45 && *(_QWORD *)&a1[4].Header.Lock )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)&a1[1]);
    if ( v44 )
      KxReleaseSpinLock((PKSPIN_LOCK)&Process[3].CpuPartitionList);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8((unsigned __int8)CurrentIrql);
    v45 = 1;
    v52 = KeGetCurrentThread();
    --v52->KernelApcDisable;
    v21 = (AutoBoost *)KeAbPreAcquire((__int64)&ExSaPageGroupDescriptorArrayLock.1008, 0LL, 0LL, v20);
    v23 = v21;
    v17 = _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock.1008, 0LL);
    if ( v17 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&ExSaPageGroupDescriptorArrayLock.1008,
        v21,
        (__int64)&ExSaPageGroupDescriptorArrayLock.1008);
    if ( v23 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v22) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v23 + 33), v22, 1);
      }
      else
      {
        *((_BYTE *)v23 + 10) = 1;
      }
    }
    v24 = KeGetCurrentIrql();
    if ( v24 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v24, 2);
    LOBYTE(v51) = v24;
    if ( v44 )
      KxAcquireSpinLock((PKSPIN_LOCK)&Process[3].CpuPartitionList);
    KxAcquireSpinLock((PKSPIN_LOCK)&a1[1]);
  }
  ExpCancelTimer(a1, &v46, &v48);
  SignalState = a1->Header.SignalState;
  LODWORD(a1[3].Dpc) = a8;
  HIDWORD(a1[3].Dpc) = 0;
  a1[5].Header.LockNV = TolerableDelay;
  if ( a4 )
  {
    v25 = KeGetCurrentThread();
    KeInitializeApc(
      (__int64)&a1[1].Header.WaitListHead,
      (__int64)v25,
      2,
      (__int64)ExpTimerApcRoutine,
      0LL,
      (__int64)a4,
      a2,
      a5);
    SpinLock = (PKSPIN_LOCK)&v25[1].StackLimit;
    KxAcquireSpinLock((PKSPIN_LOCK)&v25[1].StackLimit);
    p_TimerListEntry = &a1[3].TimerListEntry;
    p_StackBase = (struct _LIST_ENTRY *)&v25[1].StackBase;
    Blink = p_StackBase->Blink;
    if ( Blink->Flink != p_StackBase )
      goto LABEL_95;
    p_TimerListEntry->Flink = p_StackBase;
    a1[3].TimerListEntry.Blink = Blink;
    Blink->Flink = p_TimerListEntry;
    p_StackBase->Blink = p_TimerListEntry;
    LOBYTE(a1[4].Dpc) |= 1u;
    KxReleaseSpinLock(SpinLock);
    Dpc = (PKDPC)&a1[2].TimerListEntry;
    ObfReferenceObjectWithTag(a1, 0x44695445u);
    a8 = 0;
  }
  v29 = a3;
  v30 = *a3;
  SpinLock = *a3;
  if ( !v44 )
    goto LABEL_63;
  if ( !a1[4].DueTime.QuadPart )
  {
    PsInsertVirtualizedTimer((KSPIN_LOCK *)Process, &a1[4].TimerListEntry.Flink, 0LL, (KSPIN_LOCK **)&a1[4].DueTime);
    v29 = a3;
  }
  _InterlockedIncrement((volatile signed __int32 *)&Process[3].PrimaryGroup);
  if ( (*(_DWORD *)&Process->0 & 0x10) != 0
    && (ProcessTimerDelay = Process->ProcessTimerDelay, (_DWORD)ProcessTimerDelay) )
  {
    v30 = *v29;
    if ( (__int64)*v29 >= 0 )
    {
      if ( (unsigned __int64)v30 <= MEMORY[0xFFFFF78000000014] )
        v30 = (KSPIN_LOCK *)MEMORY[0xFFFFF78000000014];
      v30 = (KSPIN_LOCK *)((char *)v30 + ProcessTimerDelay);
      if ( (__int64)v30 < (__int64)*v29 )
        v30 = *v29;
    }
    else if ( (__int64)((char *)v30 - ProcessTimerDelay) <= (__int64)v30 )
    {
      v30 = (KSPIN_LOCK *)((char *)v30 - ProcessTimerDelay);
    }
    SpinLock = v30;
    v32 = (unsigned int)ProcessTimerDelay / 0x2710;
    v33 = a8;
    if ( a8 && v32 + a8 > a8 )
    {
      v33 = v32 + a8;
      LODWORD(a1[3].Dpc) += v32;
LABEL_59:
      HIDWORD(a1[3].Dpc) = v32;
      goto LABEL_64;
    }
    v34 = (unsigned int)a1[3].Dpc;
    if ( v34 && v34 + v32 > v34 )
    {
      LODWORD(a1[3].Dpc) = v34 + v32;
      goto LABEL_59;
    }
  }
  else
  {
LABEL_63:
    v33 = a8;
  }
LABEL_64:
  if ( ((__int64)a1[4].Dpc & 2) != 0 )
  {
    *(_QWORD *)&a1[4].Processor = v30;
    if ( SHIDWORD(SpinLock) >= 0 )
      LOBYTE(a1[3].Processor) = 1;
    else
      LOBYTE(a1[3].Processor) = (a6 != 0) + 2;
    v35 = a6;
  }
  else
  {
    KeSetCoalescableTimer(a1, (LARGE_INTEGER)v30, v33, TolerableDelay, Dpc);
    v35 = a6;
    if ( a6 )
      _interlockedbittestandset(&a1->Header.Lock, 9u);
  }
  v36 = *(_QWORD **)&a1[4].Header.Lock;
  *(_QWORD *)&a1[4].Header.Lock = v35;
  LOBYTE(a1[4].Dpc) ^= (LOBYTE(a1[4].Dpc) ^ (4 * a7)) & 4;
  KxReleaseSpinLock((PKSPIN_LOCK)&a1[1]);
  if ( v44 )
    KxReleaseSpinLock((PKSPIN_LOCK)&Process[3].CpuPartitionList);
  v37 = v51;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v51);
  __writecr8(v37);
  if ( !v45 )
    goto LABEL_84;
  if ( v36 )
  {
    if ( a6 )
      goto LABEL_80;
    p_WaitListHead = &a1[4].Header.WaitListHead;
    Flink = a1[4].Header.WaitListHead.Flink;
    v43 = a1[4].Header.WaitListHead.Blink;
    if ( Flink->Blink == &a1[4].Header.WaitListHead && v43->Flink == p_WaitListHead )
    {
      v43->Flink = Flink;
      Flink->Blink = v43;
      p_WaitListHead->Flink = 0LL;
      goto LABEL_80;
    }
    goto LABEL_95;
  }
  if ( a6 )
  {
    v38 = &a1[4].Header.WaitListHead;
    KernelShadowStack = (struct _LIST_ENTRY *)ExSaPageGroupDescriptorArrayLock.KernelShadowStack;
    if ( *(struct _KTHREAD **)ExSaPageGroupDescriptorArrayLock.KernelShadowStack == (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.SchedulerAssistPriorityFloor )
    {
      v38->Flink = (struct _LIST_ENTRY *)&ExSaPageGroupDescriptorArrayLock.SchedulerAssistPriorityFloor;
      a1[4].Header.WaitListHead.Blink = KernelShadowStack;
      KernelShadowStack->Flink = v38;
      ExSaPageGroupDescriptorArrayLock.KernelShadowStack = &a1[4].Header.WaitListHead;
      goto LABEL_80;
    }
LABEL_95:
    __fastfail(3u);
  }
LABEL_80:
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.GlobalUpdateVpThreadPriorityListEntry.Flink,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.1008);
  KeAbPostRelease((unsigned __int64)&ExSaPageGroupDescriptorArrayLock.1008);
  KiLeaveCriticalRegionUnsafe((__int64)v52, v40);
  if ( v36 )
    PoDestroyReasonContext(v36);
LABEL_84:
  if ( v46 > 0 )
    ObDereferenceObjectExWithTag2((ULONG_PTR)a1, v46, 0x44695445u, 1);
  if ( v48 > 0 )
    ObDereferenceObjectExWithTag2((ULONG_PTR)a1, v48, 0x41695445u, 1);
  if ( a10 )
  {
    if ( a2 )
      RtlWriteUCharToUser(a10, SignalState);
    else
      *a10 = SignalState;
  }
  return v11;
}
