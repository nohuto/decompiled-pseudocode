/*
 * XREFs of NtOpenKeyTransactedEx_Stub @ 0x140776D80
 * Callers:
 *     _RegRtlOpenKeyTransacted @ 0x140997950 (_RegRtlOpenKeyTransacted.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall NtOpenKeyTransactedEx_Stub(__int64 a1, __int64 a2)
{
  struct _LIST_ENTRY *Blink; // rax

  if ( LOBYTE(WheapPfaLock.GlobalForegroundListEntry.Flink) )
  {
    Blink = WheapPfaLock.GlobalForegroundListEntry.Blink;
  }
  else
  {
    Blink = (struct _LIST_ENTRY *)ZwOpenKeyTransactedEx;
    LOBYTE(WheapPfaLock.GlobalForegroundListEntry.Flink) = 1;
    WheapPfaLock.InGlobalForegroundList = (unsigned __int64)ZwOpenKeyTransactedEx;
  }
  if ( Blink )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 3221225594LL;
}
