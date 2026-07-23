/*
 * XREFs of PopTraceEsBgActivityPolicyUpdate @ 0x1407D8A78
 * Callers:
 *     PopEsInStandbyEvaluate @ 0x1409C21AC (PopEsInStandbyEvaluate.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopTraceEsBgActivityPolicyUpdate(int a1)
{
  int v1; // r8d
  int v2; // r9d
  int v3; // [rsp+30h] [rbp-29h] BYREF
  int v4; // [rsp+34h] [rbp-25h] BYREF
  int v5; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-19h] BYREF
  int *v7; // [rsp+50h] [rbp-9h]
  __int64 v8; // [rsp+58h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+60h] [rbp+7h] BYREF
  int *v10; // [rsp+80h] [rbp+27h]
  __int64 v11; // [rsp+88h] [rbp+2Fh]
  int *v12; // [rsp+90h] [rbp+37h]
  __int64 v13; // [rsp+98h] [rbp+3Fh]
  int v14; // [rsp+C0h] [rbp+67h] BYREF

  v14 = a1;
  v5 = PopEsBgActivityPolicy;
  if ( (unsigned int)dword_140E07560 > 5 && tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL) )
  {
    v3 = v1;
    v10 = &v3;
    v4 = v2;
    v12 = &v4;
    v11 = 4LL;
    v13 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)&word_14004B7DE, 0LL, 0LL, 4u, &v9);
  }
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_BACKGROUND_ACTIVITY_POLICY_UPDATE) )
    {
      UserData.Ptr = (ULONGLONG)&v14;
      *(_QWORD *)&UserData.Size = 4LL;
      v7 = &v5;
      v8 = 4LL;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_BACKGROUND_ACTIVITY_POLICY_UPDATE, 0LL, 2u, &UserData);
    }
  }
}
