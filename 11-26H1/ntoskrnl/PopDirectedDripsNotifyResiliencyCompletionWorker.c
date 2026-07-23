/*
 * XREFs of PopDirectedDripsNotifyResiliencyCompletionWorker @ 0x1404CEDC0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PopPdcCompleteResiliencyCallback @ 0x140B260FC (PopPdcCompleteResiliencyCallback.c)
 */

void __fastcall PopDirectedDripsNotifyResiliencyCompletionWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rbx
  unsigned int v6; // ebp
  AutoBoost *v7; // rax
  AutoBoost *v8; // rsi
  __int64 v9; // rcx

  v4 = (unsigned __int64 *)(a1 + 160);
  v6 = 0;
  v7 = (AutoBoost *)KeAbPreAcquire(a1 + 160, 0LL, 0LL, a4);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v7, (__int64)v4);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v8 + 33) |= 2u;
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  if ( *(_BYTE *)(a1 + 176) )
  {
    v6 = *(_DWORD *)(a1 + 172);
    *(_DWORD *)(a1 + 172) = 0;
    *(_BYTE *)(a1 + 176) = 0;
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 216), 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((unsigned __int64)v4);
  if ( v6 )
    PopPdcCompleteResiliencyCallback(v9, v6);
}
