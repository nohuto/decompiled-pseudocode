/*
 * XREFs of ?last@?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ @ 0x180018840
 * Callers:
 *     ?RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z @ 0x1800185FC (-RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180024E5C (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?RemoveChild@CVisual@@IEAAXPEAV1@@Z @ 0x180025C10 (-RemoveChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z @ 0x180025D40 (-ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z.c)
 *     ?InsertChild@CVisual@@IEAAJPEAV1@0_N@Z @ 0x1800260F4 (-InsertChild@CVisual@@IEAAJPEAV1@0_N@Z.c)
 *     ?ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVECHILD@@@Z @ 0x1800262E0 (-ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVECHILD@@@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVCVisual@@V?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@IEAAPEAPEAVCVisual@@_K0@Z @ 0x18002655C (-reserve_region@-$vector_facade@PEAVCVisual@@V-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@d.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x180026DF0 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180082350 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180087C70 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContex.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z @ 0x18009FE40 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z.c)
 *     ?IsGraphWalkRootInProgress@CThreadContext@@SA_NPEBX@Z @ 0x18009FFD8 (-IsGraphWalkRootInProgress@CThreadContext@@SA_NPEBX@Z.c)
 *     ?pop_back@?$vector_facade@PEBXV?$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@QEAAXXZ @ 0x1800A007C (-pop_back@-$vector_facade@PEBXV-$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@QEAAXXZ.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x1800A0850 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeCont.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x1800A8F6C (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 *     ?AffectsVisual@CSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180281E60 (-AffectsVisual@CSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?RemoveExcludedTargetVisual@CSpotLight@@UEAAXPEAVCVisual@@@Z @ 0x180282730 (-RemoveExcludedTargetVisual@CSpotLight@@UEAAXPEAVCVisual@@@Z.c)
 *     ?RemoveTargetVisual@CSpotLight@@UEAAXPEAVCVisual@@@Z @ 0x1802827B0 (-RemoveTargetVisual@CSpotLight@@UEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::pointer_buffer_impl<CVisual *,0>::last(__int64 *a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *a1;
  v2 = 0LL;
  v3 = (unsigned __int64)a1;
  v4 = *a1 & 3;
  v5 = *(_DWORD *)a1 & 3;
  if ( v4 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( !v7 )
        return 0LL;
      if ( v7 != 1 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
      v9 = v4 - 1;
      if ( v9 )
      {
        if ( (unsigned __int64)(v9 - 1) >= 2 )
          ModuleFailFastForHRESULT(-2147418113, retaddr);
        return v3 + 8 * v2;
      }
    }
    else
    {
      v3 = v1 & 0xFFFFFFFFFFFFFFFCuLL;
    }
    v2 = *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
  }
  else
  {
    v2 = 1LL;
  }
  return v3 + 8 * v2;
}
