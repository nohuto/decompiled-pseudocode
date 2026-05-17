/*
 * XREFs of RtlClearThreadWorkOnBehalfTicket @ 0x18003DBA0
 * Callers:
 *     TppCallbackPerformDeferredWork @ 0x18003C6B0 (TppCallbackPerformDeferredWork.c)
 *     TpWorkOnBehalfClearTicket @ 0x18003D350 (TpWorkOnBehalfClearTicket.c)
 *     TppWorkerThread @ 0x18003E5E0 (TppWorkerThread.c)
 * Callees:
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 */

__int64 RtlClearThreadWorkOnBehalfTicket()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( !*(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket )
    return 0LL;
  result = NtSetInformationThread(-2LL, 44LL, &v1, 8LL);
  if ( (int)result >= 0 )
    *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = v1;
  return result;
}
