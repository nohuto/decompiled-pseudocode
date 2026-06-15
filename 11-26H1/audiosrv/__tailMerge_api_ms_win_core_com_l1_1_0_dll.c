/*
 * XREFs of __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x1800B3733
 * Callers:
 *     __imp_load_CoTaskMemFree @ 0x1800B37B2 (__imp_load_CoTaskMemFree.c)
 *     __imp_load_CoTaskMemAlloc @ 0x1800B37D0 (__imp_load_CoTaskMemAlloc.c)
 *     __imp_load_CoCreateInstance @ 0x1800B37E2 (__imp_load_CoCreateInstance.c)
 *     __imp_load_CoGetMalloc @ 0x1800B37F4 (__imp_load_CoGetMalloc.c)
 *     __imp_load_CoCreateGuid @ 0x1800B3891 (__imp_load_CoCreateGuid.c)
 *     __imp_load_CoRevertToSelf @ 0x1800B38A3 (__imp_load_CoRevertToSelf.c)
 *     __imp_load_CoInitializeEx @ 0x1800B39CB (__imp_load_CoInitializeEx.c)
 *     __imp_load_CoUninitialize @ 0x1800B39DD (__imp_load_CoUninitialize.c)
 *     __imp_load_StringFromCLSID @ 0x1800B3AD2 (__imp_load_StringFromCLSID.c)
 *     __imp_load_CLSIDFromString @ 0x1800B3AF6 (__imp_load_CLSIDFromString.c)
 *     __imp_load_PropVariantClear @ 0x1800B3B08 (__imp_load_PropVariantClear.c)
 *     __imp_load_CoDisconnectContext @ 0x1800B3DAB (__imp_load_CoDisconnectContext.c)
 *     __imp_load_CoResumeClassObjects @ 0x1800B3F82 (__imp_load_CoResumeClassObjects.c)
 *     __imp_load_CoIncrementMTAUsage @ 0x1800B3F94 (__imp_load_CoIncrementMTAUsage.c)
 *     __imp_load_CoReleaseServerProcess @ 0x1800B3FA6 (__imp_load_CoReleaseServerProcess.c)
 *     __imp_load_CoAddRefServerProcess @ 0x1800B3FB8 (__imp_load_CoAddRefServerProcess.c)
 *     __imp_load_CoRevokeClassObject @ 0x1800B3FCA (__imp_load_CoRevokeClassObject.c)
 *     __imp_load_CoRegisterClassObject @ 0x1800B3FDC (__imp_load_CoRegisterClassObject.c)
 *     __imp_load_CoDecrementMTAUsage @ 0x1800B4012 (__imp_load_CoDecrementMTAUsage.c)
 *     __imp_load_CoSetProxyBlanket @ 0x1800B406C (__imp_load_CoSetProxyBlanket.c)
 *     __imp_load_PropVariantCopy @ 0x1800B4212 (__imp_load_PropVariantCopy.c)
 *     __imp_load_StringFromGUID2 @ 0x1800B426C (__imp_load_StringFromGUID2.c)
 *     __imp_load_CoDisconnectObject @ 0x1800B4332 (__imp_load_CoDisconnectObject.c)
 *     __imp_load_CoCreateFreeThreadedMarshaler @ 0x1800B43AA (__imp_load_CoCreateFreeThreadedMarshaler.c)
 *     __imp_load_StringFromIID @ 0x1800B43BC (__imp_load_StringFromIID.c)
 *     __imp_load_IIDFromString @ 0x1800B44E9 (__imp_load_IIDFromString.c)
 *     __imp_load_CoGetApartmentType @ 0x1800B5DD2 (__imp_load_CoGetApartmentType.c)
 *     __imp_load_CoDisableCallCancellation @ 0x1800B5DE4 (__imp_load_CoDisableCallCancellation.c)
 *     __imp_load_CoCancelCall @ 0x1800B5E81 (__imp_load_CoCancelCall.c)
 *     __imp_load_CoEnableCallCancellation @ 0x1800B5EB7 (__imp_load_CoEnableCallCancellation.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180088030 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_core_com_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_core_com_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
