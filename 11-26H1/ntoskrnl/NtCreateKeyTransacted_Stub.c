/*
 * XREFs of NtCreateKeyTransacted_Stub @ 0x1408A3F44
 * Callers:
 *     _RegRtlCreateTreeTransacted @ 0x140978CD8 (_RegRtlCreateTreeTransacted.c)
 *     _RegRtlCreateKeyTransacted @ 0x140979034 (_RegRtlCreateKeyTransacted.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall NtCreateKeyTransacted_Stub(__int64 a1, __int64 a2)
{
  unsigned __int64 KernelWaitTime; // rax

  if ( LOBYTE(WheapPfaLock.ReservedPreviousReadyTimeValue) )
  {
    KernelWaitTime = WheapPfaLock.KernelWaitTime;
  }
  else
  {
    KernelWaitTime = (unsigned __int64)ZwCreateKeyTransacted;
    LOBYTE(WheapPfaLock.ReservedPreviousReadyTimeValue) = 1;
    WheapPfaLock.KernelWaitTime = (unsigned __int64)ZwCreateKeyTransacted;
  }
  if ( KernelWaitTime )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 3221225594LL;
}
