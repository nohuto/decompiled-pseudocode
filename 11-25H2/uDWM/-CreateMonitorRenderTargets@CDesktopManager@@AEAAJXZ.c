/*
 * XREFs of ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180077088
 * Callers:
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x180033BCC (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x180076ED0 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180009130 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x180011E44 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18001D434 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800295E8 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002B134 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDisplayAnimatedVisual@@@Z @ 0x180037BD4 (-CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDis.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003D7C8 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Mi.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18003E6C0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180040630 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?reset@?$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004EA64 (-reset@-$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?EnsureDDisplayManager@CDesktopManager@@AEAAJXZ @ 0x180057984 (-EnsureDDisplayManager@CDesktopManager@@AEAAJXZ.c)
 *     ?HasChanged@CDisplayModeChangeHelper@@SA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180065CCC (-HasChanged@CDisplayModeChangeHelper@@SA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV-$.c)
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x1800666E0 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x1800668F4 (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     ?IsRemoteTreeEnabled@CCompositor@@QEAA_NXZ @ 0x180070A30 (-IsRemoteTreeEnabled@CCompositor@@QEAA_NXZ.c)
 *     ?ForceRender@CCompositor@@QEAAJXZ @ 0x180070AE4 (-ForceRender@CCompositor@@QEAAJXZ.c)
 *     ?FailFastIfAccessDenied@@YAJJ@Z @ 0x180071434 (-FailFastIfAccessDenied@@YAJJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180071818 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18007883C (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18007A244 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z @ 0x18007C4F0 (-SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z.c)
 *     ?IsWarpAdapterLuid@CDWMDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x18007DEE0 (-IsWarpAdapterLuid@CDWMDXGIEnumeration@@QEBA_NU_LUID@@@Z.c)
 *     ?MakeSourceHandleForTarget@CDDisplayManager@@QEAAJAEBVCDWMDisplay@@PEAPEAXPEAI@Z @ 0x1800809F0 (-MakeSourceHandleForTarget@CDDisplayManager@@QEAAJAEBVCDWMDisplay@@PEAPEAXPEAI@Z.c)
 *     ?RefreshRateChanged@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x180083D80 (-RefreshRateChanged@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?IsTsDisplay@CDWMDisplay@@QEBA_NXZ @ 0x180085024 (-IsTsDisplay@CDWMDisplay@@QEBA_NXZ.c)
 *     ?StopAndSetDisplayAnimatedVisual@CWindowList@@QEAAJPEAVCDisplayAnimatedVisual@@@Z @ 0x18008E154 (-StopAndSetDisplayAnimatedVisual@CWindowList@@QEAAJPEAVCDisplayAnimatedVisual@@@Z.c)
 *     ?SetChangeContextInfo@CDisplayAnimatedVisual@@QEAAXPEAVCDWMDisplaySet@@AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180096070 (-SetChangeContextInfo@CDisplayAnimatedVisual@@QEAAXPEAVCDWMDisplaySet@@AEAV-$vector@PEBVCDWMDisp.c)
 *     ?Start@CDisplayAnimatedVisual@@QEAAJXZ @ 0x1800992BC (-Start@CDisplayAnimatedVisual@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18009BCE0 (IsOpenThemeDataPresent.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A35AC (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIDCompositionRenderTargetPartner2@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIDCompositionRenderTargetPartner2@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800ABE3C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIDCompositionRenderTargetPartner2@@@WRL@Microsoft@@@@YAPEAPEAX.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionRenderTargetPartner2@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD120 (-InternalRelease@-$ComPtr@UIDCompositionRenderTargetPartner2@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x1800ADC34 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     ?IsDDisplayCompatible@CDWMDisplay@@QEAA_NXZ @ 0x1800B4E28 (-IsDDisplayCompatible@CDWMDisplay@@QEAA_NXZ.c)
 *     ?CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z @ 0x1800B50E8 (-CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z.c)
 *     ?HandleScreenRotation@CWindowList@@QEAAJHH@Z @ 0x1800E590C (-HandleScreenRotation@CWindowList@@QEAAJHH@Z.c)
 *     ?SetCommitHandle@CWindowList@@QEAAJPEAX@Z @ 0x1800E7F50 (-SetCommitHandle@CWindowList@@QEAAJPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CDesktopManager::CreateMonitorRenderTargets(CCompositor **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int AllDisplaysNoRef; // eax
  CDWMDisplaySet *v5; // r15
  CCompositor *v6; // rax
  __int64 v7; // r9
  int HasChanged; // ebx
  int v9; // eax
  CDisplayAnimatedVisual *v10; // rbx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // r13d
  _QWORD *v14; // rcx
  __int64 v15; // rdi
  int v16; // r8d
  __int64 v17; // rax
  int v18; // r9d
  __int64 v19; // rsi
  struct IDCompositionRenderTargetPartner *v20; // r12
  CDWMDisplay *v21; // rcx
  int v22; // eax
  bool v23; // zf
  __int64 v24; // rax
  __int64 (__fastcall *v25)(struct IDCompositionRenderTargetPartner *, GUID *, __int64); // rbx
  __int64 v26; // rax
  int v27; // eax
  __int64 (__fastcall *v28)(__int64, _QWORD, CDWMDisplaySet **); // r9
  int v29; // xmm2_4
  int v30; // eax
  __int64 (__fastcall *v31)(struct IDCompositionRenderTargetPartner *, _QWORD, void **); // r9
  int v32; // eax
  int v33; // r12d
  int v34; // esi
  int v35; // r13d
  _QWORD *v36; // rcx
  __int64 v37; // rsi
  CDDisplayManager *v38; // rbx
  int SourceHandleForTarget; // eax
  __int64 v40; // rdi
  __int64 (__fastcall *v41)(__int64, void *, _QWORD, _QWORD); // rbx
  unsigned int v42; // eax
  int v43; // eax
  __int64 v44; // rdi
  __int64 (__fastcall *v45)(__int64, _QWORD, _QWORD, _QWORD); // rbx
  unsigned int v46; // eax
  int v47; // eax
  __int64 (__fastcall ***v48)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v49)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v50; // rax
  int v51; // eax
  __int64 v52; // rbx
  __int64 (__fastcall *v53)(__int64, _QWORD, struct IDCompositionRenderTargetPartner **); // rdi
  unsigned int v54; // eax
  int v55; // eax
  struct IDCompositionRenderTargetPartner *v56; // rbx
  __int64 (__fastcall *v57)(struct IDCompositionRenderTargetPartner *, GUID *, __int64); // rdi
  __int64 v58; // rax
  int v59; // eax
  __int64 (__fastcall *v60)(CDWMDisplaySet *, _QWORD, float *); // r9
  int v61; // xmm2_4
  int v62; // eax
  __int64 (__fastcall *v63)(struct IDCompositionRenderTargetPartner *, _QWORD, __int128 *); // r9
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // ebx
  int v68; // r9d
  int v69; // eax
  int v70; // eax
  __int64 *v72; // [rsp+20h] [rbp-E0h]
  unsigned int v73; // [rsp+20h] [rbp-E0h]
  struct IDCompositionRenderTargetPartner *v74; // [rsp+60h] [rbp-A0h] BYREF
  char v75; // [rsp+68h] [rbp-98h]
  unsigned int v76; // [rsp+6Ch] [rbp-94h] BYREF
  int v77; // [rsp+70h] [rbp-90h]
  int v78; // [rsp+74h] [rbp-8Ch]
  void *v79; // [rsp+78h] [rbp-88h] BYREF
  int pvParam; // [rsp+80h] [rbp-80h] BYREF
  int v81; // [rsp+84h] [rbp-7Ch] BYREF
  int v82; // [rsp+88h] [rbp-78h] BYREF
  __int64 v83; // [rsp+90h] [rbp-70h] BYREF
  void *v84[3]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v85; // [rsp+B0h] [rbp-50h]
  CDWMDisplaySet *v86; // [rsp+B8h] [rbp-48h] BYREF
  float v87; // [rsp+C0h] [rbp-40h]
  float v88; // [rsp+C4h] [rbp-3Ch]
  void *v89; // [rsp+C8h] [rbp-38h] BYREF
  float v90; // [rsp+D0h] [rbp-30h]
  float v91; // [rsp+D4h] [rbp-2Ch]
  __int64 v92; // [rsp+D8h] [rbp-28h] BYREF
  int v93; // [rsp+E0h] [rbp-20h]
  int v94; // [rsp+E4h] [rbp-1Ch]
  __int128 v95; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v96; // [rsp+F8h] [rbp-8h]
  _QWORD *v97; // [rsp+100h] [rbp+0h] BYREF
  int v98; // [rsp+108h] [rbp+8h]
  int v99; // [rsp+10Ch] [rbp+Ch]
  unsigned int v100; // [rsp+118h] [rbp+18h]
  int v101; // [rsp+120h] [rbp+20h]
  int v102; // [rsp+124h] [rbp+24h]
  int v103; // [rsp+128h] [rbp+28h]
  int v104; // [rsp+12Ch] [rbp+2Ch]
  int v105; // [rsp+130h] [rbp+30h]
  int v106; // [rsp+134h] [rbp+34h]
  int v107; // [rsp+138h] [rbp+38h]
  int v108; // [rsp+13Ch] [rbp+3Ch]
  float v109[4]; // [rsp+140h] [rbp+40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v86 = 0LL;
  CBitmapSourceArray::CBitmapSourceArray((CBitmapSourceArray *)v84);
  v82 = 0;
  v81 = 0;
  v75 = 0;
  LOBYTE(v78) = 0;
  LOBYTE(v77) = 0;
  v79 = 0LL;
  v2 = CDesktopManager::EnumerateMonitors((CDesktopManager *)this, &v86);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x47Du, 0LL);
    goto LABEL_120;
  }
  AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(this[18], v84);
  v3 = AllDisplaysNoRef;
  if ( AllDisplaysNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, AllDisplaysNoRef, 0x47Fu, 0LL);
LABEL_120:
    v5 = v86;
    goto LABEL_121;
  }
  v5 = v86;
  if ( v86 )
  {
    CBitmapSourceArray::CBitmapSourceArray((CBitmapSourceArray *)&v97);
    if ( CDWMDisplaySet::IsEquivalentRotated(this[18], v5) )
    {
      CDWMDisplaySet::CalculateRotationAngles(v5, this[18], &v82, &v81);
      v75 = 1;
    }
    v86 = 0LL;
    GetDesktopID(1LL);
    if ( !CDesktopManager::IsLogonDesktop((__int64)v86) )
    {
      if ( (unsigned __int8)IsOpenThemeDataPresent() )
      {
        v6 = this[22];
        if ( v6 )
        {
          if ( *((_BYTE *)v6 + 120) )
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
                    v95 = 0LL;
                    v96 = 0LL;
                    HasChanged = CDisplayModeChangeHelper::HasChanged(v5, this[18], (__int64)&v95, v7);
                    if ( HasChanged )
                    {
                      v74 = 0LL;
                      wil::com_ptr_t<CSolidRectangleInstruction,wil::err_returncode_policy>::reset(&v74);
                      v9 = CDisplayModeChangeHelper::CreateDisplayAnimatedVisual(HasChanged, &v74);
                      v3 = v9;
                      if ( v9 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x4B7u, 0LL);
LABEL_19:
                        wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v74);
                        if ( (_QWORD)v95 )
                          std::_Deallocate<16,0>(
                            (void *)v95,
                            (const struct std::nothrow_t *)((v96 - v95) & 0xFFFFFFFFFFFFFFF8uLL));
                        goto LABEL_21;
                      }
                      v10 = v74;
                      CWindowList::StopAndSetDisplayAnimatedVisual(this[53], v74);
                      if ( v10 )
                      {
                        CDisplayAnimatedVisual::SetChangeContextInfo(v10, v5, &v95);
                        v11 = CDisplayAnimatedVisual::Start(v10);
                        v3 = v11;
                        if ( v11 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x4BEu, 0LL);
                          goto LABEL_19;
                        }
                      }
                      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v74);
                    }
                    if ( (_QWORD)v95 )
                      std::_Deallocate<16,0>(
                        (void *)v95,
                        (const struct std::nothrow_t *)((v96 - v95) & 0xFFFFFFFFFFFFFFF8uLL));
                  }
                }
              }
            }
          }
        }
      }
    }
    v12 = CDWMDisplaySet::GetAllDisplaysNoRef(v5, &v97);
    v3 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x4C4u, 0LL);
LABEL_21:
      DynArrayImpl<0>::~DynArrayImpl<0>((void **)&v97);
      goto LABEL_121;
    }
    v13 = 0;
    if ( v85 )
    {
      v14 = v84[0];
      do
      {
        v15 = v14[v13];
        LOBYTE(v16) = 0;
        v17 = 0LL;
        v76 = 0;
        if ( v100 )
        {
          v18 = 1;
          while ( !(_BYTE)v16 )
          {
            v19 = v97[v17];
            v20 = *(struct IDCompositionRenderTargetPartner **)(v19 + 8);
            if ( v20
              && *(_DWORD *)(v15 + 188) == *(_DWORD *)(v19 + 188)
              && *(_DWORD *)(v15 + 236) == *(_DWORD *)(v19 + 236)
              && *(_DWORD *)(v15 + 252) == *(_DWORD *)(v19 + 252)
              && *(_BYTE *)(v15 + 291) == *(_BYTE *)(v19 + 291)
              && !CDWMDisplay::IsTsDisplay((CDWMDisplay *)v15) )
            {
              CDWMDisplay::SetDcompTarget(v21, v20);
              CDWMDisplay::SetDcompTarget((CDWMDisplay *)v19, 0LL);
              if ( *(_BYTE *)(v15 + 292) )
              {
                v22 = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v20 + 40LL))(v20);
                v3 = v22;
                if ( v22 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x4E1u, 0LL);
LABEL_64:
                  DynArrayImpl<0>::~DynArrayImpl<0>((void **)&v97);
                  goto LABEL_116;
                }
              }
              v23 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) == 0;
              v24 = *(_QWORD *)v20;
              if ( v23 )
              {
                v31 = *(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *, _QWORD, void **))(v24 + 32);
                v92 = *(_QWORD *)(v15 + 40);
                v93 = *(_DWORD *)(v15 + 48);
                v94 = *(_DWORD *)(v15 + 52);
                *(float *)&v89 = (float)*(int *)(v15 + 56);
                *((float *)&v89 + 1) = (float)*(int *)(v15 + 60);
                v90 = (float)*(int *)(v15 + 64);
                v91 = (float)*(int *)(v15 + 68);
                v72 = &v92;
                v32 = v31(v20, *(_QWORD *)(*(_QWORD *)(v15 + 88) + 16LL), &v89);
                v3 = v32;
                if ( v32 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, 0x4F5u, 0LL);
                  goto LABEL_64;
                }
              }
              else
              {
                v83 = 0LL;
                v25 = *(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *, GUID *, __int64))v24;
                v26 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner2>>(&v83);
                v27 = v25(v20, &GUID_fd1a8dfc_09ad_422c_abf4_bad2e71c68ad, v26);
                if ( v27 < 0 )
                  wil::details::in1diag3::_FailFast_Hr(
                    retaddr,
                    (void *)0x4E7,
                    (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
                    (const char *)(unsigned int)v27,
                    (int)v72);
                v28 = *(__int64 (__fastcall **)(__int64, _QWORD, CDWMDisplaySet **))(*(_QWORD *)v83 + 56LL);
                v101 = *(_DWORD *)(v15 + 40);
                v102 = *(_DWORD *)(v15 + 44);
                v103 = *(_DWORD *)(v15 + 48);
                v104 = *(_DWORD *)(v15 + 52);
                v29 = *(_DWORD *)(v15 + 260);
                *(float *)&v86 = (float)*(int *)(v15 + 56);
                *((float *)&v86 + 1) = (float)*(int *)(v15 + 60);
                v87 = (float)*(int *)(v15 + 64);
                v88 = (float)*(int *)(v15 + 68);
                LODWORD(v72) = v29;
                v30 = v28(v83, *(_QWORD *)(*(_QWORD *)(v15 + 88) + 16LL), &v86);
                v3 = v30;
                if ( v30 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0x4EDu, 0LL);
                  Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner2>::InternalRelease(&v83);
                  goto LABEL_64;
                }
                Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner2>::InternalRelease(&v83);
              }
              if ( CDWMDisplay::RefreshRateChanged((CDWMDisplay *)v15, (const struct CDWMDisplay *)v19) )
                (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v20 + 48LL))(v20);
              v33 = (unsigned __int8)v78;
              v16 = 1;
              if ( *(int *)(v15 + 200) < 2200 )
                v33 = 1;
              v78 = v33;
              if ( !(_BYTE)v77 )
              {
                v34 = 0;
                if ( CDWMDXGIEnumeration::IsWarpAdapterLuid(this[17], *(struct _LUID *)(v15 + 168)) )
                  v34 = v16;
                v77 = v34;
              }
              v18 = v16;
            }
            v17 = v18 + v76;
            v76 = v17;
            if ( (unsigned int)v17 >= v100 )
              break;
          }
          v14 = v84[0];
        }
        ++v13;
      }
      while ( v13 < v85 );
    }
    DynArrayImpl<0>::~DynArrayImpl<0>((void **)&v97);
    CDWMDisplaySet::Release(v5);
    v5 = 0LL;
  }
  v35 = 0;
  if ( !v85 )
  {
LABEL_89:
    *((_BYTE *)this + 28) = v77;
    if ( v75 )
    {
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        &v79,
        0LL);
      v67 = NtDCompositionCreateSynchronizationObject(&v79);
      if ( v67 < 0 )
      {
        v73 = 1411;
LABEL_92:
        v3 = v67 | 0x10000000;
        v68 = v3;
LABEL_115:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v68, v73, 0LL);
        goto LABEL_116;
      }
      v69 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this[6] + 4) + 552LL))(
              *((_QWORD *)this[6] + 4),
              v79);
      v3 = v69;
      if ( v69 < 0 )
      {
        v73 = 1414;
      }
      else
      {
        v69 = CWindowList::SetCommitHandle(this[53], v79);
        v3 = v69;
        if ( v69 < 0 )
        {
          v73 = 1415;
        }
        else
        {
          v69 = CWindowList::HandleScreenRotation(this[53], v82, v81);
          v3 = v69;
          if ( v69 >= 0 )
          {
            v70 = NtDCompositionCommitSynchronizationObject(v79);
            if ( v70 >= 0 )
              goto LABEL_116;
            v67 = v70;
            v73 = 1419;
            goto LABEL_92;
          }
          v73 = 1416;
        }
      }
    }
    else
    {
      v69 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this[6] + 4) + 24LL))(*((_QWORD *)this[6] + 4));
      v3 = v69;
      if ( v69 >= 0 )
        goto LABEL_116;
      v73 = 1423;
    }
    v68 = v69;
    goto LABEL_115;
  }
  v36 = v84[0];
  while ( 1 )
  {
    v37 = v36[v35];
    if ( *(_QWORD *)(v37 + 8) )
      goto LABEL_88;
    v74 = 0LL;
    if ( CDWMDXGIEnumeration::IsWarpAdapterLuid(this[17], *(struct _LUID *)(v37 + 168)) )
      LOBYTE(v77) = 1;
    if ( CDWMDisplay::IsTsDisplay((CDWMDisplay *)v37) || CCompositor::IsRemoteTreeEnabled(this[6]) )
      break;
    if ( !CDWMDisplay::IsDDisplayCompatible((CDWMDisplay *)v37) )
    {
      v44 = *((_QWORD *)this[6] + 4);
      v45 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v44 + 520LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v74);
      LODWORD(v72) = *(_DWORD *)(v37 + 252);
      v46 = v45(v44, *(_QWORD *)(v37 + 168), *(unsigned int *)(v37 + 188), *(unsigned int *)(v37 + 236));
      v47 = FailFastIfAccessDenied(v46);
      v3 = v47;
      if ( v47 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v47, 0x54Du, 0LL);
        goto LABEL_96;
      }
      goto LABEL_79;
    }
    CDesktopManager::EnsureDDisplayManager((CDesktopManager *)this);
    v89 = 0LL;
    v76 = 0;
    v38 = this[162];
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &v89,
      0LL);
    SourceHandleForTarget = CDDisplayManager::MakeSourceHandleForTarget(
                              v38,
                              (const struct CDWMDisplay *)v37,
                              &v89,
                              &v76);
    v3 = SourceHandleForTarget;
    if ( SourceHandleForTarget < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SourceHandleForTarget, 0x536u, 0LL);
      goto LABEL_95;
    }
    v40 = *((_QWORD *)this[6] + 4);
    v41 = *(__int64 (__fastcall **)(__int64, void *, _QWORD, _QWORD))(*(_QWORD *)v40 + 528LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v74);
    v101 = *(_DWORD *)(v37 + 32);
    v102 = *(_DWORD *)(v37 + 36);
    LODWORD(v72) = *(_DWORD *)(v37 + 188);
    v42 = v41(v40, v89, v76, *(_QWORD *)(v37 + 168));
    v43 = FailFastIfAccessDenied(v42);
    v3 = v43;
    if ( v43 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v43, 0x541u, 0LL);
LABEL_95:
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v89);
      goto LABEL_96;
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v89);
LABEL_79:
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
    {
      v86 = 0LL;
      v56 = v74;
      v57 = **(__int64 (__fastcall ***)(struct IDCompositionRenderTargetPartner *, GUID *, __int64))v74;
      v58 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner2>>(&v86);
      v59 = v57(v56, &GUID_fd1a8dfc_09ad_422c_abf4_bad2e71c68ad, v58);
      if ( v59 < 0 )
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x55D,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
          (const char *)(unsigned int)v59,
          (int)v72);
      v60 = *(__int64 (__fastcall **)(CDWMDisplaySet *, _QWORD, float *))(*(_QWORD *)v86 + 56LL);
      v105 = *(_DWORD *)(v37 + 40);
      v106 = *(_DWORD *)(v37 + 44);
      v107 = *(_DWORD *)(v37 + 48);
      v108 = *(_DWORD *)(v37 + 52);
      v61 = *(_DWORD *)(v37 + 260);
      v109[0] = (float)*(int *)(v37 + 56);
      v109[1] = (float)*(int *)(v37 + 60);
      v109[2] = (float)*(int *)(v37 + 64);
      v109[3] = (float)*(int *)(v37 + 68);
      LODWORD(v72) = v61;
      v62 = v60(v86, *(_QWORD *)(*(_QWORD *)(v37 + 88) + 16LL), v109);
      v3 = v62;
      if ( v62 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v62, 0x564u, 0LL);
        Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner2>::InternalRelease(&v86);
        goto LABEL_96;
      }
      Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner2>::InternalRelease(&v86);
    }
    else
    {
      v63 = *(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *, _QWORD, __int128 *))(*(_QWORD *)v74 + 32LL);
      v97 = *(_QWORD **)(v37 + 40);
      v98 = *(_DWORD *)(v37 + 48);
      v99 = *(_DWORD *)(v37 + 52);
      *(float *)&v95 = (float)*(int *)(v37 + 56);
      *((float *)&v95 + 1) = (float)*(int *)(v37 + 60);
      *((float *)&v95 + 2) = (float)*(int *)(v37 + 64);
      *((float *)&v95 + 3) = (float)*(int *)(v37 + 68);
      v72 = (__int64 *)&v97;
      v64 = v63(v74, *(_QWORD *)(*(_QWORD *)(v37 + 88) + 16LL), &v95);
      v3 = v64;
      if ( v64 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v64, 0x56Du, 0LL);
        goto LABEL_96;
      }
    }
    v65 = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *, CCompositor *))(*(_QWORD *)v74 + 24LL))(
            v74,
            this[10]);
    v3 = v65;
    if ( v65 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v65, 0x570u, 0LL);
      goto LABEL_96;
    }
    if ( *(_BYTE *)(v37 + 292) )
    {
      v66 = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v74 + 40LL))(v74);
      v3 = v66;
      if ( v66 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v66, 0x574u, 0LL);
        goto LABEL_96;
      }
    }
    CDWMDisplay::SetDcompTarget((CDWMDisplay *)v37, v74);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v74);
    v36 = v84[0];
LABEL_88:
    if ( ++v35 >= v85 )
      goto LABEL_89;
  }
  v92 = 0LL;
  v48 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this[6] + 4);
  v49 = **v48;
  v50 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpCompositionProjectedShadow>>(&v92);
  v51 = v49(v48, &GUID_7bd36c9a_56ee_4fdd_ac4e_76bbd16ec8e4, v50);
  v3 = v51;
  if ( v51 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v51, 0x553u, 0LL);
    goto LABEL_103;
  }
  v52 = v92;
  v53 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IDCompositionRenderTargetPartner **))(*(_QWORD *)v92 + 112LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v74);
  v54 = v53(v52, *(_QWORD *)(v37 + 168), &v74);
  v55 = FailFastIfAccessDenied(v54);
  v3 = v55;
  if ( v55 >= 0 )
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v92);
    goto LABEL_79;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v55, 0x557u, 0LL);
LABEL_103:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v92);
LABEL_96:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v74);
LABEL_116:
  if ( (_BYTE)v78 )
    CCompositor::ForceRender(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
LABEL_121:
  if ( v5 )
    CDWMDisplaySet::Release(v5);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v79);
  DynArrayImpl<0>::~DynArrayImpl<0>(v84);
  return v3;
}
