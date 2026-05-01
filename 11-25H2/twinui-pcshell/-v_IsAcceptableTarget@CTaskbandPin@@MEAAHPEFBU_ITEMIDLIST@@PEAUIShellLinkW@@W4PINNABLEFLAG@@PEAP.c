/*
 * XREFs of ?v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x180663E60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BEFC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x1802C068C (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@$$CFAU_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802C4C24 (--1-$out_param_t@V-$unique_ptr@$$CFAU_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x1802C4C48 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??$As@UIShellItem2@@@?$ComPtr@UIShellItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIShellItem2@@@WRL@Microsoft@@@Details@12@@Z @ 0x180485CE8 (--$As@UIShellItem2@@@-$ComPtr@UIShellItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIShellIt.c)
 *     ?GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z @ 0x1805C2B4C (-GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z.c)
 *     ?IShellItem_GetString@@YAJPEAUIShellItem@@AEBU_tagpropertykey@@PEAPEAG@Z @ 0x180662AF0 (-IShellItem_GetString@@YAJPEAUIShellItem@@AEBU_tagpropertykey@@PEAPEAG@Z.c)
 *     ?IsPinnable@CTaskbandPin@@AEAA_NPEAUIShellItem2@@@Z @ 0x180662BA0 (-IsPinnable@CTaskbandPin@@AEAA_NPEAUIShellItem2@@@Z.c)
 *     ?SHGetNameAndFlagsW@@YAJPEFBU_ITEMIDLIST@@KPEAGIPEAK@Z @ 0x180663180 (-SHGetNameAndFlagsW@@YAJPEFBU_ITEMIDLIST@@KPEAGIPEAK@Z.c)
 *     ?_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x180663400 (-_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z.c)
 *     ?_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x1806636C8 (-_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAU.c)
 *     ?_ProcessDestinationFolder@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAUIShellItem@@PEAPEAG@Z @ 0x180663A04 (-_ProcessDestinationFolder@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPE.c)
 *     ?GetAppPathFromShortcut@CPinnedList@@SAJPEAUIShellLinkW@@PEAUIShellItem@@KPEAGH@Z @ 0x1806688A8 (-GetAppPathFromShortcut@CPinnedList@@SAJPEAUIShellLinkW@@PEAUIShellItem@@KPEAGH@Z.c)
 *     ?_IsLocalHardDisk@CPinnedList@@IEAAHPEBG@Z @ 0x1806730DC (-_IsLocalHardDisk@CPinnedList@@IEAAHPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CTaskbandPin::v_IsAcceptableTarget(
        CTaskbandPin *a1,
        const ITEMIDLIST *a2,
        struct IShellLinkW *a3,
        __int64 a4,
        struct IShellItem **a5,
        unsigned __int16 **a6,
        unsigned __int16 **a7,
        void **a8)
{
  char v8; // bl
  unsigned int v11; // r14d
  unsigned int v12; // eax
  CPinnedList *v13; // rcx
  int Instance; // r15d
  struct IShellItem2 *v15; // rbx
  HRESULT (__stdcall *GetString)(IShellItem2 *, const PROPERTYKEY *const, LPWSTR *); // rsi
  CTaskbandPin *v17; // rcx
  struct IShellItem **v18; // r8
  struct IShellItemVtbl *v19; // rcx
  LPCITEMIDLIST v20; // rsi
  void *v21; // rbx
  int (__fastcall *v22)(void *, _QWORD, const GUID *, GUID *); // rdi
  struct IShellLinkW v23; // rax
  HRESULT v24; // ebx
  struct IShellItem2 *v25; // rcx
  CPinnedList *v26; // rcx
  char v27; // bl
  unsigned __int16 *v28; // rcx
  HRESULT (__stdcall *QueryInterface)(IShellItem *, const IID *const, void **); // rax
  int v30; // eax
  int v31; // eax
  __int64 v32; // r9
  const ITEMIDLIST *v33; // rbx
  void **v34; // rdi
  int v35; // eax
  CPinnedList *v36; // rcx
  const struct _tagpropertykey *v37; // rdx
  CTaskbandPin *v38; // rcx
  LPITEMIDLIST v39; // rcx
  LPITEMIDLIST v40; // rax
  struct IShellItem *v41; // rax
  struct IShellLinkW **bIgnoreCase; // [rsp+20h] [rbp-E0h]
  char v44; // [rsp+40h] [rbp-C0h]
  char v45; // [rsp+41h] [rbp-BFh]
  unsigned int v46; // [rsp+44h] [rbp-BCh] BYREF
  int v47; // [rsp+48h] [rbp-B8h]
  int v48; // [rsp+4Ch] [rbp-B4h]
  int v49; // [rsp+50h] [rbp-B0h]
  CTaskbandPin *v50; // [rsp+58h] [rbp-A8h]
  const ITEMIDLIST *v51; // [rsp+60h] [rbp-A0h]
  void **v52; // [rsp+68h] [rbp-98h]
  unsigned __int16 **v53; // [rsp+70h] [rbp-90h]
  LPCITEMIDLIST ppidlLast; // [rsp+78h] [rbp-88h] BYREF
  void *ppv; // [rsp+80h] [rbp-80h] BYREF
  struct IShellItem v56; // [rsp+88h] [rbp-78h] BYREF
  LPITEMIDLIST ppidl[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-60h]
  struct IShellLinkW *v59; // [rsp+A8h] [rbp-58h] BYREF
  struct IShellItem2 *v60; // [rsp+B0h] [rbp-50h] BYREF
  LPCITEMIDLIST pidl; // [rsp+B8h] [rbp-48h] BYREF
  LPCITEMIDLIST pidl1; // [rsp+C0h] [rbp-40h] BYREF
  void *v63; // [rsp+C8h] [rbp-38h] BYREF
  LPCITEMIDLIST v64; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 v65[264]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int16 v66[264]; // [rsp+2F0h] [rbp+1F0h] BYREF
  WCHAR pszStr1[264]; // [rsp+500h] [rbp+400h] BYREF

  v8 = a4;
  v47 = a4;
  v51 = a2;
  v50 = a1;
  v53 = a7;
  v52 = a8;
  v11 = 0;
  if ( a8 )
    *a8 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  *a7 = 0LL;
  v48 = a4 & 4;
  v12 = 0x40000000;
  if ( (a4 & 4) != 0 )
    v12 = 1614807040;
  v46 = v12;
  if ( (int)SHGetNameAndFlagsW(a2, 0xC000u, v66, a4, &v46) >= 0 )
  {
    v49 = v8 & 2;
    if ( (v8 & 2) == 0 || (v8 & 4) != 0 || CPinnedList::_IsLocalHardDisk(v13, v66) || (v46 & 0x40000000) == 0 )
    {
      ppv = 0LL;
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
      Instance = SHCreateItemFromIDList(a2, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &ppv);
      if ( Instance < 0 )
        goto LABEL_116;
      v60 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IShellItem>::As<IShellItem2>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&ppv,
                  (__int64 *)&v60) < 0 )
        goto LABEL_24;
      ppidl[0] = 0LL;
      ppidl[1] = 0LL;
      v58 = 0LL;
      v15 = v60;
      GetString = v60->lpVtbl->GetString;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)ppidl);
      ppidl[1] = (LPITEMIDLIST)-1LL;
      v58 = -1LL;
      if ( ((int (__fastcall *)(struct IShellItem2 *, __int128 *, LPITEMIDLIST *))GetString)(
             v15,
             &PKEY_AppUserModel_ParentID,
             ppidl) >= 0
        && ppidl[0]
        && ppidl[0]->mkid.cb )
      {
        Instance = -2147467259;
      }
      if ( (v47 & 0x10) == 0 && !CTaskbandPin::IsPinnable(v17, v60) )
        Instance = -2147467259;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)ppidl);
      if ( Instance >= 0 )
      {
LABEL_24:
        v56.lpVtbl = 0LL;
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v56);
        if ( (int)TaskbarPinHelper::GetTaskbarPinnableItem((TaskbarPinHelper *)ppv, &v56, v18) >= 0 )
        {
          v19 = (struct IShellItemVtbl *)ppv;
          ppv = v56.lpVtbl;
          v56.lpVtbl = v19;
        }
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v56);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v60);
      if ( Instance < 0 )
        goto LABEL_116;
      v56.lpVtbl = 0LL;
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v56);
      Instance = CoCreateInstance(
                   &CLSID_StartMenuCacheAndAppResolver,
                   0LL,
                   3u,
                   &GUID_de25675a_72de_44b4_9373_05170450c140,
                   (LPVOID *)&v56.lpVtbl);
      if ( Instance < 0 )
      {
LABEL_115:
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v56);
LABEL_116:
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
        return Instance >= 0;
      }
      v45 = 0;
      v44 = 0;
      memset_0(v65, 0, 0x208uLL);
      v59 = a3;
      if ( a3 )
      {
        ((void (__fastcall *)(struct IShellLinkW *))a3->lpVtbl->AddRef)(a3);
        a3 = v59;
      }
      v20 = 0LL;
      v64 = 0LL;
      if ( !a3 )
      {
        v21 = ppv;
        v22 = *(int (__fastcall **)(void *, _QWORD, const GUID *, GUID *))(*(_QWORD *)ppv + 24LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v59);
        bIgnoreCase = &v59;
        if ( v22(v21, 0LL, &BHID_SFUIObject, &GUID_000214f9_0000_0000_c000_000000000046) < 0 )
          goto LABEL_56;
        a3 = v59;
      }
      pidl = 0LL;
      v23.lpVtbl = a3->lpVtbl;
      ppidl[0] = (LPITEMIDLIST)&pidl;
      ppidl[1] = 0LL;
      LOBYTE(v58) = 1;
      Instance = ((__int64 (__fastcall *)(struct IShellLinkW *, LPITEMIDLIST *))v23.lpVtbl->GetIDList)(a3, &ppidl[1]);
      wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)ppidl);
      if ( Instance >= 0 )
      {
        v63 = 0LL;
        ppidlLast = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v63);
        if ( SHBindToParent(pidl, &GUID_000214e6_0000_0000_c000_000000000046, &v63, &ppidlLast) >= 0 )
        {
          pidl1 = 0LL;
          ppidl[0] = (LPITEMIDLIST)&pidl1;
          ppidl[1] = 0LL;
          LOBYTE(v58) = 1;
          v24 = SHGetKnownFolderIDList(&FOLDERID_AppsFolder, 0x4000u, 0LL, &ppidl[1]);
          wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)ppidl);
          if ( v24 >= 0 && ILIsParent(pidl1, pidl, 1) )
          {
            v60 = 0LL;
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v60);
            if ( SHCreateItemFromIDList(pidl, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, (void **)&v60) >= 0 )
            {
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v59);
              v25 = (struct IShellItem2 *)ppv;
              ppv = v60;
              v60 = v25;
            }
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v60);
          }
          wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&pidl1,
            0LL);
        }
        if ( v59 )
        {
          v45 = 1;
          if ( (int)CPinnedList::GetAppPathFromShortcut(v59, (struct IShellItem *)ppv, 0x8000u, v65, (int)bIgnoreCase) >= 0 )
          {
            if ( v49 )
            {
              if ( v65[0] != 58 || v65[1] != 58 || v65[2] != 123 || (v27 = 1, !v65[3]) )
                v27 = 0;
              v44 = v27;
              if ( v48 || CPinnedList::_IsLocalHardDisk(v26, v65) || v27 )
              {
                v20 = pidl;
                v64 = pidl;
                pidl = 0LL;
              }
            }
          }
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v63);
      }
      wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&pidl,
        0LL);
LABEL_56:
      if ( Instance < 0 )
      {
LABEL_114:
        wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v64,
          0LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v59);
        goto LABEL_115;
      }
      if ( !v45
        || (int)CPinnedList::GetAppPathFromShortcut(v59, (struct IShellItem *)ppv, 0x4000u, pszStr1, (int)bIgnoreCase) >= 0 )
      {
        *(_OWORD *)ppidl = *(_OWORD *)L"search-ms:";
        LODWORD(v58) = *(_DWORD *)L"s:";
        WORD2(v58) = aSearchMs[10];
        v28 = v66;
        if ( v45 )
          v28 = pszStr1;
        if ( !StrCmpNICW(v28, (LPCWSTR)ppidl, 10) )
        {
LABEL_62:
          Instance = -2147467259;
          goto LABEL_114;
        }
      }
      QueryInterface = v56.lpVtbl->QueryInterface;
      if ( v59 )
        v30 = (*((__int64 (__fastcall **)(struct IShellItemVtbl *, struct IShellLinkW *, void *))QueryInterface + 11))(
                v56.lpVtbl,
                v59,
                ppv);
      else
        v30 = (*((__int64 (__fastcall **)(struct IShellItemVtbl *, void *))QueryInterface + 10))(v56.lpVtbl, ppv);
      Instance = v30;
      if ( v48 )
      {
        v31 = v47 & 8;
      }
      else
      {
        v31 = v47 & 8;
        if ( (v47 & 8) == 0 )
          goto LABEL_114;
      }
      if ( Instance < 0 )
      {
        if ( v31 )
          goto LABEL_114;
        if ( !(unsigned int)SHWindowsPolicy(&POLID_NoPinningToDestinations) )
        {
          v33 = v51;
          if ( v20 )
            v33 = v20;
          if ( !v45 || v65[0] )
          {
            v34 = v52;
            if ( v52 )
            {
              if ( (v46 & 0x20000000) == 0 || (v46 & 0x400000) != 0 )
                v35 = CTaskbandPin::_ProcessDestinationFile(
                        v50,
                        (struct IApplicationResolver *)v56.lpVtbl,
                        v33,
                        v46,
                        a5,
                        a6,
                        v53);
              else
                v35 = CTaskbandPin::_ProcessDestinationFolder(
                        v50,
                        (struct IApplicationResolver *)v56.lpVtbl,
                        v33,
                        v32,
                        (IUnknown **)a5,
                        a6);
              Instance = v35;
              if ( v35 >= 0 )
                Instance = SHCreateItemFromIDList(v33, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, v34);
            }
            else
            {
              Instance = -2147418113;
            }
          }
          goto LABEL_114;
        }
LABEL_86:
        Instance = -2147024891;
        goto LABEL_114;
      }
      if ( (unsigned int)SHWindowsPolicy(&POLID_NoPinningToTaskbar) )
        goto LABEL_86;
      if ( v45 )
      {
        if ( !a5 && !a6 )
          goto LABEL_114;
        if ( ((v46 & 0x40000000) == 0 || CPinnedList::_IsLocalHardDisk(v36, v66))
          && (CPinnedList::_IsLocalHardDisk(v36, v65) || v44) )
        {
          Instance = 0;
          if ( !a5
            || (Instance = (**(__int64 (__fastcall ***)(void *, GUID *, struct IShellItem **))ppv)(
                             ppv,
                             &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                             a5),
                Instance >= 0) )
          {
            if ( a6 )
            {
              Instance = (*((__int64 (__fastcall **)(struct IShellItemVtbl *, struct IShellLinkW *, void *, unsigned __int16 **))v56.lpVtbl->QueryInterface
                          + 4))(
                           v56.lpVtbl,
                           v59,
                           ppv,
                           a6);
              if ( Instance < 0 )
              {
                if ( a5 )
                  SafeRelease<IShellItemArray>((__int64 *)a5);
              }
            }
          }
          goto LABEL_114;
        }
        goto LABEL_62;
      }
      ppidl[0] = 0LL;
      ppidl[1] = 0LL;
      v58 = 0LL;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)ppidl);
      ppidl[1] = (LPITEMIDLIST)-1LL;
      v58 = -1LL;
      Instance = IShellItem_GetString((struct IShellItem *)ppv, v37, (unsigned __int16 **)ppidl);
      if ( Instance < 0 )
      {
        Instance = CTaskbandPin::_GetApplication(
                     v38,
                     (struct IApplicationResolver *)v56.lpVtbl,
                     (char *)v66,
                     a5,
                     a6,
                     0LL);
        if ( Instance >= 0 )
        {
LABEL_111:
          if ( a5 )
          {
            v41 = (struct IShellItem *)ppv;
            ppv = 0LL;
            *a5 = v41;
          }
        }
      }
      else
      {
        if ( CompareStringOrdinal(&ppidl[0]->mkid.cb, -1, L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI", -1, 1) == 2 )
          goto LABEL_102;
        v39 = (LPITEMIDLIST)&LocaleName;
        if ( ppidl[0] )
          v39 = ppidl[0];
        if ( CompareStringOrdinal(&v39->mkid.cb, -1, L"Microsoft.WindowsStore_8wekyb3d8bbwe!App", -1, 1) == 2
          && (unsigned int)SHWindowsPolicy(&POLID_NoPinningStoreToTaskbar) )
        {
LABEL_102:
          Instance = -2147467259;
        }
        else
        {
          if ( !a6 )
            goto LABEL_111;
          Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
          Instance = SHCreateItemInKnownFolder(
                       &FOLDERID_AppsFolder,
                       0x4000u,
                       &ppidl[0]->mkid.cb,
                       &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                       &ppv);
          if ( Instance >= 0 )
          {
            v40 = ppidl[0];
            ppidl[0] = 0LL;
            v58 = 0LL;
            ppidl[1] = 0LL;
            *a6 = &v40->mkid.cb;
            goto LABEL_111;
          }
        }
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)ppidl);
      goto LABEL_114;
    }
  }
  return v11;
}
