/*
 * XREFs of PopDiagTraceProcessorThrottlePerfTrack @ 0x140445FF8
 * Callers:
 *     PpmRegisterPerfCap @ 0x140445E10 (PpmRegisterPerfCap.c)
 *     PpmRegisterPerfStates @ 0x1407D13F8 (PpmRegisterPerfStates.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceProcessorThrottlePerfTrack(int a1, ULONG a2)
{
  NTSTATUS v3; // eax
  ULONG UserDataCount; // [rsp+30h] [rbp-49h]
  __int16 v6; // [rsp+40h] [rbp-39h] BYREF
  int v7; // [rsp+44h] [rbp-35h] BYREF
  size_t pcchRemaining; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  int *v10; // [rsp+60h] [rbp-19h]
  __int64 v11; // [rsp+68h] [rbp-11h]
  __int16 *v12; // [rsp+70h] [rbp-9h]
  __int64 v13; // [rsp+78h] [rbp-1h]
  wchar_t *v14; // [rsp+80h] [rbp+7h]
  int v15; // [rsp+88h] [rbp+Fh]
  int v16; // [rsp+8Ch] [rbp+13h]
  wchar_t pszDest[24]; // [rsp+90h] [rbp+17h] BYREF
  int v18; // [rsp+E0h] [rbp+67h] BYREF

  v18 = a1;
  LOBYTE(v3) = aProcessor99999[20];
  pcchRemaining = 0LL;
  wcscpy(pszDest, L"Processor 9999999999");
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_PERFTRACK);
    if ( (_BYTE)v3 )
    {
      UserDataCount = a2;
      v3 = RtlStringCchPrintfExW(pszDest, 0x15uLL, 0LL, &pcchRemaining, 0, L"Processor %u", UserDataCount);
      if ( v3 >= 0 )
      {
        UserData.Ptr = (ULONGLONG)&v18;
        v6 = 21 - pcchRemaining;
        v10 = &v7;
        v15 = 2 * (unsigned __int16)(21 - pcchRemaining);
        v12 = &v6;
        v14 = pszDest;
        *(_QWORD *)&UserData.Size = 4LL;
        v11 = 4LL;
        v7 = 0;
        v13 = 2LL;
        v16 = 0;
        LOBYTE(v3) = EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_THERMAL_PERFTRACK, 0LL, 0, 0LL, 0LL, 4u, &UserData);
      }
    }
  }
  return v3;
}
