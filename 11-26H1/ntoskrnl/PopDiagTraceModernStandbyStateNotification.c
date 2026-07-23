/*
 * XREFs of PopDiagTraceModernStandbyStateNotification @ 0x1407D6998
 * Callers:
 *     PopModernStandbyNotificationCallback @ 0x1407E1D20 (PopModernStandbyNotificationCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceModernStandbyStateNotification(int a1, int a2, int a3, int a4, __int64 a5, char a6)
{
  _UNKNOWN **v6; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-29h] BYREF
  int *v9; // [rsp+48h] [rbp-19h]
  __int64 v10; // [rsp+50h] [rbp-11h]
  int *v11; // [rsp+58h] [rbp-9h]
  __int64 v12; // [rsp+60h] [rbp-1h]
  int *v13; // [rsp+68h] [rbp+7h]
  __int64 v14; // [rsp+70h] [rbp+Fh]
  __int64 v15; // [rsp+78h] [rbp+17h]
  __int64 v16; // [rsp+80h] [rbp+1Fh]
  char *v17; // [rsp+88h] [rbp+27h]
  __int64 v18; // [rsp+90h] [rbp+2Fh]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+4Fh] BYREF
  int v20; // [rsp+B8h] [rbp+57h] BYREF
  int v21; // [rsp+C0h] [rbp+5Fh] BYREF
  int v22; // [rsp+C8h] [rbp+67h] BYREF
  int v23; // [rsp+D0h] [rbp+6Fh] BYREF

  v6 = &retaddr;
  v23 = a4;
  v22 = a3;
  v21 = a2;
  v20 = a1;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v6) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_MODERN_STANTDY_NOTIFICATION);
    if ( (_BYTE)v6 )
    {
      UserData.Ptr = (ULONGLONG)&v20;
      *(_QWORD *)&UserData.Size = 4LL;
      v9 = &v21;
      v10 = 4LL;
      v11 = &v22;
      v12 = 4LL;
      v13 = &v23;
      v15 = a5;
      v17 = &a6;
      v14 = 4LL;
      v16 = 16LL;
      v18 = 4LL;
      LOBYTE(v6) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_MODERN_STANTDY_NOTIFICATION, 0LL, 6u, &UserData);
    }
  }
  return (char)v6;
}
