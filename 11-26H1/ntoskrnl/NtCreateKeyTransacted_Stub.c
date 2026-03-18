/*
 * XREFs of NtCreateKeyTransacted_Stub @ 0x14089DB44
 * Callers:
 *     _RegRtlCreateTreeTransacted @ 0x14091E278 (_RegRtlCreateTreeTransacted.c)
 *     _RegRtlCreateKeyTransacted @ 0x14091E5D4 (_RegRtlCreateKeyTransacted.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall NtCreateKeyTransacted_Stub(__int64 a1, __int64 a2)
{
  NTSTATUS (__stdcall *v2)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, PUNICODE_STRING, ULONG, HANDLE, PULONG); // rax

  if ( LOBYTE(WheapPfaLock.AbCompletedIoQoSBoostCount) )
  {
    v2 = *(NTSTATUS (__stdcall **)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, PUNICODE_STRING, ULONG, HANDLE, PULONG))&WheapPfaLock.ForegroundLossTime;
  }
  else
  {
    v2 = ZwCreateKeyTransacted;
    LOBYTE(WheapPfaLock.AbCompletedIoQoSBoostCount) = 1;
    *(_QWORD *)&WheapPfaLock.ForegroundLossTime = ZwCreateKeyTransacted;
  }
  if ( v2 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 3221225594LL;
}
