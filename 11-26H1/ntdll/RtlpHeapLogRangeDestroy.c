/*
 * XREFs of RtlpHeapLogRangeDestroy @ 0x18006D920
 * Callers:
 *     RtlDestroyHeap @ 0x18006D090 (RtlDestroyHeap.c)
 *     RtlpHpHeapDestroy @ 0x1800DFE7C (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpHeapLogRangeDestroy(__int64 a1)
{
  __int64 v1; // rcx
  _OWORD Fields[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]

  v4 = a1;
  memset(Fields, 0, sizeof(Fields));
  WORD3(Fields[0]) = 616;
  if ( RtlGetCurrentServiceSessionId() )
    v1 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v1 = 2147353480LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v1, 0x20402u, 8u, Fields);
}
