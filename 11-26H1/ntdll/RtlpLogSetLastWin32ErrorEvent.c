/*
 * XREFs of RtlpLogSetLastWin32ErrorEvent @ 0x1801208A8
 * Callers:
 *     RtlSetLastWin32Error @ 0x180040B90 (RtlSetLastWin32Error.c)
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 *     RtlQueryUnbiasedInterruptTime @ 0x1800BC5C0 (RtlQueryUnbiasedInterruptTime.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x18005AAB0 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLogSetLastWin32ErrorEvent(int a1)
{
  _QWORD v2[2]; // [rsp+50h] [rbp-28h] BYREF
  int v3; // [rsp+80h] [rbp+8h] BYREF

  v3 = a1;
  v2[1] = 4LL;
  v2[0] = &v3;
  return EtwpEventWriteFull(g_hUserDiagnosticProvider, &SetLastWin32ErrorEvent, 0LL, 0, 0, 0LL, 0LL, 1, (__int64)v2);
}
