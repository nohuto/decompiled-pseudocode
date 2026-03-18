/*
 * XREFs of HalPutScatterGatherList @ 0x14035B550
 * Callers:
 *     <none>
 * Callees:
 *     HalPutScatterGatherListV2 @ 0x14035B580 (HalPutScatterGatherListV2.c)
 *     HalPutScatterGatherListV3 @ 0x14043ED84 (HalPutScatterGatherListV3.c)
 */

void __stdcall HalPutScatterGatherList(
        PADAPTER_OBJECT DmaAdapter,
        PSCATTER_GATHER_LIST ScatterGather,
        BOOLEAN WriteToDevice)
{
  if ( HIDWORD(DmaAdapter[9].DmaOperations) == 2 )
    HalPutScatterGatherListV2(DmaAdapter, ScatterGather, WriteToDevice);
  else
    HalPutScatterGatherListV3(DmaAdapter, ScatterGather, WriteToDevice);
}
