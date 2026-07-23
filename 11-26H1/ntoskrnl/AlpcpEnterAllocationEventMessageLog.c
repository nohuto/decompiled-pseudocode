/*
 * XREFs of AlpcpEnterAllocationEventMessageLog @ 0x140B155E0
 * Callers:
 *     AlpcpSendLegacySynchronousRequest @ 0x140A52C1C (AlpcpSendLegacySynchronousRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     AlpcpAllocateMessageLog @ 0x140B156FC (AlpcpAllocateMessageLog.c)
 */

void __fastcall AlpcpEnterAllocationEventMessageLog(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rbx
  unsigned __int64 MessageLog; // rax
  _QWORD *ThreadLock; // rcx
  struct _LIST_ENTRY *v11; // rdx
  struct _LIST_ENTRY *v12; // r8
  struct _LIST_ENTRY *Blink; // rax

  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&AlpcpMessageLogLock, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64(&AlpcpMessageLogLock.Header.Lock, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&AlpcpMessageLogLock, v5, (__int64)&AlpcpMessageLogLock);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v6);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  MessageLog = AlpcpAllocateMessageLog();
  if ( MessageLog )
  {
    *(_QWORD *)(MessageLog + 32) = a1;
    *(_DWORD *)(MessageLog + 40) = *(_DWORD *)(a1 + 264);
    *(_DWORD *)(MessageLog + 44) = 1;
    ThreadLock = (_QWORD *)AlpcpMessageLogLock.ThreadLock;
    if ( *(struct _KTHREAD **)AlpcpMessageLogLock.ThreadLock != (struct _KTHREAD *)&AlpcpMessageLogLock.StackBase
      || (*(_QWORD *)MessageLog = &AlpcpMessageLogLock.StackBase,
          v11 = (struct _LIST_ENTRY *)(MessageLog + 16),
          *(_QWORD *)(MessageLog + 8) = ThreadLock,
          *ThreadLock = MessageLog,
          AlpcpMessageLogLock.ThreadLock = MessageLog,
          v12 = &AlpcpMessageLogLock.Header.WaitListHead.Flink[(*(_DWORD *)(MessageLog + 40) >> 2) & 0x3FF],
          Blink = v12->Blink,
          Blink->Flink != v12) )
    {
      __fastfail(3u);
    }
    v11->Flink = v12;
    v11->Blink = Blink;
    Blink->Flink = v11;
    v12->Blink = v11;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&AlpcpMessageLogLock);
}
