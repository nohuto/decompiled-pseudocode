/*
 * XREFs of RtlpLogHeapSubSegmentInitialize @ 0x1800752EC
 * Callers:
 *     RtlpSubSegmentInitialize @ 0x180074E80 (RtlpSubSegmentInitialize.c)
 *     RtlpSubSegmentDebugInitialize @ 0x1800753AC (RtlpSubSegmentDebugInitialize.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x1800C0E1C (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpLogHeapSubSegmentInitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v9; // rcx
  _BYTE v11[6]; // [rsp+20h] [rbp-88h] BYREF
  __int16 v12; // [rsp+26h] [rbp-82h]
  __int64 v13; // [rsp+40h] [rbp-68h]
  __int64 v14; // [rsp+48h] [rbp-60h]
  __int64 v15; // [rsp+50h] [rbp-58h]
  __int64 v16; // [rsp+58h] [rbp-50h]
  int v17; // [rsp+60h] [rbp-48h]

  memset_thunk_772440563353939046(v11, 0, 0x44uLL);
  v13 = a1;
  v12 = 4149;
  v17 = a5;
  v14 = a2;
  v15 = a3;
  v16 = a4;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v9 = 2147353472LL;
  return NtTraceEvent(*(unsigned __int8 *)v9, 132098LL, 36LL, v11);
}
