/*
 * XREFs of ?TryGetStagedPackagePathByFullNameAlloc@Common@ShellMRTHelper@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG_N@Z @ 0x1806593F8
 * Callers:
 *     ??R_lambda_d8d5e2edaa6c10768996e24008ba8fd8_@@QEBAJPEBGPEAPEAG@Z @ 0x18065795C (--R_lambda_d8d5e2edaa6c10768996e24008ba8fd8_@@QEBAJPEBGPEAPEAG@Z.c)
 * Callees:
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800ED100 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800EDA04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180186F60 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C8C48 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18035260C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x180475194 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall ShellMRTHelper::Common::TryGetStagedPackagePathByFullNameAlloc(
        void **a1,
        __int64 a2,
        unsigned __int8 a3)
{
  unsigned int v5; // edi
  unsigned int StagedPackagePathByFullName2; // eax
  const char *v7; // r9
  void **v8; // rax
  unsigned int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v13 = 0;
  v5 = 2 * a3;
  StagedPackagePathByFullName2 = GetStagedPackagePathByFullName2(a2, v5, &v13, 0LL);
  if ( StagedPackagePathByFullName2 == 122 )
  {
    v8 = (void **)wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
                    &v12,
                    0LL,
                    (unsigned int)(v13 - 1),
                    v7);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
      a1,
      v8);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v12);
    if ( *a1 )
    {
      v9 = GetStagedPackagePathByFullName2(a2, v5, &v13, *a1);
      if ( v9 )
        wil::details::in1diag3::_Log_Win32(
          retaddr,
          221LL,
          (__int64)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.Common.h",
          (const char *)v9);
    }
    else
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0xE1,
        (__int64)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.Common.h",
        (const char *)0x8007000ELL);
    }
  }
  else if ( StagedPackagePathByFullName2 != 1168 && StagedPackagePathByFullName2 != 15701 )
  {
    wil::details::in1diag3::Log_Win32(
      retaddr,
      232LL,
      (__int64)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.Common.h",
      (const char *)StagedPackagePathByFullName2);
  }
  return a1;
}
