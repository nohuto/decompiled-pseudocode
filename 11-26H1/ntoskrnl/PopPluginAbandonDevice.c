/*
 * XREFs of PopPluginAbandonDevice @ 0x140519374
 * Callers:
 *     PoFxAbandonDevice @ 0x140B062B4 (PoFxAbandonDevice.c)
 * Callees:
 *     PopFxBugCheck @ 0x1403B0E54 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PopPluginAbandonDevice(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  v4 = a2;
  v5 = 0LL;
  if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(2LL, &v4) )
    PopFxBugCheck(0x605uLL, 2uLL, BugCheckParameter3, 0LL);
  return v5;
}
