/*
 * XREFs of sub_1406A01A6 @ 0x1406A01A6
 * Callers:
 *     KiDecrementKernelShadowStack @ 0x1406A0190 (KiDecrementKernelShadowStack.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall sub_1406A01A6(__int64 _RCX, __int64 _RDX)
{
  __asm { wrssq   qword ptr [rdx-8], rcx }
}
