/*
 * XREFs of RIMFreeAsyncWorkItem @ 0x14012CDEC
 * Callers:
 *     RIMQueueAndSignalAsyncWorkItem @ 0x1400460CC (RIMQueueAndSignalAsyncWorkItem.c)
 *     RIMOnAsyncWorkItemNotification @ 0x1401288B4 (RIMOnAsyncWorkItemNotification.c)
 *     RIMDeleteAllAsyncWorkNotificationItems @ 0x1401951EC (RIMDeleteAllAsyncWorkNotificationItems.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?FreeAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@@@Z @ 0x14012CE5C (-FreeAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@@@Z.c)
 */

void __fastcall RIMFreeAsyncWorkItem(const struct RawInputManagerObject **Buffer)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  char *v5; // rcx
  char *v6; // rcx
  const struct RawInputManagerObject *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  InputTraceLogging::RIM::FreeAsyncWorkItem(Buffer[3], (const struct RIMAsyncWorkItem *)Buffer);
  v5 = (char *)Buffer[6];
  if ( v5 )
    GreDeleteFastMutex(v5, v2, v3, v4);
  v6 = (char *)Buffer[13];
  if ( v6 )
    GreDeleteFastMutex(v6, v2, v3, v4);
  v7 = Buffer[7];
  if ( v7 )
    ObfDereferenceObject(v7);
  ObfDereferenceObject(Buffer[3]);
  GreDeleteFastMutex((char *)Buffer, v8, v9, v10);
}
