/*
 * XREFs of PspVsmEnclaveHashAllocator @ 0x1407729A8
 * Callers:
 *     PsCreateVsmEnclave @ 0x1407724E8 (PsCreateVsmEnclave.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 PspVsmEnclaveHashAllocator()
{
  return ExAllocatePool2(0x101uLL);
}
