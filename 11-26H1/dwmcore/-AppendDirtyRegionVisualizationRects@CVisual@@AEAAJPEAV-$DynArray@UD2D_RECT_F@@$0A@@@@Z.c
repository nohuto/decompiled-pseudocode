/*
 * XREFs of ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x180260650
 * Callers:
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180234B84 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??$_Alloc_proxy@V?$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV?$allocator@U_Container_proxy@std@@@1@@Z @ 0x180138AB8 (--$_Alloc_proxy@V-$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV-$a.c)
 *     ?SetColor@?$CColorBrushGeneratedT@VCColorBrush@@VCBrush@@@@QEAAJU_D3DCOLORVALUE@@@Z @ 0x18017FC70 (-SetColor@-$CColorBrushGeneratedT@VCColorBrush@@VCBrush@@@@QEAAJU_D3DCOLORVALUE@@@Z.c)
 *     ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18019C058 (--0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ?_Tidy@?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@AEAAXXZ @ 0x1801BC504 (-_Tidy@-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@AEAAXXZ.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@UDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW45KeyframeAnimationDelayBehavior@@MW45KeyframeAnimationDirection@@MW45KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801E1D08 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@UDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EX.c)
 *     ??1?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@QEAA@XZ @ 0x1802348CC (--1-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V-$com_ptr_t@VCCo.c)
 *     ?GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@2@@std@@XZ @ 0x180236808 (-GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimat.c)
 *     ??$?0PEAUD2D_RECT_F@@$0A@@?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@QEAA@PEAUD2D_RECT_F@@0AEBV?$allocator@UD2D_RECT_F@@@1@@Z @ 0x1802600B0 (--$-0PEAUD2D_RECT_F@@$0A@@-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@QEAA@PEAUD.c)
 *     ??$_Emplace_back_internal@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@2@@std@@AEAAX$$QEAV?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@1@@Z @ 0x180260138 (--$_Emplace_back_internal@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@.c)
 *     ?SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@2@@std@@@Z @ 0x1802610F0 (-SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnima.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::AppendDirtyRegionVisualizationRects(__int64 a1, __int64 a2)
{
  unsigned int v4; // r14d
  _DWORD *v5; // rdx
  __int64 v6; // rax
  _QWORD *v7; // rbx
  int v8; // eax
  _QWORD *v9; // rax
  void *v10; // r15
  __int128 v11; // xmm0
  CKeyframeAnimation *v12; // rax
  CKeyframeAnimation *v13; // rax
  __int64 *v14; // rdi
  int v15; // eax
  __int64 v16; // rdx
  _QWORD *v17; // rsi
  _QWORD *DirtyRegionVisualizationData; // rsi
  char **v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  volatile signed __int64 v23; // rax
  __int64 v24; // rax
  __int64 v26; // [rsp+28h] [rbp-99h]
  void *v27; // [rsp+30h] [rbp-91h]
  __int64 v28; // [rsp+38h] [rbp-89h]
  __int64 v29; // [rsp+40h] [rbp-81h]
  __int64 v30; // [rsp+48h] [rbp-79h]
  __int64 v31; // [rsp+58h] [rbp-69h]
  __int64 v32; // [rsp+68h] [rbp-59h]
  __int64 v33; // [rsp+70h] [rbp-51h]
  __int128 v34[2]; // [rsp+88h] [rbp-39h] BYREF
  __int64 v35[8]; // [rsp+A8h] [rbp-19h] BYREF
  unsigned __int64 v36; // [rsp+130h] [rbp+6Fh] BYREF
  _QWORD *v37; // [rsp+138h] [rbp+77h] BYREF

  v4 = 0;
  v37 = 0LL;
  v36 = 0LL;
  if ( *(_DWORD *)(a2 + 24) )
  {
    v5 = DefaultHeap::AllocClear(0x78uLL);
    if ( v5 )
    {
      v6 = *(_QWORD *)(a1 + 24);
      v5[2] = 0;
      *((_QWORD *)v5 + 3) = v6;
      *((_QWORD *)v5 + 2) = 0LL;
      *((_QWORD *)v5 + 4) = 2LL;
      *((_QWORD *)v5 + 6) = 0LL;
      v5[10] = 0;
      *((_QWORD *)v5 + 10) = 0LL;
      *(_QWORD *)v5 = &CColorBrush::`vftable'{for `CContent'};
      *((_QWORD *)v5 + 9) = &CBackdropBrush::`vftable'{for `IBrushChangeNotification'};
      *((_QWORD *)v5 + 11) = 0LL;
      *((_BYTE *)v5 + 96) = 0;
    }
    else
    {
      v5 = 0LL;
    }
    wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)&v37, (__int64)v5);
    v7 = v37;
    if ( !v37 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x14E4u, 0LL);
      goto LABEL_24;
    }
    v34[0] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
    v8 = CColorBrushGeneratedT<CColorBrush,CBrush>::SetColor(v37, v34);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x14E6u, 0LL);
      goto LABEL_24;
    }
    v9 = MIDL_user_allocate(0x60uLL);
    v10 = v9;
    if ( !v9 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x14E9u, 0LL);
      goto LABEL_24;
    }
    *v9 = 0LL;
    *((_DWORD *)v9 + 6) = 3;
    v11 = *(_OWORD *)(v7 + 13);
    v9[6] = 1065353216LL;
    *((_DWORD *)v9 + 18) = 1;
    v34[0] = v11;
    HIDWORD(v34[0]) = 0;
    *((_OWORD *)v9 + 5) = v34[0];
    v12 = (CKeyframeAnimation *)DefaultHeap::AllocClear(0x1D8uLL);
    if ( v12 )
      v13 = CKeyframeAnimation::CKeyframeAnimation(v12, *(struct CComposition **)(a1 + 24));
    else
      v13 = 0LL;
    wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)&v36, (__int64)v13);
    v14 = (__int64 *)v36;
    if ( v36 )
    {
      v15 = CKeyframeAnimation::Initialize(
              v36,
              v7,
              0,
              0x46u,
              v26,
              (__int64)v27,
              v28,
              v29,
              v30,
              1.0,
              v31,
              0,
              v32,
              v33,
              (__int64)v10);
      v4 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x1506u, 0LL);
        goto LABEL_22;
      }
      if ( (**(_DWORD **)(a1 + 224) & 0x200000) == 0 )
      {
        v17 = MIDL_user_allocate(0x28uLL);
        if ( !v17 )
        {
          v4 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x150Bu, 0LL);
          goto LABEL_22;
        }
        *v17 = 0LL;
        v17[1] = 0LL;
        v17[2] = 0LL;
        v17[3] = 0LL;
        v17[4] = 0LL;
        std::_Container_base12::_Alloc_proxy<std::allocator<std::_Container_proxy>>(v17, v16);
        CVisual::SetDirtyRegionVisualizationData(a1, v17);
      }
      DirtyRegionVisualizationData = (_QWORD *)CVisual::GetDirtyRegionVisualizationData(a1);
      v19 = std::vector<D2D_RECT_F>::vector<D2D_RECT_F>(
              (char **)v34,
              *(void **)a2,
              *(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 24));
      v35[3] = (__int64)v7;
      v20 = (__int64)v19[2];
      v19[2] = 0LL;
      v21 = (__int64)v19[1];
      v19[1] = 0LL;
      v22 = (__int64)*v19;
      *v19 = 0LL;
      v23 = *v7;
      v35[0] = v22;
      v35[1] = v21;
      v35[2] = v20;
      (*(void (__fastcall **)(_QWORD *))(v23 + 8))(v7);
      v24 = *v14;
      v35[4] = (__int64)v14;
      (*(void (__fastcall **)(__int64 *))(v24 + 8))(v14);
      std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<D2D_RECT_F>>>::_Emplace_back_internal<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<D2D_RECT_F>>>(
        DirtyRegionVisualizationData,
        v35);
      std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<D2D_RECT_F>>::~tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<D2D_RECT_F>>((__int64)v35);
      std::vector<D2D_RECT_F>::_Tidy((__int64)v34);
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x14F6u, 0LL);
    }
LABEL_22:
    operator delete(v10);
  }
LABEL_24:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v36);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v37);
  return v4;
}
