/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1403D3CD8
 * Callers:
 *     DisableUserkTraceLogging @ 0x14028D5E0 (DisableUserkTraceLogging.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1403D37D8 (CancelTimerCallbacksAndDeleteTimer.c)
 *     DestroyAggregateSession @ 0x1403D39C0 (DestroyAggregateSession.c)
 *     LookUpTableFlushComplete @ 0x1403D415C (LookUpTableFlushComplete.c)
 */

void TlgUnregisterAggregateProvider()
{
  _QWORD *v0; // rdi
  __int64 *i; // rcx
  __int64 v2; // rax
  REGHANDLE v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  REGHANDLE v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  REGHANDLE v9; // rcx

  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_14039BBB0 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_14039C3E8, 0LL);
    for ( i = &qword_14039C3F0; ; i = (__int64 *)(v2 + 352) )
    {
      v2 = *i;
      if ( !*i )
        break;
      if ( *(int **)(v2 + 344) == &dword_14039BB88 )
      {
        v0 = (_QWORD *)*i;
        *i = *(_QWORD *)(v2 + 352);
        LookUpTableFlushComplete(v0);
        if ( !qword_14039C3F0 )
        {
          v3 = qword_14039BCC0;
          qword_14039BCC0 = 0LL;
          dword_14039BCA0 = 0;
          EtwUnregister(v3);
        }
        break;
      }
    }
    ExReleasePushLockExclusiveEx(&unk_14039C3E8, 0LL);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer((__int64)v0, v4, v5);
    v6 = qword_14039BBA8;
    qword_14039BBA8 = 0LL;
    dword_14039BB88 = 0;
    EtwUnregister(v6);
    qword_14039BBB0 = 0LL;
    DestroyAggregateSession(v0, v7, v8);
  }
  else
  {
    v9 = qword_14039BBA8;
    qword_14039BBA8 = 0LL;
    dword_14039BB88 = 0;
    EtwUnregister(v9);
  }
}
