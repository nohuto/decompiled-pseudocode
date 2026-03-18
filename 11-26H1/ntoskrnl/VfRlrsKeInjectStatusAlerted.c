/*
 * XREFs of VfRlrsKeInjectStatusAlerted @ 0x140C3E514
 * Callers:
 *     VerifierKeDelayExecutionThread @ 0x140C33790 (VerifierKeDelayExecutionThread.c)
 *     VerifierKeWaitForMultipleObjects @ 0x140C47010 (VerifierKeWaitForMultipleObjects.c)
 *     VerifierKeWaitForSingleObject @ 0x140C47BC0 (VerifierKeWaitForSingleObject.c)
 * Callees:
 *     VfUtilIsLocalSystem @ 0x140C21924 (VfUtilIsLocalSystem.c)
 *     VfFaultsInjectResourceFailure @ 0x140C347B4 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VfRlrsKeInjectStatusAlerted(char a1)
{
  unsigned int v1; // ebx
  struct _KPROCESS *Process; // rdi

  v1 = 0;
  if ( !a1 )
    return 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !PsInitialSystemProcess
    || Process == PsInitialSystemProcess
    || Process == PsIdleProcess
    || !(unsigned int)VfFaultsInjectResourceFailure(0) )
  {
    return 0LL;
  }
  LOBYTE(v1) = (unsigned int)VfUtilIsLocalSystem(Process) == 0;
  return v1;
}
