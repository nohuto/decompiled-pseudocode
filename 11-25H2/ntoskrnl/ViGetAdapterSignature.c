/*
 * XREFs of ViGetAdapterSignature @ 0x140B78FC4
 * Callers:
 *     ViGetAdapterInformationInternal @ 0x140B78EB8 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B7910C (ViGetRealDmaAdapter.c)
 *     ViHookDmaAdapter @ 0x140B79408 (ViHookDmaAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGetAdapterSignature(__int64 a1)
{
  return *(unsigned int *)(a1 + 16);
}
