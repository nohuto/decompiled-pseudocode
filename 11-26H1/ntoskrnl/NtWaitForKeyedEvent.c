/*
 * XREFs of NtWaitForKeyedEvent @ 0x140B32650
 * Callers:
 *     DifNtWaitForKeyedEventWrapper @ 0x140694D60 (DifNtWaitForKeyedEventWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphore @ 0x1403BBA30 (KeReleaseSemaphore.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtWaitForKeyedEvent(
        HANDLE KeyedEventHandle,
        PVOID KeyValue,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  PLARGE_INTEGER v4; // r12
  char v6; // r14
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // al
  char *Thread; // rcx
  unsigned __int64 *v10; // rsi
  struct _LIST_ENTRY *v11; // r13
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // r15
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY **p_Blink; // r15
  struct _LIST_ENTRY *v17; // rdx
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v19; // rcx
  NTSTATUS result; // eax
  __int64 v21; // rdx
  struct _KLOCK_ENTRIES *v22; // r9
  __int64 v23; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax
  AutoBoost *v26; // rax
  void *v27; // rdx
  AutoBoost *v28; // r15
  LIST_ENTRY *v29; // rax
  struct _KTHREAD *v30; // rcx
  struct _LIST_ENTRY *v31; // rdx
  __int64 v32; // rdx
  KPROCESSOR_MODE WaitMode; // [rsp+30h] [rbp-78h]
  NTSTATUS v34; // [rsp+34h] [rbp-74h]
  PVOID Object; // [rsp+38h] [rbp-70h] BYREF
  LARGE_INTEGER v36; // [rsp+48h] [rbp-60h] BYREF
  void *InitialStack; // [rsp+50h] [rbp-58h]
  _KPROCESS *Process; // [rsp+60h] [rbp-48h]
  HANDLE v39; // [rsp+B0h] [rbp+8h]

  v39 = KeyedEventHandle;
  v4 = Timeout;
  v34 = 0;
  v36.QuadPart = 0LL;
  InitialStack = 0LL;
  v6 = 1;
  if ( ((unsigned __int8)KeyValue & 1) != 0 )
    return -1073741585;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  WaitMode = PreviousMode;
  if ( Timeout )
  {
    if ( PreviousMode )
    {
      ProbeForRead(Timeout, 8uLL, 1u);
      KeyedEventHandle = v39;
    }
    v36 = *v4;
    v4 = &v36;
    PreviousMode = WaitMode;
  }
  if ( KeyedEventHandle )
  {
    Object = 0LL;
    result = ObReferenceObjectByHandle(KeyedEventHandle, 1u, ExpKeyedEventObjectType, PreviousMode, &Object, 0LL);
    v34 = result;
    Thread = (char *)Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    Thread = (char *)WheapConfigTableLock.WaitBlock[1].Thread;
    Object = WheapConfigTableLock.WaitBlock[1].Thread;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x20u;
  Process = CurrentThread->ApcState.Process;
  v10 = (unsigned __int64 *)&Thread[24 * (((unsigned __int64)KeyValue >> 5) & 0x3F)];
  v11 = (struct _LIST_ENTRY *)(v10 + 1);
  --CurrentThread->KernelApcDisable;
  v12 = (AutoBoost *)KeAbPreAcquire((__int64)v10, 0LL, 0LL, (struct _KLOCK_ENTRIES *)Timeout);
  v14 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
    ExfAcquirePushLockExclusiveEx(v10, v12, (__int64)v10);
  if ( v14 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v14, v13);
    else
      *((_BYTE *)v14 + 10) = 1;
  }
  for ( i = v11->Flink; ; i = i->Flink )
  {
    p_Blink = &i[-77].Blink;
    if ( i == v11 || (v17 = p_Blink[157], ((unsigned __int8)v17 & 1) == 0) )
    {
      InitialStack = CurrentThread[1].InitialStack;
      CurrentThread[1].InitialStack = KeyValue;
      p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
      v19 = (struct _LIST_ENTRY *)v10[2];
      if ( v19->Flink == v11 )
      {
        p_WaitListHead->Flink = v11;
        CurrentThread[1].Header.WaitListHead.Blink = v19;
        v19->Flink = p_WaitListHead;
        v10[2] = (unsigned __int64)p_WaitListHead;
        p_Blink = 0LL;
        goto LABEL_19;
      }
      goto LABEL_14;
    }
    if ( v17 == (struct _LIST_ENTRY *)((unsigned __int64)KeyValue | 1) && p_Blink[68] == (struct _LIST_ENTRY *)Process )
      break;
  }
  Flink = i->Flink;
  Blink = i->Blink;
  if ( i->Flink->Blink != i || Blink->Flink != i )
    goto LABEL_14;
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  i->Blink = i;
  i->Flink = i;
LABEL_19:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v10);
  KeAbPostRelease((unsigned __int64)v10);
  if ( p_Blink )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)(p_Blink + 163), 1, 1, 0);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v23);
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v21);
    v34 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, WaitMode, Alertable, v4);
    if ( !v34 )
      goto LABEL_23;
    --CurrentThread->KernelApcDisable;
    v26 = (AutoBoost *)KeAbPreAcquire((__int64)v10, 0LL, 0LL, v22);
    v28 = v26;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v26, (__int64)v10);
    if ( v28 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v28, v27);
      else
        *((_BYTE *)v28 + 10) = 1;
    }
    v29 = &CurrentThread[1].Header.WaitListHead;
    v30 = (struct _KTHREAD *)CurrentThread[1].Header.WaitListHead.Flink;
    if ( v30 != (struct _KTHREAD *)&CurrentThread[1].Header.WaitListHead )
    {
      v31 = CurrentThread[1].Header.WaitListHead.Blink;
      if ( v30->Header.WaitListHead.Flink == v29 && v31->Flink == v29 )
      {
        v31->Flink = (struct _LIST_ENTRY *)v30;
        v30->Header.WaitListHead.Flink = v31;
        CurrentThread[1].Header.WaitListHead.Blink = &CurrentThread[1].Header.WaitListHead;
        v29->Flink = v29;
        v6 = 0;
        goto LABEL_48;
      }
LABEL_14:
      __fastfail(3u);
    }
LABEL_48:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10);
    KeAbPostRelease((unsigned __int64)v10);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v32);
    if ( v6 )
      v34 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, 0, 0, 0LL);
LABEL_23:
    CurrentThread[1].InitialStack = InitialStack;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x20u;
  if ( v39 )
    ObfDereferenceObject(Object);
  return v34;
}
