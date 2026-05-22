/*
 * XREFs of ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800AD514
 * Callers:
 *     ?SetProcessIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z @ 0x180136CE0 (-SetProcessIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Interna.c)
 *     ?SetViewIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z @ 0x180136DC0 (-SetViewIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180016EE0 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ?GetHwnd@BamoWindowsMessageDeliveryProxy@@UEAA_KXZ @ 0x18002B9C0 (-GetHwnd@BamoWindowsMessageDeliveryProxy@@UEAA_KXZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002C510 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180031330 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Erase_bucket@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@_K@Z @ 0x180048290 (-_Erase_bucket@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_comp.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x180049F70 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z @ 0x18004A3C4 (-UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18004A64C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18004A690 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IUTargetingInfo@ForegroundManager@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18004A79C (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IUTargetingInfo@ForegroundManager@@V-$_Uhash_com.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18004AF44 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ??$GetAttachedObject@UIWindowsMessageDeliveryProxy@@VWindowsMessageDeliveryProxy@@@InputSite@@QEAA?AV?$ComPtr@VWindowsMessageDeliveryProxy@@@WRL@Microsoft@@XZ @ 0x18004E148 (--$GetAttachedObject@UIWindowsMessageDeliveryProxy@@VWindowsMessageDeliveryProxy@@@InputSite@@QE.c)
 *     ??$As@UIComponentSiteInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIComponentSiteInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005B0D8 (--$As@UIComponentSiteInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-.c)
 *     ??$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA?AV?$ComPtr@UIDelegateInformationProvider@@@WRL@Microsoft@@XZ @ 0x18005EFAC (--$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA-AV-$ComPtr@UIDelegateInform.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AreViewIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800ABB40 (-AreViewIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800AC274 (-GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800AC31C (-GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?HandleDelegationChangeNotification@ForegroundManager@@AEAAXII@Z @ 0x1800AC5C4 (-HandleDelegationChangeNotification@ForegroundManager@@AEAAXII@Z.c)
 *     ?IsDelegationSourceInForeground@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@IIIII@Z @ 0x1800AC804 (-IsDelegationSourceInForeground@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@III.c)
 *     ?IsProcessIDInSameCompositeAppAsView@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800AC860 (-IsProcessIDInSameCompositeAppAsView@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager.c)
 *     ?SetInputDelegation@ForegroundManagerServer@InputTraceLogging@@SAXII_KII@Z @ 0x1800AE100 (-SetInputDelegation@ForegroundManagerServer@InputTraceLogging@@SAXII_KII@Z.c)
 *     ?SetInputDelegationRejected@ForegroundManagerServer@InputTraceLogging@@SAXIII@Z @ 0x1800AE20C (-SetInputDelegationRejected@ForegroundManagerServer@InputTraceLogging@@SAXIII@Z.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@V?$allocator@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@PEAX@2@QEAU32@@Z @ 0x1800AE890 (-_Unchecked_erase@-$list@U-$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@V-$allocator@U-$pa.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_57240160@@@details@wil@@QEAA_NXZ @ 0x1800AE8CC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_57240160@@@details@wil@@QE.c)
 *     ?TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x1800AFC80 (-TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA-AV-$com_ptr_t@VActiv_ea_1800AFC80.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall ForegroundManager::SetInputDelegation(
        ForegroundManager *this,
        struct InputSite *a2,
        unsigned int a3,
        const char *a4,
        unsigned int a5)
{
  unsigned int v5; // r15d
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // r12
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rsi
  __int64 v17; // rbx
  unsigned __int64 WindowIdFromViewId; // rdi
  unsigned int ViewIdFromWindowId; // eax
  unsigned int v20; // r14d
  unsigned __int64 v21; // r8
  unsigned int v22; // edi
  unsigned int ThreadIdFromViewId; // eax
  unsigned int v24; // edx
  __int64 v25; // rcx
  DWORD v26; // eax
  __int64 v27; // rdi
  float *v28; // rdi
  __int64 v29; // rcx
  _QWORD *v30; // rdx
  struct InputSiteManager *InputSiteManager; // rax
  struct InputSite *v32; // rax
  const char *v33; // r9
  __int64 v34; // rcx
  const char *v35; // r9
  ForegroundManager *v36; // rcx
  __int64 v37; // rax
  int (__fastcall *v38)(__int64, unsigned int *); // rdi
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  char IsDelegationSourceInForeground; // di
  unsigned int v45; // edi
  unsigned int v46; // eax
  __int64 v47; // rdx
  bool v48; // zf
  __int64 *v49; // rcx
  ForegroundManager *v50; // rcx
  __int64 v51; // rax
  int (__fastcall *v52)(_QWORD, __int64 *); // rdi
  int v53; // eax
  int v54; // eax
  int v55; // eax
  bool v56; // di
  __int64 v57; // rsi
  int (__fastcall *v58)(__int64, __int128 *); // rdi
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  bool v64; // zf
  char IsProcessIDInSameCompositeAppAsView; // al
  struct InputSiteManager *v66; // rax
  unsigned __int64 v67; // r15
  struct InputSite *v68; // rdi
  const char *v69; // r9
  __int64 v70; // rcx
  const char *v71; // r9
  unsigned int v72; // [rsp+28h] [rbp-91h]
  unsigned int v73; // [rsp+28h] [rbp-91h]
  unsigned int v74; // [rsp+28h] [rbp-91h]
  unsigned int v75; // [rsp+4Ch] [rbp-6Dh] BYREF
  DWORD dwProcessId; // [rsp+50h] [rbp-69h] BYREF
  unsigned int v77; // [rsp+54h] [rbp-65h] BYREF
  bool v78; // [rsp+58h] [rbp-61h]
  unsigned int v79; // [rsp+5Ch] [rbp-5Dh]
  unsigned int WindowThreadProcessId; // [rsp+60h] [rbp-59h]
  unsigned int ProcessIdFromViewId; // [rsp+64h] [rbp-55h]
  unsigned int v82; // [rsp+68h] [rbp-51h] BYREF
  unsigned int v83[2]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v84[2]; // [rsp+78h] [rbp-41h] BYREF
  unsigned __int64 v85; // [rsp+88h] [rbp-31h]
  __int128 v86; // [rsp+90h] [rbp-29h] BYREF
  __int64 v87; // [rsp+A0h] [rbp-19h]
  unsigned __int64 v88; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v89; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v90; // [rsp+B8h] [rbp-1h] BYREF
  _QWORD *v91; // [rsp+C0h] [rbp+7h]
  _QWORD *v92; // [rsp+C8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+57h]
  struct InputSite *v94; // [rsp+120h] [rbp+67h] BYREF
  unsigned int v95; // [rsp+128h] [rbp+6Fh]

  v95 = a3;
  v94 = a2;
  v5 = (unsigned int)a4;
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x19F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
      a4);
  if ( !(_DWORD)a4 && !a3 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1A0,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
      a4);
  ViewHierarchy = ISMStatics::GetViewHierarchy();
  v11 = 0LL;
  v84[0] = 0LL;
  v12 = *((_QWORD *)a2 + 61);
  v13 = *((_QWORD *)a2 + 62);
  if ( v12 != v13 )
  {
    do
    {
      if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IComponentSiteInputObjectProxy>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v12 + 8),
                  v84) >= 0 )
        break;
      v12 += 16LL;
    }
    while ( v12 != v13 );
    v11 = v84[0];
  }
  v14 = v11 - 8;
  v15 = -v11;
  v16 = (_QWORD *)(v14 & -(__int64)(v15 != 0));
  v91 = v16;
  v92 = v16;
  if ( v16 )
    (*(void (__fastcall **)(__int64))*v16)(v14 & -(__int64)(v15 != 0));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v84);
  InputSite::GetAttachedObject<IWindowsMessageDeliveryProxy,WindowsMessageDeliveryProxy>((__int64)v94, &v90);
  v17 = v90;
  if ( v16 )
  {
    v79 = (*(__int64 (__fastcall **)(_QWORD *))(v16[1] + 24LL))(v16 + 1);
    WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy);
    v85 = WindowIdFromViewId;
    ViewIdFromWindowId = v79;
  }
  else
  {
    if ( !v90 )
    {
      InputTraceLogging::ForegroundManagerServer::SetInputDelegationRejected(a3, v5, a5);
      return;
    }
    WindowIdFromViewId = BamoWindowsMessageDeliveryProxy::GetHwnd((BamoWindowsMessageDeliveryProxy *)(v90 + 8));
    v85 = WindowIdFromViewId;
    ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, WindowIdFromViewId);
    v79 = ViewIdFromWindowId;
  }
  v20 = a5;
  v21 = WindowIdFromViewId;
  v22 = v95;
  InputTraceLogging::ForegroundManagerServer::SetInputDelegation(v95, v5, v21, ViewIdFromWindowId, a5);
  ProcessIdFromViewId = 0;
  WindowThreadProcessId = 0;
  ActivationWatcherBamoPrincipal::TryFindActivatableEntity(*((_QWORD *)this + 67), &v89, v85);
  if ( v89 )
  {
    ProcessIdFromViewId = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v89 + 8) + 72LL))(v89 + 8);
    ThreadIdFromViewId = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v89 + 8) + 88LL))(v89 + 8);
LABEL_26:
    WindowThreadProcessId = ThreadIdFromViewId;
    goto LABEL_27;
  }
  if ( !IsEdition(8778LL) )
  {
    v24 = v79;
    goto LABEL_25;
  }
  if ( v79 )
  {
    v24 = v79;
LABEL_25:
    ProcessIdFromViewId = ViewHelper::GetProcessIdFromViewId(ViewHierarchy, v24);
    ThreadIdFromViewId = ViewHelper::GetThreadIdFromViewId(ViewHierarchy, v79);
    goto LABEL_26;
  }
  if ( v85 )
  {
    dwProcessId = 0;
    WindowThreadProcessId = GetWindowThreadProcessId((HWND)(int)v85, &dwProcessId);
    ProcessIdFromViewId = dwProcessId;
  }
LABEL_27:
  v77 = *((_DWORD *)this + 56);
  v82 = *((_DWORD *)this + 57);
  v88 = *((_QWORD *)this + 27);
  v75 = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v88);
  if ( (v20 & 0x10) != 0 && (v20 & 0x40) == 0 )
  {
    v26 = v5;
    if ( !v5 )
      v26 = v22;
    dwProcessId = v26;
    v27 = 152LL;
    if ( !v5 )
      v27 = 88LL;
    v28 = (float *)((char *)this + v27);
    if ( (v20 & 0xE) == 0 || (v20 & 1) != 0 )
    {
      v84[0] = std::_Fnv1a_append_bytes(v25, (const unsigned __int8 *const)&dwProcessId, 4uLL);
      v30 = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
                        v28,
                        &v86,
                        &dwProcessId,
                        v84[0])[1];
      if ( v30 )
      {
        std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::_Erase_bucket(
          (__int64)v28,
          v30,
          v84[0] & *((_QWORD *)v28 + 6));
        std::list<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>::_Unchecked_erase(v28 + 2);
      }
    }
    else
    {
      *(_QWORD *)&v86 = v85;
      *((_QWORD *)&v86 + 1) = __PAIR64__(WindowThreadProcessId, ProcessIdFromViewId);
      v87 = v20;
      v29 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,ForegroundManager::TargetingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>,0>>::_Try_emplace<unsigned int const &,>(
                         v28,
                         (__int64)v84,
                         (unsigned __int8 *)&dwProcessId);
      *(_OWORD *)(v29 + 24) = v86;
      *(_QWORD *)(v29 + 40) = v87;
    }
    v22 = v95;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Bugfix_57240160>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Bugfix_57240160>::GetImpl'::`2'::impl) )
  {
    if ( v16 )
    {
      InputSiteManager = ISMStatics::GetInputSiteManager();
      v32 = *(struct InputSite **)InputSiteManager::GetInputSiteFromId((__int64)InputSiteManager, (__int64)v84, 1u, v85);
      v94 = v32;
      v34 = v84[0];
      if ( v84[0] )
      {
        v84[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        v32 = v94;
      }
      if ( !v32 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x214,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
          v33);
    }
    else
    {
      v32 = v94;
    }
    InputSite::GetAttachedObject<IDelegateInformationProvider>((__int64)v32, (__int64 *)&v86);
    if ( !(_QWORD)v86 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x217,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
        v35);
    if ( IsEdition(8778LL) )
    {
      if ( (v20 & 0xE) == 0 || (v20 & 1) != 0 )
      {
        v45 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v86 + 40LL))(v86);
        v46 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v86 + 48LL))(v86);
        ForegroundManager::HandleDelegationChangeNotification(this, v46, v45);
        goto LABEL_79;
      }
      LOBYTE(v94) = ForegroundManager::IsDelegationSourceInForeground(this, ViewHierarchy, v22, v5, v77, v75, v20);
      if ( !(_BYTE)v94 )
      {
        *(_QWORD *)v83 = 0LL;
        v37 = *((_QWORD *)this + 2);
        v84[0] = v37;
        if ( !v37 )
          goto LABEL_61;
        v38 = *(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v37 + 32LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v83);
        if ( v38(v84[0], v83) < 0 )
          goto LABEL_61;
        dwProcessId = 0;
        v39 = (*(__int64 (__fastcall **)(_QWORD, DWORD *))(**(_QWORD **)v83 + 80LL))(*(_QWORD *)v83, &dwProcessId);
        if ( v39 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x22C,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
            (const char *)(unsigned int)v39,
            v72);
        if ( (dwProcessId & 0xE) != 0 && (dwProcessId & 1) == 0 )
        {
          v40 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)v83 + 32LL))(*(_QWORD *)v83, &v77);
          if ( v40 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x22F,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
              (const char *)(unsigned int)v40,
              v72);
          v41 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)v83 + 40LL))(*(_QWORD *)v83, &v82);
          if ( v41 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x230,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
              (const char *)(unsigned int)v41,
              v72);
          v42 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**(_QWORD **)v83 + 64LL))(*(_QWORD *)v83, &v88);
          if ( v42 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x231,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
              (const char *)(unsigned int)v42,
              v72);
          v43 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)v83 + 48LL))(*(_QWORD *)v83, &v75);
          if ( v43 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x232,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
              (const char *)(unsigned int)v43,
              v72);
          IsDelegationSourceInForeground = ForegroundManager::IsDelegationSourceInForeground(
                                             this,
                                             ViewHierarchy,
                                             v95,
                                             v5,
                                             v77,
                                             v75,
                                             dwProcessId);
        }
        else
        {
LABEL_61:
          IsDelegationSourceInForeground = (char)v94;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v83);
        if ( !IsDelegationSourceInForeground )
          goto LABEL_79;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _QWORD, unsigned int, unsigned int))(*(_QWORD *)v86 + 72LL))(
        v86,
        v75,
        v88,
        v82,
        v77,
        v20);
    }
    else
    {
      v47 = v75;
      if ( v5 )
        v48 = v5 == v75;
      else
        v48 = v22 == v77;
      if ( !v48 && (v20 & 0x20) != 0 )
      {
        if ( v5 )
          ForegroundManager::AreViewIdsInSameCompositeApp(v36, ViewHierarchy, v75, v5);
        else
          ForegroundManager::IsProcessIDInSameCompositeAppAsView(this, ViewHierarchy, v75, v22);
        v47 = v75;
      }
      if ( (v20 & 0xE) == 0 || (v20 & 1) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)v86 + 64LL))(v86, 0LL, 0LL, 1LL);
        ForegroundManager::UpdateForegroundTarget(this, v88, v75, v77, v82, 0);
        goto LABEL_79;
      }
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v86 + 64LL))(v86, v47, v77, v20);
    }
    ForegroundManager::UpdateForegroundTarget(this, v85, v79, ProcessIdFromViewId, WindowThreadProcessId, 1);
LABEL_79:
    v49 = (__int64 *)&v86;
LABEL_131:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v49);
    goto LABEL_132;
  }
  v78 = 0;
  if ( IsEdition(8778LL) )
  {
    if ( ForegroundManager::IsDelegationSourceInForeground(this, ViewHierarchy, v22, v5, v77, v75, v20) )
    {
LABEL_117:
      if ( v16 )
      {
        v66 = ISMStatics::GetInputSiteManager();
        v67 = v85;
        v68 = *(struct InputSite **)InputSiteManager::GetInputSiteFromId((__int64)v66, (__int64)v84, 1u, v85);
        v70 = v84[0];
        if ( v84[0] )
        {
          v84[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
        }
        if ( !v68 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x2B2,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
            v69);
      }
      else
      {
        v68 = v94;
        v67 = v85;
      }
      InputSite::GetAttachedObject<IDelegateInformationProvider>((__int64)v68, (__int64 *)&v94);
      if ( !v94 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x2B6,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
          v71);
      if ( (v20 & 0xE) == 0 || (v20 & 1) != 0 )
      {
        if ( !IsEdition(8778LL) )
          (*(void (__fastcall **)(struct InputSite *, _QWORD, _QWORD, __int64))(*(_QWORD *)v94 + 64LL))(
            v94,
            0LL,
            0LL,
            1LL);
        ForegroundManager::UpdateForegroundTarget(this, v88, v75, v77, v82, v78);
      }
      else
      {
        (*(void (__fastcall **)(struct InputSite *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v94 + 64LL))(v94, v75, v77, v20);
        ForegroundManager::UpdateForegroundTarget(this, v67, v79, ProcessIdFromViewId, WindowThreadProcessId, 1);
      }
      v49 = (__int64 *)&v94;
      goto LABEL_131;
    }
    if ( (v20 & 0x40) == 0 && (v20 & 0xE) != 0 && (v20 & 1) == 0 )
      goto LABEL_132;
    v84[0] = 0LL;
    v51 = *((_QWORD *)this + 2);
    *(_QWORD *)&v86 = v51;
    if ( !v51 )
      goto LABEL_105;
    v52 = *(int (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v51 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v84);
    if ( v52(v86, v84) < 0 )
      goto LABEL_105;
    dwProcessId = 0;
    v53 = (*(__int64 (__fastcall **)(__int64, DWORD *))(*(_QWORD *)v84[0] + 80LL))(v84[0], &dwProcessId);
    if ( v53 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x276,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
        (const char *)(unsigned int)v53,
        v73);
    if ( (dwProcessId & 0xE) != 0 && (dwProcessId & 1) == 0 )
    {
      if ( (v20 & 0xE) == 0 || (v20 & 1) != 0 )
      {
        *(_QWORD *)&v86 = 0LL;
        v57 = *((_QWORD *)this + 2);
        v58 = *(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v57 + 40LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v86);
        if ( v58(v57, &v86) < 0 )
        {
          v56 = 0;
        }
        else
        {
          v83[0] = 0;
          v59 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v86 + 80LL))(v86, v83);
          if ( v59 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x286,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
              (const char *)(unsigned int)v59,
              v73);
          v60 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v86 + 32LL))(v86, &v77);
          if ( v60 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x287,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
              (const char *)(unsigned int)v60,
              v73);
          v61 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v86 + 48LL))(v86, &v75);
          if ( v61 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x288,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
              (const char *)(unsigned int)v61,
              v73);
          v56 = ForegroundManager::IsDelegationSourceInForeground(this, ViewHierarchy, v95, v5, v77, v75, v83[0]);
          if ( v56 )
          {
            v62 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v86 + 40LL))(v86, &v82);
            if ( v62 < 0 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x28F,
                (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
                (const char *)(unsigned int)v62,
                v74);
            v63 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(*(_QWORD *)v86 + 64LL))(v86, &v88);
            if ( v63 < 0 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x290,
                (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
                (const char *)(unsigned int)v63,
                v74);
            v78 = 1;
          }
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v86);
        v16 = v91;
      }
      else
      {
        v54 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v84[0] + 32LL))(v84[0], &v77);
        if ( v54 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x27B,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
            (const char *)(unsigned int)v54,
            v73);
        v55 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v84[0] + 48LL))(v84[0], &v75);
        if ( v55 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x27C,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
            (const char *)(unsigned int)v55,
            v73);
        v56 = ForegroundManager::IsDelegationSourceInForeground(this, ViewHierarchy, v95, v5, v77, v75, dwProcessId);
      }
    }
    else
    {
LABEL_105:
      v56 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v84);
  }
  else
  {
    if ( v5 )
      v64 = v5 == v75;
    else
      v64 = v22 == v77;
    if ( v64 )
      goto LABEL_117;
    if ( (v20 & 0x20) == 0 )
      goto LABEL_132;
    if ( v5 )
      IsProcessIDInSameCompositeAppAsView = ForegroundManager::AreViewIdsInSameCompositeApp(v50, ViewHierarchy, v75, v5);
    else
      IsProcessIDInSameCompositeAppAsView = ForegroundManager::IsProcessIDInSameCompositeAppAsView(
                                              this,
                                              ViewHierarchy,
                                              v75,
                                              v22);
    v56 = IsProcessIDInSameCompositeAppAsView;
  }
  if ( v56 )
    goto LABEL_117;
LABEL_132:
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v89);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v17 + 16) + 8LL))(v17 + 16);
  if ( v16 )
    (*(void (__fastcall **)(_QWORD *))(*v16 + 8LL))(v16);
}
