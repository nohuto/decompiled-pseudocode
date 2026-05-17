/*
 * XREFs of EtwLogTraceEvent @ 0x180010A60
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180056660 (RtlNtStatusToDosError.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 */

ULONG __fastcall EtwLogTraceEvent(__int64 a1, __int64 a2)
{
  ULONG result; // eax

  if ( !a2 )
    return 87;
  if ( (a1 & 0x1000000) != 0 )
    return EtwpTraceUmEvent(a1, a2, 48LL, 3222536192LL);
  result = NtTraceEvent((unsigned __int16)a1, 256LL, 48LL, a2);
  if ( result )
    return RtlNtStatusToDosError(result);
  return result;
}
