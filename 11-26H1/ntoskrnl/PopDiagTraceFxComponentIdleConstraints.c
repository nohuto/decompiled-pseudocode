/*
 * XREFs of PopDiagTraceFxComponentIdleConstraints @ 0x14060B4E0
 * Callers:
 *     PopPluginRequestComponentIdleConstraints @ 0x14052ED84 (PopPluginRequestComponentIdleConstraints.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxComponentIdleConstraints(__int64 a1, int a2, __int64 a3, int a4)
{
  _UNKNOWN **v4; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  int *v8; // [rsp+58h] [rbp+17h]
  __int64 v9; // [rsp+60h] [rbp+1Fh]
  int *v10; // [rsp+68h] [rbp+27h]
  __int64 v11; // [rsp+70h] [rbp+2Fh]
  __int64 v12; // [rsp+78h] [rbp+37h]
  int v13; // [rsp+80h] [rbp+3Fh]
  int v14; // [rsp+84h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  __int64 v16; // [rsp+A8h] [rbp+67h] BYREF
  int v17; // [rsp+B0h] [rbp+6Fh] BYREF
  int v18; // [rsp+C0h] [rbp+7Fh] BYREF

  v4 = &retaddr;
  v18 = a4;
  v17 = a2;
  v16 = a1;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_IDLE_CONSTRAINTS);
    if ( (_BYTE)v4 )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      v9 = 4LL;
      UserData.Ptr = (ULONGLONG)&v16;
      v11 = 4LL;
      v8 = &v17;
      v12 = a3;
      v10 = &v18;
      v13 = 4 * v18;
      v14 = 0;
      LOBYTE(v4) = EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_IDLE_CONSTRAINTS, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
  return (char)v4;
}
