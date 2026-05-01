/*
 * XREFs of ?CreatePlaceholderPidl@@YAJPEBGPEAPEAUIShellItem@@@Z @ 0x18068DE48
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x180690384 (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028A2A0 (--1-$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@$$CFAU_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802B976C (--1-$out_param_t@V-$unique_ptr@$$CFAU_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x1802B97A0 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?CreateFileSystemBindData@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18068DD10 (-CreateFileSystemBindData@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?ILAppendHiddenStringW@@YAPEFAU_ITEMIDLIST@@PEFAU1@W4IDLHID@@PEBG@Z @ 0x180692864 (-ILAppendHiddenStringW@@YAPEFAU_ITEMIDLIST@@PEFAU1@W4IDLHID@@PEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CreatePlaceholderPidl(const unsigned __int16 *a1, struct IShellItem **a2)
{
  HRESULT v4; // eax
  const struct _GUID *v5; // rcx
  HRESULT v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  HRESULT v9; // eax
  __int64 v10; // rax
  LPITEMIDLIST v11; // rax
  const ITEMIDLIST *v12; // rax
  HRESULT v13; // eax
  LPCITEMIDLIST *p_pidl; // [rsp+40h] [rbp-19h] BYREF
  LPITEMIDLIST ppidl; // [rsp+48h] [rbp-11h] BYREF
  char v17; // [rsp+50h] [rbp-9h]
  void *v18; // [rsp+58h] [rbp-1h] BYREF
  LPCITEMIDLIST pidl; // [rsp+60h] [rbp+7h] BYREF
  void *ppv; // [rsp+68h] [rbp+Fh] BYREF
  void *v21; // [rsp+70h] [rbp+17h] BYREF
  LPCITEMIDLIST pidl2; // [rsp+78h] [rbp+1Fh] BYREF
  LPBC ppbc; // [rsp+80h] [rbp+27h] BYREF
  const ITEMIDLIST *v24; // [rsp+88h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  ppbc = 0LL;
  v4 = CreateBindCtx(0, &ppbc);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v18 = 0LL;
    v7 = CreateFileSystemBindData(v5, &v18);
    v6 = v7;
    if ( v7 < 0 )
    {
      v8 = 373LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v7);
LABEL_6:
      wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)&v18);
      goto LABEL_24;
    }
    if ( ppbc )
    {
      v7 = ((__int64 (__fastcall *)(LPBC, const wchar_t *, void *))ppbc->lpVtbl->RegisterObjectParam)(
             ppbc,
             L"File System Bind Data",
             v18);
      v6 = v7;
      if ( v7 < 0 )
      {
        v8 = 377LL;
        goto LABEL_5;
      }
      pidl = 0LL;
      p_pidl = &pidl;
      ppidl = 0LL;
      v17 = 1;
      v6 = SHGetKnownFolderIDList(&FOLDERID_AppsFolder, 0x4000u, 0LL, &ppidl);
      wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&p_pidl);
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x17C,
          (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
          (const char *)(unsigned int)v6);
LABEL_12:
        wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&pidl,
          0LL);
        goto LABEL_6;
      }
      ppv = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
      v9 = SHBindToObject(0LL, pidl, 0LL, &GUID_000214e6_0000_0000_c000_000000000046, &ppv);
      v6 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x17F,
          (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
          (const char *)(unsigned int)v9);
LABEL_15:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
        goto LABEL_12;
      }
      pidl2 = 0LL;
      v10 = *(_QWORD *)ppv;
      p_pidl = &pidl2;
      ppidl = 0LL;
      v17 = 1;
      v6 = (*(__int64 (__fastcall **)(void *, _QWORD, LPBC, const unsigned __int16 *, _QWORD, LPITEMIDLIST *, _QWORD))(v10 + 24))(
             ppv,
             0LL,
             ppbc,
             a1,
             0LL,
             &ppidl,
             0LL);
      wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&p_pidl);
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x183,
          (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
          (const char *)(unsigned int)v6);
LABEL_18:
        wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&pidl2,
          0LL);
        goto LABEL_15;
      }
      v21 = 0LL;
      v11 = ILCombine(pidl, pidl2);
      wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &v21,
        v11);
      v12 = (const ITEMIDLIST *)ILAppendHiddenStringW(v21, 3203334173LL, a1);
      v24 = v12;
      if ( !v12 )
      {
        wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v24,
          0LL);
        wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          &v21,
          0LL);
        wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&pidl2,
          0LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
        wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&pidl,
          0LL);
        wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)&v18);
        v6 = -2147024882;
        goto LABEL_24;
      }
      v21 = 0LL;
      v13 = SHCreateItemFromIDList(v12, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, (void **)a2);
      v6 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x18D,
          (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
          (const char *)(unsigned int)v13);
        wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v24,
          0LL);
        wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          &v21,
          0LL);
        goto LABEL_18;
      }
      wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v24,
        0LL);
      wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &v21,
        0LL);
      wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&pidl2,
        0LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
      wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&pidl,
        0LL);
    }
    wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)&v18);
    v6 = 0;
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x172,
    (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
    (const char *)(unsigned int)v4);
LABEL_24:
  wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)&ppbc);
  return (unsigned int)v6;
}
