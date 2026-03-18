/*
 * XREFs of VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry @ 0x140C3CCD0
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1404FD268 (VfMiscCheckKernelAddress.c)
 */

__int64 __fastcall VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry(__int64 a1)
{
  VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 16), 8uLL, *(_QWORD *)a1);
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), 0x18uLL, *(_QWORD *)a1);
}
