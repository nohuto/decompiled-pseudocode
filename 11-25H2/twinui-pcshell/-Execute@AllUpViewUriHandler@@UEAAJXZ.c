/*
 * XREFs of ?Execute@AllUpViewUriHandler@@UEAAJXZ @ 0x180486180
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BEFC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800EDA04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180181C58 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ??$As@UIShellItem2@@@?$ComPtr@UIShellItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIShellItem2@@@WRL@Microsoft@@@Details@12@@Z @ 0x180485CE8 (--$As@UIShellItem2@@@-$ComPtr@UIShellItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIShellIt.c)
 *     ?ParseFlagsFromUriPath@AllUpViewUriHandler@@AEAAJPEBGPEAW4ALL_UP_VIEW_FLAGS@@@Z @ 0x180486330 (-ParseFlagsFromUriPath@AllUpViewUriHandler@@AEAAJPEBGPEAW4ALL_UP_VIEW_FLAGS@@@Z.c)
 *     ?ShowAllUpView@AllUpViewUriHandler@@AEAAJW4ALL_UP_VIEW_FLAGS@@@Z @ 0x18048660C (-ShowAllUpView@AllUpViewUriHandler@@AEAAJW4ALL_UP_VIEW_FLAGS@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AllUpViewUriHandler::Execute(AllUpViewUriHandler *this)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  __int64 (__fastcall *v3)(__int64, _QWORD, _QWORD); // rbx
  int v4; // eax
  int v5; // eax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64, void **); // rdi
  void **v8; // rax
  int v9; // eax
  AllUpViewUriHandler *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  unsigned int v15; // [rsp+40h] [rbp+20h] BYREF
  __int64 v16; // [rsp+48h] [rbp+28h] BYREF
  unsigned __int16 *v17; // [rsp+50h] [rbp+30h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp+38h] BYREF

  v1 = *((_QWORD *)this + 3);
  if ( v1 )
  {
    v18 = 0LL;
    v3 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v1 + 64LL);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v18);
    v4 = v3(v1, 0LL, &v18);
    v2 = v4;
    if ( v4 >= 0 )
    {
      v16 = 0LL;
      v5 = Microsoft::WRL::ComPtr<IShellItem>::As<IShellItem2>(&v18, &v16);
      v2 = v5;
      if ( v5 >= 0 )
      {
        v17 = 0LL;
        v6 = v16;
        v7 = *(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v16 + 40LL);
        v8 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&v17);
        v9 = v7(v6, 2147909632LL, v8);
        v2 = v9;
        if ( v9 >= 0 )
        {
          v15 = 0;
          v9 = AllUpViewUriHandler::ParseFlagsFromUriPath(v10, v17, (enum ALL_UP_VIEW_FLAGS *)&v15);
          v2 = v9;
          if ( v9 >= 0 )
          {
            v9 = AllUpViewUriHandler::ShowAllUpView(v12, v15);
            v2 = v9;
            if ( v9 >= 0 )
            {
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v17);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
              v2 = 0;
              goto LABEL_16;
            }
            v11 = 58LL;
          }
          else
          {
            v11 = 57LL;
          }
        }
        else
        {
          v11 = 54LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
          (const char *)(unsigned int)v9);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v17);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x33,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
          (const char *)(unsigned int)v5);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
        (const char *)(unsigned int)v4);
    }
LABEL_16:
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v18);
    return v2;
  }
  v2 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2D,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
    (const char *)0x8000FFFFLL);
  return v2;
}
