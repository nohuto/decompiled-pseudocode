/*
 * XREFs of ObpReferenceDeviceMapFastRef @ 0x140A221F0
 * Callers:
 *     ObpSetCurrentProcessDeviceMap @ 0x140A21FFC (ObpSetCurrentProcessDeviceMap.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ObDereferenceDeviceMap @ 0x140930784 (ObDereferenceDeviceMap.c)
 */

volatile signed __int64 *__fastcall ObpReferenceDeviceMapFastRef(signed __int64 *a1)
{
  signed __int64 v2; // rdx
  signed __int64 v3; // r8
  signed __int64 v4; // rax
  unsigned __int64 v5; // rdx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  signed __int64 *p_Blink; // rsi
  struct _KLOCK_ENTRIES *v9; // r9
  void *v10; // rdx
  LegacyAutoBoost *v11; // rdi
  volatile signed __int64 *v12; // rdi
  signed __int64 v13; // rax
  signed __int64 v14; // rtt

  _m_prefetchw(a1);
  v2 = *a1;
  v3 = *a1;
  if ( (*a1 & 0xF) != 0 )
  {
    do
    {
      v4 = _InterlockedCompareExchange64(a1, v2 - 1, v2);
      if ( v2 == v4 )
        break;
      v2 = v4;
      LOBYTE(v3) = v4;
    }
    while ( (v4 & 0xF) != 0 );
  }
  v5 = v2 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v3 & 0xF) != 0 )
    return (volatile signed __int64 *)v5;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  CurrentThread = KeGetCurrentThread();
  p_Blink = (signed __int64 *)&CurrentServerSiloGlobals[7].Blink;
  --CurrentThread->SpecialApcDisable;
  v11 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CurrentServerSiloGlobals[7].Blink, 0LL, 0LL, v9);
  if ( _InterlockedCompareExchange64(p_Blink, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(p_Blink, 0, v11, (struct _KTHREAD *)p_Blink);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  v12 = (volatile signed __int64 *)(*a1 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd64(v12 + 30, 0xFuLL) <= 0 )
      __fastfail(0xEu);
    _m_prefetchw(a1);
    v13 = *a1;
    while ( (unsigned __int64)(v13 & 0xF) + 14 <= 0xF && v12 == (volatile signed __int64 *)(v13 & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange64(a1, v13 + 14, v13);
      if ( v14 == v13 )
        goto LABEL_15;
    }
    ObDereferenceDeviceMap(v12, 0xEu);
  }
LABEL_15:
  if ( _InterlockedCompareExchange64(p_Blink, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(p_Blink);
  KeAbPostRelease((unsigned __int64)p_Blink);
  KeLeaveGuardedRegion();
  return v12;
}
