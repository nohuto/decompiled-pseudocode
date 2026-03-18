/*
 * XREFs of VfMiscKeAcquireSpinLockRaiseToDpc_Entry @ 0x140B8DCD0
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1404B11E4 (VfMiscCheckKernelAddress.c)
 *     ViMiscCheckKeRaiseIrql @ 0x140B9803C (ViMiscCheckKeRaiseIrql.c)
 */

__int64 __fastcall VfMiscKeAcquireSpinLockRaiseToDpc_Entry(__int64 *a1)
{
  __int64 v2; // rcx

  VfMiscCheckKernelAddress(a1[1], 8uLL, *a1);
  LOBYTE(v2) = 2;
  return ViMiscCheckKeRaiseIrql(v2, *a1);
}
