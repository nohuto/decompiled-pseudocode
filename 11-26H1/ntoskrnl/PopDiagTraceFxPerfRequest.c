/*
 * XREFs of PopDiagTraceFxPerfRequest @ 0x1404F3164
 * Callers:
 *     PopFxIssueComponentPerfStateChanges @ 0x1404F2DC0 (PopFxIssueComponentPerfStateChanges.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxPerfRequest(__int64 *a1, unsigned int a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  __int64 v6; // rcx
  ULONGLONG v7; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  __int64 v10; // [rsp+58h] [rbp+17h]
  __int64 v11; // [rsp+60h] [rbp+1Fh]
  unsigned int *v12; // [rsp+68h] [rbp+27h]
  __int64 v13; // [rsp+70h] [rbp+2Fh]
  __int64 v14; // [rsp+78h] [rbp+37h]
  int v15; // [rsp+80h] [rbp+3Fh]
  int v16; // [rsp+84h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  unsigned int v18; // [rsp+B0h] [rbp+6Fh] BYREF

  v3 = &retaddr;
  v18 = a2;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_INITIATING);
    if ( (_BYTE)v3 )
    {
      v6 = *a1;
      v7 = *(_QWORD *)(*a1 + 80) + 48LL;
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = v7;
      v10 = v6 + 16;
      v11 = 4LL;
      v12 = &v18;
      v3 = (_UNKNOWN **)(16LL * v18);
      v13 = 4LL;
      if ( (unsigned __int64)v3 <= 0xFFFFFFFF )
      {
        v15 = 16 * v18;
        v14 = a3;
        v16 = 0;
        LOBYTE(v3) = EtwWriteEx(
                       PopDiagHandle,
                       &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_INITIATING,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       4u,
                       &UserData);
      }
    }
  }
  return (char)v3;
}
