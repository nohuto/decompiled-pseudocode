/*
 * XREFs of VfRlrsKeInjectStatusAlerted @ 0x140B8F724
 * Callers:
 *     VerifierKeDelayExecutionThread @ 0x140B854D0 (VerifierKeDelayExecutionThread.c)
 *     VerifierKeWaitForMultipleObjects @ 0x140B85D60 (VerifierKeWaitForMultipleObjects.c)
 *     VerifierKeWaitForSingleObject @ 0x140B85E10 (VerifierKeWaitForSingleObject.c)
 * Callees:
 *     VfUtilIsLocalSystem @ 0x140B73424 (VfUtilIsLocalSystem.c)
 *     VfFaultsInjectResourceFailure @ 0x140B86588 (VfFaultsInjectResourceFailure.c)
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
