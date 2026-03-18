/*
 * XREFs of ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1401ABECC
 * Callers:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14001922C (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?ProcessLowLevelHook@Keyboard@InputTraceLogging@@SAXXZ @ 0x1401ABE30 (-ProcessLowLevelHook@Keyboard@InputTraceLogging@@SAXXZ.c)
 *     ?HandleLowLevelHook@Mouse@InputTraceLogging@@SAXXZ @ 0x1401ABE80 (-HandleLowLevelHook@Mouse@InputTraceLogging@@SAXXZ.c)
 *     ?SonarStop@Mouse@InputTraceLogging@@SAXXZ @ 0x1402877B0 (-SonarStop@Mouse@InputTraceLogging@@SAXXZ.c)
 *     ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1402EFB7C (-ValidatePointer@InkDevice@@AEBAJI@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14012B154 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        __int64 a1,
        unsigned __int8 *a2)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 2u, &v3);
}
