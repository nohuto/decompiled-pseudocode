/*
 * XREFs of ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x1800B98EC
 * Callers:
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x1800B97FC (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 *     ?s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x1800B9C60 (-s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z.c)
 * Callees:
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ??$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18000ABC4 (--$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUIComposi.c)
 *     ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x18001B184 (-RemoveSelfFromParent@CVisual@@QEAAJXZ.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z @ 0x18004FE5C (-Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ApplyViewportTransformForView@CSurfaceBrush@@QEAAJAEBUtagRECT@@@Z @ 0x180083CD4 (-ApplyViewportTransformForView@CSurfaceBrush@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?FreezeImpl@CVisualBrush@@AEAAJW4VisualSurfaceFreezeBehavior@Internal@Composition@UI@Windows@@@Z @ 0x18009B51C (-FreezeImpl@CVisualBrush@@AEAAJW4VisualSurfaceFreezeBehavior@Internal@Composition@UI@Windows@@@Z.c)
 *     ?Reset@CVisualBrush@@QEAAJPEAVCVisual@@AEBUtagRECT@@PEBUD2D_SIZE_F@@@Z @ 0x18009B794 (-Reset@CVisualBrush@@QEAAJPEAVCVisual@@AEBUtagRECT@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAXPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x1800B9B80 (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAXPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 */

__int64 __fastcall CLivePreview::_UpdateResourcesForMonitor(CLivePreview *this, struct tagRECT *a2)
{
  const struct tagRECT *v2; // rbp
  const struct tagRECT *v5; // r15
  __int64 i; // rbx
  CLivePreview *v7; // rcx
  const struct CTopLevelWindow *v8; // rdx
  BOOL v9; // ebx
  BOOL v10; // eax
  CContainerVisual **v11; // rcx
  BOOL v12; // r12d
  int v13; // ebx
  __int64 v14; // rdx
  CRectangleVisual **p_right; // rbx
  CContainerVisual **v17; // rcx
  int v18; // eax
  unsigned int v19; // esi
  CSurfaceBrush *v20; // rsi
  int v21; // edi
  __int64 v22; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (struct tagRECT *)((char *)a2 + 24);
  SetRectEmpty((struct tagRECT *)((char *)a2 + 24));
  v5 = a2 + 4;
  SetRectEmpty(a2 + 4);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 58); i = (unsigned int)(i + 1) )
  {
    v7 = *(CLivePreview **)(*((_QWORD *)this + 26) + 40 * i);
    v8 = (const struct CTopLevelWindow *)*((_QWORD *)v7 + 55);
    if ( v8 )
      CLivePreview::_UpdateResourcesForMonitorHelper(v7, v8, (struct LivePreviewResource *)a2);
  }
  v9 = IsRectEmpty(v2);
  v10 = IsRectEmpty(a2 + 4);
  v11 = *(CContainerVisual ***)&a2->left;
  v12 = v10;
  if ( v9 )
  {
    if ( v11 )
    {
      CVisual::RemoveSelfFromParent(v11);
      wil::com_ptr_t<CImage,wil::err_exception_policy>::reset((CBaseObject **)a2);
    }
  }
  else
  {
    if ( !v11 )
    {
      wil::com_ptr_t<CImage,wil::err_exception_policy>::reset((CBaseObject **)a2);
      v13 = CSolidRectangleVisual::Create((struct CSolidRectangleVisual **)a2);
      if ( v13 < 0 )
      {
        v14 = 1150LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (int)"clientcore\\windows\\dwm\\udwm\\livepreview.cpp",
          (const char *)(unsigned int)v13);
        return (unsigned int)v13;
      }
    }
    CRectangleVisual::SetRect(*(CRectangleVisual **)&a2->left, v2);
    v13 = CVisualBrush::Reset((CVisualBrush *)&a2->right, *((struct CVisual **)this + 43), v2, 0LL);
    if ( v13 < 0 )
    {
      v14 = 1156LL;
      goto LABEL_9;
    }
    v13 = CSurfaceBrush::ApplyViewportTransformForView((CSurfaceBrush *)&a2->right, v2);
    if ( v13 < 0 )
    {
      v14 = 1157LL;
      goto LABEL_9;
    }
    v13 = CVisualBrush::FreezeImpl((__int64)&a2->right, 2u);
    if ( v13 < 0 )
    {
      v14 = 1158LL;
      goto LABEL_9;
    }
    v13 = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionColorBrush *>(
            *(_QWORD *)&a2->left,
            *(_QWORD *)&a2->right);
    if ( v13 < 0 )
    {
      v14 = 1159LL;
      goto LABEL_9;
    }
  }
  p_right = (CRectangleVisual **)&a2[2].right;
  v17 = *(CContainerVisual ***)&a2[2].right;
  if ( v12 )
  {
    if ( v17 )
    {
      CVisual::RemoveSelfFromParent(v17);
      wil::com_ptr_t<CImage,wil::err_exception_policy>::reset((CBaseObject **)&a2[2].right);
    }
  }
  else
  {
    if ( !v17 )
    {
      wil::com_ptr_t<CImage,wil::err_exception_policy>::reset((CBaseObject **)&a2[2].right);
      v18 = CSolidRectangleVisual::Create((struct CSolidRectangleVisual **)&a2[2].right);
      v19 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x493,
          (int)"clientcore\\windows\\dwm\\udwm\\livepreview.cpp",
          (const char *)(unsigned int)v18);
        return v19;
      }
    }
    CRectangleVisual::SetRect(*p_right, a2 + 4);
    v20 = (CSurfaceBrush *)&a2[3];
    v21 = CVisualBrush::Reset((CVisualBrush *)&a2[3], *((struct CVisual **)this + 45), a2 + 4, 0LL);
    if ( v21 < 0 )
    {
      v22 = 1177LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (int)"clientcore\\windows\\dwm\\udwm\\livepreview.cpp",
        (const char *)(unsigned int)v21);
      return (unsigned int)v21;
    }
    v21 = CSurfaceBrush::ApplyViewportTransformForView(v20, v5);
    if ( v21 < 0 )
    {
      v22 = 1178LL;
      goto LABEL_26;
    }
    v21 = CVisualBrush::FreezeImpl((__int64)v20, 2u);
    if ( v21 < 0 )
    {
      v22 = 1179LL;
      goto LABEL_26;
    }
    v13 = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionColorBrush *>((__int64)*p_right, *(_QWORD *)v20);
    if ( v13 < 0 )
    {
      v14 = 1180LL;
      goto LABEL_9;
    }
  }
  return 0LL;
}
