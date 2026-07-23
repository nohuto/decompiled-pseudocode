/*
 * XREFs of PspLogAuditSetLoadImageNotifyRoutineEvent @ 0x140B32E64
 * Callers:
 *     PsSetLoadImageNotifyRoutineEx @ 0x140B32DB0 (PsSetLoadImageNotifyRoutineEx.c)
 * Callees:
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PspLogAuditSetLoadImageNotifyRoutineEvent(__int64 a1, int a2)
{
  NTSTATUS result; // eax
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF
  int *v4; // [rsp+40h] [rbp-28h]
  __int64 v5; // [rsp+48h] [rbp-20h]
  __int64 v6; // [rsp+70h] [rbp+8h] BYREF
  int v7; // [rsp+78h] [rbp+10h] BYREF

  v7 = a2;
  v6 = a1;
  if ( EtwApiCallsProvRegHandle )
  {
    *(_QWORD *)&v3.Size = 8LL;
    v3.Ptr = (ULONGLONG)&v6;
    v5 = 4LL;
    v4 = &v7;
    return EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_PSSETLOADIMAGENOTIFYROUTINE, 0LL, 2u, &v3);
  }
  return result;
}
