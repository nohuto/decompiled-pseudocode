/*
 * XREFs of HalpHvInvokeWheaErrorNotificationCallback @ 0x140585D34
 * Callers:
 *     HalpMemoryErrorDeferredHandler @ 0x14058F0C8 (HalpMemoryErrorDeferredHandler.c)
 *     HalpPmemErrorDeferredHandler @ 0x14058F2A8 (HalpPmemErrorDeferredHandler.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvInvokeWheaErrorNotificationCallback(__int64 a1, __int64 a2)
{
  if ( !qword_140FBB0D8 )
    return 3221225473LL;
  LOBYTE(a2) = 1;
  return guard_dispatch_icall_no_overrides(a1, a2);
}
