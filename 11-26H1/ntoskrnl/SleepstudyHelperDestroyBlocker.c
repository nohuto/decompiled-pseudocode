/*
 * XREFs of SleepstudyHelperDestroyBlocker @ 0x14049BA60
 * Callers:
 *     SleepstudyHelper_UnregisterComponent @ 0x1406143F0 (SleepstudyHelper_UnregisterComponent.c)
 *     SleepstudyHelper_RegisterPdoWithParentGuid @ 0x1407E4560 (SleepstudyHelper_RegisterPdoWithParentGuid.c)
 *     SleepstudyHelper_RegisterPdoWithParentHandle @ 0x1407E4640 (SleepstudyHelper_RegisterPdoWithParentHandle.c)
 *     SleepstudyHelper_RegisterPdoWithParentPdo @ 0x140A88BC0 (SleepstudyHelper_RegisterPdoWithParentPdo.c)
 *     PopPowerRequestDelete @ 0x140AD6100 (PopPowerRequestDelete.c)
 *     SleepstudyHelper_RegisterComponentEx @ 0x140B3D0C0 (SleepstudyHelper_RegisterComponentEx.c)
 * Callees:
 *     SshpDereferenceBlocker @ 0x14049BA90 (SshpDereferenceBlocker.c)
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
