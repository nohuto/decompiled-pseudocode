/*
 * XREFs of ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x1800C9F88
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x1800CA860 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ??$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18000ABC4 (--$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUIComposi.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0O@$00@@YA?AVDirtyFlags@@XZ @ 0x180016024 (--$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0O@$00@@YA-AVDirtyFlags@.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800289EC (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@MEAAXVDirtyFlags@@@Z @ 0x180059550 (-SetDirtyFlags@CThumbnailVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x18005CDE0 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18005CF70 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?ClampToMaxTextureSizeImpl@CDesktopManager@@AEAA?AUD2D_SIZE_F@@KK@Z @ 0x1800650C0 (-ClampToMaxTextureSizeImpl@CDesktopManager@@AEAA-AUD2D_SIZE_F@@KK@Z.c)
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x180065C98 (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ??$IntersectRectT@UD2D_POINTANDSIZE_L@@@@YAHPEAUD2D_POINTANDSIZE_L@@PEBU0@1@Z @ 0x180073F0C (--$IntersectRectT@UD2D_POINTANDSIZE_L@@@@YAHPEAUD2D_POINTANDSIZE_L@@PEBU0@1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAllPrimitives@CPrimitiveGroupVisual@@QEAAXXZ @ 0x1800881CC (-RemoveAllPrimitives@CPrimitiveGroupVisual@@QEAAXXZ.c)
 *     ?GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18008CF94 (-GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18008CFB0 (-GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?ApplyViewportTransformForClippedView@CSurfaceBrush@@QEAAJAEBUtagRECT@@PEAU2@@Z @ 0x18009B228 (-ApplyViewportTransformForClippedView@CSurfaceBrush@@QEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?SetRealizationSize@CVisualBrush@@QEAAJAEBUD2D_SIZE_F@@@Z @ 0x18009B9F0 (-SetRealizationSize@CVisualBrush@@QEAAJAEBUD2D_SIZE_F@@@Z.c)
 *     ?Create@CColorPrimitive@@SAJPEAPEAV1@@Z @ 0x1800BCCC0 (-Create@CColorPrimitive@@SAJPEAPEAV1@@Z.c)
 *     ?SetBounds@CPrimitive@@QEAAXAEBUD2D_POINTANDSIZE_L@@@Z @ 0x1800BD834 (-SetBounds@CPrimitive@@QEAAXAEBUD2D_POINTANDSIZE_L@@@Z.c)
 *     ?SetColor@CColorPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x1800BD87C (-SetColor@CColorPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?AppendPrimitive@CPrimitiveGroupVisual@@QEAAXPEAVCPrimitive@@@Z @ 0x1800BDB34 (-AppendPrimitive@CPrimitiveGroupVisual@@QEAAXPEAVCPrimitive@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CThumbnailVisual::UpdateDestinationRect(CThumbnailVisual *this)
{
  char IsImmersiveIconic; // r14
  bool IsThumbnailCVIStatic; // r9
  __int64 v4; // rdx
  char v5; // r13
  __m128i v6; // xmm8
  _DWORD *v7; // r8
  int v8; // ecx
  LONG v9; // ecx
  int v10; // ecx
  LONG v11; // ecx
  LONG v12; // esi
  LONG v13; // ebx
  int *v14; // rax
  __int64 v15; // rax
  CDesktopManager *v16; // rcx
  int IconicWidth; // eax
  __m128 v18; // xmm6
  CSecondaryWindowRepresentation *v19; // rcx
  __m128 v20; // xmm7
  unsigned int v21; // r9d
  unsigned int v22; // r8d
  struct D2D_SIZE_F v23; // rax
  int v24; // ebx
  __int64 v25; // rdx
  struct tagRECT v27; // xmm7
  struct tagRECT v28; // xmm6
  _DWORD *v29; // rcx
  int v30; // esi
  int v31; // r14d
  LONG v32; // r12d
  LONG v33; // r15d
  LONG v34; // ecx
  int v35; // eax
  CPrimitive *v36; // rbx
  int v37; // eax
  CPrimitive *v38; // rbx
  __int64 v39; // rax
  CSecondaryWindowRepresentation *v40; // rcx
  int v41; // eax
  int v42; // r9d
  int v43; // r10d
  int v44; // r11d
  int v45; // ecx
  int v46; // eax
  struct D2D_SIZE_F v47; // [rsp+28h] [rbp-69h] BYREF
  char v48; // [rsp+30h] [rbp-61h]
  unsigned int v49[4]; // [rsp+38h] [rbp-59h] BYREF
  _DWORD v50[4]; // [rsp+48h] [rbp-49h] BYREF
  struct tagRECT v51; // [rsp+58h] [rbp-39h] BYREF
  struct tagRECT v52; // [rsp+68h] [rbp-29h] BYREF
  struct tagRECT rc; // [rsp+78h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  IsImmersiveIconic = CThumbnailVisual::_IsImmersiveIconic(this);
  v48 = IsImmersiveIconic;
  IsThumbnailCVIStatic = CThumbnailVisual::_IsThumbnailCVIStatic(this);
  v4 = *((_QWORD *)this + 44);
  v5 = *(_BYTE *)(v4 + 34);
  v6 = 0LL;
  rc = 0LL;
  if ( !v5 )
  {
    if ( v4 )
    {
      v7 = *(_DWORD **)(v4 + 16);
      if ( v7 )
      {
        rc.left = -*((_DWORD *)this + 14);
        rc.top = -*((_DWORD *)this + 15);
        v8 = 0;
        if ( v7[57] - v7[55] >= 0 )
          v8 = v7[57] - v7[55];
        v9 = v8 - v7[68] - v7[67];
        if ( v9 <= 0 )
          v9 = 0;
        rc.right = v9;
        v10 = 0;
        if ( v7[58] - v7[56] >= 0 )
          v10 = v7[58] - v7[56];
        v11 = v10 - v7[70] - v7[69];
        if ( v11 <= 0 )
          v11 = 0;
        rc.bottom = v11;
        v6 = _mm_loadu_si128((const __m128i *)&rc);
      }
    }
  }
  if ( !IsThumbnailCVIStatic )
  {
    if ( !*((_BYTE *)this + 416) )
      return 0LL;
    *(_QWORD *)&v52.left = 0LL;
    v12 = *((_DWORD *)this + 16);
    v52.right = v12;
    v13 = *((_DWORD *)this + 17);
    v52.bottom = v13;
    if ( !v12 || !v13 )
      return 0LL;
    if ( !v5 && v4 && *(_QWORD *)(v4 + 16) && (*(_DWORD *)(v4 + 36) & 0x100000) != 0 && *((_BYTE *)this + 418) )
    {
      v14 = ___ConvertDirtyEnumToFlag__MW4ToplevelWindowDirtyFlags_CTopLevelWindow__0O__00__YA_AVDirtyFlags__XZ(v50);
      CThumbnailVisual::SetDirtyFlags(this, *v14);
    }
    v15 = *((_QWORD *)this + 51);
    if ( !v15 || !*((_BYTE *)this + 418) )
    {
      v16 = 0LL;
      v47 = 0LL;
      if ( IsImmersiveIconic )
      {
        IconicWidth = CSecondaryWindowRepresentation::GetIconicWidth(*((CSecondaryWindowRepresentation **)this + 45));
        v18 = (__m128)COERCE_UNSIGNED_INT((float)IconicWidth);
        v47.width = (float)IconicWidth;
        v20 = (__m128)COERCE_UNSIGNED_INT((float)(int)CSecondaryWindowRepresentation::GetIconicHeight(v19));
      }
      else
      {
        if ( v15 )
        {
          v16 = (CDesktopManager *)(unsigned int)(*((_DWORD *)this + 75) - *((_DWORD *)this + 73));
          v21 = 0;
          if ( (int)v16 >= 0 )
            v21 = *((_DWORD *)this + 75) - *((_DWORD *)this + 73);
          v22 = 0;
          if ( *((_DWORD *)this + 74) - *((_DWORD *)this + 72) >= 0 )
            v22 = *((_DWORD *)this + 74) - *((_DWORD *)this + 72);
        }
        else
        {
          v21 = v13;
          v22 = v12;
        }
        v23 = CDesktopManager::ClampToMaxTextureSizeImpl(v16, (float *)v49, v22, v21);
        v18 = (__m128)**(unsigned int **)&v23;
        v20 = (__m128)*(unsigned int *)(*(_QWORD *)&v23 + 4LL);
        v47.width = **(FLOAT **)&v23;
      }
      LODWORD(v47.height) = v20.m128_i32[0];
      if ( !*((_BYTE *)this + 418)
        || (*((float *)this + 105) != v18.m128_f32[0] || *((float *)this + 106) != v20.m128_f32[0])
        && (*(_DWORD *)(*((_QWORD *)this + 44) + 36LL) & 0x100000) == 0 )
      {
        v24 = CVisualBrush::SetRealizationSize((CThumbnailVisual *)((char *)this + 368), &v47);
        if ( v24 < 0 )
        {
          v25 = 867LL;
LABEL_41:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v25,
            (int)"clientcore\\windows\\dwm\\udwm\\thumbnailvisual.cpp",
            (const char *)(unsigned int)v24);
          return (unsigned int)v24;
        }
        *(_QWORD *)((char *)this + 420) = _mm_unpacklo_ps(v18, v20).m128_u64[0];
        *((_BYTE *)this + 418) = 1;
      }
    }
    v27 = v52;
    v28 = v52;
    *(struct tagRECT *)v49 = v52;
    if ( IsImmersiveIconic )
    {
      v24 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(this, 0LL);
      if ( v24 < 0 )
      {
        v25 = 879LL;
        goto LABEL_41;
      }
      v29 = (_DWORD *)*((_QWORD *)this + 44);
      v30 = 0;
      if ( v29[12] - v29[10] >= 0 )
        v30 = v29[12] - v29[10];
      v49[2] = v30;
      v31 = 0;
      if ( v29[13] - v29[11] >= 0 )
        v31 = v29[13] - v29[11];
      v49[3] = v31;
      v28 = *(struct tagRECT *)v49;
    }
    else
    {
      v31 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v52, 12));
      v30 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v52, 8));
    }
    v32 = v30;
    v33 = v31;
    if ( !v5 )
    {
      IntersectRectT<D2D_POINTANDSIZE_L>(v49, (int *)v49, &rc.left);
      v31 = v49[3];
      v30 = v49[2];
      v28 = *(struct tagRECT *)v49;
    }
    CPrimitiveGroupVisual::RemoveAllPrimitives(this);
    if ( CThumbnailVisual::_HasBorder(this) )
    {
      v51 = v28;
      v34 = *((_DWORD *)this + 107);
      v52.left = v34;
      v52.top = v34;
      v32 = *((_DWORD *)this + 16) - 2 * v34;
      v52.right = v32;
      v33 = *((_DWORD *)this + 17) - 2 * v34;
      v52.bottom = v33;
      if ( v32 > 0 && v33 > 0 )
      {
        if ( v5 )
        {
          v49[0] = v34;
          v49[1] = v34;
          v30 = v32;
          v49[2] = v32;
          v31 = v33;
          v49[3] = v33;
        }
        else
        {
          IntersectRectT<D2D_POINTANDSIZE_L>(v49, &v52.left, &rc.left);
          v31 = v49[3];
          v30 = v49[2];
        }
      }
      v47 = 0LL;
      v35 = CColorPrimitive::Create((struct CColorPrimitive **)&v47);
      v24 = v35;
      if ( v35 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x394,
          (int)"clientcore\\windows\\dwm\\udwm\\thumbnailvisual.cpp",
          (const char *)(unsigned int)v35);
LABEL_63:
        wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)&v47);
        return (unsigned int)v24;
      }
      v36 = (CPrimitive *)v47;
      CColorPrimitive::SetColor(*(CColorPrimitive **)&v47, (const struct _D3DCOLORVALUE *)this + 31);
      CPrimitive::SetBounds(v36, (const struct D2D_POINTANDSIZE_L *)&v51);
      CPrimitiveGroupVisual::AppendPrimitive(this, v36);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)&v47);
      v27 = v52;
    }
    if ( *((float *)this + 123) != 0.0 )
    {
      v47 = 0LL;
      v37 = CColorPrimitive::Create((struct CColorPrimitive **)&v47);
      v24 = v37;
      if ( v37 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x39F,
          (int)"clientcore\\windows\\dwm\\udwm\\thumbnailvisual.cpp",
          (const char *)(unsigned int)v37);
        goto LABEL_63;
      }
      v38 = (CPrimitive *)v47;
      CColorPrimitive::SetColor(*(CColorPrimitive **)&v47, (const struct _D3DCOLORVALUE *)this + 30);
      CPrimitive::SetBounds(v38, (const struct D2D_POINTANDSIZE_L *)v49);
      CPrimitiveGroupVisual::AppendPrimitive(this, v38);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)&v47);
    }
    if ( *((_QWORD *)this + 46) )
    {
      v39 = *((_QWORD *)this + 48);
      if ( v39 )
      {
        if ( *(CThumbnailVisual **)(v39 + 24) == this )
        {
          *(_QWORD *)&rc.left = 0LL;
          rc.right = v32;
          rc.bottom = v33;
          if ( v48 )
          {
            CSecondaryWindowRepresentation::GetIconicHeight(*((CSecondaryWindowRepresentation **)this + 45));
            v41 = CSecondaryWindowRepresentation::GetIconicWidth(v40);
            v45 = v41 / v44;
            v46 = 0;
            if ( v43 >= 0 )
              v46 = v43;
            OffsetRect(&rc, v46 / v44 - v45, v42);
          }
          v52.left = v49[0];
          v52.top = v49[1];
          v52.right = v30 + v49[0];
          v52.bottom = v49[1] + v31;
          v24 = CSurfaceBrush::ApplyViewportTransformForClippedView((CThumbnailVisual *)((char *)this + 368), &rc, &v52);
          if ( v24 < 0 )
          {
            v25 = 946LL;
            goto LABEL_41;
          }
          v24 = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionColorBrush *>(
                  *((_QWORD *)this + 48),
                  *((_QWORD *)this + 46));
          if ( v24 < 0 )
          {
            v25 = 947LL;
            goto LABEL_41;
          }
          CRectangleVisual::SetRect(*((CRectangleVisual **)this + 48), &v52);
        }
      }
    }
    *((struct tagRECT *)this + 27) = v27;
  }
  *((__m128i *)this + 29) = v6;
  return 0LL;
}
