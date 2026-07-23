/*
 * XREFs of RtlpPlaceActivationContextOnLiveList @ 0x18011D254
 * Callers:
 *     RtlCreateActivationContext @ 0x1800A1070 (RtlCreateActivationContext.c)
 * Callees:
 *     RtlAcquirePebLock @ 0x1800A0FC0 (RtlAcquirePebLock.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x18011D2B0 (RtlpEnsureLiveDeadListsInitialized.c)
 */

// positive sp value has been detected, the output may be wrong!
NTSTATUS __fastcall RtlpPlaceActivationContextOnLiveList(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx

  RtlpEnsureLiveDeadListsInitialized();
  RtlAcquirePebLock();
  v2 = (_QWORD *)(a1 + 8);
  v3 = g_SxsLiveActivationContexts;
  if ( *(__int64 **)(g_SxsLiveActivationContexts + 8) != &g_SxsLiveActivationContexts )
    __fastfail(3u);
  *v2 = g_SxsLiveActivationContexts;
  *(_QWORD *)(a1 + 16) = &g_SxsLiveActivationContexts;
  *(_QWORD *)(v3 + 8) = v2;
  g_SxsLiveActivationContexts = a1 + 8;
  return RtlReleasePebLock();
}
