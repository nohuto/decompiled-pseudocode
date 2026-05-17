/*
 * XREFs of RtlpLogHeapDecommit @ 0x180114C28
 * Callers:
 *     RtlpDecommitBlock @ 0x180017150 (RtlpDecommitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180025C70 (RtlpDeCommitFreeBlock.c)
 *     RtlpHpSegPageRangeCommit @ 0x180069850 (RtlpHpSegPageRangeCommit.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLogHeapDecommit(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rcx
  _OWORD v6[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v7; // [rsp+40h] [rbp-38h]
  __int64 v8; // [rsp+48h] [rbp-30h]
  __int64 v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+58h] [rbp-20h]

  memset(v6, 0, sizeof(v6));
  v7 = a1;
  v8 = a2;
  v9 = a3;
  v10 = a4;
  WORD3(v6[0]) = 4148;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v4 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v4 = 2147353480LL;
  return NtTraceEvent(*(unsigned __int8 *)v4, 132098LL, 28LL, v6);
}
