/*
 * XREFs of ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x1800425B0
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180092E50 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     CDelayIAMOperations::CDelayedOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___::operator() @ 0x1801F4390 (CDelayIAMOperations--CDelayedOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180041A4C (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180043234 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18004340C (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?StartActivity@OnShellHookMessage@IamTraceLogging@@QEAAX_KPEAUHWND__@@@Z @ 0x1800434A0 (-StartActivity@OnShellHookMessage@IamTraceLogging@@QEAAX_KPEAUHWND__@@@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800437F8 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18004A620 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x180058724 (-_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWN.c)
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x1800A67E4 (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@.c)
 *     ?_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800AEE34 (-_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x18012AC64 (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18012AE68 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18012B5A8 (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x18012B720 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1801562F8 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ?SetStopResult@?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1801A7654 (-SetStopResult@-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Ac.c)
 *     ?RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z @ 0x1801DB0F8 (-RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1801E6860 (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x1801EA5AC (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z @ 0x1802E6D74 (-_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x1802E6F30 (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CApplicationManager::OnShellHookMessage(
        CApplicationManager *this,
        unsigned __int64 a2,
        void (__fastcall ***a3)(_QWORD, _QWORD, _QWORD))
{
  HWND v3; // r15
  CApplicationManager *v6; // rdi
  unsigned __int64 v7; // r12
  int v8; // ebx
  int v9; // eax
  DWORD CurrentThreadId; // ebx
  HRESULT ApartmentType; // esi
  int v12; // eax
  struct IObjectArray *v13; // r14
  HWND v14; // rbx
  unsigned int v15; // r12d
  bool v16; // r15
  __int64 *v17; // rcx
  __int64 v18; // rax
  char v19; // al
  int v20; // r15d
  struct IImmersiveMonitor *v21; // rbx
  struct IObjectArray *v22; // rbx
  unsigned __int64 v23; // r14
  unsigned __int64 i; // rdi
  char v25; // di
  struct IImmersiveApplication *v26; // rcx
  __int64 v28; // rcx
  unsigned __int8 (__fastcall *v29)(__int64, struct IObjectArray *); // rax
  struct IObjectArray *v30; // rbx
  struct ISyncIAMEventHandler *v31; // rcx
  struct IObjectArray *v32; // rcx
  __int64 v33; // rcx
  RTL_SRWLOCK *v34; // rbx
  struct CDelayIAMOperations::COperation *v35; // rbx
  struct CDelayIAMOperations::COperation *v36; // rax
  struct CDelayIAMOperations::COperation *v37; // rbx
  struct CDelayIAMOperations::COperation *v38; // r15
  APTTYPEQUALIFIER v39; // eax
  __int64 v40; // rdx
  void *v41; // rbx
  int cchValue; // [rsp+20h] [rbp-E0h]
  APTTYPEQUALIFIER pAptQualifier[2]; // [rsp+50h] [rbp-B0h] BYREF
  APTTYPE pAptType; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+60h] [rbp-A0h] BYREF
  void (__fastcall ***v46)(_QWORD, GUID *, struct IImmersiveApplication **); // [rsp+68h] [rbp-98h] BYREF
  struct ISyncIAMEventHandler *v47; // [rsp+70h] [rbp-90h] BYREF
  struct IImmersiveApplication *v48; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v49; // [rsp+80h] [rbp-80h] BYREF
  struct IObjectArray *v50; // [rsp+88h] [rbp-78h]
  unsigned int v51; // [rsp+90h] [rbp-70h]
  char v52; // [rsp+94h] [rbp-6Ch]
  char v53; // [rsp+95h] [rbp-6Bh]
  unsigned int v54; // [rsp+98h] [rbp-68h]
  char v55; // [rsp+9Ch] [rbp-64h]
  HWND hWnd[2]; // [rsp+A0h] [rbp-60h]
  struct IObjectArray *v57; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v58; // [rsp+B8h] [rbp-48h]
  __int64 v59; // [rsp+C0h] [rbp-40h]
  __int64 v60; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v61; // [rsp+D0h] [rbp-30h]
  HRESULT v62; // [rsp+D8h] [rbp-28h]
  void **v63; // [rsp+E0h] [rbp-20h] BYREF
  int v64; // [rsp+E8h] [rbp-18h] BYREF
  char v65; // [rsp+ECh] [rbp-14h]
  int v66; // [rsp+110h] [rbp+10h] BYREF
  const char *v67; // [rsp+118h] [rbp+18h]
  __int64 v68; // [rsp+120h] [rbp+20h]
  char v69; // [rsp+128h] [rbp+28h]
  int v70; // [rsp+130h] [rbp+30h]
  char v71[152]; // [rsp+138h] [rbp+38h] BYREF
  __int128 v72; // [rsp+1D0h] [rbp+D0h]
  int v73; // [rsp+1E0h] [rbp+E0h]
  __int64 v74; // [rsp+1E8h] [rbp+E8h]
  int *v75; // [rsp+1F0h] [rbp+F0h]
  void *v76; // [rsp+1F8h] [rbp+F8h] BYREF
  _QWORD v77[3]; // [rsp+200h] [rbp+100h] BYREF
  int v78; // [rsp+218h] [rbp+118h]
  int *v79; // [rsp+220h] [rbp+120h]
  WCHAR Filename[264]; // [rsp+230h] [rbp+130h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+488h] [rbp+388h]

  v3 = (HWND)a3;
  v46 = (void (__fastcall ***)(_QWORD, GUID *, struct IImmersiveApplication **))a3;
  v6 = (CApplicationManager *)((char *)this - 160);
  v7 = ((unsigned __int64)this + 232) & -(__int64)(this != (CApplicationManager *)160);
  v45 = v7;
  v61 = v7;
  v8 = *(_DWORD *)(v7 + 0x2C);
  if ( v8 == 2 )
    goto LABEL_4;
  v9 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
    goto LABEL_3;
  if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
  {
    if ( FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1 )
    {
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
      goto LABEL_18;
    }
    v12 = 1;
    `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 1;
  }
  else
  {
    v12 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  }
  if ( v12 == 1 )
  {
    if ( v8 == 1 )
    {
      if ( (unsigned int)IsAppCompatModeEnabled(16LL) )
      {
        v9 = 2;
        `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
      }
      else
      {
        v9 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
      }
LABEL_3:
      if ( v9 != 1 )
        goto LABEL_18;
    }
LABEL_4:
    if ( *(_DWORD *)(v7 + 40) == -3 )
      goto LABEL_18;
    CurrentThreadId = 0;
    pAptType = APTTYPE_STA;
    pAptQualifier[0] = APTTYPEQUALIFIER_NONE;
    ApartmentType = CoGetApartmentType(&pAptType, pAptQualifier);
    if ( ApartmentType >= 0 )
    {
      switch ( pAptType )
      {
        case APTTYPE_STA:
          goto LABEL_10;
        case APTTYPE_MTA:
          goto LABEL_12;
        case APTTYPE_NA:
          CurrentThreadId = -1;
LABEL_12:
          if ( CurrentThreadId != *(_DWORD *)(v7 + 40) )
            ApartmentType = -2147417842;
LABEL_128:
          if ( ApartmentType < 0 )
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xC8,
              (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
              (const char *)(unsigned int)ApartmentType,
              cchValue);
            goto LABEL_19;
          }
          goto LABEL_18;
        case APTTYPE_MAINSTA:
LABEL_10:
          CurrentThreadId = GetCurrentThreadId();
          goto LABEL_12;
      }
    }
    if ( ApartmentType < 0 )
      goto LABEL_128;
    goto LABEL_12;
  }
LABEL_18:
  ApartmentType = !TryEnterCriticalSection((LPCRITICAL_SECTION)v7) ? 0x8001010E : 0;
LABEL_19:
  v62 = ApartmentType;
  v49 = a2;
  v50 = (struct IObjectArray *)v3;
  v51 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  *(_OWORD *)hWnd = 0LL;
  if ( a2 == 17
    || a2 == 18
    || a2 == 19
    || a2 == 20
    || a2 == 26
    || a2 == 29
    || a2 == 32
    || a2 == 34
    || (v52 = 1, a2 == 65533) )
  {
    v52 = 0;
  }
  v48 = 0LL;
  v64 = 0;
  v65 = 0;
  v69 = 0;
  v66 = 0;
  v67 = "OnShellHookMessage";
  v68 = 0LL;
  v70 = 0;
  v72 = 0LL;
  memset_0(v71, 0, sizeof(v71));
  v73 = 1;
  v74 = 0LL;
  v75 = &v64;
  v76 = 0LL;
  v77[0] = 0LL;
  v77[1] = &v63;
  v77[2] = 0LL;
  v78 = 0;
  v79 = &v66;
  v63 = &IamTraceLogging::OnShellHookMessage::`vftable';
  IamTraceLogging::OnShellHookMessage::StartActivity((IamTraceLogging::OnShellHookMessage *)&v63, a2, v3);
  if ( a2 - 65534 > 1
    && CApplicationManager::_AnalyzeShellNotification(v6, (struct CApplicationManager::HSHELL_DATA *)&v49) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v49 <= 0x19 )
    {
      if ( v49 != 25 )
      {
        if ( v49 == 17 )
        {
          CApplicationManager::_HandleWindowCreation(v6, (const struct CApplicationManager::HSHELL_DATA *const)&v49);
          goto LABEL_54;
        }
        if ( v49 == 18 )
        {
          v28 = *((_QWORD *)this + 47);
          v29 = *(unsigned __int8 (__fastcall **)(__int64, struct IObjectArray *))(*(_QWORD *)v28 + 72LL);
        }
        else
        {
          switch ( v49 )
          {
            case 0x13uLL:
              goto LABEL_90;
            case 0x14uLL:
              CApplicationManager::_HandleMonitorChanged(v6, (const struct CApplicationManager::HSHELL_DATA *const)&v49);
              goto LABEL_54;
            case 0x15uLL:
              if ( v51 - 2 > 1 )
                goto LABEL_41;
              CApplicationManager::_HandleImmersiveOwnedWindowVisibilityChange(
                v6,
                (const struct CApplicationManager::HSHELL_DATA *const)&v49,
                v3);
              goto LABEL_54;
          }
          if ( v49 != 22 )
          {
            if ( v49 != 23 )
            {
              if ( v49 == 24 )
              {
LABEL_41:
                v13 = v50;
                v14 = (HWND)v50;
                if ( hWnd[1] )
                  v14 = hWnd[1];
                v15 = v54;
                v16 = v49 == 21;
                *(_QWORD *)pAptQualifier = 0LL;
                if ( GetShellWindow() != v14
                  && !(unsigned int)GetPropW(v14, L"MultimonitorActivationException")
                  && (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 94) + 24LL))(*((_QWORD *)v6 + 94)) != v14 )
                {
                  (*(void (__fastcall **)(_QWORD, HWND, GUID *, GUID *, APTTYPEQUALIFIER *))(**((_QWORD **)v6 + 70)
                                                                                           + 88LL))(
                    *((_QWORD *)v6 + 70),
                    v14,
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                    pAptQualifier);
                }
                v17 = (__int64 *)*((_QWORD *)v6 + 67);
                v18 = *v17;
                if ( v16 )
                {
                  v19 = (*(__int64 (__fastcall **)(__int64 *, struct IObjectArray *, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))(v18 + 24))(
                          v17,
                          v13,
                          v15,
                          0LL,
                          *(_QWORD *)pAptQualifier,
                          0,
                          0,
                          0LL);
                  v20 = 3;
                }
                else
                {
                  v19 = (*(__int64 (__fastcall **)(__int64 *, struct IObjectArray *, _QWORD))(v18 + 32))(
                          v17,
                          v13,
                          *(_QWORD *)pAptQualifier);
                  v20 = 2;
                }
                if ( v19 )
                {
                  v21 = *(struct IImmersiveMonitor **)pAptQualifier;
                  if ( !*(_QWORD *)pAptQualifier )
                    goto LABEL_51;
                  pAptType = APTTYPE_STA;
                  (*(void (__fastcall **)(_QWORD, APTTYPE *))(**((_QWORD **)v6 + 70) + 32LL))(
                    *((_QWORD *)v6 + 70),
                    &pAptType);
                  if ( (unsigned int)pAptType > APTTYPE_MTA
                    && (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 66) + 56LL))(*((_QWORD *)v6 + 66)) == 1
                    && (*(unsigned __int8 (__fastcall **)(_QWORD, struct IObjectArray *))(**((_QWORD **)v6 + 67) + 88LL))(
                         *((_QWORD *)v6 + 67),
                         v13) )
                  {
                    v57 = 0LL;
                    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v57);
                    if ( (int)CApplicationManager::_GetSingleMonitorObjectArray(v6, v21, &v57) >= 0 )
                    {
                      v47 = 0LL;
                      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v47);
                      if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(v6, &v47) >= 0 )
                        (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, unsigned __int64, _QWORD, int, int, int))(*(_QWORD *)v47 + 24LL))(
                          v47,
                          v57,
                          ((unsigned __int64)v6 + 248) & -(__int64)(v6 != 0LL),
                          0LL,
                          1,
                          v20,
                          0xFFFF);
                      v31 = v47;
                      if ( v47 )
                      {
                        v47 = 0LL;
                        (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v31 + 16LL))(v31);
                      }
                    }
                    v32 = v57;
                    if ( v57 )
                    {
                      v57 = 0LL;
                      ((void (__fastcall *)(struct IObjectArray *))v32->lpVtbl->Release)(v32);
                    }
                  }
                }
                v21 = *(struct IImmersiveMonitor **)pAptQualifier;
LABEL_51:
                if ( v21 )
                {
                  *(_QWORD *)pAptQualifier = 0LL;
                  (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v21 + 16LL))(v21);
                }
                v7 = v45;
                LODWORD(v3) = (_DWORD)v46;
              }
LABEL_54:
              ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
              goto LABEL_55;
            }
LABEL_90:
            v45 = 0LL;
            if ( v51 == 2 )
            {
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v45);
              v57 = v50;
              LODWORD(v58) = 2;
              if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(v6, &v57, &v45, &v46) >= 0 )
                CApplicationManager::_UpdatePerApplicationDataIfNeeded(v6, v45, v50, 0LL);
            }
            (*(void (__fastcall **)(_QWORD, struct IObjectArray *, _QWORD, __int64))(**((_QWORD **)v6 + 68) + 24LL))(
              *((_QWORD *)v6 + 68),
              v50,
              v51,
              v45);
            CApplicationManager::_HandleActivation2(v6, &v49, 1LL);
            v33 = v45;
            if ( v45 )
            {
              v45 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
            }
            goto LABEL_54;
          }
          v28 = *((_QWORD *)this + 47);
          v29 = *(unsigned __int8 (__fastcall **)(__int64, struct IObjectArray *))(*(_QWORD *)v28 + 64LL);
        }
        v30 = v50;
        if ( !v29(v28, v50) )
          (*(void (__fastcall **)(_QWORD, struct IObjectArray *))(**((_QWORD **)this + 54) + 32LL))(
            *((_QWORD *)this + 54),
            v30);
        goto LABEL_54;
      }
LABEL_121:
      CApplicationManager::_HandleWindowBecameOwned(v6, v3, (const struct CApplicationManager::HSHELL_DATA *const)&v49);
      goto LABEL_54;
    }
    if ( v49 != 26 )
    {
      if ( v49 != 27 )
      {
        if ( v49 == 28 )
          goto LABEL_121;
        if ( v49 == 29 )
          goto LABEL_111;
        if ( v49 != 30 )
        {
          if ( v49 == 32 )
          {
            v46 = 0LL;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v46);
            v57 = v50;
            LODWORD(v58) = 2;
            if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(v6, &v57, &v46, 0LL) >= 0 )
            {
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v48);
              (**v46)(v46, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v48);
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v46);
          }
          else if ( v49 == 34 && v51 == 2 )
          {
            CApplicationManager::_HandleApplicationRequestActivation(
              v6,
              (const struct CApplicationManager::HSHELL_DATA *const)&v49);
          }
          goto LABEL_54;
        }
      }
      CApplicationManager::_HandleWindowChangedOwner(v6, (const struct CApplicationManager::HSHELL_DATA *const)&v49, v3);
      goto LABEL_54;
    }
LABEL_111:
    CApplicationManager::_HandleWindowBecameUnowned(v6, (const struct CApplicationManager::HSHELL_DATA *const)&v49);
    goto LABEL_54;
  }
LABEL_55:
  if ( v49 == 32 )
  {
    CApplicationManager::_HandleCloseRequested(v6, (const struct CApplicationManager::HSHELL_DATA *)&v49, v48);
  }
  else if ( v49 == 65534 || v49 == 0xFFFF )
  {
    if ( v49 == 0xFFFF )
    {
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v36 = CDelayIAMOperations::RemoveOperation(*((CDelayIAMOperations **)this + 80), (unsigned int)v3);
      v37 = v36;
      if ( v36 )
      {
        (*(void (__fastcall **)(struct CDelayIAMOperations::COperation *))(*(_QWORD *)v36 + 8LL))(v36);
        (**(void (__fastcall ***)(struct CDelayIAMOperations::COperation *, __int64))v37)(v37, 1LL);
      }
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    }
    else
    {
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v35 = CDelayIAMOperations::RemoveOperation(*((CDelayIAMOperations **)this + 80), (unsigned int)v3);
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      if ( v35 )
      {
        (*(void (__fastcall **)(struct CDelayIAMOperations::COperation *))(*(_QWORD *)v35 + 8LL))(v35);
        (**(void (__fastcall ***)(struct CDelayIAMOperations::COperation *, __int64))v35)(v35, 1LL);
      }
    }
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v22 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v23 = *((_QWORD *)this + 102);
  if ( v23 )
  {
    v22 = (struct IObjectArray *)*((_QWORD *)this + 101);
    v57 = v22;
    v59 = *((_QWORD *)this + 103);
    v58 = v23;
    v60 = *((_QWORD *)this + 104);
    *((_QWORD *)this + 101) = 0LL;
    *((_QWORD *)this + 103) = 0LL;
    *((_QWORD *)this + 102) = 0LL;
    *((_QWORD *)this + 104) = 0LL;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  for ( i = 0LL; i < v23; ++i )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v38 = CDelayIAMOperations::RemoveOperation(*((CDelayIAMOperations **)this + 80), *((_DWORD *)&v22->lpVtbl + i));
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v38 )
    {
      (*(void (__fastcall **)(struct CDelayIAMOperations::COperation *))(*(_QWORD *)v38 + 8LL))(v38);
      (**(void (__fastcall ***)(struct CDelayIAMOperations::COperation *, __int64))v38)(v38, 1LL);
    }
  }
  if ( v22 )
    CoTaskMemFree(v22);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v63, 0LL);
  v63 = &IamTraceLogging::OnShellHookMessage::`vftable';
  v25 = 1;
  if ( !v76 )
    goto LABEL_64;
  v34 = (RTL_SRWLOCK *)((-(__int64)(v76 != 0LL) & ((unsigned __int64)v76 + 8)) + 256);
  AcquireSRWLockExclusive(v34);
  if ( !v76 || *(_DWORD *)v76 != 1 )
  {
    v25 = 0;
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((volatile signed __int32 **)&v76);
  }
  if ( v34 )
    ReleaseSRWLockExclusive(v34);
  if ( v25 )
  {
LABEL_64:
    if ( *v75 == 1 )
    {
      v39 = v75[22];
      pAptQualifier[0] = v39;
      v40 = 2147942974LL;
      if ( v39 < APTTYPEQUALIFIER_NONE )
        v40 = (unsigned int)v39;
      wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v75,
        v40,
        pAptQualifier);
      ((void (__fastcall *)(void ***))v63[1])(&v63);
    }
  }
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v77);
  if ( v76 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v76, 0xFFFFFFFF) == 1 )
    {
      v41 = v76;
      if ( v76 )
      {
        wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v76 + 8);
        operator delete(v41, (const struct std::nothrow_t *)0x110);
      }
    }
    v76 = 0LL;
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(&v64);
  v26 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v26 + 16LL))(v26);
  }
  CoTaskMemFree(hWnd[0]);
  if ( ApartmentType >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v7);
  return 0LL;
}
