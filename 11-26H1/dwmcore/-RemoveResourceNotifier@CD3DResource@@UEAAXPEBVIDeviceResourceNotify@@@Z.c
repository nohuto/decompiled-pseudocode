/*
 * XREFs of ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800FC280
 * Callers:
 *     ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x1800F3840 (-ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ.c)
 *     ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x1800FB1AC (-ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 *     ?ReleaseResources@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@AEAAXXZ @ 0x1800FD82C (-ReleaseResources@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@AEAAXXZ.c)
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@EEAAXPEBVIDeviceResource@@@Z @ 0x180288400 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@EEAAX.c)
 *     ?RemoveResourceNotifier@?$IDeviceResourceMethodsT@VCD3DResource@@VIDeviceTexture@@@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1802B87C0 (-RemoveResourceNotifier@-$IDeviceResourceMethodsT@VCD3DResource@@VIDeviceTexture@@@@UEAAXPEBVIDe.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 *     __std_find_trivial_8 @ 0x180220100 (__std_find_trivial_8.c)
 */

void __fastcall CD3DResource::RemoveResourceNotifier(CD3DResource *this, const struct IDeviceResourceNotify *a2)
{
  __int64 trivial_8; // rax
  __int64 v4; // rdx

  trivial_8 = _std_find_trivial_8(*((_QWORD *)this + 6), *((_QWORD *)this + 7), a2);
  v4 = *((_QWORD *)this + 7);
  if ( trivial_8 != v4 )
  {
    std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
      (void *)(trivial_8 + 8),
      v4,
      (void *)trivial_8);
    *((_QWORD *)this + 7) -= 8LL;
  }
}
