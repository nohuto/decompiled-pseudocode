/*
 * XREFs of EtwNotificationUnregister @ 0x18008D530
 * Callers:
 *     LdrShutdownProcess @ 0x18007ECA0 (LdrShutdownProcess.c)
 *     SbSelectProcedure @ 0x180083640 (SbSelectProcedure.c)
 *     SbObtainTraceHandle @ 0x180084C30 (SbObtainTraceHandle.c)
 *     EtwEventUnregister @ 0x18008DC70 (EtwEventUnregister.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18008DC80 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     EtwUnregisterTraceGuids @ 0x18008E350 (EtwUnregisterTraceGuids.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800D8DE8 (LdrpLogDeprecatedDllEtwEvent.c)
 *     SbCleanupTrace @ 0x180102180 (SbCleanupTrace.c)
 *     LdrpVsmEnclaveUnregisterTelemetry @ 0x180103FA4 (LdrpVsmEnclaveUnregisterTelemetry.c)
 *     LdrpLogFatalUserCallbackException @ 0x18015D480 (LdrpLogFatalUserCallbackException.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlSetLastWin32Error @ 0x180040B90 (RtlSetLastWin32Error.c)
 *     ProviderHandleLookup @ 0x18008D650 (ProviderHandleLookup.c)
 *     ProviderHandleRemove @ 0x18008D6C0 (ProviderHandleRemove.c)
 *     EtwpFreeRegistration @ 0x18008D758 (EtwpFreeRegistration.c)
 *     EtwpRemoveRegistrationFromTable @ 0x18008D798 (EtwpRemoveRegistrationFromTable.c)
 *     EtwpDereferenceUmGuidEntry @ 0x18008D818 (EtwpDereferenceUmGuidEntry.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 */

ULONG __cdecl EtwNotificationUnregister(REGHANDLE RegHandle, PVOID *Context)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  _RTL_BALANCED_NODE *v8; // rcx

  v4 = ProviderHandleLookup(RegHandle, (unsigned int)RegHandle);
  v5 = v4;
  if ( !v4 || WORD2(RegHandle) != *(_WORD *)(v4 + 84) || !WORD2(RegHandle) || v4 == PrivateLoggerNotificationEntry )
    goto LABEL_15;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v4 + 72));
  if ( v5 != ProviderHandleLookup(v6, (unsigned int)RegHandle)
    || WORD2(RegHandle) != _InterlockedCompareExchange16((volatile signed __int16 *)(v5 + 84), 0, SWORD2(RegHandle)) )
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v5 + 72));
LABEL_15:
    RtlSetLastWin32Error(6);
    return 6;
  }
  ProviderHandleRemove(v7, (unsigned int)RegHandle);
  EtwpRemoveRegistrationFromTable((PRTL_BALANCED_NODE)v5);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v5 + 72));
  if ( (*(_WORD *)(v5 + 86) & 0x3FFF) != 0xA )
    NtClose(*(HANDLE *)(v5 + 88));
  v8 = *(_RTL_BALANCED_NODE **)(v5 + 240);
  if ( v8 )
  {
    EtwpDereferenceUmGuidEntry(v8);
    *(_QWORD *)(v5 + 240) = 0LL;
  }
  if ( Context )
    *Context = *(PVOID *)(v5 + 56);
  EtwpFreeRegistration(v5);
  return 0;
}
