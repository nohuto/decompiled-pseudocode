/*
 * XREFs of ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@EEAAXPEBVIDeviceResource@@@Z @ 0x180144FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::NotifyInvalidResource()
{
  return CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::ReleaseResource();
}
