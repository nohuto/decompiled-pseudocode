/*
 * XREFs of ?ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@PEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800350DC
 * Callers:
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180034920 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync@@@details@wil@@QEAA_NXZ @ 0x180032E10 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync.c)
 *     ?ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ @ 0x1800357F4 (-ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180069080 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$destruct_range@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@detail@@YAXPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@0@Z @ 0x18015BC28 (--$destruct_range@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@de.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18015BC60 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?TranslateExecutePresentResult@CDDisplaySwapChain@@IEAAJW4DisplayPresentStatus@Core@Display@Devices@Windows@@W4DisplaySourceStatus@3456@PEA_N@Z @ 0x1801ACB94 (-TranslateExecutePresentResult@CDDisplaySwapChain@@IEAAJW4DisplayPresentStatus@Core@Display@Devi.c)
 *     ?GetRequestedVBlankDurationHns@RefreshRateInfo@@QEBAIXZ @ 0x1801CDC2C (-GetRequestedVBlankDurationHns@RefreshRateInfo@@QEBAIXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18021C5B4 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?find@?$_Hash@V?$_Umap_traits@IVCDDisplayFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180267D78 (-find@-$_Hash@V-$_Umap_traits@IVCDDisplayFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equ.c)
 *     ??$_Emplace_reallocate@V?$function@$$A6AXXZ@std@@@?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@AEAAPEAV?$function@$$A6AXXZ@1@QEAV21@$$QEAV21@@Z @ 0x180299C34 (--$_Emplace_reallocate@V-$function@$$A6AXXZ@std@@@-$vector@V-$function@$$A6AXXZ@std@@V-$allocato.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@$$QEAV01@@Z @ 0x18029A2C0 (--0-$function@$$A6AXXZ@std@@QEAA@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplaySwapChain::ExecutePresent(
        CDDisplaySwapChain *this,
        struct Windows::Devices::Display::Core::IDisplayScanout *a2,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a3,
        unsigned int a4)
{
  __int128 v4; // rdi
  CD2DContext *v5; // rcx
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int v19; // r9d
  int v20; // eax
  __int64 *v21; // rbx
  __int64 (__fastcall *v22)(__int64 *, __int64, __int64 *); // rsi
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned int v26; // r9d
  char v27; // si
  unsigned int RequestedVBlankDurationHns; // eax
  int v30; // eax
  unsigned int v31; // r8d
  __int64 v32; // rdx
  int v33; // eax
  void (__fastcall ***v34)(_QWORD, GUID *, __int64 *); // rcx
  int v35; // eax
  __int64 v36; // rdx
  __int64 *v37; // rbx
  __int64 v38; // rax
  __int64 (__fastcall *v39)(__int64 *, __int64, __int64 *); // rsi
  int v40; // eax
  unsigned int *v41; // r14
  _QWORD *v42; // r15
  int v43; // eax
  void (__fastcall ***v44)(_QWORD, GUID *, __int64 *); // rcx
  int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  unsigned int v48; // [rsp+20h] [rbp-89h]
  void *v49; // [rsp+28h] [rbp-81h]
  char v50[8]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v51; // [rsp+38h] [rbp-71h] BYREF
  _QWORD *v52; // [rsp+40h] [rbp-69h] BYREF
  __int64 v53; // [rsp+48h] [rbp-61h] BYREF
  __int64 v54; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v55; // [rsp+58h] [rbp-51h] BYREF
  unsigned int v56; // [rsp+5Ch] [rbp-4Dh] BYREF
  __int64 *v57; // [rsp+60h] [rbp-49h] BYREF
  __int128 v58; // [rsp+68h] [rbp-41h] BYREF
  __int64 v59; // [rsp+78h] [rbp-31h]
  _QWORD v60[8]; // [rsp+80h] [rbp-29h] BYREF

  *(_QWORD *)&v4 = this;
  v5 = (CD2DContext *)(*((_QWORD *)this + 8) + 16LL);
  v54 = 0LL;
  v57 = 0LL;
  v53 = 0LL;
  v59 = 0LL;
  v58 = 0LL;
  CD2DContext::ReleaseCachedD2DTarget(v5);
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v4 + 336) + 48LL))(*(_QWORD *)(v4 + 336), &v54);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x47Du, 0LL);
    goto LABEL_31;
  }
  if ( *(_DWORD *)(v4 + 156) || *(_QWORD *)(v4 + 160) )
  {
    v52 = 0LL;
    v51 = 0LL;
    (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v54)(v54, &GUID_6c365d5b_e724_55f5_b13b_e50aa3fafbc4, &v51);
    if ( v52 )
      (*(void (__fastcall **)(_QWORD *))(*v52 + 16LL))(v52);
    (**(void (__fastcall ***)(__int64, GUID *, _QWORD **))v54)(v54, &GUID_4b5385d2_4b4c_5212_83dd_8a114e368804, &v52);
    RequestedVBlankDurationHns = RefreshRateInfo::GetRequestedVBlankDurationHns((RefreshRateInfo *)(v4 + 128));
    v30 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v52 + 48LL))(v52, RequestedVBlankDurationHns);
    v10 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x488u, 0LL);
    }
    else
    {
      v31 = *(_DWORD *)(v4 + 156);
      v32 = 1LL;
      if ( v31 )
        v32 = v31;
      v33 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v51 + 48LL))(v51, v32);
      v10 = v33;
      if ( v33 >= 0 )
      {
        if ( v51 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
        if ( v52 )
          (*(void (__fastcall **)(_QWORD *))(*v52 + 16LL))(v52);
        goto LABEL_4;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x489u, 0LL);
    }
LABEL_102:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v51);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v52);
    goto LABEL_31;
  }
LABEL_4:
  ++*(_QWORD *)(v4 + 552);
  v11 = *(_QWORD *)(v4 + 64);
  v12 = *(_QWORD *)(v4 + 552);
  v13 = *(_QWORD *)(v4 + 344);
  *(_BYTE *)(v11 + 1491) = 0;
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v11 + 224) + 152LL))(
          *(_QWORD *)(v11 + 224),
          v13,
          v12);
  v10 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x48Eu, 0LL);
    goto LABEL_31;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v54 + 56LL))(
          v54,
          *(_QWORD *)(v4 + 360),
          *(_QWORD *)(v4 + 552));
  v10 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x48Fu, 0LL);
    goto LABEL_31;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, struct Windows::Devices::Display::Core::IDisplayScanout *))(*(_QWORD *)v54 + 48LL))(
          v54,
          a2);
  v10 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x492u, 0LL);
    goto LABEL_31;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::__private_IsEnabled(
                          (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::GetImpl'::`2'::impl,
                          v17,
                          v18,
                          v19) )
  {
    v51 = 0LL;
    (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v54)(v54, &GUID_0bc48fd2_7b1d_5306_b4ae_4de068387574, &v51);
    for ( DWORD2(v4) = 0; DWORD2(v4) < a4; ++DWORD2(v4) )
    {
      v41 = (unsigned int *)((char *)a3 + 128 * (unsigned __int64)DWORD2(v4));
      if ( *((_BYTE *)v41 + 4) )
      {
        std::_Hash<std::_Umap_traits<unsigned int,CDDisplayFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CDDisplayFlipAwayFence>>,0>>::find(
          v4 + 600,
          &v52,
          (char *)a3 + 128 * (unsigned __int64)DWORD2(v4));
        if ( v52 != *(_QWORD **)(v4 + 608) )
        {
          v42 = v52 + 3;
          v43 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v51 + 48LL))(
                  v51,
                  0LL,
                  v52[6],
                  *v41);
          v10 = v43;
          if ( v43 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, 0x4ABu, 0LL);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v51);
            goto LABEL_31;
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          {
            v60[1] = (char *)a3 + 128 * (unsigned __int64)DWORD2(v4);
            v60[0] = off_1802E9920;
            v60[7] = v60;
            v60[2] = v42;
            v60[3] = v4;
            if ( *((_QWORD *)&v58 + 1) == v59 )
            {
              std::vector<std::function<void (void)>>::_Emplace_reallocate<std::function<void (void)>>(
                &v58,
                *((_QWORD *)&v58 + 1),
                v60);
            }
            else
            {
              std::function<void (void)>::function<void (void)>(*((_QWORD *)&v58 + 1), v60);
              *((_QWORD *)&v58 + 1) += 64LL;
            }
            std::_Func_class<void,>::_Tidy(v60);
          }
        }
      }
    }
    if ( v51 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
  }
  v56 = 0;
  v55 = 0;
  if ( v57 )
    (*(void (__fastcall **)(__int64 *))(*v57 + 16))(v57);
  v20 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 **))(v4 + 336))(
          *(_QWORD *)(v4 + 336),
          &GUID_46b879b6_5d17_5955_a872_eb38003db586,
          &v57);
  v10 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x4C3u, 0LL);
    goto LABEL_31;
  }
  v21 = v57;
  v22 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(*v57 + 48);
  if ( v53 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
  v23 = v22(v21, v54, &v53);
  if ( v23 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x4C4u, 0LL);
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v53 + 48LL))(v53, &v56);
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v53 + 64LL))(v53, &v55);
  v27 = 0;
  v50[0] = 0;
  v10 = 0;
  if ( !v56 )
    goto LABEL_16;
  if ( v56 != 1 )
  {
    if ( v56 != 2 )
    {
      v10 = -2005270523;
      goto LABEL_56;
    }
    goto LABEL_58;
  }
  switch ( v55 )
  {
    case 0u:
      MicrosoftTelemetryAssertTriggeredNoArgs();
      goto LABEL_56;
    case 1u:
      goto LABEL_76;
    case 2u:
      v44 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(v4 + 424);
      LODWORD(v52) = 0;
      v51 = 0LL;
      (**v44)(v44, &GUID_3c27105f_c15d_59c7_9466_ab281cf08ab7, &v51);
      v45 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v51 + 48LL))(v51, &v52);
      v10 = v45;
      if ( v45 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45, 0x43Cu, 0LL);
      if ( (_DWORD)v52 )
      {
        v10 = -2003304442;
      }
      else
      {
        v27 = 1;
        v50[0] = 1;
      }
      goto LABEL_93;
    case 3u:
LABEL_76:
      v10 = 142213121;
      goto LABEL_56;
  }
  if ( v55 != 4 )
  {
LABEL_58:
    v10 = -2003304442;
    goto LABEL_56;
  }
  v34 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(v4 + 424);
  LODWORD(v52) = 0;
  v51 = 0LL;
  (**v34)(v34, &GUID_3c27105f_c15d_59c7_9466_ab281cf08ab7, &v51);
  v35 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v51 + 48LL))(v51, &v52);
  v10 = v35;
  if ( v35 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x417u, 0LL);
  if ( (_DWORD)v52 )
  {
    v10 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304442, 0x41Du, 0LL);
LABEL_93:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v51);
    goto LABEL_56;
  }
  v27 = 1;
  v50[0] = 1;
  if ( v51 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
LABEL_56:
  if ( !v10 )
LABEL_16:
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v53 + 56LL))(v53, v4 + 528);
  if ( v27 )
  {
    v36 = v53;
    v37 = v57;
    v38 = *v57;
    v53 = 0LL;
    v39 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v38 + 48);
    if ( v36 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    v40 = v39(v37, v54, &v53);
    if ( v40 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x4DCu, 0LL);
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v53 + 48LL))(v53, &v56);
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v53 + 64LL))(v53, &v55);
    v10 = CDDisplaySwapChain::TranslateExecutePresentResult(v4, v56, v55, v50);
    if ( !v10 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v53 + 56LL))(v53, v4 + 528);
  }
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::__private_IsEnabled(
                           (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::GetImpl'::`2'::impl,
                           v24,
                           v25,
                           v26) )
  {
    if ( v10 >= 0 )
    {
LABEL_20:
      *(_QWORD *)&v4 = v58;
      goto LABEL_21;
    }
LABEL_31:
    v10 = CD3DDevice::TranslateDXGIorD3DErrorInContext(*(_QWORD *)(v4 + 64), (unsigned int)v10, 1LL);
    goto LABEL_20;
  }
  if ( v10 < 0 )
    goto LABEL_31;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
    goto LABEL_20;
  v4 = v58;
  if ( (_QWORD)v58 != *((_QWORD *)&v58 + 1) )
  {
    while ( 1 )
    {
      v46 = *(_QWORD *)(v4 + 56);
      if ( !v46 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
      *(_QWORD *)&v4 = v4 + 64;
      if ( (_QWORD)v4 == *((_QWORD *)&v4 + 1) )
        goto LABEL_20;
    }
    std::_Xbad_function_call();
    __debugbreak();
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, v48, v49);
    goto LABEL_102;
  }
LABEL_21:
  if ( (_QWORD)v4 )
  {
    detail::destruct_range<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>>(
      v4,
      *((_QWORD *)&v58 + 1));
    std::_Deallocate<16>(v58, (v59 - v58) & 0xFFFFFFFFFFFFFFC0uLL);
    v59 = 0LL;
    v58 = 0LL;
  }
  if ( v53 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
  if ( v57 )
    (*(void (__fastcall **)(__int64 *))(*v57 + 16))(v57);
  if ( v54 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  return (unsigned int)v10;
}
