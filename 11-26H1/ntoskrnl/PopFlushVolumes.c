/*
 * XREFs of PopFlushVolumes @ 0x140C0C930
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     PopDiagTraceEventNoPayload @ 0x1404C0304 (PopDiagTraceEventNoPayload.c)
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x14060A1F8 (PopPushPowerStateTransitionRecordWithCallback.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwFlushKey @ 0x140729E00 (ZwFlushKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PsCreateSystemThread @ 0x140A78D90 (PsCreateSystemThread.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140C03138 (PoDelistPowerStateTransitionBlocker.c)
 *     PopFlushVolumeWorker @ 0x140C0CC70 (PopFlushVolumeWorker.c)
 */

void __fastcall PopFlushVolumes(int a1)
{
  char v2; // al
  char v3; // di
  char v4; // al
  char v5; // al
  int v6; // ebx
  struct _KTHREAD *KcsanThread; // rdx
  struct _KTHREAD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  struct _LIST_ENTRY *Flink; // rax
  struct _KTHREAD **v13; // rax
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _KLOCK_ENTRIES *v18; // r9
  unsigned __int64 *v19; // rcx
  unsigned __int64 **v20; // rdx
  __int64 v21; // r9
  __int64 v22; // r8
  int v23; // eax
  int v24; // eax
  unsigned __int64 ***v25; // rax
  unsigned __int64 *v26; // rax
  unsigned __int64 *StartContext; // [rsp+40h] [rbp-59h] BYREF
  struct _LIST_ENTRY *p_StartContext; // [rsp+48h] [rbp-51h]
  int v29; // [rsp+50h] [rbp-49h]
  struct _KEVENT Event; // [rsp+58h] [rbp-41h] BYREF
  char v31; // [rsp+70h] [rbp-29h]
  char v32; // [rsp+71h] [rbp-28h]
  _QWORD v33[3]; // [rsp+78h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp+27h] BYREF
  HANDLE KeyHandle; // [rsp+108h] [rbp+6Fh] BYREF
  HANDLE ThreadHandle; // [rsp+110h] [rbp+77h] BYREF

  memset(&ObjectAttributes, 0, 44);
  ThreadHandle = 0LL;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHVOLUMES_START);
  memset_0(&StartContext, 0, 0x48uLL);
  p_StartContext = (struct _LIST_ENTRY *)&StartContext;
  StartContext = (unsigned __int64 *)&StartContext;
  v33[1] = v33;
  v33[0] = v33;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( a1 == 6 )
  {
    v2 = 2;
  }
  else
  {
    v2 = PopFlushPolicy;
    if ( byte_140F10920 )
      v2 = 3;
  }
  v3 = v2 | 0x10;
  if ( a1 != 5 )
    v3 = v2;
  v4 = v31;
  if ( (v3 & 4) != 0 )
    v4 = 1;
  v31 = v4;
  v5 = v32;
  if ( (v3 & 8) != 0 )
    v5 = 1;
  v32 = v5;
  if ( (v3 & 1) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      ZwFlushKey(KeyHandle);
      ZwClose(KeyHandle);
    }
  }
  v6 = 0;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&PpmIdlePolicyLock.WriteTransferCount);
  KcsanThread = (struct _KTHREAD *)PpmIdlePolicyLock.KcsanThread;
  while ( KcsanThread != (struct _KTHREAD *)&PpmIdlePolicyLock.KcsanThread )
  {
    v8 = KcsanThread;
    KcsanThread = *(struct _KTHREAD **)&KcsanThread->Header.Lock;
    v9 = *(_QWORD *)&v8[-1].SchedulerAssistYieldCounter;
    v10 = *(_QWORD *)(v9 + 56);
    if ( (*(_BYTE *)(v10 + 4) & 1) != 0 && (*(_DWORD *)(v9 + 52) & 0x10006) == 0 )
    {
      v11 = *(_QWORD *)(v10 + 16);
      if ( !v11 || (*(_DWORD *)(v11 + 52) & 4) == 0 )
      {
        if ( (struct _KTHREAD *)KcsanThread->Header.WaitListHead.Flink != v8
          || (Flink = v8->Header.WaitListHead.Flink, (struct _KTHREAD *)Flink->Flink != v8)
          || (Flink->Flink = (struct _LIST_ENTRY *)KcsanThread,
              KcsanThread->Header.WaitListHead.Flink = Flink,
              v13 = (struct _KTHREAD **)p_StartContext,
              (unsigned __int64 **)p_StartContext->Flink != &StartContext) )
        {
LABEL_24:
          __fastfail(3u);
        }
        v8->Header.WaitListHead.Flink = p_StartContext;
        *(_QWORD *)&v8->Header.Lock = &StartContext;
        ++v6;
        *v13 = v8;
        p_StartContext = (struct _LIST_ENTRY *)v8;
      }
    }
  }
  if ( (v3 & 2) == 0 )
  {
    v19 = StartContext;
    while ( v19 != (unsigned __int64 *)&StartContext )
    {
      v20 = (unsigned __int64 **)v19;
      v19 = (unsigned __int64 *)*v19;
      v21 = (__int64)*(v20 - 7);
      if ( (*(_DWORD *)(v21 + 52) & 1) == 0 )
      {
        v22 = *(_QWORD *)(*(_QWORD *)(v21 + 56) + 16LL);
        if ( !v22 || (*(_DWORD *)(v22 + 52) & 1) == 0 )
        {
          if ( (v3 & 0x10) == 0
            || ((v23 = *(_DWORD *)(v21 + 48), (v23 & 0x200000) == 0) || (v23 & 0x100) != 0)
            && (!v22 || (v24 = *(_DWORD *)(v22 + 48), (v24 & 0x200000) == 0) || (v24 & 0x100) != 0) )
          {
            if ( (unsigned __int64 **)v19[1] != v20 )
              goto LABEL_24;
            v25 = (unsigned __int64 ***)v20[1];
            if ( *v25 != v20 )
              goto LABEL_24;
            *v25 = (unsigned __int64 **)v19;
            v19[1] = (unsigned __int64)v25;
            v26 = *(unsigned __int64 **)&PpmIdlePolicyLock.SchedulerAssistYieldCounter;
            if ( **(struct _KTHREAD ***)&PpmIdlePolicyLock.SchedulerAssistYieldCounter != (struct _KTHREAD *)&PpmIdlePolicyLock.KcsanThread )
              goto LABEL_24;
            *v20 = &PpmIdlePolicyLock.KcsanThread;
            --v6;
            v20[1] = v26;
            *v26 = (unsigned __int64)v20;
            *(_QWORD *)&PpmIdlePolicyLock.SchedulerAssistYieldCounter = v20;
          }
        }
      }
    }
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&PpmIdlePolicyLock.WriteTransferCount);
  if ( v6 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    if ( v6 > 8 )
      v6 = 8;
    ObjectAttributes.ObjectName = 0LL;
    v29 = v6;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    while ( --v6 > 0 )
    {
      if ( PsCreateSystemThread(
             &ThreadHandle,
             0x1FFFFFu,
             &ObjectAttributes,
             0LL,
             0LL,
             PopFlushVolumeWorker,
             &StartContext) < 0 )
      {
        ExAcquireFastMutex((PKGUARDED_MUTEX)&PpmIdlePolicyLock.WriteTransferCount);
        v29 -= v6;
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)&PpmIdlePolicyLock.WriteTransferCount);
        break;
      }
      ZwClose(ThreadHandle);
    }
    v14 = PopPushPowerStateTransitionRecordWithCallback(
            KeGetCurrentThread()->ApcState.Process,
            KeGetCurrentThread(),
            (__int64)&StartContext,
            (struct _KLOCK_ENTRIES *)1,
            (__int64)PopFlushVolumeBlameResolverCallback);
    PopFlushVolumeWorker(&StartContext);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( v14 >= 0 )
      PoDelistPowerStateTransitionBlocker(v16, v15, v17, v18);
  }
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHVOLUMES_STOP);
}
