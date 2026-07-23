/*
 * XREFs of SSHSupportQueryInterruptTime @ 0x1404E2358
 * Callers:
 *     SshpSessionManagerInterruptTimeToSystemTime @ 0x1407E9550 (SshpSessionManagerInterruptTimeToSystemTime.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A90440 (SleepstudyHelperBuildBlocker.c)
 *     SshpTracingWriteCollectionStateChange @ 0x140B02534 (SshpTracingWriteCollectionStateChange.c)
 *     SshpTracingRundownCollectionState @ 0x140B15A34 (SshpTracingRundownCollectionState.c)
 * Callees:
 *     <none>
 */

__int64 SSHSupportQueryInterruptTime()
{
  return MEMORY[0xFFFFF78000000008];
}
