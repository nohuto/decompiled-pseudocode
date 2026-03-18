/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x140ABE9A4
 * Callers:
 *     CmpRegisterTraceLoggingProvider @ 0x1406EF78C (CmpRegisterTraceLoggingProvider.c)
 *     TlgRegisterAggregateProvider @ 0x1406EFC6C (TlgRegisterAggregateProvider.c)
 *     EtwpInitialize @ 0x140C2BE1C (EtwpInitialize.c)
 *     MmRegisterEtwProvider @ 0x140C3D7B8 (MmRegisterEtwProvider.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ComputeFlushPeriod @ 0x1408147E8 (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x14081488C (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1408149C8 (DestroyAggregateSession.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408B73B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall TlgRegisterAggregateProviderEx(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *TlgAggregateSession; // rax
  __int64 *v7; // rbx
  int v9; // esi
  __int64 *v10; // rax
  signed __int8 v11; // cf
  __int64 *v12; // rsi
  __int64 *i; // rax
  __int64 v14; // rcx

  TlgAggregateSession = CreateTlgAggregateSession(0, 1);
  v7 = TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(a1, a2, a3);
  TlgAggregateSession[41] = a2;
  TlgAggregateSession[42] = a3;
  TlgAggregateSession[43] = a1;
  *((_BYTE *)TlgAggregateSession + 373) = 0;
  *((_DWORD *)TlgAggregateSession + 92) = ComputeFlushPeriod((unsigned __int64)TlgAggregateSession);
  v9 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
         a1,
         (__int64)TlgAggregateInternalRegisteredProviderEtwCallback,
         (__int64)v7);
  if ( v9 < 0 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    DestroyAggregateSession(v7);
    return (unsigned int)v9;
  }
  else
  {
    v10 = KeAbPreAcquire((__int64)&qword_140EEF938, 0LL);
    v11 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140EEF938, 0LL);
    v12 = v10;
    if ( v11 )
      ExfAcquirePushLockExclusiveEx(&qword_140EEF938, v10, (__int64)&qword_140EEF938);
    if ( v12 )
      *((_BYTE *)v12 + 10) = 1;
    if ( !qword_140EEF940 )
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
        (__int64)&dword_140E0A3C8,
        (__int64)TlgAggregateInternalProviderCallback,
        0LL);
    for ( i = &qword_140EEF940; ; i = (__int64 *)(v14 + 352) )
    {
      v14 = *i;
      if ( !*i )
        break;
      if ( *(_QWORD *)(v14 + 344) == a1 )
        goto LABEL_15;
    }
    *i = (__int64)v7;
LABEL_15:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140EEF938, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140EEF938);
    KeAbPostRelease((ULONG_PTR)&qword_140EEF938);
    return 0LL;
  }
}
