/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180188310
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x1801884A0 (--0-$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@d.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>::CreateInstance(
        __int64 a1,
        __int64 a2,
        int *a3,
        _QWORD *a4)
{
  _QWORD *v6; // rbx
  char v7; // cl
  char v8; // dl
  char v9; // r9
  char v10; // r10
  char v11; // r11
  char v12; // di
  char v13; // si
  unsigned int v14; // ebx
  __int64 (__fastcall ***v16)(_QWORD, int *, _QWORD *); // [rsp+20h] [rbp-38h] BYREF
  int v17; // [rsp+28h] [rbp-30h] BYREF
  __int16 v18; // [rsp+2Ch] [rbp-2Ch]
  __int16 v19; // [rsp+2Eh] [rbp-2Ah]
  char v20; // [rsp+30h] [rbp-28h]
  char v21; // [rsp+31h] [rbp-27h]
  char v22; // [rsp+32h] [rbp-26h]
  char v23; // [rsp+33h] [rbp-25h]
  char v24; // [rsp+34h] [rbp-24h]
  char v25; // [rsp+35h] [rbp-23h]
  char v26; // [rsp+36h] [rbp-22h]
  char v27; // [rsp+37h] [rbp-21h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

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
    v6 = operator new(0x80uLL);
    memset_0(v6, 0, 0x80uLL);
    wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>(v6);
    *v6 = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager,std::tuple<IImeContextMenuExperienceManager>>'};
    v6[1] = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
    v6[2] = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
    v6[3] = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
    v6[5] = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>>::`vftable'{for `winrt::immersive_shell_component'};
    v16 = (__int64 (__fastcall ***)(_QWORD, int *, _QWORD *))((unsigned __int64)(v6 + 1) & -(__int64)(v6 != 0LL));
    v7 = *((_BYTE *)a3 + 8);
    v8 = *((_BYTE *)a3 + 9);
    v9 = *((_BYTE *)a3 + 10);
    v10 = *((_BYTE *)a3 + 11);
    v11 = *((_BYTE *)a3 + 12);
    LOBYTE(v6) = *((_BYTE *)a3 + 13);
    v12 = *((_BYTE *)a3 + 14);
    v13 = *((_BYTE *)a3 + 15);
    v17 = *a3;
    v18 = *((_WORD *)a3 + 2);
    v19 = *((_WORD *)a3 + 3);
    v20 = v7;
    v21 = v8;
    v22 = v9;
    v23 = v10;
    v24 = v11;
    v25 = (char)v6;
    v26 = v12;
    v27 = v13;
    v14 = (**v16)(v16, &v17, a4);
    if ( v16 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v16);
    return v14;
  }
}
