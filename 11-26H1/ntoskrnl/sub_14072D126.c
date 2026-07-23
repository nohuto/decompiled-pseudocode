/*
 * XREFs of sub_14072D126 @ 0x14072D126
 * Callers:
 *     KiDecrementKernelShadowStack @ 0x14072D110 (KiDecrementKernelShadowStack.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall sub_14072D126(__int64 _RCX, __int64 _RDX)
{
  __asm { wrssq   qword ptr [rdx-8], rcx }
}
