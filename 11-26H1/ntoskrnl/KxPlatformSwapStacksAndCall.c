/*
 * XREFs of KxPlatformSwapStacksAndCall @ 0x140730FF0
 * Callers:
 *     KiPlatformSwapStacksAndCall @ 0x140730FD0 (KiPlatformSwapStacksAndCall.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KxPlatformSwapStacksAndCall(__int64 a1, __int64 a2)
{
  guard_dispatch_icall_no_overrides(a1, a2);
  JUMPOUT(0x140730FDFLL);
}
