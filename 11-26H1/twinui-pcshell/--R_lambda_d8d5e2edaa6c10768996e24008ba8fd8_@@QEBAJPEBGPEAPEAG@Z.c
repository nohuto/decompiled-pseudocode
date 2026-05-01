/*
 * XREFs of ??R_lambda_d8d5e2edaa6c10768996e24008ba8fd8_@@QEBAJPEBGPEAPEAG@Z @ 0x18067D9C8
 * Callers:
 *     ?TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z @ 0x1802B12AC (-TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800AAD0C (--1-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180173FA4 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180294C50 (-reset@-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 *     ?TryGetStagedPackagePathByFullNameAlloc@Common@ShellMRTHelper@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG_N@Z @ 0x18067F428 (-TryGetStagedPackagePathByFullNameAlloc@Common@ShellMRTHelper@@YA-AV-$unique_any_t@V-$unique_sto.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _lambda_d8d5e2edaa6c10768996e24008ba8fd8_::operator()(HSTRING *a1, const WCHAR *a2, PWSTR *a3)
{
  HSTRING v6; // rcx
  const WCHAR *StringRawBuffer; // rax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  HSTRING v11; // rcx
  const WCHAR *v12; // r15
  bool v13; // bl
  PCWSTR v14; // rax
  __int64 v15; // r8
  const WCHAR *v16; // rcx
  __int64 v17; // rdx
  HRESULT v18; // eax
  HRESULT v19; // eax
  void **v20; // rax
  HRESULT v21; // eax
  HRESULT v22; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  int v24; // [rsp+60h] [rbp+40h] BYREF
  PWSTR pszPath; // [rsp+70h] [rbp+50h] BYREF
  PWSTR ppszPathOut; // [rsp+78h] [rbp+58h] BYREF

  *a3 = 0LL;
  v6 = *a1;
  if ( v6 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(v6, 0LL);
    v8 = PathAllocCombine(StringRawBuffer, a2, 1u, a3);
    if ( (v8 & 0x80000000) != 0 )
    {
      v9 = 263LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.Common.h",
        (const char *)v8);
      return v8;
    }
  }
  else
  {
    v11 = a1[1];
    if ( v11 )
    {
      v24 = 0;
      v12 = WindowsGetStringRawBuffer(v11, 0LL);
      v8 = IsMrtResourceRedirectionEnabled(v12, &v24);
      if ( (v8 & 0x80000000) != 0 )
      {
        v9 = 272LL;
        goto LABEL_4;
      }
      v13 = v24 == 0;
      v14 = WindowsGetStringRawBuffer(a1[1], 0LL);
      LOBYTE(v15) = v13;
      ShellMRTHelper::Common::TryGetStagedPackagePathByFullNameAlloc(&pszPath, v14, v15);
      v16 = pszPath;
      if ( pszPath )
      {
        if ( v24 )
        {
          v17 = -1LL;
          do
            ++v17;
          while ( pszPath[v17] );
          v18 = PathCchRemoveFileSpec(pszPath, v17 + 1);
          v8 = v18;
          if ( v18 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x11B,
              (int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.Common.h",
              (const char *)(unsigned int)v18);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&pszPath);
            return v8;
          }
          ppszPathOut = 0LL;
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
            (void **)&ppszPathOut,
            0LL);
          v19 = PathAllocCombine(pszPath, L"Resources", 1u, &ppszPathOut);
          v8 = v19;
          if ( v19 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x11D,
              (int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.Common.h",
              (const char *)(unsigned int)v19);
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&ppszPathOut);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&pszPath);
            return v8;
          }
          v20 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&pszPath);
          v21 = PathAllocCombine(ppszPathOut, v12, 1u, (PWSTR *)v20);
          v8 = v21;
          if ( v21 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x11E,
              (int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.Common.h",
              (const char *)(unsigned int)v21);
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&ppszPathOut);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&pszPath);
            return v8;
          }
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&ppszPathOut);
          v16 = pszPath;
        }
        v22 = PathAllocCombine(v16, a2, 1u, a3);
        v8 = v22;
        if ( v22 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x121,
            (int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.Common.h",
            (const char *)(unsigned int)v22);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&pszPath);
          return v8;
        }
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&pszPath);
    }
  }
  return 0LL;
}
