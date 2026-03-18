/*
 * XREFs of VfMiscObReferenceObjectByPointerWithTag_Entry @ 0x140B8E580
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1404B11E4 (VfMiscCheckKernelAddress.c)
 */

unsigned __int64 __fastcall VfMiscObReferenceObjectByPointerWithTag_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 32), 8uLL, *(_QWORD *)a1);
}
