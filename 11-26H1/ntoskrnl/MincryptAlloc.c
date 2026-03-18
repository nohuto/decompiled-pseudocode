/*
 * XREFs of MincryptAlloc @ 0x1408A4D98
 * Callers:
 *     SymCryptCallbackAlloc @ 0x140722890 (SymCryptCallbackAlloc.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 MincryptAlloc()
{
  return ExAllocatePool2(0x102uLL);
}
