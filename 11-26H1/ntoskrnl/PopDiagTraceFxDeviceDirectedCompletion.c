/*
 * XREFs of PopDiagTraceFxDeviceDirectedCompletion @ 0x14050DD08
 * Callers:
 *     PopFxCompleteDirectedPowerTransition @ 0x1406075B8 (PopFxCompleteDirectedPowerTransition.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     PopFxAddLogEntry @ 0x14021BFD0 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceFxDeviceDirectedCompletion(__int64 a1, unsigned __int8 a2)
{
  int v2; // ebx
  BOOLEAN result; // al
  int v4; // ecx
  int v5; // [rsp+40h] [rbp+7h] BYREF
  int v6; // [rsp+44h] [rbp+Bh] BYREF
  __int64 v7; // [rsp+48h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+17h] BYREF
  int *v9; // [rsp+60h] [rbp+27h]
  __int64 v10; // [rsp+68h] [rbp+2Fh]
  int *v11; // [rsp+70h] [rbp+37h]
  __int64 v12; // [rsp+78h] [rbp+3Fh]

  v2 = a2;
  v7 = a1;
  result = (unsigned __int8)PopFxAddLogEntry(a1, 0, 26, a2);
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_POWER_TRANSITION_END);
    if ( result )
    {
      v4 = *(_DWORD *)(v7 + 156);
      UserData.Ptr = (ULONGLONG)&v7;
      v9 = &v5;
      v11 = &v6;
      v6 = v4;
      v5 = v2;
      *(_QWORD *)&UserData.Size = 8LL;
      v10 = 4LL;
      v12 = 4LL;
      return EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_POWER_TRANSITION_END, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return result;
}
