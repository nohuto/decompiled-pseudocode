/*
 * XREFs of PpmEventTraceProcessorLatencyLimitChange @ 0x140255FA8
 * Callers:
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x14028FA08 (PpmIdleUpdateProcessorLatencyLimit.c)
 * Callees:
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x140255F60 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PpmEventTraceProcessorLatencyLimitChange(__int64 a1, int a2)
{
  const GUID *ActivityId; // r10
  __int64 v3; // r9
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v5; // r11
  unsigned __int8 v6; // al
  __int16 v7; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 v9; // [rsp+58h] [rbp-28h]
  __int64 v10; // [rsp+60h] [rbp-20h]
  int *v11; // [rsp+68h] [rbp-18h]
  __int64 v12; // [rsp+70h] [rbp-10h]
  int v13; // [rsp+98h] [rbp+18h] BYREF

  v13 = a2;
  ActivityId = 0LL;
  v3 = a1;
  if ( PpmEtwRegistered && PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink )
  {
    if ( (Flink = PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink[2].Flink, v5 = 2LL, LODWORD(Flink[6].Flink))
      && ((v6 = BYTE4(Flink[6].Flink), v6 >= 5u) || !v6)
      && ((__int64)Flink[7].Flink & 2) != 0
      && (struct _LIST_ENTRY *)((__int64)Flink[7].Blink & 2) == Flink[7].Blink
      || HIWORD(PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink[6].Flink)
      && EtwpLevelKeywordEnabled(
           (__int64)&PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink[2].Blink[6],
           5u,
           2LL) )
    {
      v7 = *(unsigned __int8 *)(v3 + 208);
      UserData.Ptr = (ULONGLONG)&v7;
      v9 = v3 + 209;
      *(_QWORD *)&UserData.Size = v5;
      v11 = &v13;
      v10 = 1LL;
      v12 = 4LL;
      EtwWriteEx(
        (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
        &PPM_ETW_PROCESSOR_LATENCY_CHANGE,
        0LL,
        0,
        ActivityId,
        ActivityId,
        3u,
        &UserData);
    }
  }
}
