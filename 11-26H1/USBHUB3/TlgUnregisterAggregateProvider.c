/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x140094DBC
 * Callers:
 *     DriverCleanup @ 0x140001680 (DriverCleanup.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140094334 (CancelTimerCallbacksAndDeleteTimer.c)
 *     DestroyAggregateSession @ 0x140094524 (DestroyAggregateSession.c)
 *     LookUpTableFlushComplete @ 0x140094610 (LookUpTableFlushComplete.c)
 */

void TlgUnregisterAggregateProvider()
{
  _QWORD *v0; // rdi
  __int64 v1; // rcx
  __int64 *v2; // rdx
  __int64 *v3; // rax
  REGHANDLE v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  REGHANDLE v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  REGHANDLE v10; // rcx

  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, __int64, __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, const __m128i *))qword_14006D2F8 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_140070CF8, 0LL);
    v1 = qword_140070D00;
    v2 = &qword_140070D00;
    while ( v1 )
    {
      v3 = (__int64 *)(v1 + 352);
      if ( *(int **)(v1 + 344) == &dword_14006D2D0 )
      {
        v0 = (_QWORD *)v1;
        *v2 = *v3;
        LookUpTableFlushComplete((const __m128i *)v1);
        if ( !qword_140070D00 )
        {
          v4 = qword_140070870;
          qword_140070870 = 0LL;
          dword_140070850 = 0;
          EtwUnregister(v4);
        }
        break;
      }
      v1 = *v3;
      v2 = v3;
    }
    ExReleasePushLockExclusiveEx(&unk_140070CF8, 0LL);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer((__int64)v0, v5, v6);
    v7 = qword_14006D2F0;
    qword_14006D2F0 = 0LL;
    dword_14006D2D0 = 0;
    EtwUnregister(v7);
    qword_14006D2F8 = 0LL;
    DestroyAggregateSession(v0, v8, v9);
  }
  else
  {
    v10 = qword_14006D2F0;
    qword_14006D2F0 = 0LL;
    dword_14006D2D0 = 0;
    EtwUnregister(v10);
  }
}
