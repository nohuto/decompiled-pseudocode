/*
 * XREFs of ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800407B4
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180011F28 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x1800406A8 (-_UpdateBackgroundGeometry@CAccent@@IEAAJXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x1800A0700 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?_UpdateTransitionGradient@CAccent@@IEAAXXZ @ 0x1800A0938 (-_UpdateTransitionGradient@CAccent@@IEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180006760 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18000723C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180040ADC (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?SetSolidFill@CSolidRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180040BC8 (-SetSolidFill@CSolidRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?SetRect@CSolidRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180040BDC (-SetRect@CSolidRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNo.c)
 *     ?ForceRender@CCompositor@@QEAAJXZ @ 0x180070AE4 (-ForceRender@CCompositor@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMonitorRectAtIndex@CDesktopManager@@SA_NIPEAUtagRECT@@@Z @ 0x1800987CC (-GetMonitorRectAtIndex@CDesktopManager@@SA_NIPEAUtagRECT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAccent::_UpdateSolidFill(_DWORD *a1, CRenderDataVisual *a2, int a3, __int128 *a4, D3DVALUE a5)
{
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  CBaseObject *v11; // rcx
  __int64 v13; // rdx
  CBaseObject *v14; // rcx
  unsigned int i; // edi
  int v16; // eax
  float v17; // xmm3_4
  int v18; // eax
  float v19; // xmm2_4
  __int64 v20; // rdx
  _D3DCOLORVALUE v21; // [rsp+20h] [rbp-30h] BYREF
  struct tagRECT v22; // [rsp+30h] [rbp-20h] BYREF
  __int128 v23; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  CSolidRectangleInstruction *v25; // [rsp+88h] [rbp+38h] BYREF

  v25 = 0LL;
  v23 = *a4;
  v8 = CRenderDataVisual::ClearInstructions(a2);
  if ( v8 < 0 )
  {
    v13 = 790LL;
    goto LABEL_12;
  }
  v21.r = flt_1800F9280[(unsigned __int8)a3] / 255.0;
  v21.g = flt_1800F9280[(unsigned __int64)(unsigned __int16)a3 >> 8] / 255.0;
  v21.b = flt_1800F9280[BYTE2(a3)] / 255.0;
  v9 = a1[61];
  if ( (v9 & 0x800) != 0 )
    v21.a = 0.0;
  else
    v21.a = a5;
  if ( (v9 & 4) != 0 )
  {
    if ( (v9 & 8) == 0 )
    {
      v23 = _xmm;
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v25);
      v8 = CSolidRectangleInstruction::Create(&v25);
      if ( v8 < 0 )
      {
        v13 = 839LL;
      }
      else
      {
        CSolidRectangleInstruction::SetRect(v25, &v23);
        v8 = CSolidRectangleInstruction::SetSolidFill(v25, &v21);
        if ( v8 >= 0 )
        {
          v8 = CRenderDataVisual::AddInstruction(a2, v25);
          if ( v8 < 0 )
          {
            v13 = 842LL;
            goto LABEL_12;
          }
LABEL_22:
          CCompositor::ForceRender(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
          goto LABEL_8;
        }
        v13 = 841LL;
      }
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)v8,
        SLODWORD(v21.r));
      v14 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        CBaseObject::Release(v14);
      }
      return (unsigned int)v8;
    }
    v22 = 0LL;
    for ( i = 0; CDesktopManager::GetMonitorRectAtIndex(i, &v22); ++i )
    {
      if ( v22.left || v22.top )
      {
        v16 = 0;
        if ( v22.bottom - v22.top >= 0 )
          v16 = v22.bottom - v22.top;
        v17 = (float)v16;
        v18 = 0;
        if ( v22.right - v22.left >= 0 )
          v18 = v22.right - v22.left;
        v19 = (float)(v22.top - a1[135]);
        *(float *)&v23 = (float)(v22.left - a1[134]);
        *((float *)&v23 + 1) = v19;
        *((float *)&v23 + 2) = (float)v18 + *(float *)&v23;
        *((float *)&v23 + 3) = v19 + v17;
        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v25);
        v10 = CSolidRectangleInstruction::Create(&v25);
        v8 = v10;
        if ( v10 < 0 )
        {
          v20 = 825LL;
          goto LABEL_42;
        }
        CSolidRectangleInstruction::SetRect(v25, &v23);
        v10 = CSolidRectangleInstruction::SetSolidFill(v25, &v21);
        v8 = v10;
        if ( v10 < 0 )
        {
          v20 = 827LL;
          goto LABEL_42;
        }
        v10 = CRenderDataVisual::AddInstruction(a2, v25);
        v8 = v10;
        if ( v10 < 0 )
        {
          v20 = 828LL;
          goto LABEL_42;
        }
      }
    }
    goto LABEL_22;
  }
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v25);
  v8 = CSolidRectangleInstruction::Create(&v25);
  if ( v8 < 0 )
  {
    v13 = 851LL;
    goto LABEL_12;
  }
  CSolidRectangleInstruction::SetRect(v25, &v23);
  v8 = CSolidRectangleInstruction::SetSolidFill(v25, &v21);
  if ( v8 < 0 )
  {
    v13 = 853LL;
    goto LABEL_12;
  }
  v10 = CRenderDataVisual::AddInstruction(a2, v25);
  v8 = v10;
  if ( v10 < 0 )
  {
    v20 = 854LL;
LABEL_42:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v10,
      SLODWORD(v21.r));
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v25);
    return (unsigned int)v8;
  }
LABEL_8:
  v11 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    CBaseObject::Release(v11);
  }
  return 0LL;
}
