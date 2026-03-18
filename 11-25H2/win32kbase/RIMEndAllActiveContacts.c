/*
 * XREFs of RIMEndAllActiveContacts @ 0x14002C860
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x14002D684 (RIMSetDeviceOutputConfig.c)
 *     RIMResetPointerDevices @ 0x14002DBC0 (RIMResetPointerDevices.c)
 * Callees:
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x14002A8F4 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ?EndAllActiveContacts@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x14002AA90 (-EndAllActiveContacts@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     rimEndAllActiveContactsWorker @ 0x14002F41C (rimEndAllActiveContactsWorker.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 */

__int64 __fastcall RIMEndAllActiveContacts(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  InputTraceLogging::RIM::EndAllActiveContacts(*(const struct RIMDEV **)(a2 + 16));
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v7, (struct RIMLOCK *)(a1 + 104));
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v6, (struct RIMLOCK *)(a1 + 760));
  result = rimEndAllActiveContactsWorker((struct RawInputManagerObject *)a1);
  if ( v6 )
    result = RIMUnlockExclusive(v6, v4, v5);
  if ( v7 )
    return RIMUnlockExclusive(v7, v4, v5);
  return result;
}
