/*
 * XREFs of NtReleaseKeyedEvent @ 0x140B28E70
 * Callers:
 *     DifNtReleaseKeyedEventWrapper @ 0x140688510 (DifNtReleaseKeyedEventWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphore @ 0x1403B1D20 (KeReleaseSemaphore.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtReleaseKeyedEvent(void *a1, struct _LIST_ENTRY *a2, BOOLEAN a3, struct _KLOCK_ENTRIES *a4)
{
  LARGE_INTEGER *v4; // r15
  NTSTATUS v6; // r12d
  char v7; // r14
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS result; // eax
  char *v11; // rcx
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
  void *v39; // [rsp+B0h] [rbp+8h]

  v39 = a1;
  v4 = (LARGE_INTEGER *)a4;
  v6 = 0;
  v35.QuadPart = 0LL;
  InitialStack = 0LL;
  v7 = 1;
  if ( ((unsigned __int8)a2 & 1) != 0 )
    return -1073741585;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  WaitMode = PreviousMode;
  if ( a4 )
  {
    if ( PreviousMode )
    {
      ProbeForRead(a4, 8uLL, 1u);
      a1 = v39;
    }
    v35 = *v4;
    v4 = &v35;
    PreviousMode = WaitMode;
  }
  if ( a1 )
  {
    Object = 0LL;
    result = ObReferenceObjectByHandle(a1, 2u, ExpKeyedEventObjectType, PreviousMode, &Object, 0LL);
    v6 = result;
    v11 = (char *)Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v11 = *(char **)&WheapConfigTableLock.SuspendEvent.Header.Lock;
    Object = *(PVOID *)&WheapConfigTableLock.SuspendEvent.Header.Lock;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x20u;
  Process = CurrentThread->ApcState.Process;
  v12 = (unsigned __int64 *)&v11[24 * (((unsigned __int64)a2 >> 5) & 0x3F)];
  v13 = (struct _LIST_ENTRY *)(v12 + 1);
  --CurrentThread->KernelApcDisable;
  v14 = (AutoBoost *)KeAbPreAcquire((__int64)v12, 0LL, 0LL, a4);
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
    if ( Flink[2].Flink == a2 && p_Blink[68] == (struct _LIST_ENTRY *)Process )
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
  CurrentThread[1].InitialStack = (void *)((unsigned __int64)a2 | 1);
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
    v6 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, WaitMode, a3, v4);
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
