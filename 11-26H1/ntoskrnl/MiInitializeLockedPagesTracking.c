/*
 * XREFs of MiInitializeLockedPagesTracking @ 0x140863E7C
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1409622B0 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140964050 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 */

__int64 __fastcall MiInitializeLockedPagesTracking(__int64 a1)
{
  int CurrentProcessorColor; // eax
  __int64 result; // rax

  CurrentProcessorColor = MmGetCurrentProcessorColor();
  result = ExAllocatePoolMm(64LL, 0x20uLL, 2018798925, CurrentProcessorColor | 0x80000000);
  if ( result )
  {
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 8) = 0LL;
    *(_DWORD *)(result + 28) = 1;
    *(_QWORD *)(a1 + 920) = result;
  }
  return result;
}
