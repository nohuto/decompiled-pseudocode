/*
 * XREFs of RtlpLogHeapSubSegmentFreeCached @ 0x1801139F8
 * Callers:
 *     RtlpFreeUserBlock @ 0x180003280 (RtlpFreeUserBlock.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall RtlpLogHeapSubSegmentFreeCached(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-88h] BYREF
  __int16 v11; // [rsp+26h] [rbp-82h]
  __int64 v12; // [rsp+40h] [rbp-68h]
  __int64 v13; // [rsp+48h] [rbp-60h]
  __int64 v14; // [rsp+50h] [rbp-58h]
  __int64 v15; // [rsp+58h] [rbp-50h]
  char v16; // [rsp+60h] [rbp-48h]

  memset_thunk_772440563353939046(Fields, 0, 0x48uLL);
  v12 = a1;
  v11 = 4146;
  v13 = a2;
  v14 = a3;
  v15 = a4;
  v16 = 1;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v8 = 2147353472LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v8, 0x20402u, 0x28u, Fields);
}
