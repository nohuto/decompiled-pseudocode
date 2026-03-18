/*
 * XREFs of IsCurrentSessionInServerSilo @ 0x140186404
 * Callers:
 *     SetConnectCompletedState @ 0x140186370 (SetConnectCompletedState.c)
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 *     InitializeGre @ 0x1402F3768 (InitializeGre.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsCurrentSessionInServerSilo()
{
  return (unsigned int)RtlGetCurrentServiceSessionId() != 0;
}
