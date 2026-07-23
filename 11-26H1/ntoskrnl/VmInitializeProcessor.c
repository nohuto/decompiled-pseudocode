/*
 * XREFs of VmInitializeProcessor @ 0x140C13BAC
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407BC9D8 (KiStartDynamicProcessor.c)
 *     VmInitSystem @ 0x140C86258 (VmInitSystem.c)
 *     KeStartAllProcessors @ 0x140CCEBBC (KeStartAllProcessors.c)
 * Callees:
 *     KeGetProcessorNodeNumber @ 0x140464DA0 (KeGetProcessorNodeNumber.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 */

__int64 __fastcall VmInitializeProcessor(__int64 a1)
{
  __int64 v2; // rax
  __int128 v4; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  LOBYTE(v4) = 3;
  DWORD2(v4) = (unsigned __int16)KeGetProcessorNodeNumber(a1) | 0x80000000;
  v2 = ExAllocatePool3(64LL, 12800LL, 1651535190LL, &v4, 1);
  *(_QWORD *)(a1 + 35728) = v2;
  return v2 == 0 ? 0xC000009A : 0;
}
