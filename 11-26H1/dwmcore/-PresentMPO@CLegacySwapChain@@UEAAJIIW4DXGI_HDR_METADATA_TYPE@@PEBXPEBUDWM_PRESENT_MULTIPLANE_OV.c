/*
 * XREFs of ?PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180033A40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x18000A17C (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync@@@details@wil@@QEAA_NXZ @ 0x180032E10 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync.c)
 *     ?IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z @ 0x180034104 (-IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z.c)
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N0@Z @ 0x180034184 (-PostPresent@CLegacySwapChain@@IEAAX_N0@Z.c)
 *     ??$_Reallocate@$0A@@?$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@AEAAXAEA_K@Z @ 0x180034298 (--$_Reallocate@$0A@@-$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V-$allocator@U_DXGI_PRESENT_MULT.c)
 *     ?CheckForLeakedDWMSwapChain@CD3DDevice@@CAXPEAUIDXGISwapChainDWM1@@@Z @ 0x18003457C (-CheckForLeakedDWMSwapChain@CD3DDevice@@CAXPEAUIDXGISwapChainDWM1@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_UnpinForNoFlip@@@details@wil@@QEAA_NXZ @ 0x180035C1C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_UnpinForNoFlip@@@details@wil@@QEA.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800691D0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1801513C8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?clear_region@?$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V?$buffer_impl@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801DE41C (-clear_region@-$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V-$buffer_impl@U_DXGI_PRESE.c)
 *     ??0?$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V?$buffer_impl@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@_K@Z @ 0x180205AFC (--0-$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V-$buffer_impl@U_DXGI_PRESENT_PLANE_FL.c)
 *     ??1?$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V?$buffer_impl@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18020C9C0 (--1-$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V-$buffer_impl@U_DXGI_PRESENT_PLANE_FL.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x18021E4D0 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     ?NotifyNoSequencePresent@CD3DDevice@@QEAAXU_LUID@@I@Z @ 0x18021F19C (-NotifyNoSequencePresent@CD3DDevice@@QEAAXU_LUID@@I@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ?find@?$_Hash@V?$_Umap_traits@IVCDDisplayFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180267D78 (-find@-$_Hash@V-$_Umap_traits@IVCDDisplayFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equ.c)
 *     McTemplateU0qxx_EventWriteTransfer @ 0x18029B79C (McTemplateU0qxx_EventWriteTransfer.c)
 *     ??$emplace_back@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@?$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@QEAAAEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@$$QEAU2@@Z @ 0x1802A5784 (--$emplace_back@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@-$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySwapChain::PresentMPO(
        CD3DDevice **this,
        int a2,
        unsigned int a3,
        enum DXGI_HDR_METADATA_TYPE a4,
        const void *a5,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a6,
        unsigned int a7)
{
  const struct DWM_PRESENT_MULTIPLANE_OVERLAY *v7; // rsi
  int v8; // edi
  __int64 v10; // r14
  bool v11; // zf
  _QWORD *v12; // rbx
  __int64 v13; // rdi
  int v14; // eax
  __int128 v15; // xmm1
  const struct IOverlayPlaneResource *v16; // rcx
  __int128 v17; // xmm0
  int v18; // eax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned int v25; // r9d
  char *v26; // r13
  CD3DDevice *v27; // rdi
  int v28; // esi
  struct IDXGISwapChainDWM1 *v29; // r12
  int v30; // ebx
  __int64 v31; // rax
  void *v32; // rcx
  unsigned __int64 v33; // rdx
  int v35; // eax
  int v36; // ecx
  int v37; // r9d
  int v38; // eax
  __int128 v39; // xmm1
  const struct IOverlayPlaneResource *v40; // rcx
  __int128 v41; // xmm0
  int v42; // eax
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int64 v47; // rax
  __int64 (__fastcall ***v48)(_QWORD, GUID *, unsigned __int64 *); // rcx
  int v49; // eax
  int v50; // eax
  int v51; // edx
  CD3DDevice *v52; // r9
  __int64 v53; // rcx
  bool v54; // [rsp+50h] [rbp-B0h]
  int v55; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int64 v56; // [rsp+58h] [rbp-A8h] BYREF
  void *v57; // [rsp+60h] [rbp-A0h] BYREF
  enum DXGI_HDR_METADATA_TYPE v58; // [rsp+68h] [rbp-98h]
  unsigned int v59; // [rsp+6Ch] [rbp-94h]
  void *v60[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v61; // [rsp+80h] [rbp-80h]
  CD3DDevice *v62; // [rsp+88h] [rbp-78h] BYREF
  const void *v63; // [rsp+90h] [rbp-70h]
  __int128 v64; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v65[120]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v66; // [rsp+120h] [rbp+20h] BYREF
  __int128 v67; // [rsp+130h] [rbp+30h]
  __int128 v68; // [rsp+140h] [rbp+40h]
  __int128 v69; // [rsp+150h] [rbp+50h]
  __int128 v70; // [rsp+160h] [rbp+60h]
  __int128 v71; // [rsp+170h] [rbp+70h]
  __int128 v72; // [rsp+180h] [rbp+80h]
  __int128 v73; // [rsp+190h] [rbp+90h]
  __int64 v74; // [rsp+1A0h] [rbp+A0h]

  v7 = a6;
  v8 = a3 & 2;
  v58 = a4;
  v54 = v8 != 0;
  v59 = a3;
  LODWORD(v57) = a2;
  v10 = a7;
  v63 = a5;
  v55 = a7;
  v61 = 0LL;
  v56 = a7;
  *(_OWORD *)v60 = 0LL;
  if ( a7 )
  {
    std::vector<_DXGI_PRESENT_MULTIPLANE_OVERLAY>::_Reallocate<0>(v60, &v56);
    v11 = v8 == 0;
    v12 = (_QWORD *)((char *)a6 + 8);
    v13 = a7;
    if ( !v11 )
    {
      do
      {
        memset_0((char *)&v64 + 8, 0, 0x80uLL);
        v14 = *((_DWORD *)v12 - 2);
        v15 = *(_OWORD *)(v12 + 3);
        v16 = (const struct IOverlayPlaneResource *)*v12;
        *(_OWORD *)&v65[8] = *(_OWORD *)(v12 + 1);
        LODWORD(v64) = v14;
        v17 = *(_OWORD *)(v12 + 5);
        v18 = *((unsigned __int8 *)v12 - 4);
        *(_OWORD *)&v65[24] = v15;
        DWORD1(v64) = v18;
        v19 = *(_OWORD *)(v12 + 7);
        *(_OWORD *)&v65[40] = v17;
        v20 = *(_OWORD *)(v12 + 9);
        *(_OWORD *)&v65[56] = v19;
        v21 = *(_OWORD *)(v12 + 11);
        *(_OWORD *)&v65[72] = v20;
        v22 = *(_OWORD *)(v12 + 13);
        *(_OWORD *)&v65[88] = v21;
        *(_OWORD *)&v65[104] = v22;
        if ( !IsDesktopOverlayPlaneResource(v16) )
          *((_QWORD *)&v64 + 1) = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v12 + 40LL))(*v12, v65);
        *(_DWORD *)&v65[8] |= 0x40u;
        v66 = v64;
        v67 = *(_OWORD *)v65;
        v68 = *(_OWORD *)&v65[16];
        v69 = *(_OWORD *)&v65[32];
        v70 = *(_OWORD *)&v65[48];
        v71 = *(_OWORD *)&v65[64];
        v72 = *(_OWORD *)&v65[80];
        v73 = *(_OWORD *)&v65[96];
        v74 = *(_QWORD *)&v65[112];
        std::vector<_DXGI_PRESENT_MULTIPLANE_OVERLAY>::emplace_back<_DXGI_PRESENT_MULTIPLANE_OVERLAY>(v60, &v66);
        v12 += 16;
        --v13;
      }
      while ( v13 );
      goto LABEL_6;
    }
    do
    {
      memset_0((char *)&v64 + 8, 0, 0x80uLL);
      v38 = *((_DWORD *)v12 - 2);
      v39 = *(_OWORD *)(v12 + 3);
      v40 = (const struct IOverlayPlaneResource *)*v12;
      *(_OWORD *)&v65[8] = *(_OWORD *)(v12 + 1);
      LODWORD(v64) = v38;
      v41 = *(_OWORD *)(v12 + 5);
      v42 = *((unsigned __int8 *)v12 - 4);
      *(_OWORD *)&v65[24] = v39;
      DWORD1(v64) = v42;
      v43 = *(_OWORD *)(v12 + 7);
      *(_OWORD *)&v65[40] = v41;
      v44 = *(_OWORD *)(v12 + 9);
      *(_OWORD *)&v65[56] = v43;
      v45 = *(_OWORD *)(v12 + 11);
      *(_OWORD *)&v65[72] = v44;
      v46 = *(_OWORD *)(v12 + 13);
      *(_OWORD *)&v65[88] = v45;
      *(_OWORD *)&v65[104] = v46;
      if ( !IsDesktopOverlayPlaneResource(v40) )
      {
        v47 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v12 + 40LL))(*v12, v65);
        *(_DWORD *)&v65[8] |= 0x40u;
        *((_QWORD *)&v64 + 1) = v47;
      }
      v66 = v64;
      v67 = *(_OWORD *)v65;
      v68 = *(_OWORD *)&v65[16];
      v69 = *(_OWORD *)&v65[32];
      v70 = *(_OWORD *)&v65[48];
      v71 = *(_OWORD *)&v65[64];
      v72 = *(_OWORD *)&v65[80];
      v73 = *(_OWORD *)&v65[96];
      v74 = *(_QWORD *)&v65[112];
      std::vector<_DXGI_PRESENT_MULTIPLANE_OVERLAY>::emplace_back<_DXGI_PRESENT_MULTIPLANE_OVERLAY>(v60, &v66);
      v12 += 16;
      --v13;
    }
    while ( v13 );
LABEL_9:
    (*((void (__fastcall **)(CD3DDevice **))*this + 17))(this);
    goto LABEL_10;
  }
  if ( (a3 & 2) == 0 )
    goto LABEL_9;
LABEL_6:
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_UnpinForNoFlip>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_UnpinForNoFlip>::GetImpl'::`2'::impl) )
    CD3DDevice::NotifyNoSequencePresent(this[5], *(struct _LUID *)((char *)this + 52), *((_DWORD *)this + 12));
LABEL_10:
  v26 = (char *)(this + 33);
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::__private_IsEnabled(
                           (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::GetImpl'::`2'::impl,
                           v23,
                           v24,
                           v25) )
    goto LABEL_11;
  this[58] = (CD3DDevice *)((char *)this[58] + 1);
  v48 = *(__int64 (__fastcall ****)(_QWORD, GUID *, unsigned __int64 *))v26;
  v56 = 0LL;
  v49 = (**v48)(v48, &GUID_605dc1ba_436e_4a11_ac4b_f1e2bb7b322b, &v56);
  v30 = v49;
  if ( v49 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x2E1u, 0LL);
    if ( v56 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v56 + 16LL))(v56);
  }
  else
  {
    detail::vector_facade<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,detail::buffer_impl<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,16,1,detail::liberal_expansion_policy>>::vector_facade<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,detail::buffer_impl<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,16,1,detail::liberal_expansion_policy>>(
      &v66,
      a7);
    if ( a7 )
    {
      do
      {
        if ( *((_BYTE *)v7 + 4) )
        {
          std::_Hash<std::_Umap_traits<unsigned int,CDDisplayFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CDDisplayFlipAwayFence>>,0>>::find(
            this + 50,
            &v62,
            v7);
          v52 = v62;
          if ( v62 != this[51] )
          {
            v53 = *((_QWORD *)&v66 + 1);
            *(_QWORD *)(*((_QWORD *)&v66 + 1) - 16LL) = *((_QWORD *)v62 + 4);
            *(_QWORD *)(v53 - 8) = this[58];
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
              McTemplateU0qxx_EventWriteTransfer(v53, v51, *(_DWORD *)v7, *((_QWORD *)v52 + 3), (char)this[58]);
          }
        }
        v7 = (const struct DWM_PRESENT_MULTIPLANE_OVERLAY *)((char *)v7 + 128);
        --v10;
      }
      while ( v10 );
    }
    v50 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v56 + 280LL))(
            v56,
            (__int64)(*((_QWORD *)&v66 + 1) - v66) >> 4);
    v30 = v50;
    if ( v50 >= 0 )
    {
      if ( (__int64)(*((_QWORD *)&v66 + 1) - v66) >> 4 )
        detail::vector_facade<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,detail::buffer_impl<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,16,1,detail::liberal_expansion_policy>>::clear_region(&v66);
      detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)&v66);
      if ( v56 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v56 + 16LL))(v56);
LABEL_11:
      v27 = this[5];
      v28 = -2003304307;
      v29 = *(struct IDXGISwapChainDWM1 **)v26;
      if ( *((_DWORD *)v27 + 281) )
      {
        v30 = -2003304307;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0x3D8u, 0LL);
      }
      else
      {
        v30 = (*(__int64 (__fastcall **)(_QWORD, struct IDXGISwapChainDWM1 *, _QWORD, _QWORD, enum DXGI_HDR_METADATA_TYPE, const void *, void *, int))(**((_QWORD **)v27 + 28) + 112LL))(
                *((_QWORD *)v27 + 28),
                v29,
                (unsigned int)v57,
                v59,
                v58,
                v63,
                v60[0],
                v55);
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x3E0u, 0LL);
        }
        else
        {
          v31 = 0LL;
          if ( g_pComposition )
            v31 = *((_QWORD *)g_pComposition + 110);
          *((_QWORD *)v27 + 184) = v31;
          *((_BYTE *)v27 + 1491) = 0;
          if ( v30 == 142213121 )
            CD3DDevice::CheckForLeakedDWMSwapChain(v29);
        }
      }
      if ( !*((_DWORD *)v27 + 281)
        && (v30 == -2005532292 || v30 == -2147024882 || v30 == -2005270523)
        && *((_DWORD *)v27 + 110) )
      {
        if ( v30 == -2005270523 )
        {
          v35 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v27 + 68) + 312LL))(*((_QWORD *)v27 + 68));
          v36 = *((_DWORD *)v27 + 281);
          if ( v35 != -2005270480 )
          {
            if ( !v36 )
              *((_DWORD *)v27 + 281) = -2005270523;
LABEL_34:
            if ( *((_DWORD *)v27 + 281) )
            {
              v30 = -2003304307;
LABEL_36:
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x309u, 0LL);
              goto LABEL_25;
            }
LABEL_22:
            v55 = 0;
            if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v30, 1LL, &v55) )
            {
              v37 = v55;
              if ( v55 == -2003304307 )
              {
                if ( v30 >= 0 )
                  v30 = -2003304307;
                if ( !*((_DWORD *)v27 + 281) )
                  *((_DWORD *)v27 + 281) = v30;
              }
              v30 = v37;
              if ( v37 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0xB71u, 0LL);
            }
            v28 = v30;
            if ( v30 >= 0 )
            {
              CLegacySwapChain::PostPresent((CLegacySwapChain *)(this - 3), v54, v30 == 142213121);
              goto LABEL_25;
            }
            goto LABEL_36;
          }
          if ( !v36 )
            *((_DWORD *)v27 + 281) = -2005270480;
        }
        CD2DContext::TempDisableHardwareProtection((CD3DDevice *)((char *)v27 + 16));
      }
      if ( v30 >= 0 )
        goto LABEL_22;
      goto LABEL_34;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x300u, 0LL);
    detail::vector_facade<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,detail::buffer_impl<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,16,1,detail::liberal_expansion_policy>>::~vector_facade<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,detail::buffer_impl<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,16,1,detail::liberal_expansion_policy>>(&v66);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v56);
  }
LABEL_25:
  v32 = v60[0];
  if ( v60[0] )
  {
    v57 = v60[0];
    v33 = 8 * ((signed __int64)(v61 - (unsigned __int64)v60[0]) >> 3);
    v56 = v33;
    if ( v33 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v57, &v56);
      v33 = v56;
      v32 = v57;
    }
    operator delete(v32, v33);
  }
  return (unsigned int)v30;
}
