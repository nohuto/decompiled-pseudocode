/*
 * XREFs of RIMFreeAsyncWorkItem @ 0x14019A398
 * Callers:
 *     RIMOnAsyncWorkItemNotification @ 0x1401998B4 (RIMOnAsyncWorkItemNotification.c)
 *     RIMQueueAndSignalAsyncWorkItem @ 0x140199F14 (RIMQueueAndSignalAsyncWorkItem.c)
 *     RIMDeleteAllAsyncWorkNotificationItems @ 0x1401EFC94 (RIMDeleteAllAsyncWorkNotificationItems.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?FreeAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@@@Z @ 0x14019A404 (-FreeAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@@@Z.c)
 */

void __fastcall RIMFreeAsyncWorkItem(const struct RawInputManagerObject **Buffer)
{
  char *v2; // rcx
  char *v3; // rcx
  const struct RawInputManagerObject *v4; // rcx

  InputTraceLogging::RIM::FreeAsyncWorkItem(Buffer[3], (const struct RIMAsyncWorkItem *)Buffer);
  v2 = (char *)Buffer[6];
  if ( v2 )
    GreDeleteFastMutex(v2);
  v3 = (char *)Buffer[13];
  if ( v3 )
    GreDeleteFastMutex(v3);
  v4 = Buffer[7];
  if ( v4 )
    ObfDereferenceObject(v4);
  ObfDereferenceObject(Buffer[3]);
  GreDeleteFastMutex((char *)Buffer);
}
