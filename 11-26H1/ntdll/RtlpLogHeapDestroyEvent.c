/*
 * XREFs of RtlpLogHeapDestroyEvent @ 0x18010E640
 * Callers:
 *     RtlDestroyHeap @ 0x18007EAC0 (RtlDestroyHeap.c)
 *     RtlpHpHeapDestroy @ 0x18008E4B4 (RtlpHpHeapDestroy.c)
 * Callees:
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLogHeapDestroyEvent(__int64 a1, __int64 a2)
{
  _OWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]

  v4 = a1;
  memset(v3, 0, sizeof(v3));
  WORD3(v3[0]) = 4131;
  return NtTraceEvent(a2, 1026LL, 8LL, v3);
}
