/*
 * XREFs of HalpHvInvokeWheaErrorNotificationCallback @ 0x140588254
 * Callers:
 *     HalpMemoryErrorDeferredHandler @ 0x140591848 (HalpMemoryErrorDeferredHandler.c)
 *     HalpPmemErrorDeferredHandler @ 0x140591A28 (HalpPmemErrorDeferredHandler.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvInvokeWheaErrorNotificationCallback(__int64 a1, __int64 a2)
{
  if ( !qword_140FBB478 )
    return 3221225473LL;
  LOBYTE(a2) = 1;
  return guard_dispatch_icall_no_overrides(a1, a2);
}
