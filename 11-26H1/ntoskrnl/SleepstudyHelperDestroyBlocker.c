/*
 * XREFs of SleepstudyHelperDestroyBlocker @ 0x1404955B0
 * Callers:
 *     SleepstudyHelper_UnregisterComponent @ 0x140617250 (SleepstudyHelper_UnregisterComponent.c)
 *     SleepstudyHelper_RegisterPdoWithParentGuid @ 0x1407EA0D0 (SleepstudyHelper_RegisterPdoWithParentGuid.c)
 *     SleepstudyHelper_RegisterPdoWithParentHandle @ 0x1407EA1A0 (SleepstudyHelper_RegisterPdoWithParentHandle.c)
 *     PopPowerRequestDelete @ 0x140AD30B0 (PopPowerRequestDelete.c)
 *     SleepstudyHelper_RegisterComponentEx @ 0x140B77D80 (SleepstudyHelper_RegisterComponentEx.c)
 *     SleepstudyHelper_RegisterPdoWithParentPdo @ 0x140B77E60 (SleepstudyHelper_RegisterPdoWithParentPdo.c)
 * Callees:
 *     SshpDereferenceBlocker @ 0x1404955E0 (SshpDereferenceBlocker.c)
 */

__int64 __fastcall SleepstudyHelperDestroyBlocker(KSPIN_LOCK *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1 )
    SshpDereferenceBlocker(a1);
  else
    return (unsigned int)-1073741811;
  return v1;
}
