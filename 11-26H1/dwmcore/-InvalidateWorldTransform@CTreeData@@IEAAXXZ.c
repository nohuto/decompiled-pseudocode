/*
 * XREFs of ?InvalidateWorldTransform@CTreeData@@IEAAXXZ @ 0x180237988
 * Callers:
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x1800209C0 (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180026744 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x18018BAE0 (-ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPTIONS@@@Z.c)
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x18018BDBC (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1801973A0 (-ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVE.c)
 * Callees:
 *     ?IsCurrentThreadWriter@CReadWriteLock@@QEBA_NXZ @ 0x180184FF0 (-IsCurrentThreadWriter@CReadWriteLock@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ @ 0x180226608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall CTreeData::InvalidateWorldTransform(CTreeData *this)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Comp_Racy>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Comp_Racy>::GetImpl'::`2'::impl)
    && !CReadWriteLock::IsCurrentThreadWriter((CComposition *)((char *)g_pComposition + 5696)) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x123,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\treedata.cpp",
      v2);
  }
  *((_QWORD *)this + 28) = 0LL;
}
