/*
 * XREFs of ObpReferenceCurrentDeviceMap @ 0x140A21A50
 * Callers:
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 *     ObQueryDeviceMapInformation @ 0x140A21800 (ObQueryDeviceMapInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetThreadServerSilo @ 0x140216AD0 (PsGetThreadServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockThreadSecurityShared @ 0x140271330 (PspUnlockThreadSecurityShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     PsGetProcessServerSilo @ 0x140470370 (PsGetProcessServerSilo.c)
 *     ObDereferenceDeviceMap @ 0x140930784 (ObDereferenceDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x140A21DB8 (SeGetTokenDeviceMap.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x140A21FFC (ObpSetCurrentProcessDeviceMap.c)
 */

volatile signed __int64 *__fastcall ObpReferenceCurrentDeviceMap(__int16 a1, signed __int64 **a2)
{
  __int64 v3; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 Process; // rdi
  __int64 ProcessServerSilo; // r15
  struct _KLOCK_ENTRIES *v7; // r9
  __int64 ThreadServerSilo; // r12
  bool v9; // r13
  struct _KTHREAD *v10; // r13
  void *v11; // rdx
  LegacyAutoBoost *v12; // rbx
  _QWORD *p_Lock; // rbx
  signed __int64 *ServerSiloGlobals; // rdi
  signed __int64 v15; // rbx
  signed __int64 v16; // rdx
  signed __int64 v17; // rax
  volatile signed __int64 *v18; // rbx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *v20; // rcx
  signed __int64 *p_Blink; // rsi
  struct _KLOCK_ENTRIES *v22; // r9
  void *v23; // rdx
  LegacyAutoBoost *v24; // rbx
  signed __int64 v25; // rax
  signed __int64 v26; // rtt
  __int64 v29; // [rsp+70h] [rbp+18h] BYREF

  *a2 = 0LL;
  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->Process;
  ProcessServerSilo = PsGetProcessServerSilo(Process);
  ThreadServerSilo = PsGetThreadServerSilo((__int64)CurrentThread);
  v9 = ProcessServerSilo != ThreadServerSilo;
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0
    && (a1 & 0x800) == 0
    && ProcessServerSilo == ThreadServerSilo
    && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    v12 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL, 0LL, v7);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&CurrentThread[1].WaitBlockList,
        0,
        v12,
        (struct _KTHREAD *)((char *)CurrentThread + 1424));
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v12, v11);
      else
        *((_BYTE *)v12 + 10) = 1;
    }
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      p_Lock = &CurrentThread[1].WaitBlock[1].Thread->Header.Lock;
      if ( !p_Lock )
        p_Lock = (_QWORD *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObjectWithTag(p_Lock, 0x746C6644u);
      PspUnlockThreadSecurityShared((__int64)CurrentThread, v10);
      v9 = ProcessServerSilo != ThreadServerSilo;
      if ( p_Lock )
      {
        if ( p_Lock[3] == 999LL )
        {
          v9 = 1;
          ObfDereferenceObjectWithTag(p_Lock, 0x746C6644u);
          goto LABEL_45;
        }
        v29 = 0LL;
        if ( (int)SeGetTokenDeviceMap(p_Lock, &v29) >= 0 )
          v3 = v29;
        ObfDereferenceObjectWithTag(p_Lock, 0x746C6644u);
        if ( v3 )
          return (volatile signed __int64 *)v3;
      }
    }
    else
    {
      PspUnlockThreadSecurityShared((__int64)CurrentThread, v10);
      v9 = ProcessServerSilo != ThreadServerSilo;
    }
  }
  if ( v9 )
  {
LABEL_45:
    ServerSiloGlobals = (signed __int64 *)PsGetServerSiloGlobals(ThreadServerSilo);
    goto LABEL_19;
  }
  ServerSiloGlobals = (signed __int64 *)(Process + 792);
LABEL_19:
  *a2 = ServerSiloGlobals;
  _m_prefetchw(ServerSiloGlobals);
  v15 = *ServerSiloGlobals;
  v16 = *ServerSiloGlobals;
  if ( (*ServerSiloGlobals & 0xF) != 0 )
  {
    do
    {
      v17 = _InterlockedCompareExchange64(ServerSiloGlobals, v15 - 1, v15);
      if ( v15 == v17 )
        break;
      v15 = v17;
      LOBYTE(v16) = v17;
    }
    while ( (v17 & 0xF) != 0 );
  }
  v18 = (volatile signed __int64 *)(v15 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (v16 & 0xF) == 0 )
  {
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v20 = KeGetCurrentThread();
    p_Blink = (signed __int64 *)&CurrentServerSiloGlobals[7].Blink;
    --v20->SpecialApcDisable;
    v24 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CurrentServerSiloGlobals[7].Blink, 0LL, 0LL, v22);
    if ( _InterlockedCompareExchange64(p_Blink, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(p_Blink, 0, v24, (struct _KTHREAD *)p_Blink);
    if ( v24 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v24, v23);
      else
        *((_BYTE *)v24 + 10) = 1;
    }
    v18 = (volatile signed __int64 *)(*ServerSiloGlobals & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v18 )
    {
      if ( _InterlockedExchangeAdd64(v18 + 30, 0xFuLL) <= 0 )
        __fastfail(0xEu);
      _m_prefetchw(ServerSiloGlobals);
      v25 = *ServerSiloGlobals;
      while ( (unsigned __int64)(v25 & 0xF) + 14 <= 0xF
           && v18 == (volatile signed __int64 *)(v25 & 0xFFFFFFFFFFFFFFF0uLL) )
      {
        v26 = v25;
        v25 = _InterlockedCompareExchange64(ServerSiloGlobals, v25 + 14, v25);
        if ( v26 == v25 )
          goto LABEL_33;
      }
      ObDereferenceDeviceMap(v18, 0xEu);
    }
LABEL_33:
    if ( _InterlockedCompareExchange64(p_Blink, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Blink);
    KeAbPostRelease((unsigned __int64)p_Blink);
    KeLeaveGuardedRegion();
  }
  if ( v18 || v9 )
    return v18;
  *a2 = 0LL;
  return (volatile signed __int64 *)ObpSetCurrentProcessDeviceMap();
}
