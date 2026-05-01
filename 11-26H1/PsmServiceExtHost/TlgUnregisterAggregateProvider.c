/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x18008CF44
 * Callers:
 *     CrmGlobalsCleanup @ 0x180075274 (CrmGlobalsCleanup.c)
 * Callees:
 *     LookUpTableFlushComplete @ 0x180061FF0 (LookUpTableFlushComplete.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x18008CBDC (CancelTimerCallbacksAndDeleteTimer.c)
 */

void TlgUnregisterAggregateProvider()
{
  void *v0; // rdi
  __int64 *i; // rdx
  __int64 v2; // rcx
  REGHANDLE v3; // rcx
  REGHANDLE v4; // rcx
  REGHANDLE v5; // rcx

  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, __int64, __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, _QWORD *))qword_1800E1310 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    AcquireSRWLockExclusive(&stru_1800E34E0);
    for ( i = &qword_1800E34E8; ; i = (__int64 *)(v2 + 336) )
    {
      v2 = *i;
      if ( !*i )
        break;
      if ( *(int **)(v2 + 328) == &dword_1800E12E8 )
      {
        v0 = (void *)*i;
        *i = *(_QWORD *)(v2 + 336);
        LookUpTableFlushComplete(v2);
        if ( !qword_1800E34E8 )
        {
          v3 = qword_1800E1398;
          qword_1800E1398 = 0LL;
          dword_1800E1378 = 0;
          EventUnregister(v3);
        }
        break;
      }
    }
    ReleaseSRWLockExclusive(&stru_1800E34E0);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer((__int64)v0);
    v4 = qword_1800E1308;
    qword_1800E1308 = 0LL;
    dword_1800E12E8 = 0;
    EventUnregister(v4);
    qword_1800E1310 = 0LL;
    DestroyAggregateSession(v0);
  }
  else
  {
    v5 = qword_1800E1308;
    qword_1800E1308 = 0LL;
    dword_1800E12E8 = 0;
    EventUnregister(v5);
  }
}
