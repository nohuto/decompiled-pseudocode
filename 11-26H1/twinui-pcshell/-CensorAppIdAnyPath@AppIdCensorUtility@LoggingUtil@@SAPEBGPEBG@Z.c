/*
 * XREFs of ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x1801BB910
 * Callers:
 *     ?GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z @ 0x1801BB888 (-GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z.c)
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x1803FCC40 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f4067639e63611d5d8388fe1412d05ee___::Run @ 0x1804C4980 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f4067639e63611d5d8388fe1412d05ee___--Run.c)
 *     ?AppSwitched_@AppSwitchTelemetry@PerfTrack@@QEAAXW4SwitchLocation@2@PEBGW4SwitchInvokeMethod@2@1@Z @ 0x1804C53A0 (-AppSwitched_@AppSwitchTelemetry@PerfTrack@@QEAAXW4SwitchLocation@2@PEBGW4SwitchInvokeMethod@2@1.c)
 *     ?CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z @ 0x1805E4D68 (-CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z.c)
 *     GetPidlsFromTaskbarLayout @ 0x180690384 (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(LPCWSTR pszPath)
{
  __int64 v1; // rbx

  v1 = 0LL;
  if ( pszPath )
  {
    if ( PathIsFileSpecW(pszPath) )
      return pszPath;
    else
      return PathFindFileNameW(pszPath);
  }
  return (const unsigned __int16 *)v1;
}
