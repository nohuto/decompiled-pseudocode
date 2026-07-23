/*
 * XREFs of DbgkpSetProcessDebugObject @ 0x14091D490
 * Callers:
 *     NtDebugActiveProcess @ 0x140947620 (NtDebugActiveProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     DbgkpMarkProcessPeb @ 0x14077895C (DbgkpMarkProcessPeb.c)
 *     DbgkpWakeTarget @ 0x14091D3BC (DbgkpWakeTarget.c)
 *     DbgkpPostFakeThreadMessages @ 0x140949760 (DbgkpPostFakeThreadMessages.c)
 *     PsGetNextProcessThread @ 0x14094ADD0 (PsGetNextProcessThread.c)
 */

__int64 DbgkpSetProcessDebugObject(PRKPROCESS PROCESS, PRKEVENT Event, int a3, ...)
{
  struct _KTHREAD *CurrentThread; // r12
  void *v4; // rsi
  int v5; // edi
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *Flink; // r15
  int v10; // eax
  struct _LIST_ENTRY *v11; // rbx
  struct _LIST_ENTRY *v12; // rdx
  int Blink_high; // eax
  struct _LIST_ENTRY *v14; // r12
  struct _LIST_ENTRY *Blink; // rax
  PVOID *v16; // rax
  struct _LIST_ENTRY *v17; // rcx
  struct _LIST_ENTRY *v18; // rax
  char *v19; // rcx
  __int64 v20; // rax
  __int64 NextProcessThread; // rbx
  PKGUARDED_MUTEX Mutex; // [rsp+30h] [rbp-20h] BYREF
  struct _KTHREAD *v24; // [rsp+38h] [rbp-18h]
  PVOID P; // [rsp+40h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+48h] [rbp-8h]
  char v27; // [rsp+98h] [rbp+48h]
  char v28; // [rsp+A0h] [rbp+50h]
  void *v29; // [rsp+A8h] [rbp+58h] BYREF
  va_list va; // [rsp+A8h] [rbp+58h]
  va_list va1; // [rsp+B0h] [rbp+60h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v29 = va_arg(va1, void *);
  CurrentThread = KeGetCurrentThread();
  p_P = &P;
  Mutex = 0LL;
  P = &P;
  v24 = CurrentThread;
  v4 = v29;
  v27 = 1;
  v5 = a3;
  v28 = 0;
  if ( a3 >= 0 )
  {
    v5 = 0;
    while ( 1 )
    {
      v28 = 1;
      ExAcquireFastMutex((PKGUARDED_MUTEX)&EmpParseLock.ApcStateFill[8]);
      if ( PROCESS[1].UserTime )
        break;
      PROCESS[1].UserTime = (unsigned __int64)Event;
      ObfReferenceObjectWithTag(v4, 0x4F676244u);
      NextProcessThread = PsGetNextProcessThread(PROCESS, v4);
      if ( !NextProcessThread )
        goto LABEL_3;
      PROCESS[1].UserTime = 0LL;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&EmpParseLock.ApcStateFill[8]);
      v28 = 0;
      ObfDereferenceObjectWithTag(v4, 0x4F676244u);
      v5 = DbgkpPostFakeThreadMessages(PROCESS, Event, NextProcessThread, &Mutex, (void **)va);
      if ( v5 < 0 )
      {
        v4 = 0LL;
        goto LABEL_3;
      }
      ObfDereferenceObjectWithTag(Mutex, 0x4F676244u);
      v4 = v29;
    }
    v5 = -1073741752;
  }
  else
  {
    v4 = 0LL;
  }
LABEL_3:
  Mutex = (PKGUARDED_MUTEX)&Event[1];
  ExAcquireFastMutex((PKGUARDED_MUTEX)&Event[1]);
  if ( v5 >= 0 )
  {
    if ( (Event[4].Header.LockNV & 1) != 0 )
    {
      PROCESS[1].UserTime = 0LL;
      v5 = -1073740972;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)&PROCESS[1].DirectoryTableBase + 1, 3u);
      PsReferenceSiloContext(Event);
    }
  }
  p_WaitListHead = &Event[3].Header.WaitListHead;
  Flink = Event[3].Header.WaitListHead.Flink;
  while ( Flink != p_WaitListHead )
  {
    v11 = Flink;
    v12 = Flink;
    Flink = Flink->Flink;
    Blink_high = HIDWORD(v11[4].Blink);
    if ( (Blink_high & 4) == 0 || (struct _KTHREAD *)v11[5].Flink != CurrentThread )
      goto LABEL_9;
    v14 = v11[4].Flink;
    if ( v5 < 0 )
    {
      if ( Flink->Blink != v11 )
        goto LABEL_18;
      Blink = v11->Blink;
      if ( Blink->Flink != v11 )
        goto LABEL_18;
      Blink->Flink = Flink;
      Flink->Blink = Blink;
LABEL_17:
      v16 = p_P;
      if ( *p_P != &P )
        goto LABEL_18;
      v12->Flink = (struct _LIST_ENTRY *)&P;
      v11->Blink = (struct _LIST_ENTRY *)v16;
      *v16 = v11;
      p_P = (PVOID *)&v11->Flink;
      goto LABEL_6;
    }
    if ( (Blink_high & 0x10) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)&v14[90], 0x80u);
      v17 = v12->Flink;
      if ( v12->Flink->Blink != v11 || (v18 = v11->Blink, v18->Flink != v11) )
LABEL_18:
        __fastfail(3u);
      v18->Flink = v17;
      v17->Blink = v18;
      goto LABEL_17;
    }
    if ( v27 )
    {
      HIDWORD(v11[4].Blink) = Blink_high & 0xFFFFFFFB;
      KeSetEvent(Event, 0, 0);
      v27 = 0;
    }
    v11[5].Flink = 0LL;
    _InterlockedOr((volatile signed __int32 *)&v14[90], 0x40u);
LABEL_6:
    v10 = HIDWORD(v11[4].Blink);
    if ( (v10 & 8) != 0 )
    {
      HIDWORD(v11[4].Blink) = v10 & 0xFFFFFFF7;
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v14[88].Blink);
    }
    CurrentThread = v24;
LABEL_9:
    p_WaitListHead = &Event[3].Header.WaitListHead;
  }
  KeReleaseGuardedMutex(Mutex);
  if ( v28 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&EmpParseLock.ApcStateFill[8]);
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x4F676244u);
  while ( 1 )
  {
    v19 = (char *)P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_18;
    v20 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_18;
    P = *(PVOID *)P;
    *(_QWORD *)(v20 + 8) = &P;
    DbgkpWakeTarget(v19);
  }
  if ( v5 >= 0 )
    DbgkpMarkProcessPeb(PROCESS);
  return (unsigned int)v5;
}
