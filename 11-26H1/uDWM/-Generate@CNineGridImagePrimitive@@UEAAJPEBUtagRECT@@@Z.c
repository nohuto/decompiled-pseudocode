/*
 * XREFs of ?Generate@CNineGridImagePrimitive@@UEAAJPEBUtagRECT@@@Z @ 0x1800BD100
 * Callers:
 *     ?Generate@CThemePartPrimitive@@UEAAJPEBUtagRECT@@@Z @ 0x1800BD620 (-Generate@CThemePartPrimitive@@UEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800544EC (-reset@-$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?Make@NineGridLayout@@SA?AU1@AEBU_MARGINS@@AEBUD2D_POINTANDSIZE_L@@@Z @ 0x1800683F0 (-Make@NineGridLayout@@SA-AU1@AEBU_MARGINS@@AEBUD2D_POINTANDSIZE_L@@@Z.c)
 *     ?GetRectAtIndex@NineGridLayout@@QEBA?AUD2D_POINTANDSIZE_L@@I@Z @ 0x18006C900 (-GetRectAtIndex@NineGridLayout@@QEBA-AUD2D_POINTANDSIZE_L@@I@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800706B0 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?PrependDCompPrimitive@CPrimitiveGroupVisual@@QEAAJPEAUIDCompositionPrimitivePartner@@@Z @ 0x1800719E4 (-PrependDCompPrimitive@CPrimitiveGroupVisual@@QEAAJPEAUIDCompositionPrimitivePartner@@@Z.c)
 *     ?ClipRectAndSimilarRect@@YAXAEBUtagRECT@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1800743E8 (-ClipRectAndSimilarRect@@YAXAEBUtagRECT@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAN.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?GetCompSurface@CBitmapSource@@QEAAJPEAPEAUIDCompositionSurface@@@Z @ 0x18009AC84 (-GetCompSurface@CBitmapSource@@QEAAJPEAPEAUIDCompositionSurface@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CNineGridImagePrimitive::Generate(CNineGridImagePrimitive *this, const struct tagRECT *a2)
{
  CBitmapSource *v4; // rbx
  int CompSurface; // eax
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64, GUID *, __int64); // r9
  __int64 v11; // r10
  int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // rsi
  _OWORD *v15; // rax
  int v16; // ecx
  int v17; // r8d
  int v18; // r10d
  int v19; // r9d
  int v20; // edx
  int v21; // r10d
  float v22; // eax
  int v23; // r9d
  float v24; // eax
  _OWORD *v25; // rax
  signed int i; // esi
  struct D2D_MATRIX_3X2_F *v27; // r9
  int v28; // edx
  int v29; // ecx
  bool v30; // zf
  bool v31; // zf
  float v32; // xmm6_4
  float v33; // xmm5_4
  __int64 v34; // rax
  int v35; // r14d
  __int64 v36; // rdx
  __int64 *v38; // [rsp+68h] [rbp-A0h] BYREF
  struct IDCompositionPrimitivePartner *v39; // [rsp+70h] [rbp-98h] BYREF
  struct IDCompositionSurface *v40; // [rsp+78h] [rbp-90h] BYREF
  D2D_RECT_F v41; // [rsp+80h] [rbp-88h] BYREF
  int v42; // [rsp+90h] [rbp-78h] BYREF
  int v43; // [rsp+94h] [rbp-74h]
  int v44; // [rsp+98h] [rbp-70h]
  int v45; // [rsp+9Ch] [rbp-6Ch]
  int v46; // [rsp+A0h] [rbp-68h] BYREF
  int v47; // [rsp+A4h] [rbp-64h]
  int v48; // [rsp+A8h] [rbp-60h]
  int v49; // [rsp+ACh] [rbp-5Ch]
  _OWORD v50[2]; // [rsp+B0h] [rbp-58h] BYREF
  _OWORD v51[2]; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int64 v52; // [rsp+F0h] [rbp-18h] BYREF
  float v53; // [rsp+F8h] [rbp-10h]
  float v54; // [rsp+FCh] [rbp-Ch]
  struct D2D_RECT_F v55; // [rsp+100h] [rbp-8h] BYREF
  __int64 v56; // [rsp+110h] [rbp+8h]
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  if ( !*((_QWORD *)this + 2) || (v4 = (CBitmapSource *)*((_QWORD *)this + 7)) == 0LL )
  {
    v6 = -2147020579;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFC,
      (int)"clientcore\\windows\\dwm\\udwm\\primitive.cpp",
      (const char *)0x800710DDLL);
    return v6;
  }
  v40 = 0LL;
  wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset((__int64 *)&v40);
  CompSurface = CBitmapSource::GetCompSurface(v4, &v40);
  v6 = CompSurface;
  if ( CompSurface >= 0 )
  {
    if ( !v40 )
    {
      v6 = -2003292412;
      v7 = 2291674884LL;
      v8 = 257LL;
      goto LABEL_7;
    }
    v38 = 0LL;
    v9 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v38);
    v12 = v10(v11, &GUID_7bd36c9a_56ee_4fdd_ac4e_76bbd16ec8e4, v9);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x105,
        (int)"clientcore\\windows\\dwm\\udwm\\primitive.cpp",
        (const char *)(unsigned int)v12);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v38);
      v6 = v13;
      goto LABEL_53;
    }
    v52 = 0LL;
    v14 = *((_QWORD *)this + 7);
    v53 = *(float *)(v14 + 128);
    v54 = *(float *)(v14 + 132);
    v15 = NineGridLayout::Make(v50, (int *)(v14 + 136), (int *)&v52);
    v51[0] = *v15;
    v51[1] = v15[1];
    v16 = *((_DWORD *)this + 6) - *(_DWORD *)(v14 + 152);
    v17 = *((_DWORD *)this + 7) - *(_DWORD *)(v14 + 160);
    v18 = v16 + *(_DWORD *)(v14 + 156) + *((_DWORD *)this + 8);
    v19 = v17 + *(_DWORD *)(v14 + 164) + *((_DWORD *)this + 9);
    v20 = *((_DWORD *)this + 16);
    if ( (v20 & 1) != 0 )
      v16 -= *(_DWORD *)(v14 + 136);
    if ( (v20 & 2) != 0 )
      v18 += *(_DWORD *)(v14 + 140);
    if ( (v20 & 4) != 0 )
      v17 -= *(_DWORD *)(v14 + 144);
    if ( (v20 & 8) != 0 )
      v19 += *(_DWORD *)(v14 + 148);
    v52 = __PAIR64__(v17, v16);
    v21 = v18 - v16;
    v22 = 0.0;
    if ( v21 >= 0 )
      v22 = *(float *)&v21;
    v53 = v22;
    v23 = v19 - v17;
    v24 = 0.0;
    if ( v23 >= 0 )
      v24 = *(float *)&v23;
    v54 = v24;
    v25 = NineGridLayout::Make(&v55, (int *)(v14 + 136), (int *)&v52);
    v50[0] = *v25;
    v50[1] = v25[1];
    for ( i = 8; ; --i )
    {
      if ( i < 0 )
      {
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v38);
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v40);
        return 0LL;
      }
      NineGridLayout::GetRectAtIndex((__int64)v51, &v42, i);
      NineGridLayout::GetRectAtIndex((__int64)v50, &v46, i);
      if ( v48 > 0 && v49 > 0 )
        break;
LABEL_49:
      ;
    }
    v28 = i / 3;
    v29 = i % 3;
    if ( i == 3 * (i / 3) )
    {
      v30 = (*((_BYTE *)this + 64) & 1) == 0;
    }
    else
    {
      if ( v29 != 2 )
        goto LABEL_31;
      v30 = (*((_BYTE *)this + 64) & 2) == 0;
    }
    if ( !v30 )
      goto LABEL_49;
LABEL_31:
    if ( v28 )
    {
      if ( v28 != 2 )
      {
LABEL_36:
        v41.left = (float)v42;
        v41.top = (float)v43;
        v32 = (float)v44 + (float)v42;
        v41.right = v32;
        v33 = (float)v45 + (float)v43;
        v41.bottom = v33;
        *(float *)&v52 = (float)v46;
        *((float *)&v52 + 1) = (float)v47;
        v53 = (float)v48 + (float)v46;
        v54 = (float)v49 + (float)v47;
        if ( v29 == 1 )
        {
          v41.left = (float)v42 + 0.5;
          v41.right = v32 - 0.5;
          if ( v41.left > (float)(v32 - 0.5) )
            v41.right = (float)v42 + 0.5;
        }
        if ( v28 == 1 )
        {
          v41.top = (float)v43 + 0.5;
          v41.bottom = v33 - 0.5;
          if ( v41.top > (float)(v33 - 0.5) )
            v41.bottom = (float)v43 + 0.5;
        }
        if ( !a2
          || (ClipRectAndSimilarRect((__int64)a2, (__int64)&v52), (float)(v53 - *(float *)&v52) > 0.0)
          && (float)(v54 - *((float *)&v52 + 1)) > 0.0 )
        {
          v55 = 0LL;
          v56 = 0LL;
          if ( D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v52, &v41, &v55, v27) )
          {
            v39 = 0LL;
            v34 = *v38;
            v39 = 0LL;
            v35 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64 *, void *))(v34 + 72))(
                    v38,
                    &v52,
                    &unk_180114E48);
            if ( v35 < 0 )
            {
              v36 = 468LL;
              goto LABEL_52;
            }
            v35 = CPrimitiveGroupVisual::PrependDCompPrimitive(*((CPrimitiveGroupVisual **)this + 2), v39);
            if ( v35 < 0 )
            {
              v36 = 470LL;
LABEL_52:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v36,
                (int)"clientcore\\windows\\dwm\\udwm\\primitive.cpp",
                (const char *)(unsigned int)v35);
              wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v39);
              wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v38);
              v6 = v35;
              goto LABEL_53;
            }
            wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v39);
          }
        }
        goto LABEL_49;
      }
      v31 = (*((_BYTE *)this + 64) & 8) == 0;
    }
    else
    {
      v31 = (*((_BYTE *)this + 64) & 4) == 0;
    }
    if ( !v31 )
      goto LABEL_49;
    goto LABEL_36;
  }
  v7 = (unsigned int)CompSurface;
  v8 = 256LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"clientcore\\windows\\dwm\\udwm\\primitive.cpp",
    (const char *)v7);
LABEL_53:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v40);
  return v6;
}
