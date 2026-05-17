/*
 * XREFs of RtlpLogHeapSubSegmentFree @ 0x180017D3C
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x1800175A0 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeUserBlock @ 0x1800181A0 (RtlpFreeUserBlock.c)
 *     RtlpHpLfhSubsegmentFree @ 0x18009480C (RtlpHpLfhSubsegmentFree.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpLogHeapSubSegmentFree(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  _BYTE v15[6]; // [rsp+20h] [rbp-88h] BYREF
  __int16 v16; // [rsp+26h] [rbp-82h]
  __int64 v17; // [rsp+40h] [rbp-68h]
  __int64 v18; // [rsp+48h] [rbp-60h]
  __int64 v19; // [rsp+50h] [rbp-58h]
  __int64 v20; // [rsp+58h] [rbp-50h]
  char v21; // [rsp+60h] [rbp-48h]

  memset_thunk_772440563353939046(v15, 0, 0x48uLL);
  v17 = a1;
  v16 = 4144;
  v21 = a5;
  v18 = a2;
  v19 = a3;
  v20 = a4;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v10, v9, v11, v12) )
    v13 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v13 = 2147353472LL;
  return NtTraceEvent(*(unsigned __int8 *)v13, 132098LL, 40LL, v15);
}
