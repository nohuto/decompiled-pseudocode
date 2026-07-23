/*
 * XREFs of PspLogAuditSetContextThreadEvent @ 0x140AFA610
 * Callers:
 *     NtSetContextThread @ 0x140AFA520 (NtSetContextThread.c)
 * Callees:
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PspLogAuditSetContextThreadEvent(int a1)
{
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-28h] BYREF
  int v3; // [rsp+60h] [rbp+8h] BYREF

  v3 = a1;
  v2.Ptr = (ULONGLONG)&v3;
  *(_QWORD *)&v2.Size = 4LL;
  return EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_SETCONTEXTTHREAD, 0LL, 1u, &v2);
}
