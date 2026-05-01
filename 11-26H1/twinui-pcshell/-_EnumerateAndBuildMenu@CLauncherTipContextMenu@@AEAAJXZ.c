/*
 * XREFs of ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1800AB350
 * Callers:
 *     ?_HandleBackgroundEnumeration@CLauncherTipContextMenu@@AEAAX_N_J@Z @ 0x180212B0C (-_HandleBackgroundEnumeration@CLauncherTipContextMenu@@AEAAX_N_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180042238 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005FE30 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$LauncherTipContextMenuDefaultConsole@_N@LauncherTipContextMenuTelemetry@@SAX$$QEA_N@Z @ 0x1800AB2F4 (--$LauncherTipContextMenuDefaultConsole@_N@LauncherTipContextMenuTelemetry@@SAX$$QEA_N@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800ABCDC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShe.c)
 *     ?ShouldPowershellReplaceCmd@@YA_NXZ @ 0x1800ABD64 (-ShouldPowershellReplaceCmd@@YA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$CreateRefCountedObj@ULauncherTipMenuCommand@CLauncherTipContextMenu@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@XZ @ 0x18018A9DC (--$CreateRefCountedObj@ULauncherTipMenuCommand@CLauncherTipContextMenu@@$$V@@YA-AV-$ComPtr@V-$CR.c)
 *     ?_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z @ 0x1801924DC (-_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z.c)
 *     ?Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z @ 0x18019265C (-Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@IG@Z @ 0x1801DEDF4 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHI.c)
 *     ??$_Emplace_reallocate@AEBULTCMITEM@CLauncherTipContextMenu@@@?$vector@ULTCMITEM@CLauncherTipContextMenu@@V?$allocator@ULTCMITEM@CLauncherTipContextMenu@@@std@@@std@@AEAAPEAULTCMITEM@CLauncherTipContextMenu@@QEAU23@AEBU23@@Z @ 0x18027B2C4 (--$_Emplace_reallocate@AEBULTCMITEM@CLauncherTipContextMenu@@@-$vector@ULTCMITEM@CLauncherTipCon.c)
 *     ??$_Emplace_reallocate@I@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAI$$QEAI@Z @ 0x18027B42C (--$_Emplace_reallocate@I@-$vector@IV-$allocator@I@std@@@std@@AEAAPEAIQEAI$$QEAI@Z.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18027EEF4 (-complete_without_lock@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@1@XZ @ 0x180280350 (--C-$tip_test@V-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$te.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180281418 (-ensure_data@-$tip_test@V-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@tip2@@A.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028262C (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x180283040 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180283B80 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180283BF8 (--1-$com_ptr_t@V-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@Uerr_returncode_p.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180284E54 (--1-$test_data_control@V-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@tip2@@QE.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1CShallowContainerIterator@@QEAA@XZ @ 0x1802B7508 (--1CShallowContainerIterator@@QEAA@XZ.c)
 *     ??0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z @ 0x1802BEA88 (--0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     swprintf_s @ 0x1802CA064 (swprintf_s.c)
 *     ??$_Assign_counted_range@PEAK@?$vector@KV?$allocator@K@std@@@std@@AEAAXPEAK_K@Z @ 0x1805FF310 (--$_Assign_counted_range@PEAK@-$vector@KV-$allocator@K@std@@@std@@AEAAXPEAK_K@Z.c)
 *     ??$_InsertAt@AEBV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@_K@Z @ 0x1805FF5B0 (--$_InsertAt@AEBV-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@.c)
 *     std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_CLauncherTipContextMenu::LTCMITEM______std::back_insert_iterator_std::vector_unsigned_long_std::allocator_unsigned_long_______lambda_d78cea801e174b4d7e0aca6d1c25d446___ @ 0x180600274 (std--transform_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_CLauncherTipContextMenu.c)
 *     ?AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806012D0 (-AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?Release@?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@AEAAKXZ @ 0x180602FA8 (-Release@-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@AEAAKXZ.c)
 *     ?_AddSeparator@CLauncherTipContextMenu@@AEAAXXZ @ 0x180603AA8 (-_AddSeparator@CLauncherTipContextMenu@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180604894 (-reset@-$com_ptr_t@V-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@Uerr_returnco.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=17 #try_helpers=1
__int64 __fastcall CLauncherTipContextMenu::_EnumerateAndBuildMenu(CLauncherTipContextMenu *this)
{
  void **v2; // r12
  volatile signed __int32 *v3; // rcx
  void *v4; // rax
  __int64 v5; // rdx
  HRESULT Error; // edi
  void *v7; // rbx
  __int64 (__fastcall *v8)(void *, __int64, LPCWSTR *); // rdi
  IShellItem *v9; // rbx
  HRESULT (__stdcall *GetDisplayName)(IShellItem *, SIGDN, LPWSTR *); // rdi
  __int64 v11; // rax
  unsigned int i; // r14d
  char *v13; // r8
  __int64 v14; // rdx
  _DWORD *v15; // rdx
  _DWORD *v16; // rax
  unsigned int v17; // r14d
  int v18; // eax
  _DWORD *v19; // rdx
  bool v20; // r15
  __int64 v21; // r14
  __int64 v22; // r8
  __int64 v23; // rdx
  __int128 *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 j; // r14
  _QWORD *v28; // r12
  struct IShellItem *v29; // rbx
  IShellItem *v30; // r15
  int v31; // r8d
  HMENU PopupMenu; // rax
  UINT_PTR v33; // r14
  __int64 v34; // rbx
  HMENU v35; // rax
  _QWORD *v36; // r14
  __int64 v37; // rsi
  IShellItem *v38; // rcx
  void **ppv; // [rsp+20h] [rbp-518h]
  IShellItem *v41; // [rsp+30h] [rbp-508h] BYREF
  unsigned __int8 v42[8]; // [rsp+38h] [rbp-500h] BYREF
  void *v43; // [rsp+40h] [rbp-4F8h] BYREF
  struct IShellItem *v44; // [rsp+48h] [rbp-4F0h] BYREF
  IShellItem *psiParent; // [rsp+50h] [rbp-4E8h] BYREF
  LPCWSTR lpNewItem; // [rsp+58h] [rbp-4E0h] BYREF
  __int64 v47; // [rsp+60h] [rbp-4D8h]
  __int64 v48; // [rsp+68h] [rbp-4D0h]
  __int64 v49; // [rsp+78h] [rbp-4C0h] BYREF
  __int64 v50; // [rsp+80h] [rbp-4B8h]
  __int64 v51; // [rsp+88h] [rbp-4B0h]
  __int128 v52; // [rsp+90h] [rbp-4A8h] BYREF
  __int64 v53; // [rsp+A0h] [rbp-498h]
  _SHFILEOPSTRUCTW FileOp; // [rsp+A8h] [rbp-490h] BYREF
  _BYTE v55[528]; // [rsp+E0h] [rbp-458h] BYREF
  wchar_t Buffer[264]; // [rsp+2F0h] [rbp-248h] BYREF

  v2 = (void **)((char *)this + 408);
  v3 = *(volatile signed __int32 **)(tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>>>((struct wil::details::IFailureCallback *)&FileOp)
                                   + 48);
  v4 = *v2;
  *v2 = (void *)v3;
  if ( v3 )
    _InterlockedIncrement(v3 + 78);
  if ( v4 )
    tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>::Release(v4);
  wil::com_ptr_t<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>,wil::err_returncode_policy>(&FileOp.lpszProgressTitle);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)&FileOp.wFunc);
  LOBYTE(v5) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::GetImpl'::`2'::impl,
    v5);
  *((_BYTE *)this + 345) = 0;
  if ( (char *)this + 346 <= (char *)this + 349 )
    memset_0((char *)this + 346, 0, (char *)this + 349 >= (char *)this + 346 ? 3 : 0);
  psiParent = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&psiParent);
  Error = SHGetKnownFolderItem(
            &FOLDERID_LocalAppData,
            KF_FLAG_DEFAULT,
            0LL,
            &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
            (void **)&psiParent);
  if ( Error >= 0 )
  {
    v44 = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v44);
    Error = SHCreateItemFromRelativeName(
              psiParent,
              L"Microsoft\\Windows\\WinX",
              0LL,
              &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
              (void **)&v44);
    if ( Error == -2147024894 )
    {
      v41 = 0LL;
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v41);
      Error = SHGetKnownFolderItem(
                &FOLDERID_UserProfiles,
                KF_FLAG_DEFAULT,
                0LL,
                &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                (void **)&v41);
      if ( Error >= 0 )
      {
        v43 = 0LL;
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v43);
        Error = SHCreateItemFromRelativeName(
                  v41,
                  L"Default\\AppData\\Local\\Microsoft\\Windows\\WinX",
                  0LL,
                  &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                  &v43);
        if ( Error >= 0 )
        {
          lpNewItem = 0LL;
          v47 = 0LL;
          v48 = 0LL;
          v7 = v43;
          v8 = *(__int64 (__fastcall **)(void *, __int64, LPCWSTR *))(*(_QWORD *)v43 + 40LL);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpNewItem);
          v47 = -1LL;
          v48 = -1LL;
          Error = v8(v7, 2147844096LL, &lpNewItem);
          if ( Error >= 0 )
          {
            memset_0(v55, 0, 0x208uLL);
            if ( (unsigned int)_o_wcscpy_s(v55, 260LL, lpNewItem) )
            {
              Error = -2147467259;
            }
            else
            {
              v49 = 0LL;
              v50 = 0LL;
              v51 = 0LL;
              v9 = psiParent;
              GetDisplayName = psiParent->lpVtbl->GetDisplayName;
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v49);
              v50 = -1LL;
              v51 = -1LL;
              Error = ((__int64 (__fastcall *)(IShellItem *, __int64, __int64 *))GetDisplayName)(v9, 2147844096LL, &v49);
              if ( Error >= 0 )
              {
                memset_0(Buffer, 0, 0x208uLL);
                ppv = (void **)L"Microsoft\\Windows\\WinX";
                if ( swprintf_s(Buffer, 0x104uLL, L"%s\\%s", v49) <= 0
                  || (*(_OWORD *)&FileOp.hwnd = 0LL,
                      memset(&FileOp.fFlags, 0, 24),
                      FileOp.wFunc = 2,
                      FileOp.pFrom = (PCZZWSTR)v55,
                      FileOp.pTo = Buffer,
                      FileOp.fFlags = 2564,
                      SHFileOperationW(&FileOp)) )
                {
                  Error = -2147467259;
                }
                else
                {
                  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v44);
                  Error = SHCreateItemFromRelativeName(
                            psiParent,
                            L"Microsoft\\Windows\\WinX",
                            0LL,
                            &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                            (void **)&v44);
                }
              }
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v49);
            }
          }
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpNewItem);
        }
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v43);
      }
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v41);
    }
    v11 = *((_QWORD *)this + 45);
    if ( v11 != *((_QWORD *)this + 46) )
      *((_QWORD *)this + 46) = v11;
    for ( i = 0; i < 0x11; ++i )
    {
      v13 = (char *)&CLauncherTipContextMenu::c_rgItemMap + 12 * i;
      v14 = *((_QWORD *)this + 46);
      if ( v14 == *((_QWORD *)this + 47) )
      {
        std::vector<CLauncherTipContextMenu::LTCMITEM>::_Emplace_reallocate<CLauncherTipContextMenu::LTCMITEM const &>(
          (char *)this + 360,
          v14,
          v13);
      }
      else
      {
        *(_QWORD *)v14 = *(_QWORD *)v13;
        *(_DWORD *)(v14 + 8) = *((_DWORD *)v13 + 2);
        *((_QWORD *)this + 46) += 12LL;
      }
    }
    v15 = (_DWORD *)*((_QWORD *)this + 49);
    v16 = (_DWORD *)*((_QWORD *)this + 48);
    if ( v16 != v15 )
    {
      *((_QWORD *)this + 49) = v16;
      v15 = v16;
    }
    LODWORD(v43) = 0;
    if ( v15 == *((_DWORD **)this + 50) )
    {
      std::vector<unsigned int>::_Emplace_reallocate<unsigned int>((char *)this + 384, v15, &v43);
    }
    else
    {
      *v15 = 0;
      *((_QWORD *)this + 49) += 4LL;
    }
    v17 = 0;
    if ( Error >= 0 )
    {
      CShallowContainerIterator::CShallowContainerIterator((CShallowContainerIterator *)&lpNewItem, v44, 0x20u);
      Error = (int)lpNewItem;
      if ( (int)lpNewItem >= 0 )
      {
        v41 = 0LL;
        while ( Error >= 0 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v41);
          if ( !CShallowContainerIterator::Next((CShallowContainerIterator *)&lpNewItem, (struct IShellItem2 **)&v41) )
            break;
          if ( *((_QWORD *)this + 23) )
          {
            CLauncherTipContextMenu::_AddSeparator(this);
            v18 = *((_DWORD *)this + 46);
            LODWORD(v43) = v18;
            v19 = (_DWORD *)*((_QWORD *)this + 49);
            if ( v19 == *((_DWORD **)this + 50) )
            {
              std::vector<unsigned int>::_Emplace_reallocate<unsigned int>((char *)this + 384, v19, &v43);
            }
            else
            {
              *v19 = v18;
              *((_QWORD *)this + 49) += 4LL;
            }
            ++v17;
          }
          Error = CLauncherTipContextMenu::_AddFolderLinksToCommands(this, (struct IShellItem2 *)v41, 0, v17);
          if ( Error >= 0 )
            Error = *((_BYTE *)this + 322) != 0 ? 0x80004004 : 0;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v41);
      }
      CShallowContainerIterator::~CShallowContainerIterator((CShallowContainerIterator *)&lpNewItem);
    }
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v44);
    if ( Error >= 0 )
      CLauncherTipContextMenu::AddMissingLinksFromDefaultProfile(this);
  }
  v20 = *((_QWORD *)this + 45) == *((_QWORD *)this + 46);
  v21 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>>::ensure_data((char *)this + 408);
  v41 = (IShellItem *)v21;
  if ( v21 )
    _InterlockedIncrement((volatile signed __int32 *)(v21 + 312));
  tip2::details::shared_data<0,0,1>::begin_update(v21 + 8);
  *(_BYTE *)(v21 + 273) = v20;
  tip2::details::shared_data<0,0,0>::end_update(v21 + 8);
  wil::com_ptr_t<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>,wil::err_returncode_policy>::reset(&v41);
  wil::com_ptr_t<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>,wil::err_returncode_policy>(&v41);
  v22 = *((_QWORD *)this + 46);
  v23 = *((_QWORD *)this + 45);
  if ( v23 != v22 )
  {
    v52 = 0LL;
    v53 = 0LL;
    std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_CLauncherTipContextMenu::LTCMITEM______std::back_insert_iterator_std::vector_unsigned_long_std::allocator_unsigned_long_______lambda_d78cea801e174b4d7e0aca6d1c25d446___(
      (unsigned int)&v41,
      v23,
      v22,
      (unsigned int)&v52,
      (_DWORD)ppv);
    v24 = (__int128 *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>>::operator->(
                                    (char *)this + 408,
                                    &v41)
                     + 280LL);
    if ( v24 != &v52 )
      std::vector<unsigned long>::_Assign_counted_range<unsigned long *>(
        v24,
        v52,
        (__int64)(*((_QWORD *)&v52 + 1) - v52) >> 2);
    tip2::test_data_control<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>>::~test_data_control<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>>(&v41);
    if ( (_QWORD)v52 )
      std::_Deallocate<16>(v52, (v53 - v52) & 0xFFFFFFFFFFFFFFFCuLL);
  }
  LOBYTE(v23) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::GetImpl'::`2'::impl,
    v23);
  v25 = *((_QWORD *)this + 45);
  if ( v25 != *((_QWORD *)this + 46) )
    *((_QWORD *)this + 46) = v25;
  v26 = *((_QWORD *)this + 48);
  if ( v26 != *((_QWORD *)this + 49) )
    *((_QWORD *)this + 49) = v26;
  for ( j = 0LL; ; ++j )
  {
    v28 = (_QWORD *)((char *)this + 176);
    if ( j >= *((_QWORD *)this + 23) )
      break;
    v44 = *(struct IShellItem **)(*v28 + 8 * j);
    v29 = v44;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v44);
    if ( ((__int64)v29[14].lpVtbl & 0x100) != 0 )
    {
      CreateRefCountedObj<CLauncherTipContextMenu::LauncherTipMenuCommand,>(&v41);
      v30 = v41;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
        (__int64)&v41[11],
        (__int64)v29[11].lpVtbl,
        0xFFFFFFFFFFFFFFFFuLL);
      v31 = (__int64)v29[14].lpVtbl & 1;
      LODWORD(v30[14].lpVtbl) = v31 | 0xA02;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
        &v30[2],
        &_ImageBase,
        (unsigned int)(v31 + 10960));
      CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::_InsertAt<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>> const &>(
        (char *)this + 176,
        &v41,
        j++);
      v41 = 0LL;
      ((void (__fastcall *)(IShellItem *))v30->lpVtbl->Release)(v30);
    }
    ((void (__fastcall *)(struct IShellItem *))v29->lpVtbl->Release)(v29);
  }
  if ( Error >= 0 )
  {
    PopupMenu = CreatePopupMenu();
    *((_QWORD *)this + 41) = PopupMenu;
    if ( PopupMenu )
    {
      Error = 0;
    }
    else
    {
      Error = ResultFromKnownLastError();
      if ( Error < 0 )
        goto LABEL_86;
    }
    v33 = *((_QWORD *)this + 23);
    if ( v33 )
    {
      do
      {
        v34 = *(_QWORD *)(*v28 + 8 * v33 - 8);
        if ( v34 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v34 + 8LL))(*(_QWORD *)(*v28 + 8 * v33 - 8));
        AppendMenuW(*((HMENU *)this + 41), *(_BYTE *)(v34 + 8) != 0 ? 0x800 : 0, v33, *(LPCWSTR *)(v34 + 16));
        if ( v33 == 2 )
        {
          v35 = CreatePopupMenu();
          *((_QWORD *)this + 42) = v35;
          Error = v35 ? 0 : ResultFromKnownLastError();
          if ( Error >= 0 )
          {
            lpNewItem = 0LL;
            v47 = 0LL;
            v48 = 0LL;
            Error = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
                      &lpNewItem,
                      &_ImageBase,
                      10930LL);
            if ( Error >= 0 )
              AppendMenuW(*((HMENU *)this + 41), 0x10u, *((unsigned int *)this + 84), lpNewItem);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpNewItem);
          }
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        --v33;
      }
      while ( v33 );
      if ( ShouldPowershellReplaceCmd() )
      {
        v42[0] = *((_BYTE *)this + 345) == 0;
        LauncherTipContextMenuTelemetry::LauncherTipContextMenuDefaultConsole<bool>(v42);
      }
    }
  }
LABEL_86:
  v36 = (_QWORD *)((char *)this + 408);
  v37 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>>::ensure_data((char *)this + 408);
  v41 = (IShellItem *)v37;
  if ( v37 )
    _InterlockedIncrement((volatile signed __int32 *)(v37 + 312));
  tip2::details::shared_data<0,0,1>::begin_update(v37 + 8);
  *(_DWORD *)(v37 + 304) = Error;
  tip2::details::shared_data<0,0,0>::end_update(v37 + 8);
  wil::com_ptr_t<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>,wil::err_returncode_policy>::reset(&v41);
  wil::com_ptr_t<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>,wil::err_returncode_policy>(&v41);
  if ( *v36 )
    tip2::details::shared_data<0,0,0>::complete_without_lock(*v36 + 8LL);
  v38 = psiParent;
  if ( psiParent )
  {
    psiParent = 0LL;
    ((void (__fastcall *)(IShellItem *))v38->lpVtbl->Release)(v38);
  }
  return (unsigned int)Error;
}
