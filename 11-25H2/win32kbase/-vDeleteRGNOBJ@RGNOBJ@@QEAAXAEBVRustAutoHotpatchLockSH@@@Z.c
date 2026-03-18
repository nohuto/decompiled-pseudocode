/*
 * XREFs of ?vDeleteRGNOBJ@RGNOBJ@@QEAAXAEBVRustAutoHotpatchLockSH@@@Z @ 0x1401C49D0
 * Callers:
 *     ?vUpdateScaledRegions@DC@@QEAAXAEBVRustAutoHotpatchLockSH@@@Z @ 0x1401C68D0 (-vUpdateScaledRegions@DC@@QEAAXAEBVRustAutoHotpatchLockSH@@@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@AEAAXAEBVRustAutoHotpatchLockSH@@@Z @ 0x1401C4900 (-vDeleteREGION@REGION@@AEAAXAEBVRustAutoHotpatchLockSH@@@Z.c)
 */

void __fastcall RGNOBJ::vDeleteRGNOBJ(REGION **this, const struct RustAutoHotpatchLockSH *a2)
{
  REGION::vDeleteREGION(*this, a2);
  *this = 0LL;
}
