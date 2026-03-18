/*
 * XREFs of ?push_back@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEAAX$$QEAPEAVCResource@@@Z @ 0x180024DAC
 * Callers:
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18014B5C8 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?AddLight@CVisual@@QEAAXPEAVCLight@@W4LightBehavior@@@Z @ 0x18026043C (-AddLight@CVisual@@QEAAXPEAVCLight@@W4LightBehavior@@@Z.c)
 *     ?RemoveLight@CVisual@@QEAAXPEAVCLight@@W4LightBehavior@@@Z @ 0x180260E88 (-RemoveLight@CVisual@@QEAAXPEAVCLight@@W4LightBehavior@@@Z.c)
 *     ?Initialize@CProjectedShadow@@QEAAXPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiver@@@Z @ 0x180262BC8 (-Initialize@CProjectedShadow@@QEAAXPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCP.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker2@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18027740C (-TransitionToCustomAnimation@CInteractionTracker2@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationT.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?last@?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ @ 0x180021E10 (-last@-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ.c)
 *     ?reserve_region@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@IEAAPEAPEAVCResource@@_K0@Z @ 0x180024AB0 (-reserve_region@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail.c)
 */

unsigned __int64 __fastcall detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::push_back(
        __int64 *a1,
        _QWORD *a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax

  v4 = detail::pointer_buffer_impl<CResource *,0>::last(a1);
  v5 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1);
  *(_QWORD *)detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::reserve_region(
               a1,
               (__int64)(v4 - v5) >> 3) = *a2;
  return detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1);
}
