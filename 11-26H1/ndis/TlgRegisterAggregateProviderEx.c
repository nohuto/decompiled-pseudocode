/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x140152938
 * Callers:
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14013A1BC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ComputeFlushPeriod @ 0x1401520F4 (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x140152184 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1401522DC (DestroyAggregateSession.c)
 */

__int64 TlgRegisterAggregateProviderEx()
{
  _QWORD *TlgAggregateSession; // rax
  unsigned int v1; // edx
  _QWORD *v2; // rbx
  __int64 v4; // rdx
  int v5; // esi
  __int64 v6; // r8
  __int64 *i; // rax
  __int64 v8; // rcx

  TlgAggregateSession = CreateTlgAggregateSession(0, 1);
  v2 = TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_14011C6C0, 0LL, 0LL);
  TlgAggregateSession[41] = 0LL;
  TlgAggregateSession[43] = &dword_14011C6C0;
  TlgAggregateSession[42] = 0LL;
  *((_BYTE *)TlgAggregateSession + 373) = 0;
  *((_DWORD *)TlgAggregateSession + 92) = ComputeFlushPeriod((unsigned __int64)TlgAggregateSession, v1);
  v5 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
         (char *)&dword_14011C6C0,
         (__int64)TlgAggregateInternalRegisteredProviderEtwCallback,
         (__int64)v2);
  if ( v5 < 0 )
  {
    qword_14011C6E8 = 0LL;
    DestroyAggregateSession(v2, v4, v6);
    return (unsigned int)v5;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_14011F770, 0LL);
    if ( !qword_14011F778 )
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
        (char *)&dword_14011C810,
        (__int64)TlgAggregateInternalProviderCallback,
        0LL);
    for ( i = &qword_14011F778; ; i = (__int64 *)(v8 + 352) )
    {
      v8 = *i;
      if ( !*i )
        break;
      if ( *(int **)(v8 + 344) == &dword_14011C6C0 )
        goto LABEL_11;
    }
    *i = (__int64)v2;
LABEL_11:
    ExReleasePushLockExclusiveEx(&unk_14011F770, 0LL);
    return 0LL;
  }
}
