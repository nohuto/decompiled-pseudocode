/*
 * XREFs of ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18007DF14
 * Callers:
 *     ?UpdateMarginsAndStyle@CTopLevelWindow@@AEAAJ_N00PEA_N11@Z @ 0x180016500 (-UpdateMarginsAndStyle@CTopLevelWindow@@AEAAJ_N00PEA_N11@Z.c)
 * Callees:
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x18000F71C (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18001007C (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?GetBorderRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x180011884 (-GetBorderRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 *     ?SetRTLMirror@CVisual@@QEAAX_N@Z @ 0x180014014 (-SetRTLMirror@CVisual@@QEAAX_N@Z.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0O@$00@@YA?AVDirtyFlags@@XZ @ 0x180016024 (--$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0O@$00@@YA-AVDirtyFlags@.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18001B974 (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ChooseWindowFrame@CTopLevelWindow@@AEBAPEAUWindowFrame@1@I_N@Z @ 0x1800201E0 (-ChooseWindowFrame@CTopLevelWindow@@AEBAPEAUWindowFrame@1@I_N@Z.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x1800202D0 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ @ 0x180020370 (-IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x1800204DC (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?CalculateBackgroundType@CTopLevelWindow@@AEBA?AW4BackgroundType@1@XZ @ 0x1800207AC (-CalculateBackgroundType@CTopLevelWindow@@AEBA-AW4BackgroundType@1@XZ.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x1800208B0 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?GetFloatCornerRadiusForCurrentStyle@CTopLevelWindow@@AEAAMXZ @ 0x180021028 (-GetFloatCornerRadiusForCurrentStyle@CTopLevelWindow@@AEAAMXZ.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180022B00 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18002748C (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ @ 0x18004B30C (-UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetRoundedBorderColor@CTopLevelWindow@@AEAA?AU_D3DCOLORVALUE@@XZ @ 0x18004B548 (-GetRoundedBorderColor@CTopLevelWindow@@AEAA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z @ 0x18004B728 (-UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z.c)
 *     ?GetShadowStyle@CTopLevelWindow@@AEAA?AW4ShadowStyle@CWindowBorder@@XZ @ 0x180062BF4 (-GetShadowStyle@CTopLevelWindow@@AEAA-AW4ShadowStyle@CWindowBorder@@XZ.c)
 *     ?GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z @ 0x180063E18 (-GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z.c)
 *     ?IsShadowNCAreaPart@CTopLevelWindow@@CA_NI@Z @ 0x180065B38 (-IsShadowNCAreaPart@CTopLevelWindow@@CA_NI@Z.c)
 *     ?GetBorderStyle@CTopLevelWindow@@AEAA?AW4BorderStyle@CWindowBorder@@XZ @ 0x180069680 (-GetBorderStyle@CTopLevelWindow@@AEAA-AW4BorderStyle@CWindowBorder@@XZ.c)
 *     ?SetBitmapSource@CNineGridImagePrimitive@@QEAAXPEAVCBitmapSource@@@Z @ 0x180072CA8 (-SetBitmapSource@CNineGridImagePrimitive@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?SetSize@CPrimitive@@QEAAXAEBUtagSIZE@@@Z @ 0x180072CDC (-SetSize@CPrimitive@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?Create@CThemePartPrimitive@@SAJPEAPEAV1@@Z @ 0x1800738BC (-Create@CThemePartPrimitive@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAllPrimitives@CPrimitiveGroupVisual@@QEAAXXZ @ 0x1800881CC (-RemoveAllPrimitives@CPrimitiveGroupVisual@@QEAAXXZ.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 *     ?SetHiddenMargins@CNineGridImagePrimitive@@QEAAXU?$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z @ 0x18008DD88 (-SetHiddenMargins@CNineGridImagePrimitive@@QEAAXU-$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18008F41C (IsOpenThemeDataPresent.c)
 *     ?AppendPrimitive@CPrimitiveGroupVisual@@QEAAXPEAVCPrimitive@@@Z @ 0x1800BDB34 (-AppendPrimitive@CPrimitiveGroupVisual@@QEAAXPEAVCPrimitive@@@Z.c)
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x1800CBE44 (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateWindowVisuals(CTopLevelWindow *this)
{
  struct tagSIZE *WindowFramePart; // rbp
  unsigned int v2; // ebx
  CTopLevelWindow *v3; // r12
  float FloatCornerRadiusForCurrentStyle; // xmm0_4
  int v5; // ecx
  struct CTopLevelWindow::WindowFrame *v6; // r14
  CVisual *v7; // rcx
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  char v13; // r15
  __int64 v14; // r8
  unsigned int i; // edi
  struct CPrimitive **v16; // rsi
  CBaseObject *v17; // rcx
  int v18; // eax
  __int64 v19; // r14
  int ShadowStyle; // ebp
  int BorderStyle; // esi
  CTopLevelWindow *v22; // rcx
  struct _D3DCOLORVALUE *RoundedBorderColor; // rdi
  int v24; // ebx
  struct tagRECT *BorderRect; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  struct CVisual **v29; // rdi
  struct CVisual *v30; // rdx
  int v31; // eax
  int inserted; // eax
  int *v33; // rax
  CContainerVisual *v34; // rcx
  int v35; // eax
  int *v36; // rax
  int v37; // eax
  int updated; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v43; // [rsp+20h] [rbp-98h]
  CTopLevelWindow *v44; // [rsp+40h] [rbp-78h] BYREF
  bool v45[8]; // [rsp+48h] [rbp-70h]
  struct _D3DCOLORVALUE v46; // [rsp+50h] [rbp-68h] BYREF
  struct tagRECT v47; // [rsp+60h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  WindowFramePart = 0LL;
  v44 = this;
  v2 = 0;
  v3 = this;
  if ( !(unsigned __int8)IsOpenThemeDataPresent() )
    return v2;
  if ( !*((_BYTE *)v3 + 792) )
  {
    FloatCornerRadiusForCurrentStyle = CTopLevelWindow::GetFloatCornerRadiusForCurrentStyle(v3);
    v5 = *((_DWORD *)v3 + 142);
    if ( (v5 & 0x20) != 0 || CTopLevelWindow::HasRenderedBorder(v5) || FloatCornerRadiusForCurrentStyle > 0.0 )
    {
      v19 = *((_QWORD *)v3 + 26);
      ShadowStyle = CTopLevelWindow::GetShadowStyle((__int64)v3);
      BorderStyle = CTopLevelWindow::GetBorderStyle((__int64)v3);
      RoundedBorderColor = CTopLevelWindow::GetRoundedBorderColor(v22, &v46);
      v24 = *(_DWORD *)(*((_QWORD *)v3 + 87) + 348LL);
      BorderRect = CTopLevelWindow::GetBorderRect(v3, &v47, 0);
      v26 = CWindowBorder::SetBorderParameters(
              v19,
              BorderRect,
              FloatCornerRadiusForCurrentStyle,
              v24,
              &RoundedBorderColor->r,
              BorderStyle,
              ShadowStyle);
      WindowFramePart = 0LL;
      v2 = v26;
      if ( v26 >= 0 )
      {
        v2 = CWindowBorder::EnableBorder(*((CVisual ***)v3 + 26), 1);
        if ( (v2 & 0x80000000) == 0 )
          goto LABEL_7;
        v27 = 2196LL;
      }
      else
      {
        v27 = 2195LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v27,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)v2,
        v43);
      return v2;
    }
    CWindowBorder::EnableBorder(*((CVisual ***)v3 + 26), 0);
  }
LABEL_7:
  v6 = CTopLevelWindow::ChooseWindowFrame(v3, *((_DWORD *)v3 + 142), 0);
  v7 = (CVisual *)*((_QWORD *)v3 + 29);
  v8 = *((_DWORD *)v3 + 142) >> 17;
  LOBYTE(v8) = (*((_DWORD *)v3 + 142) & 0x20000) != 0;
  *(_QWORD *)&v46.r = v6;
  LOBYTE(v9) = v8;
  *(_DWORD *)v45 = v8;
  CVisual::SetRTLMirror(v7, v9, v10);
  LOBYTE(v11) = v8;
  CVisual::SetRTLMirror(*((CVisual **)v3 + 67), v11, v12);
  if ( !v6 || (v13 = 1, !CDesktopManager::IsHighContrastMode()) )
    v13 = 0;
  CPrimitiveGroupVisual::RemoveAllPrimitives(*((CPrimitiveGroupVisual **)v3 + 31));
  for ( i = 0; i < 0x16; ++i )
  {
    v16 = (struct CPrimitive **)((char *)v3 + 8 * i + 288);
    if ( v13 && !CTopLevelWindow::IsShadowNCAreaPart(i) )
      WindowFramePart = (struct tagSIZE *)CTopLevelWindow::GetWindowFramePart(v6, i);
    v17 = *v16;
    if ( WindowFramePart )
    {
      if ( !v17 )
      {
        v18 = CThemePartPrimitive::Create((struct CThemePartPrimitive **)v3 + i + 36);
        v2 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x8C0u, 0LL);
          return v2;
        }
        *((_DWORD *)*v16 + 18) = i;
      }
      CPrimitiveGroupVisual::AppendPrimitive(*((CPrimitiveGroupVisual **)v3 + 31), *v16);
      CNineGridImagePrimitive::SetBitmapSource(*v16, (struct CBitmapSource *)WindowFramePart);
      CPrimitive::SetSize((struct tagSIZE *)*v16, WindowFramePart + 16);
      WindowFramePart = 0LL;
    }
    else if ( v17 )
    {
      CBaseObject::Release(v17);
      *v16 = 0LL;
    }
  }
  if ( v13 )
  {
    if ( CTopLevelWindow::IsSheetOfGlass(v3) )
    {
      CNineGridImagePrimitive::SetHiddenMargins(v28, 10LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v44 + 37), 8LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v44 + 38), 9LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v44 + 39), 2LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v44 + 40), 1LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v44 + 41), 6LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v44 + 42), 4LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v44 + 43), 5LL);
      v3 = v44;
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v44 + 45), 10LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v44 + 46), 8LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v44 + 47), 9LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v44 + 48), 2LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v44 + 49), 1LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v44 + 50), 6LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v44 + 51), 4LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v44 + 52), 5LL);
      v6 = *(struct CTopLevelWindow::WindowFrame **)&v46.r;
    }
    else
    {
      CNineGridImagePrimitive::SetHiddenMargins(v28, 0LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v3 + 37), 0LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v3 + 38), 0LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v3 + 39), 0LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v3 + 40), 0LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v3 + 41), 0LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v3 + 42), 0LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v3 + 43), 0LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v3 + 45), 0LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v3 + 46), 0LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v3 + 47), 0LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v3 + 48), 0LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v3 + 49), 0LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v3 + 50), 0LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v3 + 51), 0LL);
      CNineGridImagePrimitive::SetHiddenMargins(*((_QWORD *)v3 + 52), 0LL);
    }
  }
  v29 = (struct CVisual **)((char *)v3 + 520);
  v30 = (struct CVisual *)*((_QWORD *)v3 + 65);
  if ( (*((_DWORD *)v3 + 142) & 0x10080) != 0 )
  {
    if ( !v30 )
    {
      v31 = CImage::Create((struct CImage **)v3 + 65);
      v2 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, 0x8FEu, 0LL);
        return v2;
      }
      inserted = CContainerVisual::InsertChildAfter(
                   *((CContainerVisual **)v3 + 29),
                   *v29,
                   *((struct CVisual **)v3 + 31));
      v2 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x8FFu, 0LL);
        return v2;
      }
      v33 = ___ConvertDirtyEnumToFlag__MW4ToplevelWindowDirtyFlags_CTopLevelWindow__0O__00__YA_AVDirtyFlags__XZ(&v44);
      CVisual::SetDirtyFlags(v3, *v33);
    }
    LOBYTE(v30) = v45[0];
    *((_DWORD *)*v29 + 30) = (*((_DWORD *)v3 + 142) & 0x80 | 0x100u) >> 7;
    CVisual::SetRTLMirror(*v29, (__int64)v30, v14);
  }
  else if ( v30 )
  {
    v34 = (CContainerVisual *)*((_QWORD *)v30 + 3);
    if ( v34 )
    {
      v35 = CContainerVisual::RemoveChild(v34, v30);
      v2 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0x90Eu, 0LL);
        return v2;
      }
      v36 = (int *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v44);
      CVisual::SetDirtyFlags(v3, *v36);
    }
    if ( *v29 )
    {
      CBaseObject::Release(*v29);
      *v29 = 0LL;
    }
  }
  v37 = CTopLevelWindow::EnsureClientAreaNode(v3);
  v2 = v37;
  if ( v37 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v37, 0x917u, 0LL);
  }
  else
  {
    *((_DWORD *)v3 + 190) = CTopLevelWindow::CalculateBackgroundType(v3);
    updated = CTopLevelWindow::UpdateSystemBackdropVisual(v3);
    v2 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x91Cu, 0LL);
    }
    else
    {
      v39 = CTopLevelWindow::UpdateButtonVisuals((CButton **)v3, v6);
      v2 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v39, 0x91Fu, 0LL);
      }
      else
      {
        v40 = CTopLevelWindow::UpdateCaptionAccentColor(v3);
        v2 = v40;
        if ( v40 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v40, 0x921u, 0LL);
        }
        else
        {
          v41 = CTopLevelWindow::UpdateText(v3, v6);
          v2 = v41;
          if ( v41 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v41, 0x924u, 0LL);
        }
      }
    }
  }
  return v2;
}
