/*
 * XREFs of DpiSessionCreateCallback @ 0x1403FE19C
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1403FDDC0 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline @ 0x14008592C (Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DpiFdoStartAdapterThread @ 0x140247F90 (DpiFdoStartAdapterThread.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1402551FC (DpiLdaValidateSystemChainStatus.c)
 */

__int64 DpiSessionCreateCallback()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 InputBuffer; // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+38h] [rbp-20h]

  v0 = 0;
  if ( !_InterlockedCompareExchange(&dword_140168DE0, 1, 0) )
  {
    v0 = KeWaitForSingleObject(&stru_140168E28, Executive, 0, 0, 0LL);
    if ( v0 )
    {
      WdLogSingleEntry1(2LL);
      v0 = 0;
      WdLogGlobalForLineNumber = 3719;
    }
    DpiFdoStartAdapterThread(0LL, v1);
    if ( (unsigned int)Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline() )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      if ( !dword_1401694A0 )
      {
        v4 = 0;
        InputBuffer = 23LL;
        if ( ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0xCu, 0LL, 0) < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 3769;
        }
      }
      KeReleaseMutex(&Object, 0);
    }
    DpiLdaValidateSystemChainStatus();
    _InterlockedExchange(&dword_140168DE0, 2);
  }
  return v0;
}
