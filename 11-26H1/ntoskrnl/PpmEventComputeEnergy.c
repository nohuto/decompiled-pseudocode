/*
 * XREFs of PpmEventComputeEnergy @ 0x1402562DC
 * Callers:
 *     PpmCheckComputeEnergy @ 0x1402560D0 (PpmCheckComputeEnergy.c)
 * Callees:
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x140255F60 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PpmEventComputeEnergy(int a1, __int64 a2)
{
  const GUID *ActivityId; // r9
  struct _LIST_ENTRY *Flink; // rcx
  unsigned __int8 v4; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  __int64 *v6; // [rsp+58h] [rbp-20h]
  __int64 v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+80h] [rbp+8h] BYREF
  __int64 v9; // [rsp+88h] [rbp+10h] BYREF

  v9 = a2;
  v8 = a1;
  ActivityId = 0LL;
  if ( PpmEtwRegistered && PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink )
  {
    if ( (Flink = PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink[2].Flink, LODWORD(Flink[6].Flink))
      && ((v4 = BYTE4(Flink[6].Flink), v4 >= 4u) || !v4)
      && ((__int64)Flink[7].Flink & 0x100LL) != 0
      && (struct _LIST_ENTRY *)((__int64)Flink[7].Blink & 0x100) == Flink[7].Blink
      || HIWORD(PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink[6].Flink)
      && EtwpLevelKeywordEnabled(
           (__int64)&PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink[2].Blink[6],
           4u,
           256LL) )
    {
      UserData.Ptr = (ULONGLONG)&v8;
      *(_QWORD *)&UserData.Size = 4LL;
      v6 = &v9;
      v7 = 8LL;
      EtwWriteEx(
        (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
        &PPM_ETW_COMPUTE_ENERGY,
        0LL,
        (ULONG)ActivityId,
        ActivityId,
        ActivityId,
        2u,
        &UserData);
    }
  }
}
