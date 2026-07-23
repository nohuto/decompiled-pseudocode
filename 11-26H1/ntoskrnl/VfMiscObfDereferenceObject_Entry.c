/*
 * XREFs of VfMiscObfDereferenceObject_Entry @ 0x140C4E080
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1404F67A8 (VfMiscCheckKernelAddress.c)
 */

__int64 __fastcall VfMiscObfDereferenceObject_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), 8uLL, *(_QWORD *)a1);
}
