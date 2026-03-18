/*
 * XREFs of PpmEventTracePerfCheckStart @ 0x140256A98
 * Callers:
 *     PpmCheckStart @ 0x14025699C (PpmCheckStart.c)
 * Callees:
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x140255F60 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PpmEventTracePerfCheckStart(__int64 a1, int a2)
{
  const GUID *ActivityId; // r10
  struct _LIST_ENTRY *Flink; // rcx
  unsigned __int8 v4; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 *v6; // [rsp+58h] [rbp-28h]
  __int64 v7; // [rsp+60h] [rbp-20h]
  int *v8; // [rsp+68h] [rbp-18h]
  __int64 v9; // [rsp+70h] [rbp-10h]
  __int64 v10; // [rsp+90h] [rbp+10h] BYREF
  int v11; // [rsp+98h] [rbp+18h] BYREF

  v11 = a2;
  v10 = a1;
  ActivityId = 0LL;
  if ( PpmEtwRegistered && PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink )
  {
    if ( (Flink = PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink[2].Flink, LODWORD(Flink[6].Flink))
      && ((v4 = BYTE4(Flink[6].Flink), v4 >= 5u) || !v4)
      && ((__int64)Flink[7].Flink & 2) != 0
      && (struct _LIST_ENTRY *)((__int64)Flink[7].Blink & 2) == Flink[7].Blink
      || HIWORD(PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink[6].Flink)
      && EtwpLevelKeywordEnabled(
           (__int64)&PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink[2].Blink[6],
           5u,
           2LL) )
    {
      UserData.Ptr = (ULONGLONG)&PopSleepstudySessionLock.SystemCallNumber;
      *(_QWORD *)&UserData.Size = 8LL;
      v6 = &v10;
      v7 = 8LL;
      v8 = &v11;
      v9 = 4LL;
      EtwWriteEx(
        (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
        &PPM_ETW_PERF_CHECK_START,
        0LL,
        0,
        ActivityId,
        ActivityId,
        3u,
        &UserData);
    }
  }
}
