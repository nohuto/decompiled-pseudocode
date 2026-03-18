/*
 * XREFs of ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1400F2EB8
 * Callers:
 *     ?WindowManagementExecute@Mouse@InputTraceLogging@@SAXXZ @ 0x1400D1148 (-WindowManagementExecute@Mouse@InputTraceLogging@@SAXXZ.c)
 *     ?UserKSTWait@KST@InputTraceLogging@@SAXXZ @ 0x1400EFC0C (-UserKSTWait@KST@InputTraceLogging@@SAXXZ.c)
 *     ?CompositionRefreshRateUnboost@Win32k@InputTraceLogging@@SAXXZ @ 0x1400F1B80 (-CompositionRefreshRateUnboost@Win32k@InputTraceLogging@@SAXXZ.c)
 *     ?ClearSystemCapture@Mouse@InputTraceLogging@@SAXXZ @ 0x14010B1C8 (-ClearSystemCapture@Mouse@InputTraceLogging@@SAXXZ.c)
 *     ?HandlePTPEvent@KST@InputTraceLogging@@SAXXZ @ 0x14014900C (-HandlePTPEvent@KST@InputTraceLogging@@SAXXZ.c)
 *     ?HandleRefreshRateUnboostTimer@KST@InputTraceLogging@@SAXXZ @ 0x14014CD2C (-HandleRefreshRateUnboostTimer@KST@InputTraceLogging@@SAXXZ.c)
 *     ?RawMouseThrottlingTimerFired@Mouse@InputTraceLogging@@SAXXZ @ 0x1401745A8 (-RawMouseThrottlingTimerFired@Mouse@InputTraceLogging@@SAXXZ.c)
 *     ?DeclareThreadAsKST@KST@InputTraceLogging@@SAXXZ @ 0x140181FB4 (-DeclareThreadAsKST@KST@InputTraceLogging@@SAXXZ.c)
 *     ?UserKSTInitialize@KST@InputTraceLogging@@SAXXZ @ 0x1401820B4 (-UserKSTInitialize@KST@InputTraceLogging@@SAXXZ.c)
 *     ?DropUserModeInputBuffer@Mouse@InputTraceLogging@@SAXXZ @ 0x1401890B4 (-DropUserModeInputBuffer@Mouse@InputTraceLogging@@SAXXZ.c)
 *     ?HandleHotkey@Keyboard@InputTraceLogging@@SAXXZ @ 0x140192C98 (-HandleHotkey@Keyboard@InputTraceLogging@@SAXXZ.c)
 *     ?ActivateKSTInputProcessingHelper@KST@InputTraceLogging@@SAXXZ @ 0x140195108 (-ActivateKSTInputProcessingHelper@KST@InputTraceLogging@@SAXXZ.c)
 *     ?ActivateKSTInputProcessing@KST@InputTraceLogging@@SAXXZ @ 0x14019CE00 (-ActivateKSTInputProcessing@KST@InputTraceLogging@@SAXXZ.c)
 *     ?AllocationFailure@Monitors@InputTraceLogging@@SAXXZ @ 0x1401C3A60 (-AllocationFailure@Monitors@InputTraceLogging@@SAXXZ.c)
 *     ?TraceUninitializeStop@Log@CoreMessagingK@@SAXXZ @ 0x1401C5E2C (-TraceUninitializeStop@Log@CoreMessagingK@@SAXXZ.c)
 *     ?TraceUninitializeStart@Log@CoreMessagingK@@SAXXZ @ 0x1401C5E58 (-TraceUninitializeStart@Log@CoreMessagingK@@SAXXZ.c)
 *     ?TraceInitializeStart@Log@CoreMessagingK@@SAXXZ @ 0x1401C5E84 (-TraceInitializeStart@Log@CoreMessagingK@@SAXXZ.c)
 *     ?DeactivateKSTInputProcessing@KST@InputTraceLogging@@SAXXZ @ 0x14021AFC4 (-DeactivateKSTInputProcessing@KST@InputTraceLogging@@SAXXZ.c)
 *     ?RevokeThreadAsKST@KST@InputTraceLogging@@SAXXZ @ 0x14021B180 (-RevokeThreadAsKST@KST@InputTraceLogging@@SAXXZ.c)
 *     ?DeactivateKSTInputProcessingHelper@KST@InputTraceLogging@@SAXXZ @ 0x14021DC2C (-DeactivateKSTInputProcessingHelper@KST@InputTraceLogging@@SAXXZ.c)
 *     ?HandleIvEvent@KST@InputTraceLogging@@SAXXZ @ 0x14021DC70 (-HandleIvEvent@KST@InputTraceLogging@@SAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400F39AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        __int64 a1,
        __int64 a2)
{
  _BYTE v3[32]; // [rsp+30h] [rbp-38h] BYREF

  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 2, v3);
}
