/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1400C49A0
 * Callers:
 *     ?DeInitGlobals@VIDMM_GLOBAL@@SAXXZ @ 0x14009D490 (-DeInitGlobals@VIDMM_GLOBAL@@SAXXZ.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1400C4774 (CancelTimerCallbacksAndDeleteTimer.c)
 *     DestroyAggregateSession @ 0x1400C489C (DestroyAggregateSession.c)
 *     LookUpTableFlushComplete @ 0x14011C9C0 (LookUpTableFlushComplete.c)
 */

void TlgUnregisterAggregateProvider()
{
  _QWORD *v0; // rdi
  __int64 *i; // rdx
  __int64 v2; // rcx
  REGHANDLE v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  REGHANDLE v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  REGHANDLE v9; // rcx

  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_14008A070 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_14008AB48, 0LL);
    for ( i = &qword_14008AB50; ; i = (__int64 *)(v2 + 352) )
    {
      v2 = *i;
      if ( !*i )
        break;
      if ( *(int **)(v2 + 344) == &dword_14008A048 )
      {
        v0 = (_QWORD *)*i;
        *i = *(_QWORD *)(v2 + 352);
        LookUpTableFlushComplete();
        if ( !qword_14008AB50 )
        {
          v3 = RegHandle;
          RegHandle = 0LL;
          dword_14008A080 = 0;
          EtwUnregister(v3);
        }
        break;
      }
    }
    ExReleasePushLockExclusiveEx(&unk_14008AB48, 0LL);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer((__int64)v0, v4, v5);
    v6 = qword_14008A068;
    qword_14008A068 = 0LL;
    dword_14008A048 = 0;
    EtwUnregister(v6);
    qword_14008A070 = 0LL;
    DestroyAggregateSession(v0, v7, v8);
  }
  else
  {
    v9 = qword_14008A068;
    qword_14008A068 = 0LL;
    dword_14008A048 = 0;
    EtwUnregister(v9);
  }
}
