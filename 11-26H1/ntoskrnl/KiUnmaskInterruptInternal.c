/*
 * XREFs of KiUnmaskInterruptInternal @ 0x14042370C
 * Callers:
 *     KeUnmaskInterrupt @ 0x140423A04 (KeUnmaskInterrupt.c)
 *     KeConnectInterrupt @ 0x140424368 (KeConnectInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiUnmaskInterruptInternal(__int64 a1, unsigned int a2)
{
  return guard_dispatch_icall_no_overrides(a2, 0LL);
}
