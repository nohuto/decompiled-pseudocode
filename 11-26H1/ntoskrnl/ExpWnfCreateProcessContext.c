/*
 * XREFs of ExpWnfCreateProcessContext @ 0x140ABC4C4
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x1409C6D00 (ExpWnfResolveScopeInstance.c)
 *     NtSetWnfProcessNotificationEvent @ 0x140ABC3F0 (NtSetWnfProcessNotificationEvent.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExpWnfDeleteProcessContext @ 0x1409FD874 (ExpWnfDeleteProcessContext.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpWnfCreateProcessContext(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // r14d
  void *Pool2; // rax
  signed __int64 v7; // rdi
  struct _KLOCK_ENTRIES *v8; // r9
  AutoBoost *v9; // rax
  void *v10; // rdx
  signed __int8 v11; // cf
  AutoBoost *v12; // rsi
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  __int64 v17; // rcx

  v4 = 0;
  v5 = 0;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v7 = (signed __int64)Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, 0x88uLL);
    *(_DWORD *)v7 = 8915206;
    *(_QWORD *)(v7 + 72) = v7 + 64;
    *(_QWORD *)(v7 + 64) = v7 + 64;
    *(_QWORD *)(v7 + 96) = v7 + 88;
    *(_QWORD *)(v7 + 88) = v7 + 88;
    *(_QWORD *)(v7 + 120) = v7 + 112;
    *(_QWORD *)(v7 + 112) = v7 + 112;
    *(_QWORD *)(v7 + 128) = 0LL;
    *(_QWORD *)(v7 + 8) = a1;
    v9 = (AutoBoost *)KeAbPreAcquire((__int64)&PspSiloMonitorLock.SuspendEvent, 0LL, 0LL, v8);
    v11 = _interlockedbittestandset64(&PspSiloMonitorLock.SuspendEvent.Header.Lock, 0LL);
    v12 = v9;
    if ( v11 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&PspSiloMonitorLock.SuspendEvent,
        v9,
        (__int64)&PspSiloMonitorLock.SuspendEvent);
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v12, v10);
      else
        *((_BYTE *)v12 + 10) = 1;
    }
    v13 = off_140FD65E0;
    v14 = (_QWORD *)(v7 + 16);
    if ( *off_140FD65E0 != (_UNKNOWN *)&ExpWnfProcessesListHead )
      __fastfail(3u);
    *v14 = &ExpWnfProcessesListHead;
    *(_QWORD *)(v7 + 24) = v13;
    *v13 = v14;
    off_140FD65E0 = (_UNKNOWN **)(v7 + 16);
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PspSiloMonitorLock.SuspendEvent.Header.Lock,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock.SuspendEvent.Header.Lock);
    KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.SuspendEvent);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1512), v7, 0LL) )
      ExpWnfDeleteProcessContext((unsigned __int64 *)v7, 1, v15, v16);
  }
  else
  {
    v5 = -1073741670;
  }
  v17 = *(_QWORD *)(a1 + 1512);
  *a2 = v17;
  if ( !v17 )
    return v5;
  return v4;
}
