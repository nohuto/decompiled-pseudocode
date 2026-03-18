/*
 * XREFs of WheaSignalHandlerOverride @ 0x140652C30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall WheaSignalHandlerOverride(unsigned int a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( a1 <= 0x12 && WheapOverrideHandler[a1] )
    return guard_dispatch_icall_no_overrides(a2);
  return v2;
}
