/*
 * XREFs of ProcLibDriverCleanup @ 0x14002D250
 * Callers:
 *     DriverEntry @ 0x14004A5E0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS ProcLibDriverCleanup()
{
  REGHANDLE v0; // rcx
  NTSTATUS result; // eax

  if ( ProcLibEtwRegistered )
  {
    v0 = RegHandle;
    RegHandle = 0LL;
    dword_140018C60 = 0;
    EtwUnregister(v0);
    result = EtwUnregister((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink);
    ProcLibEtwRegistered = 0;
  }
  return result;
}
