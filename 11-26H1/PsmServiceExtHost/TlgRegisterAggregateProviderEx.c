/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x18008CE38
 * Callers:
 *     CrmGlobalsStart @ 0x1800755E8 (CrmGlobalsStart.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x1800018EC (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     CreateTlgAggregateSession @ 0x18008CC48 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x18008CD24 (DestroyAggregateSession.c)
 */

__int64 TlgRegisterAggregateProviderEx()
{
  RTL_SRWLOCK *TlgAggregateSession; // rax
  RTL_SRWLOCK *v1; // rbx
  int v3; // esi
  __int64 *i; // rax
  __int64 v5; // rcx

  TlgAggregateSession = CreateTlgAggregateSession(0);
  v1 = TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_1800E12E8, 0LL, 0LL);
  TlgAggregateSession[39].Ptr = 0LL;
  TlgAggregateSession[40].Ptr = 0LL;
  TlgAggregateSession[41].Ptr = &dword_1800E12E8;
  v3 = TraceLoggingRegisterEx_EventRegister_EventSetInformation(
         (ULONGLONG *)&dword_1800E12E8,
         (ULONGLONG)TlgAggregateInternalRegisteredProviderEtwCallback,
         (ULONGLONG)TlgAggregateSession);
  if ( v3 < 0 )
  {
    qword_1800E1310 = 0LL;
    DestroyAggregateSession(v1);
    return (unsigned int)v3;
  }
  else
  {
    AcquireSRWLockExclusive(&stru_1800E34E0);
    if ( !qword_1800E34E8 )
      TraceLoggingRegisterEx_EventRegister_EventSetInformation(
        (ULONGLONG *)&dword_1800E1378,
        (ULONGLONG)TlgAggregateInternalProviderCallback,
        0LL);
    for ( i = &qword_1800E34E8; ; i = (__int64 *)(v5 + 336) )
    {
      v5 = *i;
      if ( !*i )
        break;
      if ( *(int **)(v5 + 328) == &dword_1800E12E8 )
        goto LABEL_11;
    }
    *i = (__int64)v1;
LABEL_11:
    ReleaseSRWLockExclusive(&stru_1800E34E0);
    return 0LL;
  }
}
