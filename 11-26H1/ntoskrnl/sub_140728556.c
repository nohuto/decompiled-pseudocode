/*
 * XREFs of sub_140728556 @ 0x140728556
 * Callers:
 *     KiDecrementKernelShadowStack @ 0x140728540 (KiDecrementKernelShadowStack.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall sub_140728556(__int64 _RCX, __int64 _RDX)
{
  __asm { wrssq   qword ptr [rdx-8], rcx }
}
