/*
 * XREFs of PspLogAuditSetContextThreadEvent @ 0x140AF7F70
 * Callers:
 *     NtSetContextThread @ 0x140AF7E80 (NtSetContextThread.c)
 * Callees:
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PspLogAuditSetContextThreadEvent(int a1)
{
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-28h] BYREF
  int v3; // [rsp+60h] [rbp+8h] BYREF

  v3 = a1;
  v2.Ptr = (ULONGLONG)&v3;
  *(_QWORD *)&v2.Size = 4LL;
  return EtwWrite((REGHANDLE)EtwpSecurityLock.MutantListHead.Flink, &KERNEL_AUDIT_API_SETCONTEXTTHREAD, 0LL, 1u, &v2);
}
