/*
 * XREFs of EtwNotificationUnregister @ 0x18006D0E0
 * Callers:
 *     SbSelectProcedure @ 0x1800631F0 (SbSelectProcedure.c)
 *     SbObtainTraceHandle @ 0x1800647E0 (SbObtainTraceHandle.c)
 *     EtwEventUnregister @ 0x18006D820 (EtwEventUnregister.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18006D830 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     EtwUnregisterTraceGuids @ 0x18006DF00 (EtwUnregisterTraceGuids.c)
 *     LdrShutdownProcess @ 0x180087920 (LdrShutdownProcess.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800DBE78 (LdrpLogDeprecatedDllEtwEvent.c)
 *     SbCleanupTrace @ 0x180102E00 (SbCleanupTrace.c)
 *     LdrpVsmEnclaveUnregisterTelemetry @ 0x180104C24 (LdrpVsmEnclaveUnregisterTelemetry.c)
 *     LdrpLogFatalUserCallbackException @ 0x18015D5C0 (LdrpLogFatalUserCallbackException.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlSetLastWin32Error @ 0x180056610 (RtlSetLastWin32Error.c)
 *     ProviderHandleLookup @ 0x18006D200 (ProviderHandleLookup.c)
 *     ProviderHandleRemove @ 0x18006D270 (ProviderHandleRemove.c)
 *     EtwpFreeRegistration @ 0x18006D308 (EtwpFreeRegistration.c)
 *     EtwpRemoveRegistrationFromTable @ 0x18006D348 (EtwpRemoveRegistrationFromTable.c)
 *     EtwpDereferenceUmGuidEntry @ 0x18006D3C8 (EtwpDereferenceUmGuidEntry.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 */

__int64 __fastcall EtwNotificationUnregister(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  v4 = ProviderHandleLookup(a1, (unsigned int)a1);
  v6 = v4;
  if ( !v4 || WORD2(a1) != *(_WORD *)(v4 + 84) || !WORD2(a1) || v4 == PrivateLoggerNotificationEntry )
    goto LABEL_15;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v4 + 72), v5);
  if ( v6 != ProviderHandleLookup(v7, (unsigned int)a1)
    || WORD2(a1) != _InterlockedCompareExchange16((volatile signed __int16 *)(v6 + 84), 0, SWORD2(a1)) )
  {
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 72));
LABEL_15:
    RtlSetLastWin32Error(6u);
    return 6LL;
  }
  ProviderHandleRemove(v8, (unsigned int)a1);
  EtwpRemoveRegistrationFromTable(v6);
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 72));
  if ( (*(_WORD *)(v6 + 86) & 0x3FFF) != 0xA )
    NtClose(*(HANDLE *)(v6 + 88));
  v9 = *(_QWORD *)(v6 + 240);
  if ( v9 )
  {
    EtwpDereferenceUmGuidEntry(v9);
    *(_QWORD *)(v6 + 240) = 0LL;
  }
  if ( a2 )
    *a2 = *(_QWORD *)(v6 + 56);
  EtwpFreeRegistration(v6);
  return 0LL;
}
