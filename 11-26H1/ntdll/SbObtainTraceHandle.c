/*
 * XREFs of SbObtainTraceHandle @ 0x1800647E0
 * Callers:
 *     SbUpdateSwitchContextBasedOnDll @ 0x180064160 (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180056610 (RtlSetLastWin32Error.c)
 *     EtwNotificationRegister @ 0x1800571C0 (EtwNotificationRegister.c)
 *     SbpTraceContextUpdate @ 0x1800621C0 (SbpTraceContextUpdate.c)
 *     EtwNotificationUnregister @ 0x18006D0E0 (EtwNotificationUnregister.c)
 */

__int64 __fastcall SbObtainTraceHandle(signed __int64 *a1)
{
  _QWORD *pShimData; // rbx
  __int64 v3; // rsi
  signed __int64 v5; // rax
  unsigned int v6; // eax
  __int64 v7; // rcx
  signed __int64 v8; // rbx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r9
  signed __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  pShimData = NtCurrentPeb()->pShimData;
  if ( !pShimData || pShimData == (_QWORD *)-2016LL )
    return 0LL;
  v3 = (__int64)(pShimData + 258);
  if ( *((_DWORD *)pShimData + 516) )
  {
    if ( a1 )
      *a1 = 0LL;
    if ( *((_DWORD *)pShimData + 507) )
    {
      v5 = pShimData[254];
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
        v6 = EtwNotificationRegister(&MS_Windows_AeSwitchBack_Provider, 3, 0LL, 0LL, (unsigned __int64 *)&v10);
        if ( v6 )
        {
          RtlSetLastWin32Error(v6);
          return 0LL;
        }
        v7 = v10;
        v8 = _InterlockedCompareExchange64(pShimData + 254, v10, 0LL);
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
