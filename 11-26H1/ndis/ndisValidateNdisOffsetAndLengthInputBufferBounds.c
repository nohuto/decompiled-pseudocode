/*
 * XREFs of ndisValidateNdisOffsetAndLengthInputBufferBounds @ 0x14016A940
 * Callers:
 *     ndisValidateNdisOffsetAndLengthInputString @ 0x140138B10 (ndisValidateNdisOffsetAndLengthInputString.c)
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1401832D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ndisValidateEmbeddedBufferBounds @ 0x14013C094 (ndisValidateEmbeddedBufferBounds.c)
 */

char __fastcall ndisValidateNdisOffsetAndLengthInputBufferBounds(__int64 a1, unsigned int *a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r10
  __int64 v4; // rcx

  *a3 = 0LL;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(unsigned int *)(*(_QWORD *)(a1 + 184) + 16LL);
  if ( (unsigned __int64)a2 < v3 || (unsigned __int64)(a2 + 2) > v3 + v4 )
    return 0;
  else
    return ndisValidateEmbeddedBufferBounds(v3, v4, (unsigned __int64)a2, 8u, 0, *a2, a2[1], 0, a3);
}
