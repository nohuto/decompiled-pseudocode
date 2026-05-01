/*
 * XREFs of ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x18003F800
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18003E32C (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18003F660 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003F730 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800402F4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?StartActivity@SetViewPosition@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x1800403B0 (-StartActivity@SetViewPosition@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x1800406A8 (-ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VI.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180041708 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x18006BACC (-IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInter.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x1800D6EB8 (-UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4UPDATE_APP_RESULT@2@.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x180116888 (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x180117220 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 *     ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x180137B50 (-_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180138148 (-HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18017A670 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180182C4C (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x1801D33E4 (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardCompareHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardMergeHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@@@QEAAJ_K0@Z @ 0x1802F0CC4 (-_EnsureCapacity@-$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPP.c)
 *     ?EnsureSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0001@@W4GHOST_STATUS@@@Z @ 0x180301978 (-EnsureSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_co.c)
 *     ?SendVisibilityChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_J@Z @ 0x180303DC4 (-SendVisibilityChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_J@Z.c)
 *     ?_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180305500 (-_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CImmersiveApp::SetViewPosition(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        _QWORD *a8,
        unsigned int a9,
        int a10)
{
  __int128 *v13; // r13
  unsigned int v14; // edi
  struct IApplicationPresentationLayer *v16; // rdx
  int v17; // r14d
  bool v18; // r12
  bool v19; // r9
  __int16 v20; // ax
  __int16 v21; // r15
  unsigned int v22; // r14d
  void (__fastcall *v23)(__int64, struct IUnknown **); // rdi
  struct IImmersiveApplicationInternal *v24; // rdx
  PSRWLOCK v25; // rdi
  struct IUnknown *v26; // rax
  PVOID Ptr; // r12
  char v28; // r12
  PSRWLOCK v29; // rdi
  char *v30; // rdx
  PVOID v31; // rcx
  int v32; // eax
  __int64 v33; // rdi
  int updated; // eax
  struct IUnknown *v35; // rcx
  bool v36; // al
  bool v37; // dl
  __int64 *v38; // rax
  struct IApplicationPresentationLayer *v39; // rdx
  bool v40; // zf
  unsigned int v41; // edi
  int v42; // eax
  void (__fastcall *v43)(__int64, __int64 *); // rdi
  void (__fastcall *v44)(__int64, __int64 *); // rdi
  char *v45; // rax
  char v46; // [rsp+30h] [rbp-D0h]
  bool v47; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v48; // [rsp+31h] [rbp-CFh]
  char v49; // [rsp+32h] [rbp-CEh]
  __int64 v50; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+40h] [rbp-C0h]
  unsigned int v52; // [rsp+48h] [rbp-B8h]
  struct IUnknown *v53; // [rsp+50h] [rbp-B0h] BYREF
  struct IUnknown *v54; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v55; // [rsp+60h] [rbp-A0h]
  _QWORD *v56; // [rsp+68h] [rbp-98h]
  __int128 v57; // [rsp+70h] [rbp-90h] BYREF
  __int128 v58; // [rsp+80h] [rbp-80h]
  __int64 v59; // [rsp+90h] [rbp-70h]
  int v60; // [rsp+98h] [rbp-68h]
  _OWORD v61[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v62; // [rsp+C0h] [rbp-40h]
  int v63; // [rsp+C8h] [rbp-38h]
  _OWORD v64[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v65; // [rsp+F0h] [rbp-10h]
  _QWORD v66[42]; // [rsp+120h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+1B8h]

  v51 = a2;
  v56 = a8;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    v66,
    "SetViewPosition");
  v66[0] = &CImmersiveAppTelemetry::SetViewPosition::`vftable';
  CImmersiveAppTelemetry::SetViewPosition::StartActivity(
    (CImmersiveAppTelemetry::SetViewPosition *)v66,
    *(const unsigned __int16 **)(a1 + 464));
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0;
  if ( a3 )
  {
    v57 = *a3;
    v58 = a3[1];
    v59 = *((_QWORD *)a3 + 4);
    v60 = *((_DWORD *)a3 + 10);
  }
  v13 = (__int128 *)((unsigned __int64)&v57 & -(__int64)(a3 != 0LL));
  memset_0(v64, 0, 0x50uLL);
  if ( (*(int (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)a1 + 344LL))(a1, v64) >= 0 )
  {
    if ( a3 )
    {
      DWORD2(v57) = DWORD2(v64[0]);
      HIDWORD(v59) = HIDWORD(v65);
    }
    else
    {
      v57 = v64[0];
      v58 = v64[1];
      v59 = v65;
      v13 = &v57;
    }
  }
  if ( (a5 & 0xFFFFF000) != 0
    || (a5 & 0x48) == 0x48
    || (a5 & 0x600) == 0x600
    || (a5 & 0x180) == 0x180
    || a9 && ((a9 - 1LL) & a9) != 0
    || (a5 & 0x800) != 0 && (a5 & 2) == 0 )
  {
    v14 = -2147024809;
    goto LABEL_15;
  }
  if ( !*(_BYTE *)(a1 + 608) && ((*(_DWORD *)(a1 + 456) & 1) != 0 || (*(_DWORD *)(a1 + 456) & 8) != 0)
    || (v46 = 1, (a5 & 3) == 0) )
  {
    v46 = 0;
  }
  v55 = a4;
  if ( a4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  }
  else if ( (a5 & 0x780) != 0 )
  {
    v38 = (__int64 *)Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(&v54);
    a4 = *v38;
    *v38 = 0LL;
    v50 = 0LL;
    v55 = a4;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v50);
    Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease(&v54);
    if ( a4 )
    {
      if ( (a5 & 0x180) != 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a4 + 24LL))(a4, (a5 >> 7) & 1);
      if ( (a5 & 0x600) != 0 )
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a4 + 40LL))(a4, 1LL, (a5 >> 9) & 1);
    }
  }
  if ( a9 == 2 || !v46 )
  {
    if ( (a5 & 1) != 0 )
    {
      v16 = *(struct IApplicationPresentationLayer **)(a1 + 320);
      *(_DWORD *)(a1 + 504) &= ~a9;
      CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer((CImmersiveApp::CloakType *)(a1 + 504), v16);
      v17 = a5 & 2;
    }
    else
    {
      v17 = a5 & 2;
      if ( (a5 & 2) != 0 )
      {
        v39 = *(struct IApplicationPresentationLayer **)(a1 + 320);
        *(_DWORD *)(a1 + 504) |= a9;
        CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer((CImmersiveApp::CloakType *)(a1 + 504), v39);
      }
    }
    if ( !v46 )
    {
      v52 = 0;
      if ( !*(_BYTE *)(a1 + 368) || *(_BYTE *)(a1 + 369) )
      {
        v48 = 0;
        if ( v17 )
        {
          v49 = 1;
          if ( a9 )
          {
LABEL_35:
            v18 = a6 == 1
               && !CReportWindowVisibilityChange::IsOverrideImmuneApplication(
                     (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                     (struct IImmersiveApplicationInternal *)(a1 & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 112) >> 64)));
            v19 = *(_DWORD *)(a1 + 724) != *(_DWORD *)(a1 + 708)
               || *(_DWORD *)(a1 + 728) != *(_DWORD *)(a1 + 712)
               || *(_DWORD *)(a1 + 732) != *(_DWORD *)(a1 + 716)
               || *(_DWORD *)(a1 + 736) != *(_DWORD *)(a1 + 720)
               || *(_DWORD *)(a1 + 756) != *(_DWORD *)(a1 + 740)
               || *(_DWORD *)(a1 + 760) != *(_DWORD *)(a1 + 744)
               || *(_DWORD *)(a1 + 764) != *(_DWORD *)(a1 + 748)
               || *(_DWORD *)(a1 + 768) != *(_DWORD *)(a1 + 752);
            v47 = v19;
            *(_QWORD *)(a1 + 724) = *(_QWORD *)(a1 + 708);
            *(_QWORD *)(a1 + 732) = *(_QWORD *)(a1 + 716);
            *(_QWORD *)(a1 + 756) = *(_QWORD *)(a1 + 740);
            *(_QWORD *)(a1 + 764) = *(_QWORD *)(a1 + 748);
            if ( v19 )
            {
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 320) + 296LL))(*(_QWORD *)(a1 + 320));
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 320) + 304LL))(
                *(_QWORD *)(a1 + 320),
                *(_QWORD *)(a1 + 740),
                *(_QWORD *)(a1 + 748));
              v19 = v47;
            }
            v20 = a5 & (v48 - 3);
            if ( ((unsigned __int8)a5 & (unsigned __int8)(v48 - 3) & 1) != 0 && *(_DWORD *)(a1 + 504) )
              v20 &= ~1u;
            if ( v48 )
            {
              if ( (v20 & 2) != 0 )
              {
LABEL_47:
                v21 = v20 & 0xFFFB;
                if ( !v18 )
                  v21 = v20;
                v22 = 0;
                if ( (v21 & 0x40) != 0 )
                {
                  v22 = 8;
                }
                else if ( v19 )
                {
                  v22 = 17;
                }
                else if ( v51 || v13 )
                {
                  if ( v18 )
                  {
                    v22 = 2;
                  }
                  else if ( (v21 & 1) != 0 )
                  {
                    v22 = 1;
                  }
                  else
                  {
                    v36 = v48 && (v21 & 2) != 0 && v13 && (*((_BYTE *)v13 + 40) & 2) != 0;
                    if ( (v21 & 8) != 0 || v36 || (v22 = 1, !v48) )
                      v22 = 2;
                  }
                }
                else if ( v18 )
                {
                  v22 = 4;
                }
                v53 = 0LL;
                v23 = *(void (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)a1 + 464LL);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v53);
                v23(a1, &v53);
                if ( (v22 & 1) == 0 )
                  goto LABEL_63;
                v25 = CApplicationManagerUtility::g_pIAMGlobals;
                v24 = (struct IImmersiveApplicationInternal *)(a1 & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 112) >> 64));
                v26 = v53;
                v54 = v53;
                Ptr = CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
                if ( v24 )
                {
                  if ( CReportWindowVisibilityChange::IsOverrideImmuneApplication(
                         (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                         v24) )
                  {
                    goto LABEL_63;
                  }
                  v26 = v54;
                }
                if ( Ptr )
                {
                  v40 = *((_DWORD *)v25[1].Ptr + (_QWORD)Ptr - 1) == 1;
                }
                else
                {
                  if ( !LODWORD(v25[5].Ptr) || !(unsigned int)SHIsSameObject(v26, (struct IUnknown *)v25[6].Ptr) )
                  {
                    if ( HIDWORD(v25[5].Ptr) == 1 )
                    {
LABEL_63:
                      v28 = 0;
LABEL_64:
                      if ( *(_QWORD *)(a1 + 344) && (v21 & 1) != 0 )
                      {
                        v41 = 0;
                        if ( a6 == 1
                          && !CReportWindowVisibilityChange::IsOverrideImmuneApplication(
                                (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                                (struct IImmersiveApplicationInternal *)(a1 & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 112) >> 64))) )
                        {
                          v41 = 2;
                        }
                        CImmersiveApp::CImmersiveWindowCollection::EnsureSystemVisual(a1 + 176, v24, v41);
                      }
                      if ( v56 )
                      {
                        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 320) + 152LL))(
                          *(_QWORD *)(a1 + 320),
                          *v56);
                        if ( v13 )
                        {
                          memset(v61, 0, sizeof(v61));
                          v62 = 0LL;
                          v63 = 0;
                          v32 = CImmersiveApp::CImmersiveWindowCollection::ReconcileApplicationViewState(
                                  (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176),
                                  (struct APPLICATION_VIEW_DATA_UPDATE *)v61);
                          if ( v32 < 0 )
                          {
                            wil::details::in1diag3::_Log_Hr(
                              retaddr,
                              (void *)0x15A8,
                              (int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
                              (const char *)(unsigned int)v32);
                          }
                          else
                          {
                            *((_DWORD *)v13 + 2) = DWORD2(v61[0]);
                            *((_DWORD *)v13 + 9) = HIDWORD(v62);
                          }
                        }
                      }
                      if ( a4 )
                        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 320) + 168LL))(
                          *(_QWORD *)(a1 + 320),
                          a4);
                      if ( (v21 & 3) != 0 )
                      {
                        if ( (v21 & 1) != 0 )
                        {
                          CImmersiveApp::_SetPos_ShowApplication(a1 - 112, v51, v13, v22, v28);
                        }
                        else
                        {
                          v42 = 0;
                          if ( (v21 & 4) != 0 )
                            v42 = (v28 != 0) + 1;
                          CImmersiveApp::_SetPos_HideApplication(a1 - 112, v51, v13, v22, v42);
                        }
                        v22 = 0;
                      }
                      if ( v49 && *(_BYTE *)(a1 + 368) )
                      {
                        *(_BYTE *)(a1 + 368) = 0;
                        CImmersiveApp::CImmersiveWindowCollection::HideFrame((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176));
                      }
                      if ( (v21 & 0x800) != 0 )
                        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 600LL))(a1, 0LL);
                      v33 = v51;
                      if ( (v22 & 3) != 0 )
                      {
                        if ( v51 )
                        {
                          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 320) + 112LL))(
                            *(_QWORD *)(a1 + 320),
                            v51);
                        }
                        else if ( (v22 & 0x10) != 0 )
                        {
                          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 320) + 320LL))(*(_QWORD *)(a1 + 320));
                        }
                        updated = CImmersiveApp::CImmersiveWindowCollection::UpdateWindowsWithNewInfo(
                                    a1 + 176,
                                    v13,
                                    v22);
                        if ( v28 && updated == 1 )
                        {
                          v50 = 0LL;
                          v43 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 464LL);
                          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v50);
                          v43(a1, &v50);
                          CImmersiveApp::CImmersiveWindowCollection::SendVisibilityChanged(
                            (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176),
                            9LL);
                          CImmersiveApp::CImmersiveWindowCollection::SendVisibilityChanged(
                            (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176),
                            10LL);
                          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v50);
                          v33 = v51;
                        }
                      }
                      if ( (v22 & 8) != 0 )
                        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 320) + 112LL))(
                          *(_QWORD *)(a1 + 320),
                          v33);
                      if ( a10 )
                        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 320) + 256LL))(*(_QWORD *)(a1 + 320));
                      if ( (*(_BYTE *)(a1 + 456) & 1) != 0
                        && CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176))
                        && CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176)) )
                      {
                        CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(
                          (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176),
                          v37);
                      }
                      if ( v28 )
                      {
                        v50 = 0LL;
                        v44 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 464LL);
                        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v50);
                        v44(a1, &v50);
                        v45 = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
                        if ( v45 )
                          CApplicationManagerUtility::g_pIAMGlobals[2].Ptr = v45 - 1;
                        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v50);
                      }
                      v35 = v53;
                      if ( v53 )
                      {
                        v53 = 0LL;
                        ((void (__fastcall *)(struct IUnknown *))v35->lpVtbl->Release)(v35);
                      }
                      v14 = v52;
                      goto LABEL_13;
                    }
LABEL_58:
                    v28 = 1;
                    v29 = CApplicationManagerUtility::g_pIAMGlobals;
                    v30 = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
                    if ( v30 != CApplicationManagerUtility::g_pIAMGlobals[4].Ptr
                      || (int)CTSimpleArray<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE,4294967294,CTPolicyCoTaskMem<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardCompareHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardMergeHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>>::_EnsureCapacity(
                                &CApplicationManagerUtility::g_pIAMGlobals[1],
                                v30 + 1) >= 0 )
                    {
                      v31 = v29[2].Ptr;
                      v29[2].Ptr = (char *)v31 + 1;
                      v24 = (struct IImmersiveApplicationInternal *)((char *)v29[1].Ptr + 4 * (_QWORD)v31);
                      if ( v24 )
                        *(_DWORD *)v24 = 1;
                    }
                    goto LABEL_64;
                  }
                  v40 = LODWORD(v25[5].Ptr) == 1;
                }
                if ( v40 )
                  goto LABEL_63;
                goto LABEL_58;
              }
            }
            else if ( (v20 & 1) == 0 )
            {
              goto LABEL_47;
            }
            v20 &= 0xFFF3u;
            goto LABEL_47;
          }
        }
      }
      else
      {
        v48 = 1;
      }
      v49 = 0;
      goto LABEL_35;
    }
  }
  v14 = -2147019873;
LABEL_13:
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 16LL))(a4);
LABEL_15:
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v66, v14);
  v66[0] = &CImmersiveAppTelemetry::SetViewPosition::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v66);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v66);
  return v14;
}
