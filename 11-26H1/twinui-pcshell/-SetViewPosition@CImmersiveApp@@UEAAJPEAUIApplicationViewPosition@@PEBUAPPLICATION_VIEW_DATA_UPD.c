/*
 * XREFs of ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180040EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180041AA8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180042468 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180043234 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x18005997C (-_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18005A8B4 (-UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4UPDATE_APP_RESULT@2@.c)
 *     ?HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005C548 (-HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18005CB4C (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005D1D0 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005E7B8 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18005F6F4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?StartActivity@SetViewPosition@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x18005F898 (-StartActivity@SetViewPosition@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x1800618BC (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
 *     ?IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x18006264C (-IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInter.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x1800AF148 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A21CC (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x1801AE0F8 (-ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VI.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardCompareHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardMergeHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@@@QEAAJ_K0@Z @ 0x1802EB864 (-_EnsureCapacity@-$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPP.c)
 *     ?EnsureSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0001@@W4GHOST_STATUS@@@Z @ 0x1802FD088 (-EnsureSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_co.c)
 *     ?SendVisibilityChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_J@Z @ 0x1802FF6F8 (-SendVisibilityChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_J@Z.c)
 *     ?_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180300E60 (-_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  unsigned int v13; // edi
  bool v14; // r13
  struct IApplicationPresentationLayer *v16; // rdx
  int v17; // r14d
  unsigned __int8 v18; // r13
  bool v19; // r12
  char v20; // r11
  _QWORD *v21; // r8
  _QWORD *v22; // r10
  _QWORD *v23; // r15
  _QWORD *v24; // r9
  _QWORD *v25; // r14
  _QWORD *v26; // rcx
  __int16 v27; // ax
  __int16 v28; // r15
  unsigned int v29; // r14d
  bool v30; // al
  void (__fastcall *v31)(__int64, struct IUnknown **); // rdi
  struct IImmersiveApplicationInternal *v32; // rdx
  char v33; // r12
  __int128 *v34; // rdi
  int v35; // eax
  __int64 v36; // r15
  struct IUnknown *v37; // rcx
  bool v38; // dl
  PSRWLOCK v39; // rdi
  struct IUnknown *v40; // r13
  PVOID Ptr; // r12
  PSRWLOCK v42; // rdi
  char *v43; // rdx
  int updated; // eax
  void (__fastcall *v45)(__int64, __int64 *); // rdi
  __int64 *v46; // rax
  struct IApplicationPresentationLayer *v47; // rdx
  bool v48; // zf
  unsigned int v49; // edi
  int v50; // eax
  void (__fastcall *v51)(__int64, __int64 *); // rdi
  char *v52; // rax
  int v53; // [rsp+20h] [rbp-E0h]
  char v54; // [rsp+30h] [rbp-D0h]
  char v55; // [rsp+31h] [rbp-CFh]
  __int64 v56; // [rsp+38h] [rbp-C8h] BYREF
  struct IUnknown *v57; // [rsp+40h] [rbp-C0h] BYREF
  __int128 *v58; // [rsp+48h] [rbp-B8h]
  unsigned int v59; // [rsp+50h] [rbp-B0h]
  __int128 v60; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v61; // [rsp+68h] [rbp-98h]
  __int64 v62; // [rsp+78h] [rbp-88h]
  int v63; // [rsp+80h] [rbp-80h]
  __int64 v64; // [rsp+88h] [rbp-78h]
  _BYTE v65[8]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v66; // [rsp+98h] [rbp-68h]
  _OWORD v67[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v68; // [rsp+C0h] [rbp-40h]
  int v69; // [rsp+C8h] [rbp-38h]
  _OWORD v70[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v71; // [rsp+F0h] [rbp-10h]
  _QWORD v72[42]; // [rsp+120h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+1B8h]

  v56 = a2;
  v66 = a8;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    v72,
    "SetViewPosition");
  v72[0] = &CImmersiveAppTelemetry::SetViewPosition::`vftable';
  CImmersiveAppTelemetry::SetViewPosition::StartActivity(
    (CImmersiveAppTelemetry::SetViewPosition *)v72,
    *(const unsigned __int16 **)(a1 + 464));
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0;
  if ( a3 )
  {
    v60 = *a3;
    v61 = a3[1];
    v62 = *((_QWORD *)a3 + 4);
    v63 = *((_DWORD *)a3 + 10);
  }
  v58 = (__int128 *)((unsigned __int64)&v60 & -(__int64)(a3 != 0LL));
  memset_0(v70, 0, 0x50uLL);
  if ( (*(int (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)a1 + 344LL))(a1, v70) >= 0 )
  {
    if ( a3 )
    {
      DWORD2(v60) = DWORD2(v70[0]);
      HIDWORD(v62) = HIDWORD(v71);
      v58 = (__int128 *)((unsigned __int64)&v60 & -(__int64)(a3 != 0LL));
    }
    else
    {
      v60 = v70[0];
      v61 = v70[1];
      v62 = v71;
      v58 = &v60;
    }
  }
  if ( (a5 & 0xFFFFF000) != 0
    || (a5 & 0x48) == 0x48
    || (a5 & 0x600) == 0x600
    || (a5 & 0x180) == 0x180
    || a9 && ((a9 - 1LL) & a9) != 0
    || (a5 & 0x800) != 0 && (a5 & 2) == 0 )
  {
    v13 = -2147024809;
    goto LABEL_15;
  }
  v14 = (*(_BYTE *)(a1 + 608) || (*(_BYTE *)(a1 + 456) & 1) == 0 && (*(_DWORD *)(a1 + 456) & 8) == 0) && (a5 & 3) != 0;
  v64 = a4;
  if ( a4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  }
  else if ( (a5 & 0x780) != 0 )
  {
    v46 = (__int64 *)Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(v65);
    a4 = *v46;
    *v46 = 0LL;
    v57 = 0LL;
    v64 = a4;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v57);
    Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease(v65);
    if ( a4 )
    {
      if ( (a5 & 0x180) != 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a4 + 24LL))(a4, (a5 >> 7) & 1);
      if ( (a5 & 0x600) != 0 )
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a4 + 40LL))(a4, 1LL, (a5 >> 9) & 1);
    }
  }
  if ( a9 == 2 || !v14 )
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
        v47 = *(struct IApplicationPresentationLayer **)(a1 + 320);
        *(_DWORD *)(a1 + 504) |= a9;
        CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer((CImmersiveApp::CloakType *)(a1 + 504), v47);
      }
    }
    if ( !v14 )
    {
      v59 = 0;
      if ( !*(_BYTE *)(a1 + 368) || *(_BYTE *)(a1 + 369) )
      {
        v18 = 0;
        if ( v17 )
        {
          v55 = 1;
          if ( a9 )
          {
LABEL_31:
            v19 = a6 == 1
               && !CReportWindowVisibilityChange::IsOverrideImmuneApplication(
                     (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                     (struct IImmersiveApplicationInternal *)(a1 & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 112) >> 64)));
            if ( *(_DWORD *)(a1 + 724) == *(_DWORD *)(a1 + 708)
              && *(_DWORD *)(a1 + 728) == *(_DWORD *)(a1 + 712)
              && (v22 = (_QWORD *)(a1 + 732), v21 = (_QWORD *)(a1 + 716), *(_DWORD *)(a1 + 732) == *(_DWORD *)(a1 + 716))
              && *(_DWORD *)(a1 + 736) == *(_DWORD *)(a1 + 720)
              && (v24 = (_QWORD *)(a1 + 756), v23 = (_QWORD *)(a1 + 740), *(_DWORD *)(a1 + 756) == *(_DWORD *)(a1 + 740))
              && *(_DWORD *)(a1 + 760) == *(_DWORD *)(a1 + 744)
              && (v26 = (_QWORD *)(a1 + 764), v25 = (_QWORD *)(a1 + 748), *(_DWORD *)(a1 + 764) == *(_DWORD *)(a1 + 748))
              && *(_DWORD *)(a1 + 768) == *(_DWORD *)(a1 + 752) )
            {
              v20 = 0;
            }
            else
            {
              v20 = 1;
              v21 = (_QWORD *)(a1 + 716);
              v22 = (_QWORD *)(a1 + 732);
              v23 = (_QWORD *)(a1 + 740);
              v24 = (_QWORD *)(a1 + 756);
              v25 = (_QWORD *)(a1 + 748);
              v26 = (_QWORD *)(a1 + 764);
            }
            v54 = v20;
            *(_QWORD *)(a1 + 724) = *(_QWORD *)(a1 + 708);
            *v22 = *v21;
            *v24 = *v23;
            *v26 = *v25;
            if ( v20 )
            {
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 320) + 296LL))(*(_QWORD *)(a1 + 320));
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 320) + 304LL))(
                *(_QWORD *)(a1 + 320),
                *v23,
                *v25);
              v20 = v54;
            }
            v27 = a5 & (v18 - 3);
            if ( ((unsigned __int8)a5 & (unsigned __int8)(v18 - 3) & 1) != 0 && *(_DWORD *)(a1 + 504) )
              v27 &= ~1u;
            if ( v18 )
            {
              if ( (v27 & 2) != 0 )
                goto LABEL_42;
            }
            else if ( (v27 & 1) == 0 )
            {
              goto LABEL_42;
            }
            v27 &= 0xFFF3u;
LABEL_42:
            v28 = v27 & 0xFFFB;
            if ( !v19 )
              v28 = v27;
            v29 = 0;
            if ( (v28 & 0x40) != 0 )
            {
              v29 = 8;
            }
            else if ( v20 )
            {
              v29 = 17;
            }
            else if ( v56 || v58 )
            {
              if ( v19 )
              {
                v29 = 2;
              }
              else if ( (v28 & 1) != 0 )
              {
                v29 = 1;
              }
              else
              {
                v30 = v18 && (v28 & 2) != 0 && v58 && (*((_BYTE *)v58 + 40) & 2) != 0;
                if ( (v28 & 8) != 0 || v30 || (v29 = 1, !v18) )
                  v29 = 2;
              }
            }
            else if ( v19 )
            {
              v29 = 4;
            }
            v57 = 0LL;
            v31 = *(void (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)a1 + 464LL);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v57);
            v31(a1, &v57);
            if ( (v29 & 1) == 0 )
              goto LABEL_56;
            v39 = CApplicationManagerUtility::g_pIAMGlobals;
            v32 = (struct IImmersiveApplicationInternal *)(a1 & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 112) >> 64));
            v40 = v57;
            Ptr = CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
            if ( v32 )
            {
              if ( CReportWindowVisibilityChange::IsOverrideImmuneApplication(
                     (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                     v32) )
              {
                goto LABEL_56;
              }
            }
            if ( Ptr )
            {
              v48 = *((_DWORD *)v39[1].Ptr + (_QWORD)Ptr - 1) == 1;
            }
            else
            {
              if ( !LODWORD(v39[5].Ptr) || !(unsigned int)SHIsSameObject(v40, (struct IUnknown *)v39[6].Ptr) )
              {
                if ( HIDWORD(v39[5].Ptr) != 1 )
                  goto LABEL_97;
                goto LABEL_56;
              }
              v48 = LODWORD(v39[5].Ptr) == 1;
            }
            if ( !v48 )
            {
LABEL_97:
              v33 = 1;
              v42 = CApplicationManagerUtility::g_pIAMGlobals;
              v43 = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
              if ( v43 != CApplicationManagerUtility::g_pIAMGlobals[4].Ptr
                || (int)CTSimpleArray<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE,4294967294,CTPolicyCoTaskMem<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardCompareHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardMergeHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>>::_EnsureCapacity(
                          &CApplicationManagerUtility::g_pIAMGlobals[1],
                          v43 + 1) >= 0 )
              {
                v32 = (struct IImmersiveApplicationInternal *)((char *)v42[1].Ptr + 4 * (__int64)v42[2].Ptr++);
                if ( v32 )
                  *(_DWORD *)v32 = 1;
              }
              goto LABEL_57;
            }
LABEL_56:
            v33 = 0;
LABEL_57:
            if ( *(_QWORD *)(a1 + 344) && (v28 & 1) != 0 )
            {
              v49 = 0;
              if ( a6 == 1
                && !CReportWindowVisibilityChange::IsOverrideImmuneApplication(
                      (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                      (struct IImmersiveApplicationInternal *)(a1 & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 112) >> 64))) )
              {
                v49 = 2;
              }
              CImmersiveApp::CImmersiveWindowCollection::EnsureSystemVisual(a1 + 176, v32, v49);
            }
            if ( v66 )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 320) + 152LL))(*(_QWORD *)(a1 + 320), *v66);
              v34 = v58;
              if ( v58 )
              {
                memset(v67, 0, sizeof(v67));
                v68 = 0LL;
                v69 = 0;
                v35 = CImmersiveApp::CImmersiveWindowCollection::ReconcileApplicationViewState(
                        (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176),
                        (struct APPLICATION_VIEW_DATA_UPDATE *)v67);
                if ( v35 < 0 )
                {
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x15A8,
                    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
                    (const char *)(unsigned int)v35,
                    v53);
                }
                else
                {
                  *((_DWORD *)v34 + 2) = DWORD2(v67[0]);
                  *((_DWORD *)v34 + 9) = HIDWORD(v68);
                }
              }
            }
            else
            {
              v34 = v58;
            }
            if ( a4 )
              (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 320) + 168LL))(*(_QWORD *)(a1 + 320), a4);
            if ( (v28 & 3) != 0 )
            {
              if ( (v28 & 1) != 0 )
              {
                LOBYTE(v53) = v33;
                CImmersiveApp::_SetPos_ShowApplication(a1 - 112, v56, v34, v29, v53);
              }
              else
              {
                v50 = 0;
                if ( (v28 & 4) != 0 )
                  v50 = (v33 != 0) + 1;
                CImmersiveApp::_SetPos_HideApplication(a1 - 112, v56, v34, v29, v50);
              }
              v29 = 0;
            }
            if ( v55 && *(_BYTE *)(a1 + 368) )
            {
              *(_BYTE *)(a1 + 368) = 0;
              CImmersiveApp::CImmersiveWindowCollection::HideFrame((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176));
            }
            if ( (v28 & 0x800) != 0 )
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 600LL))(a1, 0LL);
            v36 = v56;
            if ( (v29 & 3) != 0 )
            {
              if ( v56 )
              {
                (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 320) + 112LL))(*(_QWORD *)(a1 + 320), v56);
              }
              else if ( (v29 & 0x10) != 0 )
              {
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 320) + 320LL))(*(_QWORD *)(a1 + 320));
              }
              updated = CImmersiveApp::CImmersiveWindowCollection::UpdateWindowsWithNewInfo(a1 + 176, v34, v29);
              if ( v33 && updated == 1 )
              {
                v56 = 0LL;
                v45 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 464LL);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v56);
                v45(a1, &v56);
                CImmersiveApp::CImmersiveWindowCollection::SendVisibilityChanged(
                  (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176),
                  9LL);
                CImmersiveApp::CImmersiveWindowCollection::SendVisibilityChanged(
                  (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176),
                  10LL);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v56);
              }
            }
            if ( (v29 & 8) != 0 )
              (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 320) + 112LL))(*(_QWORD *)(a1 + 320), v36);
            if ( a10 )
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 320) + 256LL))(*(_QWORD *)(a1 + 320));
            if ( (*(_BYTE *)(a1 + 456) & 1) != 0
              && CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176))
              && CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176)) )
            {
              CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(
                (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176),
                v38);
            }
            if ( v33 )
            {
              v56 = 0LL;
              v51 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 464LL);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v56);
              v51(a1, &v56);
              v52 = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
              if ( v52 )
                CApplicationManagerUtility::g_pIAMGlobals[2].Ptr = v52 - 1;
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v56);
            }
            v37 = v57;
            if ( v57 )
            {
              v57 = 0LL;
              ((void (__fastcall *)(struct IUnknown *))v37->lpVtbl->Release)(v37);
            }
            v13 = v59;
            goto LABEL_13;
          }
        }
      }
      else
      {
        v18 = 1;
      }
      v55 = 0;
      goto LABEL_31;
    }
  }
  v13 = -2147019873;
LABEL_13:
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 16LL))(a4);
LABEL_15:
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v72, v13);
  v72[0] = &CImmersiveAppTelemetry::SetViewPosition::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v72);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(v72);
  return v13;
}
