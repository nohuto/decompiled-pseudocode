/*
 * XREFs of ?FilterMessage@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA_N_K@Z @ 0x18044E508
 * Callers:
 *     ?FilterMessage@?$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK@34567@@impl@winrt@@UEAAH_KPEA_N@Z @ 0x18044E4C0 (-FilterMessage@-$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shel.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHINSTANCE__@@@Z @ 0x180052D40 (-reset@-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1802C5D28 (--1-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-$int.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180319310 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::FilterMessage(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK *this,
        __int64 a2)
{
  HMODULE *v2; // rbx
  HMODULE v4; // rcx
  HMODULE LibraryW; // rax
  const char *v7; // r9
  FARPROC ProcAddress; // rax
  const char *v9; // r9
  HMODULE v11[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (HMODULE *)((char *)this + 136);
  v4 = (HMODULE)*((_QWORD *)this + 17);
  if ( !v4 )
  {
    LibraryW = LoadLibraryW(L"Microsoft.UI.Windowing.Core.dll");
    v11[0] = LibraryW;
    if ( v2 != v11 )
    {
      wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::reset(
        v2,
        LibraryW);
      v11[0] = 0LL;
    }
    wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>(v11);
    v4 = *v2;
    if ( !*v2 )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0xC4,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostChildWindow_WASDK.cpp",
        v7);
  }
  ProcAddress = (FARPROC)*((_QWORD *)this + 18);
  if ( !ProcAddress )
  {
    ProcAddress = GetProcAddress(v4, "ContentPreTranslateMessage");
    *((_QWORD *)this + 18) = ProcAddress;
    if ( !ProcAddress )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0xCB,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostChildWindow_WASDK.cpp",
        v9);
  }
  return ((unsigned int (__fastcall *)(__int64))ProcAddress)(a2) != 0;
}
