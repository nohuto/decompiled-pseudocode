/*
 * XREFs of PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x14060BCD4
 * Callers:
 *     PpmRegisterPerfCap @ 0x140445E10 (PpmRegisterPerfCap.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceProcessorThrottleDurationPerfTrack(int a1, ULONG a2)
{
  NTSTATUS v3; // eax
  ULONG UserDataCount; // [rsp+30h] [rbp-39h]
  __int16 v6; // [rsp+40h] [rbp-29h] BYREF
  size_t pcchRemaining; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  __int16 *v9; // [rsp+60h] [rbp-9h]
  __int64 v10; // [rsp+68h] [rbp-1h]
  wchar_t *v11; // [rsp+70h] [rbp+7h]
  int v12; // [rsp+78h] [rbp+Fh]
  int v13; // [rsp+7Ch] [rbp+13h]
  wchar_t pszDest[24]; // [rsp+80h] [rbp+17h] BYREF
  int v15; // [rsp+D0h] [rbp+67h] BYREF

  v15 = a1;
  LOBYTE(v3) = aProcessor99999[20];
  pcchRemaining = 0LL;
  wcscpy(pszDest, L"Processor 9999999999");
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_DURATION_PERFTRACK);
    if ( (_BYTE)v3 )
    {
      UserDataCount = a2;
      v3 = RtlStringCchPrintfExW(pszDest, 0x15uLL, 0LL, &pcchRemaining, 0, L"Processor %u", UserDataCount);
      if ( v3 >= 0 )
      {
        UserData.Ptr = (ULONGLONG)&v15;
        v6 = 21 - pcchRemaining;
        v9 = &v6;
        v12 = 2 * (unsigned __int16)(21 - pcchRemaining);
        v11 = pszDest;
        *(_QWORD *)&UserData.Size = 4LL;
        v10 = 2LL;
        v13 = 0;
        LOBYTE(v3) = EtwWriteEx(
                       PopDiagHandle,
                       &POP_ETW_EVENT_THERMAL_DURATION_PERFTRACK,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       3u,
                       &UserData);
      }
    }
  }
  return v3;
}
