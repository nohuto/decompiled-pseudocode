/*
 * XREFs of RtlpTpDeleteData @ 0x180087894
 * Callers:
 *     RtlRegisterWait @ 0x180039430 (RtlRegisterWait.c)
 *     RtlQueueWorkItem @ 0x1800867E0 (RtlQueueWorkItem.c)
 *     RtlpTpWorkUnposted @ 0x180087430 (RtlpTpWorkUnposted.c)
 *     RtlCreateTimer @ 0x180087900 (RtlCreateTimer.c)
 *     RtlpTpTimerRundown @ 0x180087C3C (RtlpTpTimerRundown.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RtlpTpDeleteData(void **a1)
{
  void *v1; // rcx
  NTSTATUS result; // eax

  v1 = *a1;
  if ( v1 )
    return NtClose(v1);
  return result;
}
