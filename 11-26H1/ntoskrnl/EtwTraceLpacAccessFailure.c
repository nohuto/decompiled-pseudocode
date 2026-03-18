/*
 * XREFs of EtwTraceLpacAccessFailure @ 0x140B21EFC
 * Callers:
 *     SepLogLpacAccessFailure @ 0x1404F654C (SepLogLpacAccessFailure.c)
 * Callees:
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     KeQuerySystemTimePrecise @ 0x14021B070 (KeQuerySystemTimePrecise.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwTraceLpacAccessFailure(int a1)
{
  NTSTATUS result; // eax
  __int64 v2; // [rsp+30h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-28h] BYREF
  int *v4; // [rsp+48h] [rbp-18h]
  __int64 v5; // [rsp+50h] [rbp-10h]
  int v6; // [rsp+70h] [rbp+10h] BYREF

  v6 = a1;
  v2 = 0LL;
  if ( EtwLpacProvRegHandle )
  {
    KeQuerySystemTimePrecise(&v2);
    UserData.Ptr = (ULONGLONG)&v2;
    *(_QWORD *)&UserData.Size = 8LL;
    v4 = &v6;
    v5 = 4LL;
    return EtwWrite(EtwLpacProvRegHandle, &LpacAccessFailureLog, 0LL, 2u, &UserData);
  }
  return result;
}
