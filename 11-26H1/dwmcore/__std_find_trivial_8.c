/*
 * XREFs of __std_find_trivial_8 @ 0x180220100
 * Callers:
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x180031B70 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     ?RemoveResourceNotifier@?$CDeviceResourceT@V?$CMILCOMBaseT@VISwapChain@@VIDeviceResource@@VCMilObjectDeleter@@@@@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800FB8C0 (-RemoveResourceNotifier@-$CDeviceResourceT@V-$CMILCOMBaseT@VISwapChain@@VIDeviceResource@@VCMilO.c)
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800FC280 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@?$CDeviceResourceT@V?$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800FC300 (-RemoveResourceNotifier@-$CDeviceResourceT@V-$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDelet.c)
 *     ??$ReplaceNotifier@VCVisual@@@CResource@@QEAAXPEAPEAV?$CWeakReference@VCVisual@@@@PEAVCVisual@@@Z @ 0x18013EC60 (--$ReplaceNotifier@VCVisual@@@CResource@@QEAAXPEAPEAV-$CWeakReference@VCVisual@@@@PEAVCVisual@@@.c)
 *     ?RemoveListener@CResourceWeakRef@@QEAAXPEBVCResource@@@Z @ 0x18013F098 (-RemoveListener@CResourceWeakRef@@QEAAXPEBVCResource@@@Z.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z @ 0x180148EAC (-RemoveRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z.c)
 *     ?ClearReceivers@CProjectedShadowScene@@AEAAXXZ @ 0x180190DE8 (-ClearReceivers@CProjectedShadowScene@@AEAAXXZ.c)
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x1801A738C (-DoStackCapture@@YAXJIPEAX@Z.c)
 *     ??$find@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVIDeviceResourceNotify@@@std@@@std@@@std@@PEBVIDeviceResourceNotify@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVIDeviceResourceNotify@@@std@@@std@@@0@V10@V10@AEBQEBVIDeviceResourceNotify@@@Z @ 0x1801B16A0 (--$find@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@PEAVIDeviceResourceNotify@@@std@@@st.c)
 *     ?ClearCasters@CProjectedShadowScene@@AEAAXXZ @ 0x180208DC8 (-ClearCasters@CProjectedShadowScene@@AEAAXXZ.c)
 *     ?RemoveCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z @ 0x18022B188 (-RemoveCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z.c)
 *     ??$remove@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCDataSourceReader@@@std@@@std@@@std@@PEAVCDataSourceReader@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCDataSourceReader@@@std@@@std@@@0@V10@V10@AEBQEAVCDataSourceReader@@@Z @ 0x18022E2BC (--$remove@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@PEAVCDataSourceReader@@@std@@@std@.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18022F4CC (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 *     ?UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCPositionedLight@@@Z @ 0x180232194 (-UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCPositionedLight@@@Z.c)
 *     ?DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_NPEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@@Z @ 0x18023F4BC (-DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_NPEAV-$vector@PEAVBamoPrincipalI.c)
 *     ?UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x18024397C (-UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 *     ?IsOpaquelyBacked@CArrayBasedCoverageSet@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@HPEBV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x180258FE8 (-IsOpaquelyBacked@CArrayBasedCoverageSet@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?RemoveProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x180260FE0 (-RemoveProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 *     ?RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x180261068 (-RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?RemoveExcludedTargetVisual@CLight@@UEAAXPEAVCVisual@@@Z @ 0x180264B80 (-RemoveExcludedTargetVisual@CLight@@UEAAXPEAVCVisual@@@Z.c)
 *     ?RemoveTargetVisual@CLight@@UEAAXPEAVCVisual@@@Z @ 0x180264BD0 (-RemoveTargetVisual@CLight@@UEAAXPEAVCVisual@@@Z.c)
 *     ??$find@V?$span_iterator@PEAVCSceneNode@@@details@gsl@@PEAVCSceneNode@@@std@@YA?AV?$span_iterator@PEAVCSceneNode@@@details@gsl@@V123@V123@AEBQEAVCSceneNode@@@Z @ 0x1802811D8 (--$find@V-$span_iterator@PEAVCSceneNode@@@details@gsl@@PEAVCSceneNode@@@std@@YA-AV-$span_iterato.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x18029A3D8 (--1CDDisplaySwapChain@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
const __m128i *__fastcall _std_find_trivial_8(const __m128i *a1, const __m128i *a2, unsigned __int64 _R8)
{
  return anonymous_namespace_::__std_find_trivial_impl__anonymous_namespace_::_Find_traits_8_unsigned___int64_(
           a1,
           a2,
           _R8);
}
