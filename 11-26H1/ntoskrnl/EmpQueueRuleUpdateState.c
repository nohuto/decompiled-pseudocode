/*
 * XREFs of EmpQueueRuleUpdateState @ 0x1405B4AD0
 * Callers:
 *     EmpProviderDeregisterEntry @ 0x1405B4A40 (EmpProviderDeregisterEntry.c)
 *     EmpClientRuleRegisterNotification @ 0x14078CCE4 (EmpClientRuleRegisterNotification.c)
 *     EmProviderDeregister @ 0x14078CF70 (EmProviderDeregister.c)
 *     EmProviderRegisterEntry @ 0x14078D240 (EmProviderRegisterEntry.c)
 *     EmpProviderRegister @ 0x140B58860 (EmpProviderRegister.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

void __fastcall EmpQueueRuleUpdateState(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v6; // rax
  volatile unsigned __int8 *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rbx
  _QWORD *i; // rax
  _QWORD *Pool2; // rax

  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&EmpParseLock.116 + 4, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock.116 + 1, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)((char *)&EmpParseLock.116 + 4),
      v6,
      (__int64)&EmpParseLock.116 + 4);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v7) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v9 + 33), v7, 1);
    }
    else
    {
      *((_BYTE *)v9 + 10) = 1;
    }
  }
  for ( i = (_QWORD *)EmpParseLock.ThreadLock; i; i = (_QWORD *)*i )
  {
    if ( *(i - 1) == a1 )
    {
      if ( i != (_QWORD *)8 )
      {
        i[1] = 0LL;
        goto LABEL_16;
      }
      break;
    }
  }
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    *Pool2 = a1;
    Pool2[2] = a2;
    Pool2[1] = EmpParseLock.ThreadLock;
    EmpParseLock.ThreadLock = (unsigned __int64)(Pool2 + 1);
    if ( !EmpWorkerBusy )
    {
      _InterlockedExchange(&EmpWorkerBusy, 1);
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&EmpParseLock.SListFaultAddress, DelayedWorkQueue);
    }
  }
LABEL_16:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)((char *)&EmpParseLock.116 + 4), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)((char *)&EmpParseLock.116 + 4));
  KeAbPostRelease((unsigned __int64)&EmpParseLock.116 + 4);
}
