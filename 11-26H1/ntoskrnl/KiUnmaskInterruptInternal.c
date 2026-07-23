/*
 * XREFs of KiUnmaskInterruptInternal @ 0x1404307FC
 * Callers:
 *     KeUnmaskInterrupt @ 0x140430AF4 (KeUnmaskInterrupt.c)
 *     KeConnectInterrupt @ 0x140431458 (KeConnectInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiUnmaskInterruptInternal(__int64 a1, unsigned int a2)
{
  return guard_dispatch_icall_no_overrides(a2, 0LL);
}
