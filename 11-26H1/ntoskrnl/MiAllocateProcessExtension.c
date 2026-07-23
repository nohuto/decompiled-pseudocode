/*
 * XREFs of MiAllocateProcessExtension @ 0x140B26608
 * Callers:
 *     MiInitializeBootProcess @ 0x140CF8124 (MiInitializeBootProcess.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 */

__int64 MiAllocateProcessExtension()
{
  int CurrentProcessorColor; // eax

  CurrentProcessorColor = MmGetCurrentProcessorColor();
  return ExAllocatePoolMm(72LL, 0x680uLL, 844130637, CurrentProcessorColor | 0x80000000);
}
