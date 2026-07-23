/*
 * XREFs of NtOpenKeyTransactedEx_Stub @ 0x140779C28
 * Callers:
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall NtOpenKeyTransactedEx_Stub(__int64 a1, __int64 a2)
{
  void *volatile AbWaitObject; // rax

  if ( LOBYTE(WheapPfaLock.SchedulerAssist) )
  {
    AbWaitObject = WheapPfaLock.AbWaitObject;
  }
  else
  {
    AbWaitObject = ZwOpenKeyTransactedEx;
    LOBYTE(WheapPfaLock.SchedulerAssist) = 1;
    WheapPfaLock.AbWaitObject = ZwOpenKeyTransactedEx;
  }
  if ( AbWaitObject )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 3221225594LL;
}
