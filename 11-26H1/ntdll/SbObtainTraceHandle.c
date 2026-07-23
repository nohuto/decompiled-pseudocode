/*
 * XREFs of SbObtainTraceHandle @ 0x180084C30
 * Callers:
 *     SbUpdateSwitchContextBasedOnDll @ 0x1800845B0 (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180040B90 (RtlSetLastWin32Error.c)
 *     EtwNotificationRegister @ 0x180041740 (EtwNotificationRegister.c)
 *     SbpTraceContextUpdate @ 0x180082610 (SbpTraceContextUpdate.c)
 *     EtwNotificationUnregister @ 0x18008D530 (EtwNotificationUnregister.c)
 */

__int64 __fastcall SbObtainTraceHandle(_QWORD *a1)
{
  void *pShimData; // rbx
  __int64 v3; // rsi
  __int64 v5; // rax
  LONG v6; // eax
  ULONGLONG v7; // rcx
  signed __int64 v8; // rbx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r9
  ULONGLONG RegHandle; // [rsp+48h] [rbp+10h] BYREF

  RegHandle = 0LL;
  pShimData = NtCurrentPeb()->pShimData;
  if ( !pShimData || pShimData == (void *)-2016LL )
    return 0LL;
  v3 = (__int64)pShimData + 2064;
  if ( *((_DWORD *)pShimData + 516) )
  {
    if ( a1 )
      *a1 = 0LL;
    if ( *((_DWORD *)pShimData + 507) )
    {
      v5 = *((_QWORD *)pShimData + 254);
      if ( v5 )
      {
        if ( a1 )
        {
          *a1 = v5;
          return 1LL;
        }
      }
      else
      {
        v6 = EtwNotificationRegister(&MS_Windows_AeSwitchBack_Provider, 3u, 0LL, 0LL, &RegHandle);
        if ( v6 )
        {
          RtlSetLastWin32Error(v6);
          return 0LL;
        }
        v7 = RegHandle;
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)pShimData + 254, RegHandle, 0LL);
        if ( v8 )
        {
          EtwNotificationUnregister(v7, 0LL);
          if ( a1 )
          {
            *a1 = v8;
            return 1LL;
          }
        }
        else
        {
          if ( a1 )
            *a1 = v7;
          ProcessParameters = NtCurrentPeb()->ProcessParameters;
          SbpTraceContextUpdate(
            v7,
            v3,
            0,
            ProcessParameters->ImagePathName.Length,
            (__int64)ProcessParameters->ImagePathName.Buffer);
        }
      }
      return 1LL;
    }
  }
  return 0LL;
}
