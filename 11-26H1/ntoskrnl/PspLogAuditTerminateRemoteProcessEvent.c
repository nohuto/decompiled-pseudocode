/*
 * XREFs of PspLogAuditTerminateRemoteProcessEvent @ 0x140B01D40
 * Callers:
 *     NtTerminateProcess @ 0x140B812E0 (NtTerminateProcess.c)
 * Callees:
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS PspLogAuditTerminateRemoteProcessEvent(int a1, int a2, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  int *v4; // [rsp+40h] [rbp-40h]
  __int64 v5; // [rsp+48h] [rbp-38h]
  va_list v6; // [rsp+50h] [rbp-30h]
  __int64 v7; // [rsp+58h] [rbp-28h]
  va_list v8; // [rsp+60h] [rbp-20h]
  __int64 v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+90h] [rbp+10h] BYREF
  int v11; // [rsp+98h] [rbp+18h] BYREF
  __int64 v12; // [rsp+A0h] [rbp+20h] BYREF
  va_list va; // [rsp+A0h] [rbp+20h]
  va_list va1; // [rsp+A8h] [rbp+28h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v12 = va_arg(va1, _QWORD);
  v11 = a2;
  v10 = a1;
  UserData.Ptr = (ULONGLONG)&v10;
  v7 = 8LL;
  *(_QWORD *)&UserData.Size = 4LL;
  v4 = &v11;
  v5 = 4LL;
  va_copy(v6, va);
  va_copy(v8, va1);
  v9 = 8LL;
  return EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_TERMINATEPROCESS, 0LL, 4u, &UserData);
}
