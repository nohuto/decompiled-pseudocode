/*
 * XREFs of VfMiscObReferenceObjectByPointerWithTag_Entry @ 0x140C43570
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1404F67A8 (VfMiscCheckKernelAddress.c)
 */

__int64 __fastcall VfMiscObReferenceObjectByPointerWithTag_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 32), 8uLL, *(_QWORD *)a1);
}
