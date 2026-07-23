/*
 * XREFs of PopDirectedDripsDiagTraceDisengageReasonChange @ 0x140AC6C0C
 * Callers:
 *     PopDirectedDripsRefreshDisengageState @ 0x140AC6B88 (PopDirectedDripsRefreshDisengageState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDirectedDripsDiagTraceDisengageReasonChange(int a1, int a2)
{
  int v2; // [rsp+30h] [rbp-9h] BYREF
  int v3; // [rsp+34h] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  int *v5; // [rsp+50h] [rbp+17h]
  __int64 v6; // [rsp+58h] [rbp+1Fh]
  int *v7; // [rsp+60h] [rbp+27h]
  __int64 v8; // [rsp+68h] [rbp+2Fh]
  int *v9; // [rsp+70h] [rbp+37h]
  __int64 v10; // [rsp+78h] [rbp+3Fh]
  int v11; // [rsp+A0h] [rbp+67h] BYREF
  int v12; // [rsp+A8h] [rbp+6Fh] BYREF

  v12 = a2;
  v11 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_DISENGAGE_MASK_CHANGED) )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      v3 = v11 & (v12 ^ v11);
      UserData.Ptr = (ULONGLONG)&v11;
      v5 = &v12;
      v7 = &v2;
      v9 = &v3;
      v2 = v12 & (v12 ^ v11);
      v6 = 4LL;
      v8 = 4LL;
      v10 = 4LL;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_DISENGAGE_MASK_CHANGED, 0LL, 4u, &UserData);
    }
  }
}
