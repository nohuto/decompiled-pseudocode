/*
 * XREFs of PopDiagTraceFxPerfRequestComplete @ 0x1404F2CD4
 * Callers:
 *     PopFxCompleteComponentPerfState @ 0x1404F2BC8 (PopFxCompleteComponentPerfState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxPerfRequestComplete(__int64 *a1, unsigned __int8 a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 v8; // [rsp+58h] [rbp-28h]
  __int64 v9; // [rsp+60h] [rbp-20h]
  int *v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+70h] [rbp-10h]

  v3 = a2;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_COMPLETED) )
    {
      v4 = *a1;
      v5 = *(_QWORD *)(*a1 + 80);
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = v5 + 48;
      v8 = v4 + 16;
      v10 = &v6;
      v9 = 4LL;
      v6 = v3;
      v11 = 4LL;
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_COMPLETED, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
}
