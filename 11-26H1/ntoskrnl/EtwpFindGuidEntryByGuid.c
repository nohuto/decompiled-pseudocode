/*
 * XREFs of EtwpFindGuidEntryByGuid @ 0x140939130
 * Callers:
 *     NtTraceEvent @ 0x140411E40 (NtTraceEvent.c)
 *     SendCaptureStateNotificationsWorker @ 0x14082D4F0 (SendCaptureStateNotificationsWorker.c)
 *     EtwpAddGuidEntry @ 0x140920870 (EtwpAddGuidEntry.c)
 *     EtwpNotifyGuid @ 0x140938434 (EtwpNotifyGuid.c)
 *     EtwpGetTraceGroupInfo @ 0x140939330 (EtwpGetTraceGroupInfo.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409399BC (EtwpNotifyDisallowedGuidChange.c)
 *     EtwpBufferingModeFlush @ 0x140A13654 (EtwpBufferingModeFlush.c)
 *     EtwpEnableGuid @ 0x140ADA008 (EtwpEnableGuid.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall EtwpFindGuidEntryByGuid(__int64 a1, _DWORD *a2, unsigned int a3)
{
  struct _KLOCK_ENTRIES *v4; // r9
  _QWORD *v5; // r14
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **v8; // rdi
  signed __int64 *v9; // rbp
  void *v10; // rdx
  LegacyAutoBoost *v11; // rsi
  _QWORD *i; // rdx
  __int64 v13; // rax
  signed __int64 j; // r8
  signed __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8

  v4 = (struct _KLOCK_ENTRIES *)(((unsigned __int8)*a2 ^ (unsigned __int8)(a2[1] ^ a2[2] ^ a2[3])) & 0x3F);
  v5 = 0LL;
  v6 = 56LL * (_QWORD)v4 + a1 + 720;
  CurrentThread = KeGetCurrentThread();
  v8 = (_QWORD **)(v6 + 16LL * a3);
  --CurrentThread->KernelApcDisable;
  v9 = (signed __int64 *)(v6 + 48);
  v11 = (LegacyAutoBoost *)KeAbPreAcquire(v6 + 48, 0LL, 0LL, v4);
  if ( _InterlockedCompareExchange64(v9, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v9, 0, v11, (struct _KTHREAD *)v9);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  for ( i = *v8; i != v8; i = (_QWORD *)*i )
  {
    v13 = *(_QWORD *)a2 - i[5];
    if ( *(_QWORD *)a2 == i[5] )
      v13 = *((_QWORD *)a2 + 1) - i[6];
    if ( !v13 )
    {
      _m_prefetchw(i + 4);
      for ( j = i[4]; j; j = v15 )
      {
        v15 = _InterlockedCompareExchange64(i + 4, j + 1, j);
        if ( j == v15 )
        {
          if ( j < 0 )
            KeBugCheckEx(0x11Du, 9uLL, (ULONG_PTR)i, 0LL, 0LL);
          v5 = i;
          goto LABEL_18;
        }
      }
    }
  }
LABEL_18:
  if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v9);
  KeAbPostRelease((unsigned __int64)v9);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v16, v17);
  return v5;
}
