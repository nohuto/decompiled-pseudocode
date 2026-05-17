/*
 * XREFs of RtlpTpDeleteData @ 0x180067444
 * Callers:
 *     RtlRegisterWait @ 0x18004EEB0 (RtlRegisterWait.c)
 *     RtlQueueWorkItem @ 0x180066390 (RtlQueueWorkItem.c)
 *     RtlpTpWorkUnposted @ 0x180066FE0 (RtlpTpWorkUnposted.c)
 *     RtlCreateTimer @ 0x1800674B0 (RtlCreateTimer.c)
 *     RtlpTpTimerRundown @ 0x1800677EC (RtlpTpTimerRundown.c)
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
