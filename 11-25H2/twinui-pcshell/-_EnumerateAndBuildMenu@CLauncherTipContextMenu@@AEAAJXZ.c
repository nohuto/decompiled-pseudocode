/*
 * XREFs of ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x18009D874
 * Callers:
 *     ?_HandleBackgroundEnumeration@CLauncherTipContextMenu@@AEAAX_N_J@Z @ 0x1802234CC (-_HandleBackgroundEnumeration@CLauncherTipContextMenu@@AEAAX_N_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BEFC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18003F62C (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180086830 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?ShouldPowershellReplaceCmd@@YA_NXZ @ 0x18009E240 (-ShouldPowershellReplaceCmd@@YA_NXZ.c)
 *     ??$LauncherTipContextMenuDefaultConsole@_N@LauncherTipContextMenuTelemetry@@SAX$$QEA_N@Z @ 0x18009E2A4 (--$LauncherTipContextMenuDefaultConsole@_N@LauncherTipContextMenuTelemetry@@SAX$$QEA_N@Z.c)
 *     ??$CreateRefCountedObj@ULauncherTipMenuCommand@CLauncherTipContextMenu@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@XZ @ 0x180190DBC (--$CreateRefCountedObj@ULauncherTipMenuCommand@CLauncherTipContextMenu@@$$V@@YA-AV-$ComPtr@V-$CR.c)
 *     ?_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z @ 0x180198E6C (-_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z.c)
 *     ?Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z @ 0x180198FDC (-Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z.c)
 *     ??$_Emplace_reallocate@I@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAI$$QEAI@Z @ 0x1801A7EBC (--$_Emplace_reallocate@I@-$vector@IV-$allocator@I@std@@@std@@AEAAPEAIQEAI$$QEAI@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801D7BA4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShe.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@IG@Z @ 0x1801E97E4 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHI.c)
 *     ??$_Emplace_reallocate@AEBULTCMITEM@CLauncherTipContextMenu@@@?$vector@ULTCMITEM@CLauncherTipContextMenu@@V?$allocator@ULTCMITEM@CLauncherTipContextMenu@@@std@@@std@@AEAAPEAULTCMITEM@CLauncherTipContextMenu@@QEAU23@AEBU23@@Z @ 0x1802244F8 (--$_Emplace_reallocate@AEBULTCMITEM@CLauncherTipContextMenu@@@-$vector@ULTCMITEM@CLauncherTipCon.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@1@XZ @ 0x180289108 (--C-$tip_test@V-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$te.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180289228 (--1-$com_ptr_t@V-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@Uerr_returncode_p.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180289248 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1802896DC (-ensure_data@-$tip_test@V-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@tip2@@A.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x18028A668 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028AC1C (-complete_without_lock@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028ADE8 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ??1CShallowContainerIterator@@QEAA@XZ @ 0x1802C0650 (--1CShallowContainerIterator@@QEAA@XZ.c)
 *     ??0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z @ 0x1802C7A98 (--0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C93A4 (--1-$test_data_control@V-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@tip2@@QE.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     swprintf_s @ 0x1802D3184 (swprintf_s.c)
 *     ??$_Assign_counted_range@PEAK@?$vector@KV?$allocator@K@std@@@std@@AEAAXPEAK_K@Z @ 0x1805DA74C (--$_Assign_counted_range@PEAK@-$vector@KV-$allocator@K@std@@@std@@AEAAXPEAK_K@Z.c)
 *     ??$_InsertAt@AEBV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@_K@Z @ 0x1805DAAA0 (--$_InsertAt@AEBV-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@.c)
 *     std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_CLauncherTipContextMenu::LTCMITEM______std::back_insert_iterator_std::vector_unsigned_long_std::allocator_unsigned_long_______lambda_d78cea801e174b4d7e0aca6d1c25d446___ @ 0x1805DB7BC (std--transform_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_CLauncherTipContextMenu.c)
 *     ?AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DC6CC (-AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?Release@?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@AEAAKXZ @ 0x1805DE4A8 (-Release@-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@AEAAKXZ.c)
 *     ?_AddSeparator@CLauncherTipContextMenu@@AEAAXXZ @ 0x1805DEFA8 (-_AddSeparator@CLauncherTipContextMenu@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1805DFD84 (-reset@-$com_ptr_t@V-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@Uerr_returnco.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 (__fastcall *v8)(void *, __int64, __int64 *); // rdi
  IShellItem *v9; // rbx
  HRESULT (__stdcall *GetDisplayName)(IShellItem *, SIGDN, LPWSTR *); // rdi
  __int64 v11; // rax
  unsigned int i; // r14d
  char *v13; // r8
  __int64 v14; // rdx
  _DWORD *v15; // rax
  _DWORD *v16; // rdx
  unsigned int v17; // r14d
  int v18; // eax
  _DWORD *v19; // rdx
  bool v20; // r15
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // r8
  __int128 *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 j; // r14
  __int64 v28; // rbx
  _DWORD *v29; // r15
  int v30; // r8d
  HMENU PopupMenu; // rax
  UINT_PTR v32; // r14
  __int64 v33; // rbx
  HMENU v34; // rax
  __int64 v35; // r14
  __int64 v36; // rcx
  IShellItem *v37; // rcx
  void **ppv; // [rsp+20h] [rbp-5C8h]
  bool v40[4]; // [rsp+30h] [rbp-5B8h] BYREF
  int v41; // [rsp+34h] [rbp-5B4h] BYREF
  IShellItem *psiParent; // [rsp+38h] [rbp-5B0h] BYREF
  struct IShellItem *v43; // [rsp+40h] [rbp-5A8h] BYREF
  void *v44; // [rsp+48h] [rbp-5A0h] BYREF
  IShellItem *v45; // [rsp+50h] [rbp-598h] BYREF
  struct IShellItem2 *v46; // [rsp+58h] [rbp-590h] BYREF
  int v47; // [rsp+60h] [rbp-588h] BYREF
  _DWORD *v48; // [rsp+68h] [rbp-580h] BYREF
  __int64 v49; // [rsp+70h] [rbp-578h] BYREF
  __int64 v50; // [rsp+78h] [rbp-570h] BYREF
  __int64 v51; // [rsp+80h] [rbp-568h] BYREF
  __int64 v52; // [rsp+88h] [rbp-560h]
  __int64 v53; // [rsp+90h] [rbp-558h]
  __int64 v54; // [rsp+98h] [rbp-550h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-548h]
  __int64 v56; // [rsp+A8h] [rbp-540h]
  __int128 v57; // [rsp+B0h] [rbp-538h] BYREF
  __int64 v58; // [rsp+C0h] [rbp-528h]
  _BYTE v59[8]; // [rsp+C8h] [rbp-520h] BYREF
  __int64 v60; // [rsp+D0h] [rbp-518h] BYREF
  LPCWSTR lpNewItem[3]; // [rsp+D8h] [rbp-510h] BYREF
  _SHFILEOPSTRUCTW FileOp; // [rsp+F0h] [rbp-4F8h] BYREF
  char v63; // [rsp+128h] [rbp-4C0h] BYREF
  _DWORD v64[8]; // [rsp+130h] [rbp-4B8h] BYREF
  _BYTE v65[8]; // [rsp+150h] [rbp-498h] BYREF
  _BYTE v66[40]; // [rsp+158h] [rbp-490h] BYREF
  _BYTE v67[16]; // [rsp+180h] [rbp-468h] BYREF
  _BYTE v68[528]; // [rsp+190h] [rbp-458h] BYREF
  wchar_t Buffer[264]; // [rsp+3A0h] [rbp-248h] BYREF

  v2 = (void **)((char *)this + 408);
  v3 = *(volatile signed __int32 **)(tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>>>((struct wil::details::IFailureCallback *)v65)
                                   + 48);
  v4 = *v2;
  *v2 = (void *)v3;
  if ( v3 )
    _InterlockedIncrement(v3 + 76);
  if ( v4 )
    tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>::Release(v4);
  wil::com_ptr_t<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>,wil::err_returncode_policy>(v67);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v66);
  LOBYTE(v5) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::GetImpl'::`2'::impl,
    v5);
  *((_BYTE *)this + 345) = 0;
  if ( (char *)this + 346 <= (char *)this + 349 )
    memset_0((char *)this + 346, 0, (char *)this + 349 >= (char *)this + 346 ? 3 : 0);
  psiParent = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&psiParent);
  Error = SHGetKnownFolderItem(
            &FOLDERID_LocalAppData,
            KF_FLAG_DEFAULT,
            0LL,
            &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
            (void **)&psiParent);
  if ( Error >= 0 )
  {
    v43 = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v43);
    Error = SHCreateItemFromRelativeName(
              psiParent,
              L"Microsoft\\Windows\\WinX",
              0LL,
              &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
              (void **)&v43);
    if ( Error == -2147024894 )
    {
      v45 = 0LL;
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v45);
      Error = SHGetKnownFolderItem(
                &FOLDERID_UserProfiles,
                KF_FLAG_DEFAULT,
                0LL,
                &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                (void **)&v45);
      if ( Error >= 0 )
      {
        v44 = 0LL;
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v44);
        Error = SHCreateItemFromRelativeName(
                  v45,
                  L"Default\\AppData\\Local\\Microsoft\\Windows\\WinX",
                  0LL,
                  &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                  &v44);
        if ( Error >= 0 )
        {
          v54 = 0LL;
          v55 = 0LL;
          v56 = 0LL;
          v7 = v44;
          v8 = *(__int64 (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)v44 + 40LL);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v54);
          v55 = -1LL;
          v56 = -1LL;
          Error = v8(v7, 2147844096LL, &v54);
          if ( Error >= 0 )
          {
            memset_0(v68, 0, 0x208uLL);
            if ( (unsigned int)_o_wcscpy_s(v68, 260LL, v54) )
            {
              Error = -2147467259;
            }
            else
            {
              v51 = 0LL;
              v52 = 0LL;
              v53 = 0LL;
              v9 = psiParent;
              GetDisplayName = psiParent->lpVtbl->GetDisplayName;
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v51);
              v52 = -1LL;
              v53 = -1LL;
              Error = ((__int64 (__fastcall *)(IShellItem *, __int64, __int64 *))GetDisplayName)(v9, 2147844096LL, &v51);
              if ( Error >= 0 )
              {
                memset_0(Buffer, 0, 0x208uLL);
                ppv = (void **)L"Microsoft\\Windows\\WinX";
                if ( swprintf_s(Buffer, 0x104uLL, L"%s\\%s", v51) <= 0
                  || (*(_OWORD *)&FileOp.hwnd = 0LL,
                      memset(&FileOp.fFlags, 0, 24),
                      FileOp.wFunc = 2,
                      FileOp.pFrom = (PCZZWSTR)v68,
                      FileOp.pTo = Buffer,
                      FileOp.fFlags = 2564,
                      SHFileOperationW(&FileOp)) )
                {
                  Error = -2147467259;
                }
                else
                {
                  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v43);
                  Error = SHCreateItemFromRelativeName(
                            psiParent,
                            L"Microsoft\\Windows\\WinX",
                            0LL,
                            &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                            (void **)&v43);
                }
              }
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v51);
            }
          }
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v54);
        }
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v44);
      }
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v45);
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
    v15 = (_DWORD *)*((_QWORD *)this + 48);
    v16 = (_DWORD *)*((_QWORD *)this + 49);
    if ( v15 != v16 )
    {
      *((_QWORD *)this + 49) = v15;
      v16 = v15;
    }
    v47 = 0;
    if ( v16 == *((_DWORD **)this + 50) )
    {
      std::vector<unsigned int>::_Emplace_reallocate<unsigned int>((char *)this + 384, v16, &v47);
    }
    else
    {
      *v16 = 0;
      *((_QWORD *)this + 49) += 4LL;
    }
    v17 = 0;
    if ( Error >= 0 )
    {
      CShallowContainerIterator::CShallowContainerIterator((CShallowContainerIterator *)v64, v43, 0x20u);
      Error = v64[0];
      if ( v64[0] >= 0 )
      {
        v46 = 0LL;
        while ( Error >= 0 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v46);
          if ( !CShallowContainerIterator::Next((CShallowContainerIterator *)v64, &v46) )
            break;
          if ( *((_QWORD *)this + 23) )
          {
            CLauncherTipContextMenu::_AddSeparator(this);
            v18 = *((_DWORD *)this + 46);
            v41 = v18;
            v19 = (_DWORD *)*((_QWORD *)this + 49);
            if ( v19 == *((_DWORD **)this + 50) )
            {
              std::vector<unsigned int>::_Emplace_reallocate<unsigned int>((char *)this + 384, v19, &v41);
            }
            else
            {
              *v19 = v18;
              *((_QWORD *)this + 49) += 4LL;
            }
            ++v17;
          }
          Error = CLauncherTipContextMenu::_AddFolderLinksToCommands(this, v46, 0, v17);
          if ( Error >= 0 )
            Error = *((_BYTE *)this + 322) != 0 ? 0x80004004 : 0;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v46);
      }
      CShallowContainerIterator::~CShallowContainerIterator((CShallowContainerIterator *)v64);
    }
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v43);
    if ( Error >= 0 )
      CLauncherTipContextMenu::AddMissingLinksFromDefaultProfile(this);
  }
  v20 = *((_QWORD *)this + 45) == *((_QWORD *)this + 46);
  v21 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>>::ensure_data((char *)this + 408);
  v49 = v21;
  if ( v21 )
    _InterlockedIncrement((volatile signed __int32 *)(v21 + 304));
  tip2::details::shared_data<0,0,1>::begin_update(v21 + 8);
  *(_BYTE *)(v21 + 265) = v20;
  tip2::details::shared_data<0,0,0>::end_update(v21 + 8);
  wil::com_ptr_t<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>,wil::err_returncode_policy>::reset(&v49);
  wil::com_ptr_t<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>,wil::err_returncode_policy>(&v49);
  v22 = *((_QWORD *)this + 45);
  v23 = *((_QWORD *)this + 46);
  if ( v22 != v23 )
  {
    v57 = 0LL;
    v58 = 0LL;
    std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_CLauncherTipContextMenu::LTCMITEM______std::back_insert_iterator_std::vector_unsigned_long_std::allocator_unsigned_long_______lambda_d78cea801e174b4d7e0aca6d1c25d446___(
      (unsigned int)&v63,
      v22,
      v23,
      (unsigned int)&v57,
      (_DWORD)ppv);
    v24 = (__int128 *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>>::operator->(
                                    (char *)this + 408,
                                    v59)
                     + 272LL);
    if ( v24 != &v57 )
      std::vector<unsigned long>::_Assign_counted_range<unsigned long *>(
        v24,
        v57,
        (__int64)(*((_QWORD *)&v57 + 1) - v57) >> 2);
    tip2::test_data_control<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>>::~test_data_control<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>>(v59);
    if ( (_QWORD)v57 )
      std::_Deallocate<16,0>((void *)v57, (const struct std::nothrow_t *)((v58 - v57) & 0xFFFFFFFFFFFFFFFCuLL));
  }
  LOBYTE(v22) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::GetImpl'::`2'::impl,
    v22);
  v25 = *((_QWORD *)this + 45);
  if ( v25 != *((_QWORD *)this + 46) )
    *((_QWORD *)this + 46) = v25;
  v26 = *((_QWORD *)this + 48);
  if ( v26 != *((_QWORD *)this + 49) )
    *((_QWORD *)this + 49) = v26;
  for ( j = 0LL; j < *((_QWORD *)this + 23); ++j )
  {
    v60 = *(_QWORD *)(*((_QWORD *)this + 22) + 8 * j);
    v28 = v60;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v60);
    if ( (*(_DWORD *)(v28 + 112) & 0x100) != 0 )
    {
      CreateRefCountedObj<CLauncherTipContextMenu::LauncherTipMenuCommand,>(&v48);
      v29 = v48;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
        (__int64)(v48 + 22),
        *(_QWORD *)(v28 + 88),
        0xFFFFFFFFFFFFFFFFuLL);
      v30 = *(_DWORD *)(v28 + 112) & 1;
      v29[28] = v30 | 0xA02;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
        v29 + 4,
        &_ImageBase,
        (unsigned int)(v30 + 10960));
      CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::_InsertAt<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>> const &>(
        (char *)this + 176,
        &v48,
        j++);
      v48 = 0LL;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v29 + 16LL))(v29);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
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
        goto LABEL_84;
    }
    v32 = *((_QWORD *)this + 23);
    if ( v32 )
    {
      do
      {
        v33 = *(_QWORD *)(*((_QWORD *)this + 22) + 8 * v32 - 8);
        if ( v33 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v33 + 8LL))(*(_QWORD *)(*((_QWORD *)this + 22) + 8 * v32 - 8));
        AppendMenuW(*((HMENU *)this + 41), *(_BYTE *)(v33 + 8) != 0 ? 0x800 : 0, v32, *(LPCWSTR *)(v33 + 16));
        if ( v32 == 2 )
        {
          v34 = CreatePopupMenu();
          *((_QWORD *)this + 42) = v34;
          if ( v34 || (Error = ResultFromKnownLastError(), Error >= 0) )
          {
            memset(lpNewItem, 0, sizeof(lpNewItem));
            Error = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
                      lpNewItem,
                      &_ImageBase,
                      10930LL);
            if ( Error >= 0 )
              AppendMenuW(*((HMENU *)this + 41), 0x10u, *((unsigned int *)this + 84), lpNewItem[0]);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)lpNewItem);
          }
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
        --v32;
      }
      while ( v32 );
      if ( ShouldPowershellReplaceCmd() )
      {
        v40[0] = *((_BYTE *)this + 345) == 0;
        LauncherTipContextMenuTelemetry::LauncherTipContextMenuDefaultConsole<bool>(v40);
      }
    }
  }
LABEL_84:
  v35 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>>::ensure_data((char *)this + 408);
  v50 = v35;
  if ( v35 )
    _InterlockedIncrement((volatile signed __int32 *)(v35 + 304));
  tip2::details::shared_data<0,0,1>::begin_update(v35 + 8);
  *(_DWORD *)(v35 + 296) = Error;
  tip2::details::shared_data<0,0,0>::end_update(v35 + 8);
  wil::com_ptr_t<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>,wil::err_returncode_policy>::reset(&v50);
  wil::com_ptr_t<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>,wil::err_returncode_policy>(&v50);
  v36 = *((_QWORD *)this + 51);
  if ( v36 )
    tip2::details::shared_data<0,0,0>::complete_without_lock(v36 + 8);
  v37 = psiParent;
  if ( psiParent )
  {
    psiParent = 0LL;
    ((void (__fastcall *)(IShellItem *))v37->lpVtbl->Release)(v37);
  }
  return (unsigned int)Error;
}
