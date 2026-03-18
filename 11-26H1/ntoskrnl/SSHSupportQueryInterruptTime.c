/*
 * XREFs of SSHSupportQueryInterruptTime @ 0x1404E9278
 * Callers:
 *     SshpSessionManagerInterruptTimeToSystemTime @ 0x1407E40FC (SshpSessionManagerInterruptTimeToSystemTime.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A89550 (SleepstudyHelperBuildBlocker.c)
 *     SshpTracingWriteCollectionStateChange @ 0x140B00804 (SshpTracingWriteCollectionStateChange.c)
 *     SshpTracingRundownCollectionState @ 0x140B13F74 (SshpTracingRundownCollectionState.c)
 * Callees:
 *     <none>
 */

__int64 SSHSupportQueryInterruptTime()
{
  return MEMORY[0xFFFFF78000000008];
}
