/*
 * XREFs of CmRegisterMachineHiveLoadedNotification @ 0x140856D90
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140CF6E68 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     CmpWorkItemQueueWork @ 0x14035884C (CmpWorkItemQueueWork.c)
 *     CmpFindMachineHiveByMountPoint @ 0x140857154 (CmpFindMachineHiveByMountPoint.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmRegisterMachineHiveLoadedNotification(
        __int64 a1,
        __int64 a2,
        const UNICODE_STRING *a3,
        __int64 *a4)
{
  __int64 result; // rax
  __int64 Pool2; // rax
  struct _KLOCK_ENTRIES *v9; // r9
  __int64 v10; // rdi
  AutoBoost *v11; // rax
  void *v12; // rdx
  struct _KLOCK_ENTRIES *v13; // r9
  AutoBoost *v14; // rbx
  AutoBoost *v15; // rax
  void *v16; // rdx
  AutoBoost *v17; // rbx
  wchar_t ***v18; // rcx
  volatile signed __int64 *v19; // rbx
  signed __int64 v20; // rax
  signed __int64 v21; // rdx
  volatile signed __int64 v22; // rtt
  volatile signed __int64 *v23; // rbx
  signed __int64 v24; // rax
  signed __int64 v25; // rdx
  volatile signed __int64 v26; // rtt

  if ( !a1 )
    return 3221225711LL;
  if ( !a3 )
    return 3221225713LL;
  if ( !a4 )
    return 3221225714LL;
  result = CmpFindMachineHiveByMountPoint(a3);
  if ( (int)result >= 0 )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    v10 = Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 88) = a2;
      *(_QWORD *)(Pool2 + 80) = a1;
      *(_DWORD *)(Pool2 + 104) = 0;
      *(_WORD *)(Pool2 + 108) = 0;
      *(_BYTE *)(Pool2 + 110) = 0;
      *(_QWORD *)(Pool2 + 96) = 0LL;
      *(_QWORD *)(Pool2 + 24) = 0LL;
      *(_QWORD *)(Pool2 + 32) = CmpWorkItemWrapper;
      *(_QWORD *)(Pool2 + 40) = Pool2 + 16;
      *(_QWORD *)(Pool2 + 16) = 0LL;
      *(_QWORD *)(Pool2 + 64) = CmpMachineHiveLoadedWorkItem;
      *(_DWORD *)(Pool2 + 56) = 0;
      *(_QWORD *)(Pool2 + 48) = 0LL;
      *(_DWORD *)(Pool2 + 60) = 1;
      *(_QWORD *)(Pool2 + 72) = Pool2;
      v11 = (AutoBoost *)KeAbPreAcquire((__int64)&CmpMachineHiveList[17], 0LL, 0LL, v9);
      v14 = v11;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpMachineHiveList[17], 0LL) )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)&CmpMachineHiveList[17],
          v11,
          (__int64)&CmpMachineHiveList[17]);
      if ( v14 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v14, v12);
        else
          *((_BYTE *)v14 + 10) = 1;
      }
      if ( HIDWORD(CmpMachineHiveList[14]) == 1 )
      {
        CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(v10 + 16));
      }
      else
      {
        v15 = (AutoBoost *)KeAbPreAcquire((__int64)&CmpMachineHiveList[18], 0LL, 0LL, v13);
        v17 = v15;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpMachineHiveList[18], 0LL) )
          ExfAcquirePushLockExclusiveEx(
            (unsigned __int64 *)&CmpMachineHiveList[18],
            v15,
            (__int64)&CmpMachineHiveList[18]);
        if ( v17 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v17, v16);
          else
            *((_BYTE *)v17 + 10) = 1;
        }
        v18 = (wchar_t ***)CmpMachineHiveList[20];
        if ( *v18 != &CmpMachineHiveList[19] )
          __fastfail(3u);
        *(_QWORD *)v10 = &CmpMachineHiveList[19];
        *(_QWORD *)(v10 + 8) = v18;
        v19 = (volatile signed __int64 *)&CmpMachineHiveList[18];
        *v18 = (wchar_t **)v10;
        CmpMachineHiveList[20] = (wchar_t *)v10;
        *(_BYTE *)(v10 + 109) = 1;
        _m_prefetchw(&CmpMachineHiveList[18]);
        v20 = (signed __int64)CmpMachineHiveList[18];
        v21 = v20 - 16;
        if ( (v20 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v21 = 0LL;
        if ( (v20 & 2) != 0 || (v22 = *v19, v22 != _InterlockedCompareExchange64(v19, v21, v20)) )
          ExfReleasePushLock(&CmpMachineHiveList[18]);
        KeAbPostRelease((unsigned __int64)&CmpMachineHiveList[18]);
      }
      v23 = (volatile signed __int64 *)&CmpMachineHiveList[17];
      _m_prefetchw(&CmpMachineHiveList[17]);
      v24 = (signed __int64)CmpMachineHiveList[17];
      v25 = v24 - 16;
      if ( (v24 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v25 = 0LL;
      if ( (v24 & 2) != 0 || (v26 = *v23, v26 != _InterlockedCompareExchange64(v23, v25, v24)) )
        ExfReleasePushLock(&CmpMachineHiveList[17]);
      KeAbPostRelease((unsigned __int64)&CmpMachineHiveList[17]);
      result = 0LL;
      *a4 = v10;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
