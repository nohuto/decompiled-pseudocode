/*
 * XREFs of ObDereferenceDeviceMap @ 0x140930784
 * Callers:
 *     ObCleanupSiloState @ 0x1407C51CC (ObCleanupSiloState.c)
 *     ObpDirectoryTeardownCallback @ 0x1408AD8B0 (ObpDirectoryTeardownCallback.c)
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 *     ObpReferenceCurrentDeviceMap @ 0x140A21A50 (ObpReferenceCurrentDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x140A21DB8 (SeGetTokenDeviceMap.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x140A21FFC (ObpSetCurrentProcessDeviceMap.c)
 *     ObpDereferenceCurrentDeviceMap @ 0x140A221A0 (ObpDereferenceCurrentDeviceMap.c)
 *     ObpReferenceDeviceMapFastRef @ 0x140A221F0 (ObpReferenceDeviceMapFastRef.c)
 *     ObpSetDeviceMap @ 0x140A2236C (ObpSetDeviceMap.c)
 *     ObClearProcessDeviceMap @ 0x140ADA628 (ObClearProcessDeviceMap.c)
 *     SepDeleteLogonSessionTrack @ 0x140B003D0 (SepDeleteLogonSessionTrack.c)
 *     ObpDeleteDeviceMap @ 0x140B5F738 (ObpDeleteDeviceMap.c)
 *     SepDeReferenceLogonSession @ 0x140B8585C (SepDeReferenceLogonSession.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ObpDeleteDeviceMap @ 0x140B5F738 (ObpDeleteDeviceMap.c)
 */

void __fastcall ObDereferenceDeviceMap(volatile signed __int64 *P, unsigned int a2)
{
  volatile signed __int64 *v3; // rdi
  signed __int64 v4; // rax
  __int64 v5; // r15
  signed __int64 v6; // rtt
  char *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 *v9; // rsi
  struct _KLOCK_ENTRIES *v10; // r9
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rbp
  __int64 v14; // rax

  v3 = P;
  _m_prefetchw((const void *)(P + 30));
  v4 = *((_QWORD *)P + 30);
  v5 = a2;
  while ( v4 - a2 > 0 )
  {
    v6 = v4;
    v4 = _InterlockedCompareExchange64(P + 30, v4 - a2, v4);
    if ( v6 == v4 )
      return;
  }
  if ( v4 != a2 )
    __fastfail(0xEu);
  ServerSiloGlobals = (char *)PsGetServerSiloGlobals(*((_QWORD *)P + 2));
  CurrentThread = KeGetCurrentThread();
  v9 = (unsigned __int64 *)(ServerSiloGlobals + 120);
  --CurrentThread->SpecialApcDisable;
  v11 = (AutoBoost *)KeAbPreAcquire((__int64)(ServerSiloGlobals + 120), 0LL, 0LL, v10);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, v11, (__int64)v9);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v12);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  v14 = _InterlockedExchangeAdd64(v3 + 30, -a2) - v5;
  if ( v14 > 0 )
  {
    v3 = 0LL;
  }
  else
  {
    if ( v14 )
      __fastfail(0xEu);
    *(_QWORD *)(*v3 + 304) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v9);
  KeAbPostRelease((unsigned __int64)v9);
  KeLeaveGuardedRegion();
  if ( v3 )
    ObpDeleteDeviceMap((PVOID)v3);
}
