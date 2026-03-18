/*
 * XREFs of AlpcpEnterAllocationEventMessageLog @ 0x140B13B20
 * Callers:
 *     AlpcpSendLegacySynchronousRequest @ 0x140A4992C (AlpcpSendLegacySynchronousRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     AlpcpAllocateMessageLog @ 0x140B13C3C (AlpcpAllocateMessageLog.c)
 */

void __fastcall AlpcpEnterAllocationEventMessageLog(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rbx
  _DWORD *MessageLog; // rax
  _QWORD *SListFaultAddress; // rcx
  unsigned __int64 *v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 **v13; // rax

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
  MessageLog = (_DWORD *)AlpcpAllocateMessageLog();
  if ( MessageLog )
  {
    *((_QWORD *)MessageLog + 4) = a1;
    MessageLog[10] = *(_DWORD *)(a1 + 264);
    MessageLog[11] = 1;
    SListFaultAddress = AlpcpMessageLogLock.SListFaultAddress;
    if ( *(struct _KTHREAD **)AlpcpMessageLogLock.SListFaultAddress != (struct _KTHREAD *)&AlpcpMessageLogLock.Header.WaitListHead.Blink
      || (*(_QWORD *)MessageLog = &AlpcpMessageLogLock.Header.WaitListHead.Blink,
          v11 = (unsigned __int64 *)(MessageLog + 4),
          *((_QWORD *)MessageLog + 1) = SListFaultAddress,
          *SListFaultAddress = MessageLog,
          AlpcpMessageLogLock.SListFaultAddress = MessageLog,
          v12 = AlpcpMessageLogLock.ThreadLock + 16LL * ((MessageLog[10] >> 2) & 0x3FF),
          v13 = *(unsigned __int64 ***)(v12 + 8),
          *v13 != (unsigned __int64 *)v12) )
    {
      __fastfail(3u);
    }
    *v11 = v12;
    v11[1] = (unsigned __int64)v13;
    *v13 = v11;
    *(_QWORD *)(v12 + 8) = v11;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&AlpcpMessageLogLock);
}
