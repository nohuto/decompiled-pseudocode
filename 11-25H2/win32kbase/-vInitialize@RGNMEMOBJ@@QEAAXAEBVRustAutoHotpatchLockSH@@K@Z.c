/*
 * XREFs of ?vInitialize@RGNMEMOBJ@@QEAAXAEBVRustAutoHotpatchLockSH@@K@Z @ 0x1401C4A80
 * Callers:
 *     ??0RGNMEMOBJ@@QEAA@AEBVRustAutoHotpatchLockSH@@@Z @ 0x1401C4310 (--0RGNMEMOBJ@@QEAA@AEBVRustAutoHotpatchLockSH@@@Z.c)
 * Callees:
 *     ?vInit@RGNMEMOBJ@@QEAAXXZ @ 0x1400117B0 (-vInit@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z @ 0x1401C4370 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z.c)
 */

void __fastcall RGNMEMOBJ::vInitialize(RGNMEMOBJ *this, const struct RustAutoHotpatchLockSH *a2, unsigned int a3)
{
  unsigned int v5; // edx
  struct REGION *Region; // rax

  v5 = 112;
  if ( a3 >= 0x70 )
    v5 = a3;
  Region = RGNMEMOBJ::AllocateRegion(a2, v5);
  *(_QWORD *)this = Region;
  if ( Region )
    RGNMEMOBJ::vInit(this);
}
