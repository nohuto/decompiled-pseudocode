/*
 * XREFs of VfMiscKeReleaseMutant_Entry @ 0x140C3CF00
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1404FD268 (VfMiscCheckKernelAddress.c)
 */

__int64 __fastcall VfMiscKeReleaseMutant_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 16), 0x38uLL, *(_QWORD *)a1);
}
