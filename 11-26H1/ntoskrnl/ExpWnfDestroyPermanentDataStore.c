/*
 * XREFs of ExpWnfDestroyPermanentDataStore @ 0x14084D4A8
 * Callers:
 *     ExpWnfFreeScopeInstance @ 0x1409C3FD4 (ExpWnfFreeScopeInstance.c)
 *     ExpWnfGetPermanentDataStore @ 0x140B352CC (ExpWnfGetPermanentDataStore.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWnfDestroyPermanentDataStore(_QWORD *P, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rbx
  _QWORD **v9; // rdx
  PVOID *v10; // rcx
  struct _KLOCK_ENTRIES *v11; // r9
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // rsi
  void *v15; // rcx

  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&PspSiloMonitorLock.Timer.TimerListEntry, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&PspSiloMonitorLock.Timer.TimerListEntry, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PspSiloMonitorLock.Timer.TimerListEntry,
      v5,
      (__int64)&PspSiloMonitorLock.Timer.TimerListEntry);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v6);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v9 = (_QWORD **)P[3];
  if ( v9[1] != P + 3 || (v10 = (PVOID *)P[4], *v10 != P + 3) )
    __fastfail(3u);
  *v10 = v9;
  v9[1] = v10;
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&PspSiloMonitorLock.Timer.TimerListEntry.Flink,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock.Timer.TimerListEntry);
  KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.Timer.TimerListEntry);
  v12 = (AutoBoost *)KeAbPreAcquire((__int64)(P + 1), 0LL, 0LL, v11);
  v14 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)P + 2, 0LL) )
    ExfAcquirePushLockExclusiveEx(P + 1, v12, (__int64)(P + 1));
  if ( v14 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v14, v13);
    else
      *((_BYTE *)v14 + 10) = 1;
  }
  if ( (_InterlockedExchangeAdd64(P + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(P + 1);
  KeAbPostRelease((unsigned __int64)(P + 1));
  v15 = (void *)P[2];
  if ( v15 )
    ZwClose(v15);
  ExFreePoolWithTag(P, 0x20666E57u);
}
