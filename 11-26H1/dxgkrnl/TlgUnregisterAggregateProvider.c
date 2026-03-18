/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x14028A7CC
 * Callers:
 *     ?DxgkCleanupTelemetry@@YAXXZ @ 0x140079D4C (-DxgkCleanupTelemetry@@YAXXZ.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x14028A1E8 (CancelTimerCallbacksAndDeleteTimer.c)
 *     DestroyAggregateSession @ 0x14028A3D8 (DestroyAggregateSession.c)
 *     LookUpTableFlushComplete @ 0x1403FC990 (LookUpTableFlushComplete.c)
 */

void __fastcall TlgUnregisterAggregateProvider(__int64 a1)
{
  _QWORD *v2; // rsi
  __int64 *i; // rdx
  __int64 v4; // rcx
  REGHANDLE v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  REGHANDLE v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  REGHANDLE v11; // rcx

  if ( *(void (__fastcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(a1 + 40) == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v2 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_140169760, 0LL);
    for ( i = &qword_140169768; ; i = (__int64 *)(v4 + 352) )
    {
      v4 = *i;
      if ( !*i )
        break;
      if ( *(_QWORD *)(v4 + 344) == a1 )
      {
        v2 = (_QWORD *)*i;
        *i = *(_QWORD *)(v4 + 352);
        LookUpTableFlushComplete();
        if ( !qword_140169768 )
        {
          v5 = qword_140167098;
          qword_140167098 = 0LL;
          dword_140167078 = 0;
          EtwUnregister(v5);
        }
        break;
      }
    }
    ExReleasePushLockExclusiveEx(&unk_140169760, 0LL);
    if ( v2 )
      CancelTimerCallbacksAndDeleteTimer((__int64)v2, v6, v7);
    v8 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_DWORD *)a1 = 0;
    EtwUnregister(v8);
    *(_QWORD *)(a1 + 40) = 0LL;
    DestroyAggregateSession(v2, v9, v10);
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_DWORD *)a1 = 0;
    EtwUnregister(v11);
  }
}
