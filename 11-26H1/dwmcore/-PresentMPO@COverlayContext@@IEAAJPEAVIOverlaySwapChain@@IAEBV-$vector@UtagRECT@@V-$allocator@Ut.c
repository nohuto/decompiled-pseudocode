/*
 * XREFs of ?PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAIPEA_N@Z @ 0x1800D6554
 * Callers:
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@IPEA_N_N@Z @ 0x1800D62A4 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync@@@details@wil@@QEAA_NXZ @ 0x180032E10 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync.c)
 *     ?IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z @ 0x180034104 (-IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009B620 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ @ 0x1800D6B18 (-DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ.c)
 *     ?DbgSaveOverlayStateInfoAfter@COverlayContext@@AEAAXXZ @ 0x1800D6C54 (-DbgSaveOverlayStateInfoAfter@COverlayContext@@AEAAXXZ.c)
 *     ??$_Reallocate@$0A@@?$vector@UDWM_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@UDWM_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@AEAAXAEA_K@Z @ 0x1800D6DA4 (--$_Reallocate@$0A@@-$vector@UDWM_PRESENT_MULTIPLANE_OVERLAY@@V-$allocator@UDWM_PRESENT_MULTIPLA.c)
 *     ?UpdateHDRMetaData@COverlayContext@@IEAAPEBXXZ @ 0x1800D6EE4 (-UpdateHDRMetaData@COverlayContext@@IEAAPEBXXZ.c)
 *     ??$_Reallocate@$0A@@?$vector@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXAEA_K@Z @ 0x1800D71B8 (--$_Reallocate@$0A@@-$vector@V-$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Emplace_reallocate@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@?$vector@UDWM_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@UDWM_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@AEAAPEAUDWM_PRESENT_MULTIPLANE_OVERLAY@@QEAU2@AEBU2@@Z @ 0x18019B164 (--$_Emplace_reallocate@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@-$vector@UDWM_PRESENT_MULTIPLANE_OVE.c)
 *     McTemplateU0d_EventWriteTransfer @ 0x1801AA8E0 (McTemplateU0d_EventWriteTransfer.c)
 *     McTemplateU0xqqqddddddddddddqqq_EventWriteTransfer @ 0x1801ABCD4 (McTemplateU0xqqqddddddddddddqqq_EventWriteTransfer.c)
 *     ?ConfirmIndependentFlipEntry@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x1801B1DDC (-ConfirmIndependentFlipEntry@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ??$emplace_back@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@$$QEAV23@@Z @ 0x180238DF0 (--$emplace_back@V-$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@-$vector.c)
 *     ?GetAttributes@DesktopPlaneInfo@COverlayContext@@QEBAXAEBVOverlayCaps@@PEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x18023B3EC (-GetAttributes@DesktopPlaneInfo@COverlayContext@@QEBAXAEBVOverlayCaps@@PEAUDXGI_MULTIPLANE_OVERL.c)
 *     ?IsDFlipOnMPO@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x18023CE2C (-IsDFlipOnMPO@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 *     McTemplateU0xxxqqqqnnnqqq_EventWriteTransfer @ 0x18023E724 (McTemplateU0xxxqqqqnnnqqq_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlayContext::PresentMPO(
        COverlayContext *this,
        ULONGLONG a2,
        unsigned int a3,
        _QWORD *a4,
        _DWORD *a5,
        _BYTE *a6)
{
  __int64 v8; // rbx
  int v9; // edi
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // r15
  const struct OverlayCaps *v14; // rdx
  COverlayContext::DesktopPlaneInfo *v15; // rcx
  int v16; // r8d
  _OWORD *v17; // rdx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  unsigned int i; // ebx
  unsigned __int64 v26; // r14
  char v27; // dl
  bool v28; // cl
  unsigned int v29; // r13d
  __int64 v30; // rdi
  const struct IOverlayPlaneResource *v31; // rcx
  int v32; // edx
  int v33; // ecx
  __int64 v34; // rbx
  _OWORD *v35; // rdx
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  int v43; // r14d
  ULONGLONG Ptr; // r12
  __int64 v45; // rbx
  __int64 (__fastcall *v46)(ULONGLONG, __int64, _QWORD, _QWORD, const void *, __int64, _DWORD); // rdi
  const void *updated; // rax
  __int64 v48; // r8
  __int128 v49; // xmm0
  int v50; // eax
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  COverlayContext::OverlayPlaneInfo *v54; // rbx
  COverlayContext::OverlayPlaneInfo *v55; // rdi
  __int64 v57; // rax
  __int64 v58; // rbx
  int v59; // r12d
  unsigned int v60; // r14d
  __int64 v61; // rdi
  __int64 v62; // r13
  __int64 v63; // rdx
  __int64 v64; // r8
  unsigned int v65; // r9d
  __int64 v66; // rax
  __int64 v67; // r8
  _QWORD *v68; // rcx
  void (__fastcall ***v69)(_QWORD, GUID *, _QWORD **); // r9
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  __int128 v76; // xmm0
  _OWORD *v77; // rdx
  _OWORD *v78; // rax
  __int128 v79; // xmm1
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm0
  __int128 v83; // xmm1
  __int128 v84; // xmm0
  __int128 v85; // xmm1
  _QWORD *v86; // rcx
  __int64 v87; // r12
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rdi
  int v91; // [rsp+48h] [rbp-E8h]
  int v92; // [rsp+58h] [rbp-D8h]
  int v93; // [rsp+68h] [rbp-C8h]
  char v94; // [rsp+B0h] [rbp-80h]
  int v95; // [rsp+B4h] [rbp-7Ch]
  char v96; // [rsp+B4h] [rbp-7Ch]
  __int128 v97; // [rsp+B8h] [rbp-78h] BYREF
  __int64 v98; // [rsp+C8h] [rbp-68h]
  _QWORD *v99; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v100; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v101; // [rsp+E0h] [rbp-50h]
  int v102; // [rsp+E8h] [rbp-48h]
  unsigned int v103; // [rsp+ECh] [rbp-44h]
  __int128 v104; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v105; // [rsp+100h] [rbp-30h]
  _DWORD *v106; // [rsp+108h] [rbp-28h]
  __int128 v107; // [rsp+110h] [rbp-20h] BYREF
  __int64 v108; // [rsp+120h] [rbp-10h]
  __int128 v109; // [rsp+130h] [rbp+0h] BYREF
  __int128 v110; // [rsp+140h] [rbp+10h] BYREF
  __int128 v111; // [rsp+150h] [rbp+20h]
  __int128 v112; // [rsp+160h] [rbp+30h]
  __int128 v113; // [rsp+170h] [rbp+40h]
  __int128 v114; // [rsp+180h] [rbp+50h] BYREF
  __int128 v115; // [rsp+190h] [rbp+60h]
  __int128 v116; // [rsp+1A0h] [rbp+70h]
  struct _EVENT_DATA_DESCRIPTOR v117; // [rsp+1B0h] [rbp+80h] BYREF

  v8 = (__int64)(a4[1] - *a4) >> 4;
  v103 = a3;
  v117.Ptr = a2;
  v106 = a5;
  v9 = a3 & 2;
  if ( (a3 & 2) != 0 || *((_BYTE *)this + 19052) == (_BYTE)v9 )
    v10 = (*(__int64 (__fastcall **)(ULONGLONG))(*(_QWORD *)a2 + 216LL))(a2);
  else
    v10 = (*(__int64 (__fastcall **)(ULONGLONG))(*(_QWORD *)a2 + 208LL))(a2);
  v11 = v10;
  v12 = 0LL;
  v13 = 0x7D6343EB1A1F58D1LL * ((__int64)(*((_QWORD *)this + 1587) - *((_QWORD *)this + 1586)) >> 3);
  v97 = 0LL;
  v104 = 0LL;
  v98 = 0LL;
  v102 = v13;
  v105 = 0LL;
  v100 = (unsigned int)(v13 + 1);
  if ( (_DWORD)v13 != -1 )
  {
    std::vector<DWM_PRESENT_MULTIPLANE_OVERLAY>::_Reallocate<0>(&v97, &v100);
    v12 = v105;
  }
  v100 = (unsigned int)v13;
  if ( (unsigned int)v13 > (unsigned __int64)((v12 - (__int64)v104) >> 3) )
    std::vector<wil::com_ptr_t<IOverlayPlaneResource,wil::err_returncode_policy>>::_Reallocate<0>(&v104, &v100);
  *v106 = 0;
  *a6 = 0;
  COverlayContext::DbgSaveOverlayStateInfoBefore(this);
  memset_0(&v109, 0, 0x80uLL);
  v15 = (COverlayContext *)((char *)this + 18984);
  v16 = 1;
  v95 = 1;
  if ( *((_BYTE *)this + 19052) )
  {
    if ( !v9 && !v8 && *((_BYTE *)this + 19124) )
    {
LABEL_13:
      if ( !(_DWORD)v13 )
        goto LABEL_14;
      goto LABEL_46;
    }
    BYTE4(v109) = 1;
    *((_QWORD *)&v109 + 1) = v11;
    COverlayContext::DesktopPlaneInfo::GetAttributes(v15, v14, (struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)&v110);
    HIDWORD(v113) = v8;
    if ( v8 )
      *(_QWORD *)&v114 = *a4;
    v35 = (_OWORD *)*((_QWORD *)&v97 + 1);
    if ( *((_QWORD *)&v97 + 1) == v98 )
    {
      std::vector<DWM_PRESENT_MULTIPLANE_OVERLAY>::_Emplace_reallocate<DWM_PRESENT_MULTIPLANE_OVERLAY const &>(
        &v97,
        *((_QWORD *)&v97 + 1),
        &v109);
    }
    else
    {
      v36 = v110;
      **((_OWORD **)&v97 + 1) = v109;
      v37 = v111;
      v35[1] = v36;
      v38 = v112;
      v35[2] = v37;
      v39 = v113;
      v35[3] = v38;
      v40 = v114;
      v35[4] = v39;
      v41 = v115;
      v35[5] = v40;
      v42 = v116;
      v35[6] = v41;
      v35[7] = v42;
      *((_QWORD *)&v97 + 1) += 128LL;
    }
    *a6 = 1;
LABEL_32:
    v16 = 1;
    goto LABEL_13;
  }
  if ( (_DWORD)v13 != 1
    || !COverlayContext::OverlayPlaneInfo::IsDFlipOnMPO(*((COverlayContext::OverlayPlaneInfo **)this + 1586)) )
  {
    if ( !*((_BYTE *)this + 19124) )
      goto LABEL_13;
    v17 = (_OWORD *)*((_QWORD *)&v97 + 1);
    if ( *((_QWORD *)&v97 + 1) != v98 )
    {
      v18 = v110;
      **((_OWORD **)&v97 + 1) = v109;
      v19 = v111;
      v17[1] = v18;
      v20 = v112;
      v17[2] = v19;
      v21 = v113;
      v17[3] = v20;
      v22 = v114;
      v17[4] = v21;
      v23 = v115;
      v17[5] = v22;
      v24 = v116;
      v17[6] = v23;
      v17[7] = v24;
      *((_QWORD *)&v97 + 1) += 128LL;
      goto LABEL_13;
    }
    std::vector<DWM_PRESENT_MULTIPLANE_OVERLAY>::_Emplace_reallocate<DWM_PRESENT_MULTIPLANE_OVERLAY const &>(
      &v97,
      *((_QWORD *)&v97 + 1),
      &v109);
    goto LABEL_32;
  }
  v16 = 0;
  v95 = 0;
  v102 = 0;
LABEL_46:
  v57 = 0LL;
  v58 = 0LL;
  v101 = 0LL;
  v59 = -v16;
  v60 = v16;
  do
  {
    v61 = *((_QWORD *)this + 1586);
    if ( *(_BYTE *)(v61 + v58 + 366) )
    {
      v62 = *(_QWORD *)(v61 + v58 + 16);
      v94 = *(_BYTE *)(v61 + v58 + 363);
      *(_DWORD *)(v61 + v58 + 368) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 336LL))(v62);
      *(_DWORD *)(v61 + v58 + 372) = v60;
      *(_BYTE *)(v61 + v58 + 363) = 0;
      *(_DWORD *)(v61 + v58 + 380) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 320LL))(v62);
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::__private_IsEnabled(
                              (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::GetImpl'::`2'::impl,
                              v63,
                              v64,
                              v65) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v61 + v58 + 16) + 272LL))(*(_QWORD *)(v61 + v58 + 16)) )
        {
          v108 = 0LL;
          v107 = 0LL;
          if ( (*(int (__fastcall **)(ULONGLONG, _QWORD, __int128 *))(*(_QWORD *)v117.Ptr + 408LL))(
                 v117.Ptr,
                 v60,
                 &v107) >= 0 )
            (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v61 + v58 + 16) + 280LL))(
              *(_QWORD *)(v61 + v58 + 16),
              &v107);
        }
      }
      memset_0((char *)&v109 + 5, 0, 0x7BuLL);
      LODWORD(v109) = v60;
      BYTE4(v109) = 1;
      v99 = 0LL;
      v66 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 56LL))(v62);
      v68 = v99;
      v69 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD **))v66;
      v100 = v66;
      v99 = 0LL;
      if ( v68 )
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64))(*v68 + 16LL))(v68, *v68, v67, v66);
        v69 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD **))v100;
      }
      (**v69)(v69, &GUID_462c710f_5601_454b_b804_03effd995c26, &v99);
      v70 = *(_OWORD *)(v61 + v58 + 32);
      v71 = *(_OWORD *)(v61 + v58 + 48);
      *((_QWORD *)&v109 + 1) = v99;
      v110 = v70;
      v72 = *(_OWORD *)(v61 + v58 + 64);
      v111 = v71;
      v73 = *(_OWORD *)(v61 + v58 + 80);
      v112 = v72;
      v74 = *(_OWORD *)(v61 + v58 + 96);
      v113 = v73;
      v75 = *(_OWORD *)(v61 + v58 + 112);
      v114 = v74;
      v76 = *(_OWORD *)(v61 + v58 + 128);
      v115 = v75;
      v116 = v76;
      if ( !v94 )
        HIDWORD(v113) = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v62 + 328LL))(v62, &v114);
      if ( v59 + v60 < 2 )
        *((_BYTE *)this + 1720 * *((int *)this + 7424) + v101 + 20192) = 1;
      std::vector<wil::com_ptr_t<IOverlayPlaneResource,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<IOverlayPlaneResource,wil::err_returncode_policy>>(
        &v104,
        &v99);
      v77 = (_OWORD *)*((_QWORD *)&v97 + 1);
      if ( *((_QWORD *)&v97 + 1) == v98 )
      {
        std::vector<DWM_PRESENT_MULTIPLANE_OVERLAY>::_Emplace_reallocate<DWM_PRESENT_MULTIPLANE_OVERLAY const &>(
          &v97,
          *((_QWORD *)&v97 + 1),
          &v109);
      }
      else
      {
        **((_OWORD **)&v97 + 1) = v109;
        v77[1] = v110;
        v77[2] = v111;
        v77[3] = v112;
        v77[4] = v113;
        v77[5] = v114;
        v77[6] = v115;
        v77[7] = v116;
        *((_QWORD *)&v97 + 1) += 128LL;
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v99);
      v57 = v101;
    }
    ++v60;
    v101 = v57 + 816;
    v58 += 392LL;
    v57 += 816LL;
  }
  while ( v59 + v60 < (unsigned int)v13 );
LABEL_14:
  for ( i = v13 + v95; i <= *((_DWORD *)this + 4783); ++i )
  {
    memset_0((char *)&v109 + 4, 0, 0x7CuLL);
    v78 = (_OWORD *)*((_QWORD *)&v97 + 1);
    LODWORD(v109) = i;
    if ( *((_QWORD *)&v97 + 1) == v98 )
    {
      std::vector<DWM_PRESENT_MULTIPLANE_OVERLAY>::_Emplace_reallocate<DWM_PRESENT_MULTIPLANE_OVERLAY const &>(
        &v97,
        *((_QWORD *)&v97 + 1),
        &v109);
    }
    else
    {
      v79 = v110;
      **((_OWORD **)&v97 + 1) = v109;
      v80 = v111;
      v78[1] = v79;
      v81 = v112;
      v78[2] = v80;
      v82 = v113;
      v78[3] = v81;
      v83 = v114;
      v78[4] = v82;
      v84 = v115;
      v78[5] = v83;
      v85 = v116;
      v78[6] = v84;
      v78[7] = v85;
      *((_QWORD *)&v97 + 1) += 128LL;
    }
  }
  v26 = (__int64)(*((_QWORD *)&v97 + 1) - v97) >> 7;
  if ( v26 )
  {
    v27 = BYTE1(Microsoft_Windows_Dwm_CoreEnableBits);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    {
      McTemplateU0d_EventWriteTransfer(v15, &EVTDESC_OVERLAY_PRESENT_Start, (unsigned int)v26);
      v27 = BYTE1(Microsoft_Windows_Dwm_CoreEnableBits);
    }
    v28 = 0;
    if ( (v27 & 2) == 0 )
      v28 = (Microsoft_Windows_Dwm_CompositorEnableBits & 1) == 0;
    if ( !v28 )
    {
      v29 = 0;
      v30 = 0LL;
      do
      {
        v101 = 0LL;
        v100 = 0LL;
        v96 = 0;
        v31 = *(const struct IOverlayPlaneResource **)((v30 << 7) + v97 + 8);
        LODWORD(v99) = 0;
        if ( !IsDesktopOverlayPlaneResource(v31) )
        {
          v34 = *((_QWORD *)this + 1586);
          v33 = v97;
          while ( v34 != *((_QWORD *)this + 1587) )
          {
            if ( *(_DWORD *)(v34 + 372) == *(_DWORD *)(v97 + (v30 << 7)) )
            {
              v86 = *(_QWORD **)(v34 + 16);
              v87 = v86[5];
              v88 = (*(__int64 (__fastcall **)(_QWORD *))(*v86 + 64LL))(v86);
              v89 = *(_QWORD *)(v34 + 16);
              v100 = v88;
              v96 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v89 + 336LL))(v89);
              LODWORD(v99) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v34 + 16) + 320LL))(*(_QWORD *)(v34 + 16));
              goto LABEL_81;
            }
            v34 += 392LL;
          }
        }
        LODWORD(v87) = v101;
LABEL_81:
        if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
          McTemplateU0xxxqqqqnnnqqq_EventWriteTransfer(
            ((_DWORD)v30 << 7) + v97 + 52,
            ((_DWORD)v30 << 7) + v97 + 36,
            v87,
            v100,
            v96,
            (char)v99,
            *(_BYTE *)((v30 << 7) + v97 + 4),
            *(_DWORD *)((v30 << 7) + v97),
            *(_DWORD *)((v30 << 7) + v97 + 16),
            v91,
            (v30 << 7) + v97 + 20,
            v92,
            (v30 << 7) + v97 + 36,
            v93,
            (v30 << 7) + v97 + 52,
            *(_DWORD *)((v30 << 7) + v97 + 68),
            *(_DWORD *)((v30 << 7) + v97 + 72),
            *(_DWORD *)((v30 << 7) + v97 + 92));
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
        {
          v90 = v30 << 7;
          McTemplateU0xqqqddddddddddddqqq_EventWriteTransfer(
            v33,
            v32,
            *(_QWORD *)(v90 + v97 + 8),
            *(unsigned __int8 *)(v90 + v97 + 4),
            *(_DWORD *)(v90 + v97),
            *(_DWORD *)(v90 + v97 + 16),
            *(_DWORD *)(v90 + v97 + 20),
            *(_DWORD *)(v90 + v97 + 24),
            *(_DWORD *)(v90 + v97 + 28),
            *(_DWORD *)(v90 + v97 + 32),
            *(_DWORD *)(v90 + v97 + 36),
            *(_DWORD *)(v90 + v97 + 40),
            *(_DWORD *)(v90 + v97 + 44),
            *(_DWORD *)(v90 + v97 + 48),
            *(_DWORD *)(v90 + v97 + 52),
            *(_DWORD *)(v90 + v97 + 56),
            *(_DWORD *)(v90 + v97 + 60),
            *(_DWORD *)(v90 + v97 + 64),
            *(_DWORD *)(v90 + v97 + 68),
            *(_DWORD *)(v90 + v97 + 72),
            *(_DWORD *)(v90 + v97 + 92));
        }
        v30 = ++v29;
      }
      while ( v29 < v26 );
    }
    Ptr = v117.Ptr;
    v45 = v97;
    *v106 = v26;
    v46 = *(__int64 (__fastcall **)(ULONGLONG, __int64, _QWORD, _QWORD, const void *, __int64, _DWORD))(*(_QWORD *)Ptr + 400LL);
    updated = COverlayContext::UpdateHDRMetaData(this);
    v43 = v46(Ptr, 1LL, v103, *((unsigned int *)this + 16), updated, v45, v26);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_OVERLAY_PRESENT_Stop,
        v48,
        1u,
        &v117);
    if ( v43 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v43, 0xC28u, 0LL);
      goto LABEL_39;
    }
  }
  else
  {
    v43 = -2003304309;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304309, 0xC2Fu, 0LL);
  }
  v49 = *(_OWORD *)((char *)this + 18984);
  v50 = v102;
  v51 = *(_OWORD *)((char *)this + 19000);
  *((_DWORD *)this + 4782) = v13;
  *((_OWORD *)this + 1191) = v49;
  *((_DWORD *)this + 4783) = v50;
  v52 = *(_OWORD *)((char *)this + 19016);
  *((_OWORD *)this + 1192) = v51;
  v53 = *(_OWORD *)((char *)this + 19032);
  *((_OWORD *)this + 1193) = v52;
  *(_QWORD *)&v52 = *((_QWORD *)this + 2381);
  *((_OWORD *)this + 1194) = v53;
  *((_QWORD *)this + 2390) = v52;
LABEL_39:
  COverlayContext::DbgSaveOverlayStateInfoAfter(this);
  v54 = (COverlayContext::OverlayPlaneInfo *)*((_QWORD *)this + 1586);
  v55 = (COverlayContext::OverlayPlaneInfo *)*((_QWORD *)this + 1587);
  while ( v54 != v55 )
  {
    COverlayContext::OverlayPlaneInfo::ConfirmIndependentFlipEntry(v54);
    *((_BYTE *)v54 + 366) = 0;
    *((_BYTE *)v54 + 363) = 0;
    v54 = (COverlayContext::OverlayPlaneInfo *)((char *)v54 + 392);
  }
  if ( (_QWORD)v104 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>(
      (__int64 *)v104,
      *((__int64 **)&v104 + 1));
    std::_Deallocate<16>((void *)v104, (v105 - v104) & 0xFFFFFFFFFFFFFFF8uLL);
    v105 = 0LL;
    v104 = 0LL;
  }
  if ( (_QWORD)v97 )
    std::_Deallocate<16>((void *)v97, (v98 - v97) & 0xFFFFFFFFFFFFFF80uLL);
  return (unsigned int)v43;
}
