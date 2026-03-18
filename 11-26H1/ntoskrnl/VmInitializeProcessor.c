/*
 * XREFs of VmInitializeProcessor @ 0x140C0D99C
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407B9978 (KiStartDynamicProcessor.c)
 *     VmInitSystem @ 0x140C80258 (VmInitSystem.c)
 *     KeStartAllProcessors @ 0x140CC8ACC (KeStartAllProcessors.c)
 * Callees:
 *     KeGetProcessorNodeNumber @ 0x14046B620 (KeGetProcessorNodeNumber.c)
 *     ExAllocatePool3 @ 0x140C10010 (ExAllocatePool3.c)
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
