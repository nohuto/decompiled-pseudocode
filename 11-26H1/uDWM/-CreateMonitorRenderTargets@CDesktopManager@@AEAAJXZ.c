/*
 * XREFs of ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18007EE08
 * Callers:
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x18004B1A8 (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x18007AE6C (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?HasChanged@CDisplayModeChangeHelper@@SA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180006834 (-HasChanged@CDisplayModeChangeHelper@@SA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV-$.c)
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C124 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x180038D84 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDisplayAnimatedVisual@@@Z @ 0x180044ED0 (-CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDis.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18004AC10 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18004D0EC (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180056DE8 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x1800570E0 (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     ?IsRemoteTreeEnabled@CCompositor@@QEAA_NXZ @ 0x18005A8D4 (-IsRemoteTreeEnabled@CCompositor@@QEAA_NXZ.c)
 *     ?ForceRender@CCompositor@@QEAAJXZ @ 0x18005A98C (-ForceRender@CCompositor@@QEAAJXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180062008 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Mi.c)
 *     ?FailFastIfAccessDenied@@YAJJ@Z @ 0x1800626B0 (-FailFastIfAccessDenied@@YAJJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180062A98 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18006425C (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x1800645B8 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z @ 0x18006D560 (-SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z.c)
 *     ?IsWarpAdapterLuid@CDWMDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x18006E734 (-IsWarpAdapterLuid@CDWMDXGIEnumeration@@QEBA_NU_LUID@@@Z.c)
 *     ?IsDDisplayCompatible@CDWMDisplay@@QEAA_NXZ @ 0x180070230 (-IsDDisplayCompatible@CDWMDisplay@@QEAA_NXZ.c)
 *     ?RefreshRateChanged@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x180071A4C (-RefreshRateChanged@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?MakeSourceHandleForTarget@CDDisplayManager@@QEAAJAEBVCDWMDisplay@@PEAPEAXPEAI@Z @ 0x180072DA0 (-MakeSourceHandleForTarget@CDDisplayManager@@QEAAJAEBVCDWMDisplay@@PEAPEAXPEAI@Z.c)
 *     ?EnsureDDisplayManager@CDesktopManager@@AEAAJXZ @ 0x180074B04 (-EnsureDDisplayManager@CDesktopManager@@AEAAJXZ.c)
 *     ?IsTsDisplay@CDWMDisplay@@QEBA_NXZ @ 0x180075714 (-IsTsDisplay@CDWMDisplay@@QEBA_NXZ.c)
 *     ?StopAndSetDisplayAnimatedVisual@CWindowList@@QEAAJPEAVCDisplayAnimatedVisual@@@Z @ 0x18007D360 (-StopAndSetDisplayAnimatedVisual@CWindowList@@QEAAJPEAVCDisplayAnimatedVisual@@@Z.c)
 *     ?SetChangeContextInfo@CDisplayAnimatedVisual@@QEAAXPEAVCDWMDisplaySet@@AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180088804 (-SetChangeContextInfo@CDisplayAnimatedVisual@@QEAAXPEAVCDWMDisplaySet@@AEAV-$vector@PEBVCDWMDisp.c)
 *     ?Start@CDisplayAnimatedVisual@@QEAAJXZ @ 0x18008CC00 (-Start@CDisplayAnimatedVisual@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18008F41C (IsOpenThemeDataPresent.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A7030 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIDCompositionRenderTargetPartner2@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIDCompositionRenderTargetPartner2@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800A9DAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIDCompositionRenderTargetPartner2@@@WRL@Microsoft@@@@YAPEAPEAX.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionRenderTargetPartner2@@@WRL@Microsoft@@IEAAKXZ @ 0x1800ABDA4 (-InternalRelease@-$ComPtr@UIDCompositionRenderTargetPartner2@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail@@@details@wil@@QEAA_NXZ @ 0x1800AD378 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail@@.c)
 *     ?CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z @ 0x1800B4AD8 (-CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z.c)
 *     ?HandleScreenRotation@CWindowList@@QEAAJHH@Z @ 0x1800E1760 (-HandleScreenRotation@CWindowList@@QEAAJHH@Z.c)
 *     ?SetCommitHandle@CWindowList@@QEAAJPEAX@Z @ 0x1800E4354 (-SetCommitHandle@CWindowList@@QEAAJPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CDesktopManager::CreateMonitorRenderTargets(CDesktopManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int AllDisplaysNoRef; // eax
  CDWMDisplaySet *v5; // r15
  __int64 v6; // rax
  int v7; // r9d
  int HasChanged; // ebx
  int v9; // eax
  CDisplayAnimatedVisual *v10; // rbx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // r12d
  __int64 v14; // rcx
  int v15; // r9d
  __int64 v16; // rdi
  int v17; // r8d
  __int64 v18; // rax
  __int64 v19; // r13
  struct IDCompositionRenderTargetPartner *v20; // r14
  CDWMDisplay *v21; // rcx
  int v22; // eax
  __int64 (__fastcall **v23)(struct IDCompositionRenderTargetPartner *, GUID *, __int64); // rbx
  __int64 v24; // rax
  int v25; // eax
  __int64 (__fastcall *v26)(__int64, _QWORD, CDWMDisplaySet **); // r10
  int v27; // eax
  int v28; // eax
  int v29; // r13d
  int v30; // r14d
  unsigned int v31; // r13d
  __int64 v32; // rcx
  __int64 v33; // r14
  int v34; // eax
  CDDisplayManager *v35; // rbx
  int SourceHandleForTarget; // eax
  __int64 v37; // rdi
  __int64 (__fastcall *v38)(__int64, void *, _QWORD, _QWORD); // rbx
  unsigned int v39; // eax
  int v40; // eax
  __int64 v41; // rdi
  __int64 (__fastcall *v42)(__int64, _QWORD, _QWORD, _QWORD); // rbx
  unsigned int v43; // eax
  int v44; // eax
  __int64 (__fastcall ***v45)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v46)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v47; // rax
  int v48; // eax
  __int64 v49; // rbx
  __int64 (__fastcall *v50)(__int64, _QWORD, struct IDCompositionRenderTargetPartner **); // rdi
  unsigned int v51; // eax
  int v52; // eax
  struct IDCompositionRenderTargetPartner *v53; // rbx
  __int64 (__fastcall *v54)(struct IDCompositionRenderTargetPartner *, GUID *, __int64); // rdi
  __int64 v55; // rax
  int v56; // eax
  __int64 (__fastcall *v57)(CDWMDisplaySet *, _QWORD, float *); // r10
  int v58; // eax
  __int64 (__fastcall *v59)(struct IDCompositionRenderTargetPartner *, _QWORD, __int128 *); // r10
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // ebx
  int v64; // r9d
  int v65; // eax
  int v66; // eax
  int *v68; // [rsp+20h] [rbp-E0h]
  unsigned int v69; // [rsp+20h] [rbp-E0h]
  struct IDCompositionRenderTargetPartner *v70; // [rsp+60h] [rbp-A0h] BYREF
  char v71; // [rsp+68h] [rbp-98h]
  unsigned int v72; // [rsp+6Ch] [rbp-94h] BYREF
  int v73; // [rsp+70h] [rbp-90h]
  int v74; // [rsp+74h] [rbp-8Ch]
  void *v75; // [rsp+78h] [rbp-88h] BYREF
  int pvParam; // [rsp+80h] [rbp-80h] BYREF
  int v77; // [rsp+84h] [rbp-7Ch] BYREF
  int v78; // [rsp+88h] [rbp-78h] BYREF
  __int128 v79; // [rsp+90h] [rbp-70h] BYREF
  __int64 v80; // [rsp+A0h] [rbp-60h]
  __int64 v81; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v82; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v83; // [rsp+C0h] [rbp-40h]
  unsigned int v84; // [rsp+C8h] [rbp-38h]
  CDWMDisplaySet *v85; // [rsp+D0h] [rbp-30h] BYREF
  float v86; // [rsp+D8h] [rbp-28h]
  float v87; // [rsp+DCh] [rbp-24h]
  void *v88; // [rsp+E0h] [rbp-20h] BYREF
  float v89; // [rsp+E8h] [rbp-18h]
  float v90; // [rsp+ECh] [rbp-14h]
  int v91[2]; // [rsp+F0h] [rbp-10h] BYREF
  int v92; // [rsp+F8h] [rbp-8h]
  int v93; // [rsp+FCh] [rbp-4h]
  __int128 v94; // [rsp+100h] [rbp+0h] BYREF
  __int64 v95; // [rsp+110h] [rbp+10h]
  unsigned int v96; // [rsp+118h] [rbp+18h]
  int v97; // [rsp+120h] [rbp+20h]
  int v98; // [rsp+124h] [rbp+24h]
  int v99; // [rsp+128h] [rbp+28h]
  int v100; // [rsp+12Ch] [rbp+2Ch]
  int v101; // [rsp+130h] [rbp+30h]
  int v102; // [rsp+134h] [rbp+34h]
  int v103; // [rsp+138h] [rbp+38h]
  int v104; // [rsp+13Ch] [rbp+3Ch]
  float v105[4]; // [rsp+140h] [rbp+40h] BYREF
  _DWORD v106[4]; // [rsp+150h] [rbp+50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v85 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0;
  v78 = 0;
  v77 = 0;
  v71 = 0;
  LOBYTE(v74) = 0;
  LOBYTE(v73) = 0;
  v75 = 0LL;
  v2 = CDesktopManager::EnumerateMonitors(this, &v85);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x456u, 0LL);
    goto LABEL_123;
  }
  AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(*((_QWORD *)this + 18), (__int64)&v82);
  v3 = AllDisplaysNoRef;
  if ( AllDisplaysNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, AllDisplaysNoRef, 0x458u, 0LL);
LABEL_123:
    v5 = v85;
    goto LABEL_124;
  }
  v5 = v85;
  if ( v85 )
  {
    v94 = 0LL;
    v95 = 0LL;
    v96 = 0;
    if ( CDWMDisplaySet::IsEquivalentRotated(*((__m128i **)this + 18), (__m128i *)v85) )
    {
      CDWMDisplaySet::CalculateRotationAngles(v5, *((const struct CDWMDisplaySet **)this + 18), &v78, &v77);
      v71 = 1;
    }
    v85 = 0LL;
    GetDesktopID(1LL, &v85);
    if ( !CDesktopManager::IsLogonDesktop((__int64)v85) )
    {
      if ( (unsigned __int8)IsOpenThemeDataPresent() )
      {
        v6 = *((_QWORD *)this + 22);
        if ( v6 )
        {
          if ( *(_BYTE *)(v6 + 120) )
          {
            if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 23) )
            {
              if ( !CDesktopManager::s_forceDisableModeChangeAnimation )
              {
                pvParam = 0;
                if ( SystemParametersInfoW(0xAAu, 0, &pvParam, 0) )
                {
                  if ( !pvParam )
                  {
                    v79 = 0LL;
                    v80 = 0LL;
                    HasChanged = CDisplayModeChangeHelper::HasChanged(
                                   v5,
                                   *((CDWMDisplaySet **)this + 18),
                                   (__int64)&v79,
                                   v7);
                    if ( HasChanged )
                    {
                      v70 = 0LL;
                      wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(&v70);
                      v9 = CDisplayModeChangeHelper::CreateDisplayAnimatedVisual(HasChanged, &v70);
                      v3 = v9;
                      if ( v9 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x490u, 0LL);
LABEL_19:
                        wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v70);
                        if ( (_QWORD)v79 )
                        {
                          std::_Deallocate<16>((void *)v79, (v80 - v79) & 0xFFFFFFFFFFFFFFF8uLL);
                          v79 = 0LL;
                          v80 = 0LL;
                        }
                        goto LABEL_21;
                      }
                      v10 = v70;
                      CWindowList::StopAndSetDisplayAnimatedVisual(*((CWindowList **)this + 53), v70);
                      if ( v10 )
                      {
                        CDisplayAnimatedVisual::SetChangeContextInfo(v10, v5, &v79);
                        v11 = CDisplayAnimatedVisual::Start(v10);
                        v3 = v11;
                        if ( v11 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x497u, 0LL);
                          goto LABEL_19;
                        }
                      }
                      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v70);
                    }
                    if ( (_QWORD)v79 )
                    {
                      std::_Deallocate<16>((void *)v79, (v80 - v79) & 0xFFFFFFFFFFFFFFF8uLL);
                      v79 = 0LL;
                      v80 = 0LL;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v12 = CDWMDisplaySet::GetAllDisplaysNoRef((__int64)v5, (__int64)&v94);
    v3 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x49Du, 0LL);
LABEL_21:
      CBitmapSourceArray::~CBitmapSourceArray((void **)&v94);
      goto LABEL_124;
    }
    v13 = 0;
    if ( v84 )
    {
      v14 = v82;
      v15 = 1;
      do
      {
        v16 = *(_QWORD *)(v14 + 8LL * v13);
        LOBYTE(v17) = 0;
        v18 = 0LL;
        v72 = 0;
        if ( v96 )
        {
          while ( !(_BYTE)v17 )
          {
            v19 = *(_QWORD *)(v94 + 8 * v18);
            v20 = *(struct IDCompositionRenderTargetPartner **)(v19 + 8);
            if ( v20
              && *(_DWORD *)(v16 + 188) == *(_DWORD *)(v19 + 188)
              && *(_DWORD *)(v16 + 236) == *(_DWORD *)(v19 + 236)
              && *(_DWORD *)(v16 + 252) == *(_DWORD *)(v19 + 252)
              && *(_BYTE *)(v16 + 291) == *(_BYTE *)(v19 + 291)
              && !CDWMDisplay::IsTsDisplay((CDWMDisplay *)v16) )
            {
              CDWMDisplay::SetDcompTarget(v21, v20);
              CDWMDisplay::SetDcompTarget((CDWMDisplay *)v19, 0LL);
              if ( *(_BYTE *)(v16 + 292) )
              {
                v22 = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v20 + 40LL))(v20);
                v3 = v22;
                if ( v22 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x4BAu, 0LL);
LABEL_63:
                  CBitmapSourceArray::~CBitmapSourceArray((void **)&v94);
                  goto LABEL_119;
                }
              }
              if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
              {
                v23 = *(__int64 (__fastcall ***)(struct IDCompositionRenderTargetPartner *, GUID *, __int64))v20;
                v81 = 0LL;
                v24 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner2>>(&v81);
                v25 = (*v23)(v20, &GUID_fd1a8dfc_09ad_422c_abf4_bad2e71c68ad, v24);
                if ( v25 < 0 )
                  wil::details::in1diag3::_FailFast_Hr(
                    retaddr,
                    (void *)0x4C0,
                    (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
                    (const char *)(unsigned int)v25,
                    (int)v68);
                v26 = *(__int64 (__fastcall **)(__int64, _QWORD, CDWMDisplaySet **))(*(_QWORD *)v81 + 56LL);
                v97 = *(_DWORD *)(v16 + 40);
                v98 = *(_DWORD *)(v16 + 44);
                v99 = *(_DWORD *)(v16 + 48);
                v100 = *(_DWORD *)(v16 + 52);
                *(float *)&v85 = (float)*(int *)(v16 + 56);
                *((float *)&v85 + 1) = (float)*(int *)(v16 + 60);
                v86 = (float)*(int *)(v16 + 64);
                v87 = (float)*(int *)(v16 + 68);
                LODWORD(v68) = *(_DWORD *)(v16 + 260);
                v27 = v26(v81, *(_QWORD *)(*(_QWORD *)(v16 + 88) + 16LL), &v85);
                v3 = v27;
                if ( v27 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x4C6u, 0LL);
                  Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner2>::InternalRelease(&v81);
                  goto LABEL_63;
                }
                Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner2>::InternalRelease(&v81);
              }
              else
              {
                v91[0] = *(_DWORD *)(v16 + 40);
                v91[1] = *(_DWORD *)(v16 + 44);
                v92 = *(_DWORD *)(v16 + 48);
                v93 = *(_DWORD *)(v16 + 52);
                *(float *)&v88 = (float)*(int *)(v16 + 56);
                *((float *)&v88 + 1) = (float)*(int *)(v16 + 60);
                v89 = (float)*(int *)(v16 + 64);
                v90 = (float)*(int *)(v16 + 68);
                v68 = v91;
                v28 = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *, _QWORD, void **))(*(_QWORD *)v20 + 32LL))(
                        v20,
                        *(_QWORD *)(*(_QWORD *)(v16 + 88) + 16LL),
                        &v88);
                v3 = v28;
                if ( v28 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0x4CEu, 0LL);
                  goto LABEL_63;
                }
              }
              if ( CDWMDisplay::RefreshRateChanged((CDWMDisplay *)v16, (const struct CDWMDisplay *)v19) )
                (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v20 + 48LL))(v20);
              v29 = (unsigned __int8)v74;
              v17 = 1;
              if ( *(int *)(v16 + 200) < 2200 )
                v29 = 1;
              v74 = v29;
              if ( !(_BYTE)v73 )
              {
                v30 = 0;
                if ( CDWMDXGIEnumeration::IsWarpAdapterLuid(
                       *((CDWMDXGIEnumeration **)this + 17),
                       *(struct _LUID *)(v16 + 168)) )
                {
                  v30 = v17;
                }
                v73 = v30;
              }
              v15 = v17;
            }
            v18 = v15 + v72;
            v72 = v18;
            if ( (unsigned int)v18 >= v96 )
              break;
          }
          v14 = v82;
        }
        v13 += v15;
      }
      while ( v13 < v84 );
    }
    CBitmapSourceArray::~CBitmapSourceArray((void **)&v94);
    CDWMDisplaySet::Release(v5);
    v5 = 0LL;
  }
  v31 = 0;
  if ( !v84 )
  {
LABEL_93:
    *((_BYTE *)this + 28) = v73;
    if ( v71 )
    {
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        &v75,
        0LL);
      v63 = NtDCompositionCreateSynchronizationObject(&v75);
      if ( v63 < 0 )
      {
        v69 = 1379;
LABEL_96:
        v3 = v63 | 0x10000000;
        v64 = v3;
LABEL_118:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v64, v69, 0LL);
        goto LABEL_119;
      }
      v65 = (*(__int64 (__fastcall **)(_QWORD, void *))(**(_QWORD **)(*((_QWORD *)this + 6) + 32LL) + 552LL))(
              *(_QWORD *)(*((_QWORD *)this + 6) + 32LL),
              v75);
      v3 = v65;
      if ( v65 < 0 )
      {
        v69 = 1382;
      }
      else
      {
        v65 = CWindowList::SetCommitHandle(*((CWindowList **)this + 53), v75);
        v3 = v65;
        if ( v65 < 0 )
        {
          v69 = 1383;
        }
        else
        {
          v65 = CWindowList::HandleScreenRotation(*((CWindowList **)this + 53), v78, v77);
          v3 = v65;
          if ( v65 >= 0 )
          {
            v66 = NtDCompositionCommitSynchronizationObject(v75);
            if ( v66 >= 0 )
              goto LABEL_119;
            v63 = v66;
            v69 = 1387;
            goto LABEL_96;
          }
          v69 = 1384;
        }
      }
    }
    else
    {
      v65 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 6) + 32LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 6) + 32LL));
      v3 = v65;
      if ( v65 >= 0 )
        goto LABEL_119;
      v69 = 1391;
    }
    v64 = v65;
    goto LABEL_118;
  }
  v32 = v82;
  while ( 1 )
  {
    v33 = *(_QWORD *)(v32 + 8LL * v31);
    if ( *(_QWORD *)(v33 + 8) )
      goto LABEL_92;
    v70 = 0LL;
    if ( CDWMDXGIEnumeration::IsWarpAdapterLuid(*((CDWMDXGIEnumeration **)this + 17), *(struct _LUID *)(v33 + 168)) )
      LOBYTE(v73) = 1;
    if ( CDWMDisplay::IsTsDisplay((CDWMDisplay *)v33) || CCompositor::IsRemoteTreeEnabled(*((CCompositor **)this + 6)) )
      break;
    if ( CDWMDisplay::IsDDisplayCompatible((CDWMDisplay *)v33) )
    {
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail>::GetImpl'::`2'::impl) )
      {
        v34 = CDesktopManager::EnsureDDisplayManager(this);
        v3 = v34;
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v34, 0x509u, 0LL);
          goto LABEL_73;
        }
      }
      else
      {
        CDesktopManager::EnsureDDisplayManager(this);
      }
      v88 = 0LL;
      v72 = 0;
      v35 = (CDDisplayManager *)*((_QWORD *)this + 159);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        &v88,
        0LL);
      SourceHandleForTarget = CDDisplayManager::MakeSourceHandleForTarget(
                                v35,
                                (const struct CDWMDisplay *)v33,
                                &v88,
                                &v72);
      v3 = SourceHandleForTarget;
      if ( SourceHandleForTarget < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SourceHandleForTarget, 0x516u, 0LL);
        goto LABEL_99;
      }
      v37 = *(_QWORD *)(*((_QWORD *)this + 6) + 32LL);
      v38 = *(__int64 (__fastcall **)(__int64, void *, _QWORD, _QWORD))(*(_QWORD *)v37 + 528LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v70);
      v97 = *(_DWORD *)(v33 + 32);
      v98 = *(_DWORD *)(v33 + 36);
      LODWORD(v68) = *(_DWORD *)(v33 + 188);
      v39 = v38(v37, v88, v72, *(_QWORD *)(v33 + 168));
      v40 = FailFastIfAccessDenied(v39);
      v3 = v40;
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v40, 0x521u, 0LL);
LABEL_99:
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v88);
        goto LABEL_73;
      }
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v88);
    }
    else
    {
      v41 = *(_QWORD *)(*((_QWORD *)this + 6) + 32LL);
      v42 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v41 + 520LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v70);
      LODWORD(v68) = *(_DWORD *)(v33 + 252);
      v43 = v42(v41, *(_QWORD *)(v33 + 168), *(unsigned int *)(v33 + 188), *(unsigned int *)(v33 + 236));
      v44 = FailFastIfAccessDenied(v43);
      v3 = v44;
      if ( v44 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v44, 0x52Du, 0LL);
        goto LABEL_73;
      }
    }
LABEL_83:
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
    {
      v85 = 0LL;
      v53 = v70;
      v54 = **(__int64 (__fastcall ***)(struct IDCompositionRenderTargetPartner *, GUID *, __int64))v70;
      v55 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner2>>(&v85);
      v56 = v54(v53, &GUID_fd1a8dfc_09ad_422c_abf4_bad2e71c68ad, v55);
      if ( v56 < 0 )
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x53D,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
          (const char *)(unsigned int)v56,
          (int)v68);
      v57 = *(__int64 (__fastcall **)(CDWMDisplaySet *, _QWORD, float *))(*(_QWORD *)v85 + 56LL);
      v101 = *(_DWORD *)(v33 + 40);
      v102 = *(_DWORD *)(v33 + 44);
      v103 = *(_DWORD *)(v33 + 48);
      v104 = *(_DWORD *)(v33 + 52);
      v105[0] = (float)*(int *)(v33 + 56);
      v105[1] = (float)*(int *)(v33 + 60);
      v105[2] = (float)*(int *)(v33 + 64);
      v105[3] = (float)*(int *)(v33 + 68);
      LODWORD(v68) = *(_DWORD *)(v33 + 260);
      v58 = v57(v85, *(_QWORD *)(*(_QWORD *)(v33 + 88) + 16LL), v105);
      v3 = v58;
      if ( v58 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v58, 0x544u, 0LL);
        Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner2>::InternalRelease(&v85);
        goto LABEL_73;
      }
      Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner2>::InternalRelease(&v85);
    }
    else
    {
      v59 = *(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *, _QWORD, __int128 *))(*(_QWORD *)v70 + 32LL);
      v106[0] = *(_DWORD *)(v33 + 40);
      v106[1] = *(_DWORD *)(v33 + 44);
      v106[2] = *(_DWORD *)(v33 + 48);
      v106[3] = *(_DWORD *)(v33 + 52);
      *(float *)&v94 = (float)*(int *)(v33 + 56);
      *((float *)&v94 + 1) = (float)*(int *)(v33 + 60);
      *((float *)&v94 + 2) = (float)*(int *)(v33 + 64);
      *((float *)&v94 + 3) = (float)*(int *)(v33 + 68);
      v68 = v106;
      v60 = v59(v70, *(_QWORD *)(*(_QWORD *)(v33 + 88) + 16LL), &v94);
      v3 = v60;
      if ( v60 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v60, 0x54Du, 0LL);
        goto LABEL_73;
      }
    }
    v61 = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *, _QWORD))(*(_QWORD *)v70 + 24LL))(
            v70,
            *((_QWORD *)this + 10));
    v3 = v61;
    if ( v61 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v61, 0x550u, 0LL);
      goto LABEL_73;
    }
    if ( *(_BYTE *)(v33 + 292) )
    {
      v62 = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v70 + 40LL))(v70);
      v3 = v62;
      if ( v62 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v62, 0x554u, 0LL);
        goto LABEL_73;
      }
    }
    CDWMDisplay::SetDcompTarget((CDWMDisplay *)v33, v70);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v70);
    v32 = v82;
LABEL_92:
    if ( ++v31 >= v84 )
      goto LABEL_93;
  }
  *(_QWORD *)v91 = 0LL;
  v45 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 6) + 32LL);
  v46 = **v45;
  v47 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpCompositionProjectedShadow>>((__int64 *)v91);
  v48 = v46(v45, &GUID_7bd36c9a_56ee_4fdd_ac4e_76bbd16ec8e4, v47);
  v3 = v48;
  if ( v48 >= 0 )
  {
    v49 = *(_QWORD *)v91;
    v50 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IDCompositionRenderTargetPartner **))(**(_QWORD **)v91
                                                                                                + 112LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v70);
    v51 = v50(v49, *(_QWORD *)(v33 + 168), &v70);
    v52 = FailFastIfAccessDenied(v51);
    v3 = v52;
    if ( v52 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v52, 0x537u, 0LL);
      goto LABEL_106;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v91);
    goto LABEL_83;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v48, 0x533u, 0LL);
LABEL_106:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v91);
LABEL_73:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v70);
LABEL_119:
  if ( (_BYTE)v74 )
    CCompositor::ForceRender(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
LABEL_124:
  if ( v5 )
    CDWMDisplaySet::Release(v5);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v75);
  CBitmapSourceArray::~CBitmapSourceArray((void **)&v82);
  return v3;
}
