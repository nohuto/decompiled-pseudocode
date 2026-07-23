/*
 * XREFs of CmpNotifyMachineHiveLoaded @ 0x14052619C
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x140B500D0 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     CmpWorkItemQueueWork @ 0x14035884C (CmpWorkItemQueueWork.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 */

void __fastcall CmpNotifyMachineHiveLoaded(unsigned int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rsi
  AutoBoost *v5; // rax
  volatile unsigned __int8 *v6; // rdx
  AutoBoost *v7; // rbx
  wchar_t **v8; // rbx
  wchar_t *v9; // rcx
  __int64 v10; // rax
  signed __int64 *v11; // rbx
  signed __int64 v12; // rax
  signed __int64 v13; // rdx
  signed __int64 v14; // rtt

  v4 = 23LL * a1;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&CmpMachineHiveList[v4 + 18], 0LL, 0LL, a4);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpMachineHiveList[v4 + 18], 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&CmpMachineHiveList[v4 + 18],
      v5,
      (__int64)&CmpMachineHiveList[v4 + 18]);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v6) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v7 + 33), v6, 1);
    }
    else
    {
      *((_BYTE *)v7 + 10) = 1;
    }
  }
  v8 = &CmpMachineHiveList[v4 + 19];
  while ( 1 )
  {
    v9 = *v8;
    if ( *v8 == (wchar_t *)v8 )
      break;
    if ( *((wchar_t ***)v9 + 1) != v8 || (v10 = *(_QWORD *)v9, *(wchar_t **)(*(_QWORD *)v9 + 8LL) != v9) )
      __fastfail(3u);
    *v8 = (wchar_t *)v10;
    *(_QWORD *)(v10 + 8) = v8;
    *((_BYTE *)v9 + 109) = 0;
    CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(v9 + 8));
  }
  v11 = (signed __int64 *)&CmpMachineHiveList[v4 + 18];
  _m_prefetchw(v11);
  v12 = *v11;
  v13 = *v11 - 16;
  if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v13 = 0LL;
  if ( (v12 & 2) != 0 || (v14 = *v11, v14 != _InterlockedCompareExchange64(v11, v13, v12)) )
    ExfReleasePushLock(&CmpMachineHiveList[v4 + 18]);
  KeAbPostRelease((unsigned __int64)&CmpMachineHiveList[v4 + 18]);
}
