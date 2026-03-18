/*
 * XREFs of ??0RGNMEMOBJ@@QEAA@AEBVRustAutoHotpatchLockSH@@@Z @ 0x1401C4310
 * Callers:
 *     <none>
 * Callees:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXAEBVRustAutoHotpatchLockSH@@K@Z @ 0x1401C4A80 (-vInitialize@RGNMEMOBJ@@QEAAXAEBVRustAutoHotpatchLockSH@@K@Z.c)
 */

RGNMEMOBJ *__fastcall RGNMEMOBJ::RGNMEMOBJ(RGNMEMOBJ *this, const struct RustAutoHotpatchLockSH *a2)
{
  *(_QWORD *)this = 0LL;
  RGNMEMOBJ::vInitialize(this, a2, 0x70u);
  return this;
}
