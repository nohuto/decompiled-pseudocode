/*
 * XREFs of PnpDiagnosticTraceElamDecision @ 0x1404FD328
 * Callers:
 *     PnpDoPolicyCheck @ 0x140C85CAC (PnpDoPolicyCheck.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall PnpDiagnosticTraceElamDecision(__int64 a1, int a2, int a3, int a4)
{
  unsigned int v4; // ebx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  int *v7; // [rsp+50h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-28h]
  int *v9; // [rsp+60h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+98h] [rbp+18h] BYREF
  int v12; // [rsp+A0h] [rbp+20h] BYREF
  int v13; // [rsp+A8h] [rbp+28h] BYREF

  v13 = a4;
  v12 = a3;
  v11 = a2;
  v4 = 0;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_EarlyLaunch_PolicyCheck) )
  {
    UserData.Ptr = (ULONGLONG)&v11;
    *(_QWORD *)&UserData.Size = 4LL;
    v7 = &v12;
    v8 = 4LL;
    v9 = &v13;
    v10 = 4LL;
    return (unsigned int)EtwWriteEx(PnpEtwHandle, &KMPnPEvt_EarlyLaunch_PolicyCheck, 0LL, 0, 0LL, 0LL, 3u, &UserData);
  }
  return v4;
}
