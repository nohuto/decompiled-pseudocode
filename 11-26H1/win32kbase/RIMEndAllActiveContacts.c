/*
 * XREFs of RIMEndAllActiveContacts @ 0x140130700
 * Callers:
 *     RIMResetPointerDevices @ 0x14005EF00 (RIMResetPointerDevices.c)
 *     RIMSetDeviceOutputConfig @ 0x14007B81C (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     rimEndAllActiveContactsWorker @ 0x14007A7BC (rimEndAllActiveContactsWorker.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1401316BC (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ?EndAllActiveContacts@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x14013264C (-EndAllActiveContacts@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 */

void __fastcall RIMEndAllActiveContacts(struct RawInputManagerObject *a1, __int64 a2, _WORD *a3)
{
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  InputTraceLogging::RIM::EndAllActiveContacts(*(const struct RIMDEV **)(a2 + 16));
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
    (RIMLOCKExclusiveIfNeeded *)&v7,
    (struct RawInputManagerObject *)((char *)a1 + 104));
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
    (RIMLOCKExclusiveIfNeeded *)&v6,
    (struct RawInputManagerObject *)((char *)a1 + 760));
  rimEndAllActiveContactsWorker(a1, a2, a3);
  if ( v6 )
    RIMUnlockExclusive(v6);
  if ( v7 )
    RIMUnlockExclusive(v7);
}
