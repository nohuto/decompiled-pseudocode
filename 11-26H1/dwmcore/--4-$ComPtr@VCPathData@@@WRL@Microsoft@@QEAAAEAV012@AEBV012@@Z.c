/*
 * XREFs of ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180104A24
 * Callers:
 *     ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z @ 0x180104870 (-Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z.c)
 *     ?CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z @ 0x180147D3C (-CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z.c)
 *     ?GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x1801B8F60 (-GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z.c)
 *     ?SetDirtyRects@CCompositionDynamicTexture@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x1801FE400 (-SetDirtyRects@CCompositionDynamicTexture@@QEAAJAEBV-$span@$$CBV-$TMilRect_@HUtagRECT@@UMil3DRec.c)
 *     ?CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z @ 0x18025F508 (-CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CPathData>::operator=(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 8LL))(*a2);
    v4 = *a1;
    *a1 = v2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
