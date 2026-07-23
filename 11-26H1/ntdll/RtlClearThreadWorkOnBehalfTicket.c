/*
 * XREFs of RtlClearThreadWorkOnBehalfTicket @ 0x180028110
 * Callers:
 *     TppCallbackPerformDeferredWork @ 0x180026C20 (TppCallbackPerformDeferredWork.c)
 *     TpWorkOnBehalfClearTicket @ 0x1800278C0 (TpWorkOnBehalfClearTicket.c)
 *     TppWorkerThread @ 0x180028B50 (TppWorkerThread.c)
 * Callees:
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 */

NTSTATUS RtlClearThreadWorkOnBehalfTicket()
{
  NTSTATUS result; // eax
  __int64 ThreadInformation; // [rsp+30h] [rbp+8h] BYREF

  ThreadInformation = 0LL;
  if ( !*(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket )
    return 0;
  result = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadWorkOnBehalfTicket, &ThreadInformation, 8u);
  if ( result >= 0 )
    *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = ThreadInformation;
  return result;
}
