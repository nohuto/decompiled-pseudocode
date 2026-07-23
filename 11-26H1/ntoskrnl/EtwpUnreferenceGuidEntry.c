/*
 * XREFs of EtwpUnreferenceGuidEntry @ 0x1409126C0
 * Callers:
 *     NtTraceEvent @ 0x1404067D0 (NtTraceEvent.c)
 *     EtwGetProviderIdFromHandle @ 0x1404E3CDC (EtwGetProviderIdFromHandle.c)
 *     SendCaptureStateNotificationsWorker @ 0x140833730 (SendCaptureStateNotificationsWorker.c)
 *     EtwpAddGuidEntry @ 0x1408FC380 (EtwpAddGuidEntry.c)
 *     EtwpFindOrCreateGuidEntry @ 0x140910460 (EtwpFindOrCreateGuidEntry.c)
 *     EtwpRegisterUMProvider @ 0x1409106B0 (EtwpRegisterUMProvider.c)
 *     EtwpDeleteRegistrationObject @ 0x140911650 (EtwpDeleteRegistrationObject.c)
 *     EtwpGetTraceGuidInfo @ 0x140911A40 (EtwpGetTraceGuidInfo.c)
 *     EtwpGetNextGuidEntry @ 0x140912280 (EtwpGetNextGuidEntry.c)
 *     EtwpGetGuidList @ 0x140912440 (EtwpGetGuidList.c)
 *     EtwpFreeGuidEntry @ 0x14091281C (EtwpFreeGuidEntry.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140912F1C (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpUpdateGuidEnableInfo @ 0x140913860 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpNotifyGuid @ 0x140913FD4 (EtwpNotifyGuid.c)
 *     EtwpGetTraceGroupInfo @ 0x140914ED0 (EtwpGetTraceGroupInfo.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x14091555C (EtwpNotifyDisallowedGuidChange.c)
 *     EtwpRegisterKMProvider @ 0x140916E38 (EtwpRegisterKMProvider.c)
 *     EtwpAddRegEntryToGroup @ 0x1409172C0 (EtwpAddRegEntryToGroup.c)
 *     EtwUnregister @ 0x1409BE550 (EtwUnregister.c)
 *     EtwpEnableGuid @ 0x140AD6AB8 (EtwpEnableGuid.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     EtwpFreeGuidEntry @ 0x14091281C (EtwpFreeGuidEntry.c)
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    EtwpFreeGuidEntry(BugCheckParameter2);
  }
  return v5;
}
