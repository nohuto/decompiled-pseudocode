/*
 * XREFs of IsCurrentSessionInServerSilo @ 0x140150CF4
 * Callers:
 *     SetConnectCompletedState @ 0x140150C60 (SetConnectCompletedState.c)
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 *     InitializeGre @ 0x1402EC79C (InitializeGre.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsCurrentSessionInServerSilo()
{
  return (unsigned int)RtlGetCurrentServiceSessionId() != 0;
}
