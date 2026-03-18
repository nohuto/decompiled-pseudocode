/*
 * XREFs of ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18013D338
 * Callers:
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18013C7BC (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?StopCustomAndDefaultAnimations@CInteractionTracker@@EEAAX_N@Z @ 0x18013D1D0 (-StopCustomAndDefaultAnimations@CInteractionTracker@@EEAAX_N@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x18013E0F4 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18014B5C8 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?DemoteToBoundTracker@CInteractionTracker@@EEAAX_N@Z @ 0x18021FE70 (-DemoteToBoundTracker@CInteractionTracker@@EEAAX_N@Z.c)
 *     ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x1802702CC (-AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 *     ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x18027106C (-ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??0CExpressionValueStack@@QEAA@XZ @ 0x18010B9C0 (--0CExpressionValueStack@@QEAA@XZ.c)
 *     ??1?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18010BE44 (--1-$vector_facade@VCExpressionValue@@V-$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion.c)
 *     ?HoneyBadgerCalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@@Z @ 0x18013E6AC (-HoneyBadgerCalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CInteractionTracker::DestroyDefaultAnimations(CInteractionTracker *this, char a2)
{
  CBaseExpression **v2; // rbx
  CBaseExpression **v5; // rbx
  __int64 v6[13]; // [rsp+20h] [rbp-78h] BYREF

  v2 = (CBaseExpression **)((char *)this + 552);
  if ( *((_QWORD *)this + 69) )
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
  v5 = (CBaseExpression **)((char *)this + 560);
  if ( *((_QWORD *)this + 70) )
  {
    if ( a2 )
    {
      CExpressionValueStack::CExpressionValueStack((CExpressionValueStack *)v6);
      CBaseExpression::HoneyBadgerCalculateValue(*v5, (struct CExpressionValueStack *)v6);
      detail::vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>::~vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>(v6);
    }
    CResource::UnRegisterNotifierInternal(this, *v5);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 70);
  }
}
