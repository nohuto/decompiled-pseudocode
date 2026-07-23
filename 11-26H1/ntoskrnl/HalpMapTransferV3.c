/*
 * XREFs of HalpMapTransferV3 @ 0x140438870
 * Callers:
 *     HalpAllocateAdapterCallbackV2 @ 0x14035CC90 (HalpAllocateAdapterCallbackV2.c)
 *     IopMapTransfer @ 0x14035E030 (IopMapTransfer.c)
 *     IoMapTransferInternal @ 0x14043841C (IoMapTransferInternal.c)
 * Callees:
 *     HalpDmaMapScatterTransferV3 @ 0x1404396C4 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaMapContiguousTransferV3 @ 0x14043A03C (HalpDmaMapContiguousTransferV3.c)
 *     HalpDmaZeroMapBuffers @ 0x14058BC68 (HalpDmaZeroMapBuffers.c)
 */

__int64 __fastcall HalpMapTransferV3(__int64 a1, int a2, __int64 a3, __int16 a4, _DWORD *a5, char a6, char a7)
{
  __int64 v9; // r15
  __int64 v10; // rcx
  _QWORD v12[3]; // [rsp+40h] [rbp-18h] BYREF

  v12[0] = 0LL;
  if ( !*a5 )
    return 0LL;
  if ( !*(_QWORD *)(a1 + 512) )
  {
    *a5 = 0;
    return 0LL;
  }
  v9 = *(_QWORD *)(a3 + 56);
  if ( *(_BYTE *)(a1 + 442) )
    HalpDmaMapScatterTransferV3(a1, a2, a3, a4, (__int64)a5, a6, a7, (__int64)v12);
  else
    HalpDmaMapContiguousTransferV3(a1, a2, a3, a4, (__int64)a5, a6, a7, (__int64)v12);
  if ( !*(_BYTE *)(a1 + 441) && !a6 )
  {
    if ( *(_BYTE *)(a1 + 444) )
      HalpDmaZeroMapBuffers(v10, v9, a4 & 0xFFF, (unsigned int)*a5);
  }
  return v12[0];
}
