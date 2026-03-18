/*
 * XREFs of ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18010E190
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K@Z @ 0x180080338 (-UpdateExpressions@CExpressionManager@@QEAAX_K@Z.c)
 *     ?CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z @ 0x180080910 (-CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18010C730 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ?ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18010D8B0 (-ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@UDCOMPOSITION_PROPERTY_REFERENCE@@W4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18010DE34 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@UDCOMPOSITION_PROPERTY_REFERENCE@@W4DCOMPOSITIO.c)
 *     ?Stop@CScrollAnimation@@QEAAJXZ @ 0x18013E998 (-Stop@CScrollAnimation@@QEAAJXZ.c)
 *     ??1CBaseExpression@@MEAA@XZ @ 0x180200110 (--1CBaseExpression@@MEAA@XZ.c)
 * Callees:
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x18004C1C0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x18004C290 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009B620 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ?EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x18010E7B4 (-EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?RemoveAnimationProducer@CResource@@QEAAXPEAVCBaseExpression@@@Z @ 0x1801A9358 (-RemoveAnimationProducer@CResource@@QEAAXPEAVCBaseExpression@@@Z.c)
 */

void __fastcall CBaseExpression::EnsureExpressionIsUnregistered(CBaseExpression *this)
{
  __int64 *v2; // rbp
  __int64 *v3; // rdi
  CExpressionManager *v4; // rsi
  __int64 *v5; // rdx
  __int64 *v6; // rcx
  CResource *TargetResource; // rax

  v2 = (__int64 *)*((_QWORD *)this + 33);
  v3 = (__int64 *)*((_QWORD *)this + 32);
  v4 = *(CExpressionManager **)(*((_QWORD *)this + 3) + 816LL);
  while ( v3 != v2 )
  {
    TargetResource = (CResource *)CWeakReference<CGdiSpriteBitmap>::GetTargetResource(*v3);
    if ( TargetResource )
      CResource::RemoveAnimationProducer(TargetResource, this);
    ++v3;
  }
  v5 = (__int64 *)*((_QWORD *)this + 33);
  v6 = (__int64 *)*((_QWORD *)this + 32);
  if ( v6 != v5 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>(v6, v5);
    *((_QWORD *)this + 33) = *((_QWORD *)this + 32);
  }
  if ( (*((_BYTE *)this + 216) & 0x20) != 0 )
  {
    if ( (*((_BYTE *)this + 217) & 1) != 0 )
      CExpressionManager::EnsureAutoCompleteOnOccludedAnimationRemoved(v4, this);
    CExpressionManager::UnregisterExpression(v4, this);
    *((_BYTE *)this + 216) &= ~0x20u;
  }
}
