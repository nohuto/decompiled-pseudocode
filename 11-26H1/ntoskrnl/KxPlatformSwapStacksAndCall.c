/*
 * XREFs of KxPlatformSwapStacksAndCall @ 0x14072C420
 * Callers:
 *     KiPlatformSwapStacksAndCall @ 0x14072C400 (KiPlatformSwapStacksAndCall.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KxPlatformSwapStacksAndCall(__int64 a1, __int64 a2)
{
  guard_dispatch_icall_no_overrides(a1, a2);
  JUMPOUT(0x14072C40FLL);
}
