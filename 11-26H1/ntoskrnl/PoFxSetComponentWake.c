/*
 * XREFs of PoFxSetComponentWake @ 0x1404EE720
 * Callers:
 *     DifPoFxSetComponentWakeWrapper @ 0x140697960 (DifPoFxSetComponentWakeWrapper.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     PopFxAddLogEntry @ 0x14021BFD0 (PopFxAddLogEntry.c)
 *     PopPepComponentSetWakeHint @ 0x1404EE82C (PopPepComponentSetWakeHint.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall PoFxSetComponentWake(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  int v3; // ebx
  __int64 v6; // r8
  unsigned int v8; // [rsp+40h] [rbp-9h] BYREF
  int v9; // [rsp+48h] [rbp-1h] BYREF
  __int64 v10; // [rsp+50h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+Fh] BYREF
  int *v12; // [rsp+68h] [rbp+1Fh]
  __int64 v13; // [rsp+70h] [rbp+27h]
  int *v14; // [rsp+78h] [rbp+2Fh]
  __int64 v15; // [rsp+80h] [rbp+37h]

  v3 = a3;
  v10 = *(_QWORD *)(a1 + 48);
  v8 = a2;
  PopFxAddLogEntry(v10, a2, 11, a3);
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_WAKE) )
  {
    UserData.Ptr = (ULONGLONG)&v10;
    v9 = v3;
    v12 = (int *)&v8;
    *(_QWORD *)&UserData.Size = 8LL;
    v14 = &v9;
    v13 = 4LL;
    v15 = 4LL;
    EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_WAKE, 0LL, 0, 0LL, 0LL, 3u, &UserData);
  }
  LOBYTE(v6) = v3;
  return PopPepComponentSetWakeHint(*(_QWORD *)(a1 + 56), a2, v6);
}
