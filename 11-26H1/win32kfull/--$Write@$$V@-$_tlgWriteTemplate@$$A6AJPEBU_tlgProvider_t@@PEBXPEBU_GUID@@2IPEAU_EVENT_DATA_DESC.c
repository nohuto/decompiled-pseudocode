/*
 * XREFs of ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1400918D4
 * Callers:
 *     ?ProcessLowLevelHook@Keyboard@InputTraceLogging@@SAXXZ @ 0x140090CA0 (-ProcessLowLevelHook@Keyboard@InputTraceLogging@@SAXXZ.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400C56B0 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?SonarStop@Mouse@InputTraceLogging@@SAXXZ @ 0x1402A4238 (-SonarStop@Mouse@InputTraceLogging@@SAXXZ.c)
 *     ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1402FF280 (-ValidatePointer@InkDevice@@AEBAJI@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14009234C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        __int64 a1,
        __int64 a2)
{
  _BYTE v3[32]; // [rsp+30h] [rbp-38h] BYREF

  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 2, v3);
}
