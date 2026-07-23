/*
 * XREFs of HalpInterruptStandardEndOfInterrupt @ 0x1405813D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptStandardEndOfInterrupt(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), a2);
}
