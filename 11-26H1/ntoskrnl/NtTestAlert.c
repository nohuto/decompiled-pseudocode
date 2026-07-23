/*
 * XREFs of NtTestAlert @ 0x140AAF910
 * Callers:
 *     <none>
 * Callees:
 *     KeTestAlertThread @ 0x1403DA1E0 (KeTestAlertThread.c)
 */

NTSTATUS NtTestAlert(void)
{
  return KeTestAlertThread(KeGetCurrentThread()->PreviousMode) != 0 ? 0x101 : 0;
}
