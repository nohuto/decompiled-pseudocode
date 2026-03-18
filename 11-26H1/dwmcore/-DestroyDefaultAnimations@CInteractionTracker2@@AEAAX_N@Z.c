/*
 * XREFs of ?DestroyDefaultAnimations@CInteractionTracker2@@AEAAX_N@Z @ 0x180272FC0
 * Callers:
 *     ?AnimateToScale@CInteractionTracker2@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x180271A00 (-AnimateToScale@CInteractionTracker2@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 *     ?DemoteToBoundTracker@CInteractionTracker2@@EEAAX_N@Z @ 0x180272F40 (-DemoteToBoundTracker@CInteractionTracker2@@EEAAX_N@Z.c)
 *     ?ScrollToPosition@CInteractionTracker2@@AEAAJAEBUD2DVector3@@MH@Z @ 0x180275544 (-ScrollToPosition@CInteractionTracker2@@AEAAJAEBUD2DVector3@@MH@Z.c)
 *     ?StopCustomAndDefaultAnimations@CInteractionTracker2@@EEAAX_N@Z @ 0x1802772F0 (-StopCustomAndDefaultAnimations@CInteractionTracker2@@EEAAX_N@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker2@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18027740C (-TransitionToCustomAnimation@CInteractionTracker2@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationT.c)
 *     ?TransitionToIdle@CInteractionTracker2@@AEAAXXZ @ 0x180277528 (-TransitionToIdle@CInteractionTracker2@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker2@@AEAA_NW4InertiaReason@1@@Z @ 0x180277668 (-TransitionToInertia@CInteractionTracker2@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??0CExpressionValueStack@@QEAA@XZ @ 0x18010B9C0 (--0CExpressionValueStack@@QEAA@XZ.c)
 *     ??1?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18010BE44 (--1-$vector_facade@VCExpressionValue@@V-$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion.c)
 *     ?HoneyBadgerCalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@@Z @ 0x18013E6AC (-HoneyBadgerCalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CInteractionTracker2::DestroyDefaultAnimations(CInteractionTracker2 *this, char a2)
{
  CBaseExpression **v2; // rbx
  CBaseExpression **v5; // rbx
  __int64 v6[13]; // [rsp+20h] [rbp-78h] BYREF

  v2 = (CBaseExpression **)((char *)this + 784);
  if ( *((_QWORD *)this + 98) )
  {
    if ( a2 )
    {
      CExpressionValueStack::CExpressionValueStack((CExpressionValueStack *)v6);
      CBaseExpression::HoneyBadgerCalculateValue(*v2, (struct CExpressionValueStack *)v6);
      detail::vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>::~vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>(v6);
    }
    CResource::UnRegisterNotifierInternal(this, *v2);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v2);
  }
  v5 = (CBaseExpression **)((char *)this + 792);
  if ( *((_QWORD *)this + 99) )
  {
    if ( a2 )
    {
      CExpressionValueStack::CExpressionValueStack((CExpressionValueStack *)v6);
      CBaseExpression::HoneyBadgerCalculateValue(*v5, (struct CExpressionValueStack *)v6);
      detail::vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>::~vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>(v6);
    }
    CResource::UnRegisterNotifierInternal(this, *v5);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 99);
  }
}
