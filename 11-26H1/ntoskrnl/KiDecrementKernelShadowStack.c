/*
 * XREFs of KiDecrementKernelShadowStack @ 0x140728540
 * Callers:
 *     KiFixupControlProtectionKernelModeReturnMismatch @ 0x1405FAA78 (KiFixupControlProtectionKernelModeReturnMismatch.c)
 * Callees:
 *     sub_140728556 @ 0x140728556 (sub_140728556.c)
 */

__int64 KiDecrementKernelShadowStack()
{
  __int64 v2; // rcx

  __asm { rdsspq  rdx }
  _R8 = 0LL;
  __asm { wrssq   qword ptr [rdx], r8 }
  sub_140728556(*_RDX);
  return sub_140728556(v2);
}
