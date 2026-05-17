/*
 * XREFs of RtlpLogHeapAllocateEvent @ 0x1801131DC
 * Callers:
 *     RtlpAllocateNTHeapInternal @ 0x18001C810 (RtlpAllocateNTHeapInternal.c)
 *     RtlpHpMetadataAlloc @ 0x180043620 (RtlpHpMetadataAlloc.c)
 *     RtlpHpAllocateHeapSlow @ 0x180097E10 (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLogHeapAllocateEvent(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rcx
  _OWORD v6[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v7; // [rsp+40h] [rbp-38h]
  __int64 v8; // [rsp+48h] [rbp-30h]
  __int64 v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+58h] [rbp-20h]

  memset(v6, 0, sizeof(v6));
  v7 = a1;
  v8 = a3;
  v9 = a2;
  v10 = a4;
  WORD3(v6[0]) = 4129;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v4 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v4 = 2147353472LL;
  return NtTraceEvent(*(unsigned __int8 *)v4, 132098LL, 28LL, v6);
}
