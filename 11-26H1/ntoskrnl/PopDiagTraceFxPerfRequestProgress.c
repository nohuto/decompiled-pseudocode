/*
 * XREFs of PopDiagTraceFxPerfRequestProgress @ 0x1404F2FFC
 * Callers:
 *     PopFxProcessWork @ 0x1403B8BD0 (PopFxProcessWork.c)
 *     PopFxCompleteComponentPerfState @ 0x1404F2BC8 (PopFxCompleteComponentPerfState.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1404F2DC0 (PopFxIssueComponentPerfStateChanges.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxPerfRequestProgress(__int64 *a1, int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  __int64 v6; // [rsp+50h] [rbp-30h]
  __int64 v7; // [rsp+58h] [rbp-28h]
  int *v8; // [rsp+60h] [rbp-20h]
  __int64 v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+98h] [rbp+18h] BYREF

  v10 = a2;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_PROCESSING) )
    {
      v3 = *a1;
      v4 = *(_QWORD *)(*a1 + 80);
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = v4 + 48;
      v6 = v3 + 16;
      v8 = &v10;
      v7 = 4LL;
      v9 = 4LL;
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_PROCESSING, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
}
