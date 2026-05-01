/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18057DD30
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?as@IUnknown@Foundation@Windows@winrt@@QEBA?AUhresult@4@AEBUguid@4@PEAPEAX@Z @ 0x18021A770 (-as@IUnknown@Foundation@Windows@winrt@@QEBA-AUhresult@4@AEBUguid@4@PEAPEAX@Z.c)
 *     ??0?$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x180232A68 (--0-$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@details@w.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::CreateInstance(
        __int64 a1,
        __int64 a2,
        int *a3,
        _QWORD *a4)
{
  _QWORD *v7; // rbx
  char v8; // cl
  char v9; // dl
  char v10; // r8
  char v11; // r10
  char v12; // r11
  char v13; // di
  char v14; // si
  int v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+28h] [rbp-40h] BYREF
  int v17; // [rsp+30h] [rbp-38h] BYREF
  __int16 v18; // [rsp+34h] [rbp-34h]
  __int16 v19; // [rsp+36h] [rbp-32h]
  char v20; // [rsp+38h] [rbp-30h]
  char v21; // [rsp+39h] [rbp-2Fh]
  char v22; // [rsp+3Ah] [rbp-2Eh]
  char v23; // [rsp+3Bh] [rbp-2Dh]
  char v24; // [rsp+3Ch] [rbp-2Ch]
  char v25; // [rsp+3Dh] [rbp-2Bh]
  char v26; // [rsp+3Eh] [rbp-2Ah]
  char v27; // [rsp+3Fh] [rbp-29h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a4 = 0LL;
  if ( a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/cppwinrt_wrl.h",
      (const char *)0x80040110LL);
    return 2147746064LL;
  }
  else
  {
    v7 = operator new(0x370uLL);
    memset_0(v7, 0, 0x370uLL);
    wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)v7);
    *v7 = &winrt::Windows::Internal::Shell::implementation::WindowTabHost::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,IApplicationViewChangeListener,void>'};
    v7[1] = &winrt::Windows::Internal::Shell::implementation::WindowTabHost::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,IImmersiveSettingsCacheNotification,void>'};
    v7[2] = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,void>'};
    v7[3] = &winrt::Windows::Internal::Shell::implementation::WindowTabHost::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,Windows::Internal::Shell::IWindowTabHostInternal,void>'};
    v7[6] = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
    v7[7] = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
    v7[8] = &winrt::implements<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::Shell::WindowTabHost,winrt::Windows::Internal::Shell::IWindowTabHost,winrt::immersive_shell_component,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,winrt::cloaked<Windows::Internal::Shell::IWindowTabHostInternal>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
    v7[10] = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::`vftable';
    v16 = (unsigned __int64)(v7 + 4) & -(__int64)(v7 != 0LL);
    v8 = *((_BYTE *)a3 + 8);
    v9 = *((_BYTE *)a3 + 9);
    v10 = *((_BYTE *)a3 + 10);
    v11 = *((_BYTE *)a3 + 11);
    v12 = *((_BYTE *)a3 + 12);
    LOBYTE(v7) = *((_BYTE *)a3 + 13);
    v13 = *((_BYTE *)a3 + 14);
    v14 = *((_BYTE *)a3 + 15);
    v17 = *a3;
    v18 = *((_WORD *)a3 + 2);
    v19 = *((_WORD *)a3 + 3);
    v20 = v8;
    v21 = v9;
    v22 = v10;
    v23 = v11;
    v24 = v12;
    v25 = (char)v7;
    v26 = v13;
    v27 = v14;
    LODWORD(v7) = *winrt::Windows::Foundation::IUnknown::as(&v16, &v15, (__int64)&v17, (__int64)a4);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
    return (unsigned int)v7;
  }
}
