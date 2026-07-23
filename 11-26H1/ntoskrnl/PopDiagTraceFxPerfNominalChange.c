/*
 * XREFs of PopDiagTraceFxPerfNominalChange @ 0x14060B948
 * Callers:
 *     PopFxUpdateComponentPerfStateNominalChange @ 0x140608654 (PopFxUpdateComponentPerfStateNominalChange.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxPerfNominalChange(__int64 *a1, unsigned __int8 a2, int a3, unsigned int a4, __int64 a5)
{
  _UNKNOWN **v5; // rax
  int v7; // ebx
  __int64 v8; // rcx
  int v10; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-21h] BYREF
  __int64 v12; // [rsp+68h] [rbp-11h]
  __int64 v13; // [rsp+70h] [rbp-9h]
  int *v14; // [rsp+78h] [rbp-1h]
  __int64 v15; // [rsp+80h] [rbp+7h]
  int *v16; // [rsp+88h] [rbp+Fh]
  __int64 v17; // [rsp+90h] [rbp+17h]
  unsigned int *v18; // [rsp+98h] [rbp+1Fh]
  __int64 v19; // [rsp+A0h] [rbp+27h]
  __int64 v20; // [rsp+A8h] [rbp+2Fh]
  int v21; // [rsp+B0h] [rbp+37h]
  int v22; // [rsp+B4h] [rbp+3Bh]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+57h] BYREF
  int v24; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int v25; // [rsp+F0h] [rbp+77h] BYREF

  v5 = &retaddr;
  v25 = a4;
  v24 = a3;
  v7 = a2;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_NOMINAL_CHANGE);
    if ( (_BYTE)v5 )
    {
      v8 = *a1;
      v5 = (_UNKNOWN **)(*(_QWORD *)(*a1 + 80) + 48LL);
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)v5;
      v12 = v8 + 16;
      v14 = &v10;
      v16 = &v24;
      v18 = &v25;
      LOBYTE(v5) = -1;
      v13 = 4LL;
      v10 = v7;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 4LL;
      if ( 16 * (unsigned __int64)v25 <= 0xFFFFFFFF )
      {
        v20 = a5;
        v21 = 16 * v25;
        v22 = 0;
        LOBYTE(v5) = EtwWriteEx(
                       PopDiagHandle,
                       &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_NOMINAL_CHANGE,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       6u,
                       &UserData);
      }
    }
  }
  return (char)v5;
}
