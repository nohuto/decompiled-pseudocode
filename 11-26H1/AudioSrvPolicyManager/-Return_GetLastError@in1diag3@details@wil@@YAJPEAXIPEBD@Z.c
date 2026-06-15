/*
 * XREFs of ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18002CDC4
 * Callers:
 *     ?RuntimeClassInitialize@CApplication@@QEAAJPEBG_KK@Z @ 0x1800052BC (-RuntimeClassInitialize@CApplication@@QEAAJPEBG_KK@Z.c)
 *     ?RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x18000734C (-RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180009150 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     TS_SessionGetAudioProtocol @ 0x18000C430 (TS_SessionGetAudioProtocol.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18000C800 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     PbmReportAppClosing @ 0x1800181C0 (PbmReportAppClosing.c)
 *     ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x180018F64 (-RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x18001C4D4 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     wil::init_once_nothrow__lambda_69c3cfbf5adefb8ee9fb65f6135da2ca___ @ 0x18001F790 (wil--init_once_nothrow__lambda_69c3cfbf5adefb8ee9fb65f6135da2ca___.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x18002630C (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z @ 0x18002642C (-TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1800330F4 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800356BC (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x18003D1B0 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 *     ?ResetAllApplicationSpecificEndpoints@CWindowsPolicyManager@@UEAAJPEAX@Z @ 0x180046FA0 (-ResetAllApplicationSpecificEndpoints@CWindowsPolicyManager@@UEAAJPEAX@Z.c)
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x180047388 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 * Callees:
 *     ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x18002CDE4 (--$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_GetLastErrorHr<1>((_DWORD)this, (_DWORD)a2, a3, (_DWORD)a4);
}
