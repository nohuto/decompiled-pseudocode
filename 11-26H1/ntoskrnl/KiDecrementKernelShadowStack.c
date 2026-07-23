/*
 * XREFs of KiDecrementKernelShadowStack @ 0x14072D110
 * Callers:
 *     KiFixupControlProtectionKernelModeReturnMismatch @ 0x1405FD498 (KiFixupControlProtectionKernelModeReturnMismatch.c)
 * Callees:
 *     sub_14072D126 @ 0x14072D126 (sub_14072D126.c)
 */

__int64 KiDecrementKernelShadowStack()
{
  __int64 v2; // rcx

  __asm { rdsspq  rdx }
  _R8 = 0LL;
  __asm { wrssq   qword ptr [rdx], r8 }
  sub_14072D126(*_RDX);
  return sub_14072D126(v2);
}
