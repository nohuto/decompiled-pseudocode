/*
 * XREFs of VfMiscKeAcquireSpinLockAtDpcLevel_Entry @ 0x140609050
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1404B11E4 (VfMiscCheckKernelAddress.c)
 */

unsigned __int64 __fastcall VfMiscKeAcquireSpinLockAtDpcLevel_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), 8uLL, *(_QWORD *)a1);
}
