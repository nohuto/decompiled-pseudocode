/*
 * XREFs of MiInitializeLockedPagesTracking @ 0x14086A25C
 * Callers:
 *     MmInitializeHandBuiltProcess2 @ 0x140A08068 (MmInitializeHandBuiltProcess2.c)
 *     MmInitializeProcessAddressSpace @ 0x140A08138 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
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
