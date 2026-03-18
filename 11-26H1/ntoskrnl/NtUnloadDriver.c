/*
 * XREFs of NtUnloadDriver @ 0x140B2ADE0
 * Callers:
 *     DifNtUnloadDriverWrapper @ 0x14068FE00 (DifNtUnloadDriverWrapper.c)
 * Callees:
 *     IopUnloadDriver @ 0x140B2ADF8 (IopUnloadDriver.c)
 */

__int64 __fastcall NtUnloadDriver(__int64 a1)
{
  return IopUnloadDriver(a1, 0LL);
}
