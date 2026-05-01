/*
 * XREFs of ?InvokeInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@UViewOptions@@@Z @ 0x1800291B0
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x1800278A0 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@45678@@Z @ 0x18047BB10 (-OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetView@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@XZ @ 0x1800286C8 (-GetView@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UWindowId@UI@Windows@winrt@.c)
 *     ??$as@UIViewOptions@Text@Shell@Internal@Windows@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIViewOptions@Text@Shell@Internal@Windows@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180028728 (--$as@UIViewOptions@Text@Shell@Internal@Windows@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x180028798 (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ??0?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@QEAA@$$QEAV?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@@Z @ 0x1800287E0 (--0-$vector_impl@URect@Foundation@Windows@winrt@@V-$vector@URect@Foundation@Windows@winrt@@V-$al.c)
 *     ??0?$producers_base@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@winrt@@V?$tuple@UInputViewOptions@KeyboardHosting@Shell@Internal@Windows@winrt@@UIViewOptions@Text@3456@@std@@@impl@winrt@@QEAA@XZ @ 0x18002AB80 (--0-$producers_base@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@winr.c)
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??$_Reallocate@$0A@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAXAEA_K@Z @ 0x180465D90 (--$_Reallocate@$0A@@-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@s.c)
 *     ??$emplace_back@URect@Foundation@Windows@winrt@@@?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@QEAAAEAURect@Foundation@Windows@winrt@@$$QEAU2345@@Z @ 0x180477938 (--$emplace_back@URect@Foundation@Windows@winrt@@@-$vector@URect@Foundation@Windows@winrt@@V-$all.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7 #try_helpers=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::InvokeInputAppRequestedShow(
        __int64 a1,
        unsigned int a2,
        int *a3,
        __int64 a4)
{
  unsigned __int64 v7; // rax
  __int128 *v8; // rbx
  __int128 *v9; // rdi
  void *v10; // rax
  _QWORD *v11; // r11
  __int64 *v12; // rbx
  unsigned int v13; // xmm6_4
  unsigned int v14; // xmm7_4
  unsigned int v15; // xmm8_4
  unsigned int v16; // xmm9_4
  char *v17; // r12
  __int64 *v18; // rbx
  char v19; // di
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  char v23; // r9
  char v24; // r10
  char v25; // r11
  __int64 (__fastcall ***v26)(_QWORD, void *, __int64 *); // rdi
  __int64 v27; // rsi
  __int64 (__fastcall *v28)(__int64, _QWORD, __int128 *, __int64 *); // r12
  __int64 *v29; // rbx
  int v30; // eax
  int v32; // [rsp+20h] [rbp-F8h]
  __int64 *v33; // [rsp+30h] [rbp-E8h] BYREF
  int v34; // [rsp+38h] [rbp-E0h]
  __int128 v35; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v36; // [rsp+50h] [rbp-C8h] BYREF
  int v37; // [rsp+60h] [rbp-B8h]
  int v38; // [rsp+64h] [rbp-B4h]
  __int64 *v39; // [rsp+68h] [rbp-B0h] BYREF
  __int128 v40; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+80h] [rbp-98h]
  __int64 v42; // [rsp+88h] [rbp-90h]
  __int64 v43; // [rsp+90h] [rbp-88h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]

  v42 = a1;
  v43 = a4;
  v40 = 0LL;
  v41 = 0LL;
  v7 = (__int64)(*(_QWORD *)(a4 + 40) - *(_QWORD *)(a4 + 32)) >> 4;
  v33 = (__int64 *)v7;
  if ( v7 )
  {
    if ( v7 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
    std::vector<Windows::Foundation::Rect>::_Reallocate<0>(&v40, &v33);
  }
  v8 = *(__int128 **)(a4 + 32);
  v9 = *(__int128 **)(a4 + 40);
  while ( v8 != v9 )
  {
    v35 = *v8;
    std::vector<winrt::Windows::Foundation::Rect>::emplace_back<winrt::Windows::Foundation::Rect>(&v40, &v35);
    ++v8;
  }
  v10 = operator new(0x48uLL);
  winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>(
    (__int64)v10,
    (__int64)&v40);
  *v11 = &winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>::`vftable';
  v12 = (__int64 *)((unsigned __int64)(v11 + 2) & -(__int64)(v11 != 0LL));
  v33 = v12;
  winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
    &v33,
    &v39);
  if ( v12 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v33);
  v13 = *(_DWORD *)(a4 + 28);
  v14 = *(_DWORD *)(a4 + 24);
  v15 = *(_DWORD *)(a4 + 20);
  v16 = *(_DWORD *)(a4 + 16);
  v34 = *(_DWORD *)(a4 + 12);
  v38 = *(_DWORD *)(a4 + 8);
  v37 = *(_DWORD *)(a4 + 4);
  v17 = (char *)operator new(0x48uLL);
  v18 = v39;
  v33 = v39;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v33);
  v19 = *(_BYTE *)(a4 + 3);
  LOBYTE(v20) = *(_BYTE *)a4;
  *(_QWORD *)&v36 = __PAIR64__(v15, v16);
  *((_QWORD *)&v36 + 1) = __PAIR64__(v13, v14);
  v33 = 0LL;
  *(_QWORD *)&v35 = v18;
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions,std::tuple<winrt::Windows::Internal::Shell::KeyboardHosting::InputViewOptions,winrt::Windows::Internal::Shell::Text::IViewOptions>>::producers_base<winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions,std::tuple<winrt::Windows::Internal::Shell::KeyboardHosting::InputViewOptions,winrt::Windows::Internal::Shell::Text::IViewOptions>>(
    v17 + 16,
    v21,
    v22,
    v20);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>(v17 + 8, 1LL);
  *(_QWORD *)v17 = &winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions::`vftable';
  v17[32] = v23;
  v17[33] = v24;
  v17[34] = v25;
  v17[35] = v19;
  *((_DWORD *)v17 + 9) = v37;
  *((_DWORD *)v17 + 10) = v38;
  *((_DWORD *)v17 + 11) = v34;
  *((_OWORD *)v17 + 3) = v36;
  *((_QWORD *)v17 + 8) = v18;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)v17 + 8);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v35);
  *(_QWORD *)v17 = &winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions::`vftable';
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v33);
  v26 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))((unsigned __int64)(v17 + 16) & -(__int64)(v17 != 0LL));
  *(_QWORD *)&v35 = v26;
  v27 = *(_QWORD *)(v42 + 72);
  v28 = *(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, __int64 *))(*(_QWORD *)v27 + 80LL);
  winrt::impl::as<Windows::Internal::Shell::Text::IViewOptions,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v33,
    v26);
  *(float *)&v36 = (float)*a3;
  *((float *)&v36 + 1) = (float)a3[1];
  *((float *)&v36 + 2) = (float)(a3[2] - *a3);
  *((float *)&v36 + 3) = (float)(a3[3] - a3[1]);
  v29 = v33;
  v30 = v28(v27, a2, &v36, v33);
  if ( v30 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA2,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v30,
      v32);
  if ( v29 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v33);
  if ( v26 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v35);
  if ( v39 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v39);
  if ( (_QWORD)v40 )
    std::_Deallocate<16>(v40, (v41 - v40) & 0xFFFFFFFFFFFFFFF0uLL);
  std::vector<Geometry::CRect>::_Tidy((__int64 *)(a4 + 32));
  return 0LL;
}
