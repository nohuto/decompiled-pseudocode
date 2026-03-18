/*
 * XREFs of VfMiscKeReleaseMutant_Entry @ 0x140B8DEE0
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1404B11E4 (VfMiscCheckKernelAddress.c)
 */

unsigned __int64 __fastcall VfMiscKeReleaseMutant_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 16), 0x38uLL, *(_QWORD *)a1);
}
