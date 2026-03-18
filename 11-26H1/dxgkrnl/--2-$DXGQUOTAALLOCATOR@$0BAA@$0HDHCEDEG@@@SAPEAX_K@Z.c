/*
 * XREFs of ??2?$DXGQUOTAALLOCATOR@$0BAA@$0HDHCEDEG@@@SAPEAX_K@Z @ 0x140045418
 * Callers:
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x14001C914 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@PEAUPresentationSurfaceInfo@@@Z @ 0x1400450C8 (-Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@PEAUPresentat.c)
 * Callees:
 *     <none>
 */

__int64 DXGQUOTAALLOCATOR<256,1936868166>::operator new()
{
  return ExAllocatePool2(257LL, 72LL, 1936868166LL);
}
