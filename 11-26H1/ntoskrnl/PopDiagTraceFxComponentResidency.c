/*
 * XREFs of PopDiagTraceFxComponentResidency @ 0x14060B5D0
 * Callers:
 *     PoFxSetComponentResidency @ 0x140607570 (PoFxSetComponentResidency.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     PopFxAddLogEntry @ 0x14021BFD0 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceFxComponentResidency(__int64 a1, int a2, __int64 a3)
{
  BOOLEAN result; // al
  __int64 v4; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *v6; // [rsp+58h] [rbp-28h]
  __int64 v7; // [rsp+60h] [rbp-20h]
  __int64 *v8; // [rsp+68h] [rbp-18h]
  __int64 v9; // [rsp+70h] [rbp-10h]
  int v10; // [rsp+98h] [rbp+18h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+20h] BYREF

  v11 = a3;
  v10 = a2;
  v4 = a1;
  result = (unsigned __int8)PopFxAddLogEntry(a1, a2, 10, a3);
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_RESIDENCY);
    if ( result )
    {
      UserData.Ptr = (ULONGLONG)&v4;
      *(_QWORD *)&UserData.Size = 8LL;
      v6 = &v10;
      v7 = 4LL;
      v8 = &v11;
      v9 = 8LL;
      return EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_RESIDENCY, 0LL, 1u, 0LL, 0LL, 3u, &UserData);
    }
  }
  return result;
}
