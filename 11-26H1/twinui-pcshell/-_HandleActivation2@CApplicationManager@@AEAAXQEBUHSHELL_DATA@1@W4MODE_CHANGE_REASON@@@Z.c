/*
 * XREFs of ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18004A620
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x1800425B0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18004A548 (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x18012AC64 (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1801E6860 (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x1801EA5AC (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800464B8 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z @ 0x180049DB8 (-_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_b503fe08d4c0fbc06a8f8acb1e7e9643__const_&_ @ 0x18004B030 (CIAMGlobals--QueueViewManagementTask__lambda_b503fe08d4c0fbc06a8f8acb1e7e9643__const_-_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x1800A7D14 (-PositionNewActiveApp@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WR.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1800CA0DC (-RemoveAll@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipCo.c)
 *     ??$_Add@$$QEAV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@PEA_K@Z @ 0x18012AAF4 (--$_Add@$$QEAV-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPtr@UIImmersiv.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18012B5A8 (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x18012B720 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1801562F8 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ?_ShouldKeepImmersiveRealmStatusQuo@CApplicationManager@@AEBA_NPEAUHWND__@@@Z @ 0x18015EEF0 (-_ShouldKeepImmersiveRealmStatusQuo@CApplicationManager@@AEBA_NPEAUHWND__@@@Z.c)
 *     ?_IsMultimon@CApplicationManager@@AEBA_NXZ @ 0x1801A1A34 (-_IsMultimon@CApplicationManager@@AEBA_NXZ.c)
 *     ?_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1801A66D8 (-_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18027E234 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4Report.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=20
void __fastcall CApplicationManager::_HandleActivation2(__int64 a1, struct ISyncIAMEventHandler *a2, int a3)
{
  struct ISyncIAMEventHandler *v3; // r15
  __int64 v5; // rdi
  DWORD CurrentThreadId; // ebx
  HRESULT ApartmentType; // r14d
  __int64 v8; // rdx
  HWND v9; // r12
  bool v10; // r13
  __int64 v11; // rdi
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r9
  IUnknown *v15; // rbx
  __int64 v16; // rcx
  __int64 *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  bool v20; // r13
  __int64 v21; // rcx
  __int64 v22; // rdi
  void *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  struct IObjectArray *v28; // rcx
  IUnknown *v29; // rcx
  void *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  IUnknown *v33; // rbx
  ULONG (__stdcall *AddRef)(IUnknown *); // rdi
  char v35; // di
  const struct _GUID *v36; // rdx
  __int64 v37; // rcx
  int SingleMonitorObjectArray; // ebx
  unsigned __int64 v39; // rbx
  void *v40; // rcx
  struct ISyncIAMEventHandler *v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdi
  int (__fastcall *v44)(__int64, HWND, GUID *, GUID *, __int64 *); // rbx
  __int64 v45; // rcx
  HWND v46; // rdx
  IUnknown *punk; // [rsp+40h] [rbp-59h] BYREF
  void *ppv; // [rsp+48h] [rbp-51h] BYREF
  void *v49; // [rsp+50h] [rbp-49h] BYREF
  struct IObjectArray *v50; // [rsp+58h] [rbp-41h] BYREF
  void *v51; // [rsp+60h] [rbp-39h] BYREF
  __int64 v52; // [rsp+68h] [rbp-31h]
  int v53; // [rsp+70h] [rbp-29h]
  __int64 v54; // [rsp+78h] [rbp-21h] BYREF
  unsigned __int64 v55; // [rsp+80h] [rbp-19h]
  __int64 v56; // [rsp+88h] [rbp-11h]
  __int64 v57; // [rsp+90h] [rbp-9h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+98h] [rbp-1h]
  __int64 v59; // [rsp+A0h] [rbp+7h]
  HRESULT v60; // [rsp+A8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  __int64 pAptType; // [rsp+100h] [rbp+67h] BYREF
  struct ISyncIAMEventHandler *v63; // [rsp+108h] [rbp+6Fh] BYREF
  int v64; // [rsp+110h] [rbp+77h] BYREF
  __int64 pAptQualifier; // [rsp+118h] [rbp+7Fh] BYREF

  v64 = a3;
  v63 = a2;
  v3 = a2;
  v5 = (a1 + 392) & -(__int64)(a1 != 0);
  lpCriticalSection = (LPCRITICAL_SECTION)v5;
  v59 = v5;
  CurrentThreadId = 0;
  if ( !_ShouldCheckApartments(*(_DWORD *)(v5 + 0x2C)) || *(_DWORD *)(v5 + 40) == -3 )
    goto LABEL_14;
  LODWORD(pAptType) = 0;
  LODWORD(pAptQualifier) = 0;
  ApartmentType = CoGetApartmentType((APTTYPE *)&pAptType, (APTTYPEQUALIFIER *)&pAptQualifier);
  if ( ApartmentType < 0 )
    goto LABEL_9;
  if ( !(_DWORD)pAptType )
  {
LABEL_8:
    CurrentThreadId = GetCurrentThreadId();
    goto LABEL_10;
  }
  if ( (_DWORD)pAptType == 1 )
    goto LABEL_10;
  if ( (_DWORD)pAptType != 2 )
  {
    if ( (_DWORD)pAptType == 3 )
      goto LABEL_8;
LABEL_9:
    if ( ApartmentType < 0 )
      goto LABEL_12;
    goto LABEL_10;
  }
  CurrentThreadId = -1;
LABEL_10:
  if ( CurrentThreadId != *(_DWORD *)(v5 + 40) )
    ApartmentType = -2147417842;
LABEL_12:
  CurrentThreadId = 0;
  if ( ApartmentType < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC8,
      (int)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
      (const char *)(unsigned int)ApartmentType);
    goto LABEL_15;
  }
LABEL_14:
  ApartmentType = !TryEnterCriticalSection((LPCRITICAL_SECTION)v5) ? 0x8001010E : 0;
LABEL_15:
  v60 = ApartmentType;
  v9 = (HWND)*((_QWORD *)v3 + 1);
  v10 = 1;
  if ( *((_DWORD *)v3 + 4) == 1 )
  {
    pAptType = 0LL;
    if ( !*((_BYTE *)v3 + 20) && !*((_BYTE *)v3 + 21) )
    {
      LOBYTE(v8) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl,
        v8);
      CurrentThreadId = 2 * !CApplicationManager::_ShouldKeepImmersiveRealmStatusQuo((CApplicationManager *)a1, v9) + 1;
    }
    LOBYTE(v8) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl,
      v8);
    v31 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 752) + 24LL))(*(_QWORD *)(a1 + 752));
    if ( v9 != (HWND)1
      && v9 != (HWND)v31
      && (*(int (__fastcall **)(_QWORD, HWND, _QWORD))(**(_QWORD **)(a1 + 536) + 56LL))(
           *(_QWORD *)(a1 + 536),
           v9,
           CurrentThreadId) >= 0
      && CApplicationManager::_IsMultimon((CApplicationManager *)a1)
      && *((_DWORD *)v3 + 6) == 1 )
    {
      v10 = !CApplicationManager::_ShouldKeepImmersiveRealmStatusQuo((CApplicationManager *)a1, v9);
    }
    v32 = pAptType;
    if ( pAptType )
    {
      pAptType = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
  }
  ppv = 0LL;
  punk = 0LL;
  v11 = 0LL;
  pAptType = 0LL;
  if ( *((_DWORD *)v3 + 4) == 2 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
    v51 = v9;
    LODWORD(v52) = 2;
    if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(a1, &v51, &punk, &pAptType) < 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
      CApplicationManager::_IWMFromWindow(
        (CApplicationManager *)a1,
        v46,
        &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
        &ppv);
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
      IUnknown_GetSite(punk, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &ppv);
    }
    v11 = pAptType;
  }
  v12 = *(__int64 **)(a1 + 592);
  v13 = *v12;
  if ( *((_DWORD *)v3 + 4) == 3 )
    (*(void (__fastcall **)(__int64 *, _QWORD))(v13 + 40))(v12, *((_QWORD *)v3 + 1));
  else
    (*(void (**)(void))(v13 + 48))();
  v15 = punk;
  *(_QWORD *)(a1 + 488) = v9;
  *(_DWORD *)(a1 + 504) = v64;
  if ( v15 && *(IUnknown **)(a1 + 512) != v15 )
  {
    ((void (__fastcall *)(IUnknown *))v15->lpVtbl->AddRef)(v15);
    v16 = *(_QWORD *)(a1 + 512);
    *(_QWORD *)(a1 + 512) = v15;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v15 = punk;
  }
  if ( *((_DWORD *)v3 + 4) != 2 || v15 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 528) + 40LL))(
      *(_QWORD *)(a1 + 528),
      *((unsigned int *)v3 + 6));
    LOBYTE(v42) = v10;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 528) + 88LL))(
      *(_QWORD *)(a1 + 528),
      *((unsigned int *)v3 + 6),
      v42);
  }
  LOBYTE(v14) = *((_BYTE *)v3 + 28);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 520) + 24LL))(
    *(_QWORD *)(a1 + 520),
    *((unsigned int *)v3 + 6),
    *((unsigned int *)v3 + 4),
    v14);
  v17 = (__int64 *)ppv;
  if ( ppv && punk )
  {
    if ( (*(int (__fastcall **)(void *, IUnknown *, HWND, _QWORD, int, _QWORD))(*(_QWORD *)ppv + 48LL))(
           ppv,
           punk,
           v9,
           0LL,
           2,
           0LL) >= 0
      && v11 )
    {
      CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::PositionNewActiveApp(
        a1 + 624,
        &punk,
        v11);
    }
    v17 = (__int64 *)ppv;
  }
  if ( *((_DWORD *)v3 + 4) == 2 )
  {
    if ( punk )
      goto LABEL_32;
    v18 = *v17;
    v19 = 0LL;
    goto LABEL_31;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, void **))(**(_QWORD **)(a1 + 576) + 32LL))(
         *(_QWORD *)(a1 + 576),
         0LL,
         &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
         &ppv) >= 0 )
  {
    v17 = (__int64 *)ppv;
    v18 = *(_QWORD *)ppv;
    v19 = 0LL;
    if ( v10 )
      v19 = *((unsigned int *)v3 + 6);
LABEL_31:
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v18 + 40))(v17, 4LL, v19);
  }
LABEL_32:
  v50 = 0LL;
  v49 = 0LL;
  v53 = 0xFFFF;
  v20 = 1;
  if ( GetShellWindow() != v9
    && !(unsigned int)GetPropW(v9, L"MultimonitorActivationException")
    && (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 752) + 24LL))(*(_QWORD *)(a1 + 752)) != v9 )
  {
    v54 = 0LL;
    v55 = 0LL;
    v56 = 0LL;
    v57 = 0LL;
    if ( punk )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v49);
      ((void (__fastcall *)(IUnknown *, GUID *, void **))punk->lpVtbl->QueryInterface)(
        punk,
        &GUID_8b14e88b_5663_4caf_b196_c31479262831,
        &v49);
      pAptType = 0LL;
      v33 = punk;
      AddRef = punk->lpVtbl[19].AddRef;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&pAptType);
      ((void (__fastcall *)(IUnknown *, __int64 *))AddRef)(v33, &pAptType);
      pAptQualifier = pAptType;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&pAptQualifier);
      CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::_Add<Microsoft::WRL::ComPtr<IImmersiveMonitor> &&>(
        &v54,
        &pAptQualifier);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&pAptQualifier);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&pAptType);
    }
    else if ( *((_DWORD *)v3 + 4) == 1 )
    {
      (*(void (__fastcall **)(_QWORD, HWND, __int64 *))(**(_QWORD **)(a1 + 536) + 48LL))(
        *(_QWORD *)(a1 + 536),
        v9,
        &v54);
    }
    else
    {
      if ( *((_DWORD *)v3 + 4) == 2 )
      {
        v20 = 0;
LABEL_84:
        CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll(&v54);
        goto LABEL_36;
      }
      if ( *((_DWORD *)v3 + 6) != 1 && *((_DWORD *)v3 + 6) != 8 )
      {
        pAptType = 0LL;
        v43 = *(_QWORD *)(a1 + 560);
        v44 = *(int (__fastcall **)(__int64, HWND, GUID *, GUID *, __int64 *))(*(_QWORD *)v43 + 88LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&pAptType);
        if ( v44(
               v43,
               v9,
               &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
               &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
               &pAptType) >= 0 )
        {
          pAptQualifier = pAptType;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&pAptQualifier);
          CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::_Add<Microsoft::WRL::ComPtr<IImmersiveMonitor> &&>(
            &v54,
            &pAptQualifier);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&pAptQualifier);
        }
        v53 = 0xFFFF
            - ((*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 568) + 64LL))(
                 *(_QWORD *)(a1 + 568),
                 v9) != 0);
        v45 = pAptType;
        if ( pAptType )
        {
          pAptType = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
        }
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v50);
    v35 = 0;
    v50 = 0LL;
    v51 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v51);
    SingleMonitorObjectArray = CEnumerableObjectCollection::CreateInstance(v37, v36, &v51);
    if ( SingleMonitorObjectArray >= 0 )
    {
      v39 = 0LL;
      if ( v55 )
      {
        do
        {
          LODWORD(pAptType) = 0;
          (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v54 + 8 * v39) + 48LL))(
            *(_QWORD *)(v54 + 8 * v39),
            &pAptType);
          if ( (_DWORD)pAptType )
            (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v51 + 40LL))(v51, *(_QWORD *)(v54 + 8 * v39));
          ++v39;
        }
        while ( v39 < v55 );
        v3 = v63;
      }
      LODWORD(pAptQualifier) = 0;
      (*(void (__fastcall **)(void *, __int64 *))(*(_QWORD *)v51 + 24LL))(v51, &pAptQualifier);
      if ( (_DWORD)pAptQualifier )
      {
        SingleMonitorObjectArray = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v51)(
                                     v51,
                                     &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                                     &v50);
      }
      else
      {
        v35 = 1;
        SingleMonitorObjectArray = CApplicationManager::_GetSingleMonitorObjectArray(
                                     (CApplicationManager *)a1,
                                     0LL,
                                     &v50);
      }
    }
    v40 = v51;
    if ( v51 )
    {
      v51 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v40 + 16LL))(v40);
    }
    if ( SingleMonitorObjectArray < 0 )
    {
      v20 = 0;
    }
    else if ( v35 && punk )
    {
      v64 = 8;
    }
    goto LABEL_84;
  }
  v20 = v9 != (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 752) + 24LL))(*(_QWORD *)(a1 + 752));
LABEL_36:
  v22 = (__int64)v9;
  v23 = v49;
  if ( !v49 && v9 )
  {
    v22 = (*(__int64 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 536) + 112LL))(*(_QWORD *)(a1 + 536), v9);
    v23 = v49;
  }
  v51 = v23;
  if ( v23 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v23 + 8LL))(v23);
  v52 = v22;
  CIAMGlobals::QueueViewManagementTask__lambda_b503fe08d4c0fbc06a8f8acb1e7e9643__const___(v21, &v51);
  if ( v20 )
  {
    v63 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v63);
    if ( (int)CApplicationManager::_GetGlobalSyncEventHandler((CApplicationManager *)a1, &v63) >= 0 )
      (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, __int64, void *, _DWORD, int, int))(*(_QWORD *)v63 + 24LL))(
        v63,
        v50,
        (a1 + 248) & -(__int64)(a1 != 0),
        v49,
        *((_DWORD *)v3 + 6),
        v64,
        v53);
    v41 = v63;
    if ( v63 )
    {
      v63 = 0LL;
      (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v41 + 16LL))(v41);
    }
  }
  if ( *(_BYTE *)(a1 + 480) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 48LL))(*(_QWORD *)(a1 + 552));
  v24 = *(_QWORD *)(a1 + 512);
  if ( v24 )
  {
    *(_QWORD *)(a1 + 512) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  *(_DWORD *)(a1 + 504) = 0;
  v25 = *(_QWORD *)(a1 + 488);
  if ( v25 != 1 )
    *(_QWORD *)(a1 + 496) = v25;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_BYTE *)(a1 + 480) = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 528) + 48LL))(
    *(_QWORD *)(a1 + 528),
    *((unsigned int *)v3 + 6));
  *(_QWORD *)(a1 + 768) = v9;
  v64 = 0;
  v26 = RtlPublishWnfStateData(WNF_SHEL_WINDOW_ACTIVATED, 0LL, &v64, 4LL) | 0x10000000;
  if ( v26 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x361,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)(unsigned int)v26,
      0);
  if ( v23 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v23 + 16LL))(v23);
  v27 = (__int64)v49;
  if ( v49 )
  {
    v49 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  v28 = v50;
  if ( v50 )
  {
    v50 = 0LL;
    ((void (__fastcall *)(struct IObjectArray *))v28->lpVtbl->Release)(v28);
  }
  v29 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v29->lpVtbl->Release)(v29);
  }
  v30 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v30 + 16LL))(v30);
  }
  if ( ApartmentType >= 0 )
    LeaveCriticalSection(lpCriticalSection);
}
