/*
 * XREFs of VfMiscKeSetEvent_Entry @ 0x140C3CF90
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1404FD268 (VfMiscCheckKernelAddress.c)
 */

__int64 __fastcall VfMiscKeSetEvent_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 16), 0x18uLL, *(_QWORD *)a1);
}
