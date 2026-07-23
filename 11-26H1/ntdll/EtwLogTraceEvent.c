/*
 * XREFs of EtwLogTraceEvent @ 0x18005C190
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180040BE0 (RtlNtStatusToDosError.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 */

ULONG __fastcall EtwLogTraceEvent(__int64 a1, void *a2)
{
  ULONG result; // eax

  if ( !a2 )
    return 87;
  if ( (a1 & 0x1000000) != 0 )
    return EtwpTraceUmEvent(a1, a2, 48LL, 3222536192LL);
  result = NtTraceEvent((HANDLE)(unsigned __int16)a1, 0x100u, 0x30u, a2);
  if ( result )
    return RtlNtStatusToDosError(result);
  return result;
}
