/*
 * XREFs of EtwpUnreferenceGuidEntry @ 0x140936B20
 * Callers:
 *     NtTraceEvent @ 0x140411E40 (NtTraceEvent.c)
 *     EtwGetProviderIdFromHandle @ 0x1404EA92C (EtwGetProviderIdFromHandle.c)
 *     SendCaptureStateNotificationsWorker @ 0x14082D4F0 (SendCaptureStateNotificationsWorker.c)
 *     EtwpAddGuidEntry @ 0x140920870 (EtwpAddGuidEntry.c)
 *     EtwpFindOrCreateGuidEntry @ 0x1409348B0 (EtwpFindOrCreateGuidEntry.c)
 *     EtwpRegisterUMProvider @ 0x140934B00 (EtwpRegisterUMProvider.c)
 *     EtwpDeleteRegistrationObject @ 0x140935AA0 (EtwpDeleteRegistrationObject.c)
 *     EtwpGetTraceGuidInfo @ 0x140935E90 (EtwpGetTraceGuidInfo.c)
 *     EtwpGetNextGuidEntry @ 0x1409366D0 (EtwpGetNextGuidEntry.c)
 *     EtwpGetGuidList @ 0x1409368A0 (EtwpGetGuidList.c)
 *     EtwpFreeGuidEntry @ 0x140936C7C (EtwpFreeGuidEntry.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x14093737C (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpUpdateGuidEnableInfo @ 0x140937CC0 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpNotifyGuid @ 0x140938434 (EtwpNotifyGuid.c)
 *     EtwpGetTraceGroupInfo @ 0x140939330 (EtwpGetTraceGroupInfo.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409399BC (EtwpNotifyDisallowedGuidChange.c)
 *     EtwpRegisterKMProvider @ 0x14093B298 (EtwpRegisterKMProvider.c)
 *     EtwpAddRegEntryToGroup @ 0x14093B720 (EtwpAddRegEntryToGroup.c)
 *     EtwUnregister @ 0x140A84ED0 (EtwUnregister.c)
 *     EtwpEnableGuid @ 0x140ADA008 (EtwpEnableGuid.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     EtwpFreeGuidEntry @ 0x140936C7C (EtwpFreeGuidEntry.c)
 */

__int64 __fastcall EtwpUnreferenceGuidEntry(
        __int64 *BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rdi
  __int64 v7; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rcx
  unsigned __int64 *v10; // rbp
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // r14
  __int64 *v14; // rax
  __int64 **v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8

  v5 = _InterlockedDecrement64(BugCheckParameter2 + 4);
  if ( v5 )
  {
    if ( v5 < 0 )
      KeBugCheckEx(0x11Du, 9uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  else
  {
    v7 = BugCheckParameter2[81] + 768;
    CurrentThread = KeGetCurrentThread();
    v9 = 56LL
       * (((unsigned __int8)*((_DWORD *)BugCheckParameter2 + 10) ^ (unsigned __int8)(*((_BYTE *)BugCheckParameter2 + 44) ^ *((_BYTE *)BugCheckParameter2 + 48) ^ *((_BYTE *)BugCheckParameter2 + 52))) & 0x3F);
    --CurrentThread->KernelApcDisable;
    v10 = (unsigned __int64 *)(v9 + v7);
    v11 = (AutoBoost *)KeAbPreAcquire((__int64)v10, 0LL, 0LL, a4);
    v13 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v11, (__int64)v10);
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v13, v12);
      else
        *((_BYTE *)v13 + 10) = 1;
    }
    v14 = (__int64 *)*BugCheckParameter2;
    if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2
      || (v15 = (__int64 **)BugCheckParameter2[1], *v15 != BugCheckParameter2) )
    {
      __fastfail(3u);
    }
    *v15 = v14;
    v14[1] = (__int64)v15;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10);
    KeAbPostRelease((unsigned __int64)v10);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v16, v17);
    EtwpFreeGuidEntry(BugCheckParameter2);
  }
  return v5;
}
