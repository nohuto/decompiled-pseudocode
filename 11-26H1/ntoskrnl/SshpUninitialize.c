/*
 * XREFs of SshpUninitialize @ 0x140CDD8F8
 * Callers:
 *     SshInitialize @ 0x140CDD7A8 (SshInitialize.c)
 * Callees:
 *     SleepstudyHelperDestroyLibrary @ 0x140616EC0 (SleepstudyHelperDestroyLibrary.c)
 *     SSHSupportUnregisterPowerSettingCallback @ 0x1407EA0AC (SSHSupportUnregisterPowerSettingCallback.c)
 *     EtwUnregister @ 0x1409BE550 (EtwUnregister.c)
 */

PVOID *SshpUninitialize()
{
  struct _LIST_ENTRY *Flink; // rcx
  PVOID *result; // rax

  if ( byte_140F0A838 )
  {
    SSHSupportUnregisterPowerSettingCallback();
    byte_140F0A838 = 0;
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
