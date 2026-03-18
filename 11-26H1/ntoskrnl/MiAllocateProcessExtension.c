/*
 * XREFs of MiAllocateProcessExtension @ 0x140B24208
 * Callers:
 *     MiInitializeBootProcess @ 0x140CF1DA4 (MiInitializeBootProcess.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 */

__int64 MiAllocateProcessExtension()
{
  int CurrentProcessorColor; // eax

  CurrentProcessorColor = MmGetCurrentProcessorColor();
  return ExAllocatePoolMm(72LL, 0x680uLL, 844130637, CurrentProcessorColor | 0x80000000);
}
