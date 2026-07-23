/*
 * XREFs of NtReleaseKeyedEvent @ 0x140B2B3B0
 * Callers:
 *     DifNtReleaseKeyedEventWrapper @ 0x14068C0F0 (DifNtReleaseKeyedEventWrapper.c)
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

NTSTATUS __cdecl NtReleaseKeyedEvent(
        HANDLE KeyedEventHandle,
        PVOID KeyValue,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  PLARGE_INTEGER v4; // r15
  NTSTATUS v6; // r12d
  char v7; // r14
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS result; // eax
  char *Thread; // rcx
  unsigned __int64 *v12; // rsi
  struct _LIST_ENTRY *v13; // r13
  AutoBoost *v14; // rax
  void *v15; // rdx
  AutoBoost *v16; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY **p_Blink; // r13
  struct _LIST_ENTRY *v19; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v24; // rcx
  struct _KLOCK_ENTRIES *v25; // r9
  AutoBoost *v26; // rax
  void *v27; // rdx
  AutoBoost *v28; // r15
  LIST_ENTRY *v29; // rax
  struct _KTHREAD *v30; // rcx
  struct _LIST_ENTRY *v31; // rdx
  __int64 v32; // rdx
  KPROCESSOR_MODE WaitMode; // [rsp+30h] [rbp-78h]
  PVOID Object; // [rsp+38h] [rbp-70h] BYREF
  LARGE_INTEGER v35; // [rsp+48h] [rbp-60h] BYREF
  void *InitialStack; // [rsp+50h] [rbp-58h]
  AutoBoost *v37; // [rsp+60h] [rbp-48h]
  _KPROCESS *Process; // [rsp+68h] [rbp-40h]
  HANDLE v39; // [rsp+B0h] [rbp+8h]

  v39 = KeyedEventHandle;
  v4 = Timeout;
  v6 = 0;
  v35.QuadPart = 0LL;
  InitialStack = 0LL;
  v7 = 1;
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
    v35 = *v4;
    v4 = &v35;
    PreviousMode = WaitMode;
  }
  if ( KeyedEventHandle )
  {
    Object = 0LL;
    result = ObReferenceObjectByHandle(KeyedEventHandle, 2u, ExpKeyedEventObjectType, PreviousMode, &Object, 0LL);
    v6 = result;
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
  v12 = (unsigned __int64 *)&Thread[24 * (((unsigned __int64)KeyValue >> 5) & 0x3F)];
  v13 = (struct _LIST_ENTRY *)(v12 + 1);
  --CurrentThread->KernelApcDisable;
  v14 = (AutoBoost *)KeAbPreAcquire((__int64)v12, 0LL, 0LL, (struct _KLOCK_ENTRIES *)Timeout);
  v16 = v14;
  v37 = v14;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
  {
    ExfAcquirePushLockExclusiveEx(v12, v14, (__int64)v12);
    v16 = v37;
  }
  if ( v16 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v16, v15);
    else
      *((_BYTE *)v16 + 10) = 1;
  }
  Flink = v13->Flink;
  while ( Flink != v13 )
  {
    p_Blink = &Flink[-77].Blink;
    if ( Flink[2].Flink == KeyValue && p_Blink[68] == (struct _LIST_ENTRY *)Process )
    {
      v19 = Flink->Flink;
      Blink = Flink->Blink;
      if ( Flink->Flink->Blink == Flink && Blink->Flink == Flink )
      {
        Blink->Flink = v19;
        v19->Blink = Blink;
        Flink->Blink = Flink;
        Flink->Flink = Flink;
        goto LABEL_18;
      }
LABEL_26:
      __fastfail(3u);
    }
    Flink = Flink->Flink;
    v13 = (struct _LIST_ENTRY *)(v12 + 1);
  }
  InitialStack = CurrentThread[1].InitialStack;
  CurrentThread[1].InitialStack = (void *)((unsigned __int64)KeyValue | 1);
  p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
  v24 = v13->Flink;
  if ( v13->Flink->Blink != v13 )
    goto LABEL_26;
  p_WaitListHead->Flink = v24;
  CurrentThread[1].Header.WaitListHead.Blink = v13;
  v24->Blink = p_WaitListHead;
  v13->Flink = p_WaitListHead;
  p_Blink = 0LL;
LABEL_18:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v12);
  KeAbPostRelease((unsigned __int64)v12);
  if ( p_Blink )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)(p_Blink + 163), 1, 1, 0);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v22);
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v21);
    v6 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, WaitMode, Alertable, v4);
    if ( v6 )
    {
      --CurrentThread->KernelApcDisable;
      v26 = (AutoBoost *)KeAbPreAcquire((__int64)v12, 0LL, 0LL, v25);
      v28 = v26;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
        ExfAcquirePushLockExclusiveEx(v12, v26, (__int64)v12);
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
        if ( v30->Header.WaitListHead.Flink != v29 || v31->Flink != v29 )
          goto LABEL_26;
        v31->Flink = (struct _LIST_ENTRY *)v30;
        v30->Header.WaitListHead.Flink = v31;
        CurrentThread[1].Header.WaitListHead.Blink = &CurrentThread[1].Header.WaitListHead;
        v29->Flink = v29;
        v7 = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v12);
      KeAbPostRelease((unsigned __int64)v12);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v32);
      if ( v7 )
        v6 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, 0, 0, 0LL);
    }
    CurrentThread[1].InitialStack = InitialStack;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x20u;
  if ( v39 )
    ObfDereferenceObject(Object);
  return v6;
}
