/*
 * XREFs of VmInitializeProcessor @ 0x140B5F5EC
 * Callers:
 *     KiStartDynamicProcessor @ 0x14072F1E8 (KiStartDynamicProcessor.c)
 *     VmInitSystem @ 0x140BCD898 (VmInitSystem.c)
 *     KeStartAllProcessors @ 0x140C15CC8 (KeStartAllProcessors.c)
 * Callees:
 *     KeGetProcessorNodeNumber @ 0x14043ACA0 (KeGetProcessorNodeNumber.c)
 *     ExAllocatePool3 @ 0x140B64430 (ExAllocatePool3.c)
 */

__int64 __fastcall VmInitializeProcessor(__int64 a1)
{
  __int64 Pool3; // rax

  KeGetProcessorNodeNumber(a1);
  Pool3 = ExAllocatePool3(0x40uLL, 1);
  *(_QWORD *)(a1 + 35664) = Pool3;
  return Pool3 == 0 ? 0xC000009A : 0;
}
