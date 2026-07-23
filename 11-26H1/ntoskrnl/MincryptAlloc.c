/*
 * XREFs of MincryptAlloc @ 0x1408AB1A8
 * Callers:
 *     SymCryptCallbackAlloc @ 0x140727460 (SymCryptCallbackAlloc.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 MincryptAlloc()
{
  return ExAllocatePool2(0x102uLL);
}
