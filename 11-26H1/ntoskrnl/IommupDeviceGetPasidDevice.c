/*
 * XREFs of IommupDeviceGetPasidDevice @ 0x140587E80
 * Callers:
 *     IommuDomainAttachDeviceEx @ 0x14059ED10 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainDetachDeviceEx @ 0x14059F030 (IommuDomainDetachDeviceEx.c)
 *     IommupDeviceDisablePasidTaggedDma @ 0x140782558 (IommupDeviceDisablePasidTaggedDma.c)
 *     IommuDeviceDelete @ 0x140786CC0 (IommuDeviceDelete.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 */

char __fastcall IommupDeviceGetPasidDevice(__int64 a1, __int64 a2, char a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rbx
  char v7; // di
  AutoBoost *v9; // rax
  volatile unsigned __int8 *v10; // rdx
  AutoBoost *v11; // rsi
  char v12; // r8
  _KTHREAD *i; // rax
  _KTHREAD *v14; // rdx
  struct _LIST_ENTRY *Flink; // rcx

  v4 = (unsigned __int64 *)(a1 + 368);
  v7 = 0;
  a4->Thread = 0LL;
  v9 = (AutoBoost *)KeAbPreAcquire(a1 + 368, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v9, (__int64)v4);
  v12 = 1;
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v10) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v11 + 33), v10, 1);
    }
    else
    {
      *((_BYTE *)v11 + 10) = 1;
    }
  }
  for ( i = *(_KTHREAD **)(a1 + 352); i != (_KTHREAD *)(a1 + 352); i = *(_KTHREAD **)&i->Header.Lock )
  {
    if ( !LODWORD(i->StackLimit) )
    {
      if ( a3 )
      {
        v14 = *(_KTHREAD **)&i->Header.Lock;
        if ( *(_KTHREAD **)(*(_QWORD *)&i->Header.Lock + 8LL) != i
          || (Flink = i->Header.WaitListHead.Flink, (_KTHREAD *)Flink->Flink != i) )
        {
          __fastfail(3u);
        }
        Flink->Flink = (struct _LIST_ENTRY *)v14;
        v14->Header.WaitListHead.Flink = Flink;
      }
      v7 = v12;
      a4->Thread = i;
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((unsigned __int64)v4);
  return v7;
}
