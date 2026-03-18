/*
 * XREFs of SshpUninitialize @ 0x140CD7578
 * Callers:
 *     SshInitialize @ 0x140CD7428 (SshInitialize.c)
 * Callees:
 *     SleepstudyHelperDestroyLibrary @ 0x140614000 (SleepstudyHelperDestroyLibrary.c)
 *     SSHSupportUnregisterPowerSettingCallback @ 0x1407E453C (SSHSupportUnregisterPowerSettingCallback.c)
 *     EtwUnregister @ 0x140A84ED0 (EtwUnregister.c)
 */

PVOID *SshpUninitialize()
{
  struct _LIST_ENTRY *Flink; // rcx
  PVOID *result; // rax

  if ( LOBYTE(PsAltSystemCallRegistrationLock.KernelShadowStackLimit.AllFields) )
  {
    SSHSupportUnregisterPowerSettingCallback();
    LOBYTE(PsAltSystemCallRegistrationLock.KernelShadowStackLimit.AllFields) = 0;
  }
  if ( _InterlockedExchange(&SshpTelemetryHandleRegistered, 0) )
  {
    Flink = SshpBlockerCollections.WaitBlock[3].WaitListEntry.Flink;
    SshpBlockerCollections.WaitBlock[3].WaitListEntry.Flink = 0LL;
    *(_DWORD *)&SshpBlockerCollections.WaitBlockFill11[112] = 0;
    EtwUnregister((REGHANDLE)Flink);
  }
  if ( _InterlockedExchange(&SshpTraceHandleRegistered, 0) )
    EtwUnregister(SshpTraceHandle);
  while ( 1 )
  {
    result = &SshpLibraryList;
    if ( SshpLibraryList == &SshpLibraryList )
      break;
    SleepstudyHelperDestroyLibrary((PVOID **)SshpLibraryList);
  }
  SshpInitialized = 0;
  return result;
}
