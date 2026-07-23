/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x140B7192C
 * Callers:
 *     CmpRegisterTraceLoggingProvider @ 0x14077E01C (CmpRegisterTraceLoggingProvider.c)
 *     TlgRegisterAggregateProvider @ 0x14077E5F0 (TlgRegisterAggregateProvider.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 *     KiRegisterTraceLoggingProvider @ 0x140CD0434 (KiRegisterTraceLoggingProvider.c)
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ComputeFlushPeriod @ 0x1408A658C (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x1408A661C (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1408A6758 (DestroyAggregateSession.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140917A20 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall TlgRegisterAggregateProviderEx(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *TlgAggregateSession; // rax
  unsigned int v7; // edx
  __int64 *v8; // rbx
  int v10; // edi
  struct _KLOCK_ENTRIES *v11; // r9
  AutoBoost *v12; // rax
  void *v13; // rdx
  signed __int8 v14; // cf
  AutoBoost *v15; // rdi
  struct _LIST_ENTRY **i; // rax
  struct _LIST_ENTRY *v17; // rcx

  TlgAggregateSession = CreateTlgAggregateSession(0, 1);
  v8 = TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(a1, a2, a3);
  TlgAggregateSession[41] = a2;
  TlgAggregateSession[42] = a3;
  TlgAggregateSession[43] = a1;
  *((_BYTE *)TlgAggregateSession + 373) = 0;
  *((_DWORD *)TlgAggregateSession + 92) = ComputeFlushPeriod((unsigned __int64)TlgAggregateSession, v7);
  v10 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
          a1,
          (__int64)TlgAggregateInternalRegisteredProviderEtwCallback,
          (__int64)v8);
  if ( v10 < 0 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    DestroyAggregateSession(v8);
    return (unsigned int)v10;
  }
  else
  {
    v12 = (AutoBoost *)KeAbPreAcquire((__int64)&WheapPfaLock.1008, 0LL, 0LL, v11);
    v14 = _interlockedbittestandset64((volatile signed __int32 *)&WheapPfaLock.1008, 0LL);
    v15 = v12;
    if ( v14 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&WheapPfaLock.1008, v12, (__int64)&WheapPfaLock.1008);
    if ( v15 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v15, v13);
      else
        *((_BYTE *)v15 + 10) = 1;
    }
    if ( !WheapPfaLock.InGlobalUpdateVpThreadPriorityList )
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
        (__int64)&dword_140E0A510,
        (__int64)TlgAggregateInternalProviderCallback,
        0LL);
    for ( i = &WheapPfaLock.GlobalUpdateVpThreadPriorityListEntry.Blink; ; i = &v17[22].Flink )
    {
      v17 = *i;
      if ( !*i )
        break;
      if ( v17[21].Blink == (struct _LIST_ENTRY *)a1 )
        goto LABEL_17;
    }
    *i = (struct _LIST_ENTRY *)v8;
LABEL_17:
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&WheapPfaLock.GlobalUpdateVpThreadPriorityListEntry.Flink,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&WheapPfaLock.1008);
    KeAbPostRelease((unsigned __int64)&WheapPfaLock.1008);
    return 0LL;
  }
}
