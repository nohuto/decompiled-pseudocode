/*
 * XREFs of ?InvokeInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@UViewOptions@@@Z @ 0x1800A935C
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x1800A7510 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@45678@@Z @ 0x18046D950 (-OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$producers_base@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@winrt@@V?$tuple@UInputViewOptions@KeyboardHosting@Shell@Internal@Windows@winrt@@UIViewOptions@Text@3456@@std@@@impl@winrt@@QEAA@XZ @ 0x1800A9700 (--0-$producers_base@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@winr.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x1800A982C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ??$as@UIViewOptions@Text@Shell@Internal@Windows@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIViewOptions@Text@Shell@Internal@Windows@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800A9898 (--$as@UIViewOptions@Text@Shell@Internal@Windows@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@.c)
 *     ?GetView@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@XZ @ 0x1800A9908 (-GetView@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UWindowId@UI@Windows@winrt@.c)
 *     ??0?$producers_base@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@V?$tuple@U?$IVector@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@U?$IVectorView@URect@Foundation@Windows@winrt@@@2345@U?$IIterable@URect@Foundation@Windows@winrt@@@2345@@std@@@impl@winrt@@QEAA@XZ @ 0x1800A9968 (--0-$producers_base@U-$vector_impl@URect@Foundation@Windows@winrt@@V-$vector@URect@Foundation@Wi.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x1802B070C (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@URect@Foundation@Windows@@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAPEAURect@Foundation@Windows@@QEAU234@$$QEAU234@@Z @ 0x180459A28 (--$_Emplace_reallocate@URect@Foundation@Windows@@@-$vector@URect@Foundation@Windows@@V-$allocato.c)
 *     ??$_Reallocate@$0A@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAXAEA_K@Z @ 0x180459B8C (--$_Reallocate@$0A@@-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@s.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7 #try_helpers=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::InvokeInputAppRequestedShow(
        __int64 a1,
        unsigned int a2,
        int *a3,
        __int64 a4)
{
  unsigned __int64 v6; // rax
  __int128 *v7; // rbx
  __int128 *v8; // rdi
  _OWORD *v9; // rdx
  char *v10; // rax
  __int64 v11; // r10
  _OWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rbx
  int v17; // r12d
  _QWORD *v18; // r15
  __int64 v19; // rbx
  char v20; // di
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  char v24; // r9
  char v25; // r10
  char v26; // r11
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 (__fastcall *v29)(__int64, _QWORD, __int128 *, unsigned __int64); // r15
  __int64 v30; // rbx
  int v31; // eax
  __int128 v33; // xmm0
  int v34; // [rsp+20h] [rbp-C8h]
  __int64 v35; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v36; // [rsp+38h] [rbp-B0h]
  int v37; // [rsp+3Ch] [rbp-ACh]
  __int128 v38; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int64 v39; // [rsp+50h] [rbp-98h] BYREF
  __int128 v40; // [rsp+58h] [rbp-90h]
  __int128 v41; // [rsp+68h] [rbp-80h] BYREF
  _OWORD *v42; // [rsp+78h] [rbp-70h]
  int v43; // [rsp+80h] [rbp-68h]
  __int64 v44; // [rsp+88h] [rbp-60h] BYREF
  __int128 v45; // [rsp+90h] [rbp-58h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v36 = a2;
  *(_QWORD *)&v45 = a1;
  v46 = a4;
  v41 = 0LL;
  v42 = 0LL;
  v6 = (__int64)(*(_QWORD *)(a4 + 40) - *(_QWORD *)(a4 + 32)) >> 4;
  v39 = v6;
  if ( v6 )
  {
    if ( v6 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
    std::vector<Windows::Foundation::Rect>::_Reallocate<0>(&v41, &v39);
  }
  v7 = *(__int128 **)(a4 + 32);
  v8 = *(__int128 **)(a4 + 40);
  v9 = (_OWORD *)*((_QWORD *)&v41 + 1);
  while ( v7 != v8 )
  {
    v33 = *v7;
    v38 = *v7;
    if ( v9 == v42 )
    {
      std::vector<Windows::Foundation::Rect>::_Emplace_reallocate<Windows::Foundation::Rect>(&v41, v9, &v38);
      v9 = (_OWORD *)*((_QWORD *)&v41 + 1);
    }
    else
    {
      *v9++ = v33;
      *((_QWORD *)&v41 + 1) = v9;
    }
    ++v7;
  }
  v10 = (char *)operator new(0x48uLL);
  winrt::impl::producers_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,std::tuple<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Rect>>>::producers_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,std::tuple<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Rect>>>(v10 + 16);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(v11 + 8) = 1LL;
  *(_DWORD *)(v11 + 40) = 0;
  v12 = v42;
  v42 = 0LL;
  v13 = *((_QWORD *)&v41 + 1);
  v14 = v41;
  v41 = 0uLL;
  *(_QWORD *)(v11 + 48) = v14;
  *(_QWORD *)(v11 + 56) = v13;
  *(_QWORD *)(v11 + 64) = v12;
  *(_QWORD *)v11 = &winrt::impl::heap_implements<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>>::`vftable';
  v16 = v15 & -(__int64)(v11 != 0);
  v35 = v16;
  winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
    &v35,
    &v44);
  if ( v16 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v35);
  v40 = *(_OWORD *)(a4 + 16);
  v17 = *(_DWORD *)(a4 + 12);
  v37 = *(_DWORD *)(a4 + 8);
  v43 = *(_DWORD *)(a4 + 4);
  v18 = operator new(0x48uLL);
  v19 = v44;
  v35 = v44;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v35);
  v20 = *(_BYTE *)(a4 + 3);
  LOBYTE(v21) = *(_BYTE *)a4;
  v35 = 0LL;
  *(_QWORD *)&v38 = v19;
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions,std::tuple<winrt::Windows::Internal::Shell::KeyboardHosting::InputViewOptions,winrt::Windows::Internal::Shell::Text::IViewOptions>>::producers_base<winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions,std::tuple<winrt::Windows::Internal::Shell::KeyboardHosting::InputViewOptions,winrt::Windows::Internal::Shell::Text::IViewOptions>>(
    v18 + 2,
    v22,
    v23,
    v21);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  v18[1] = 1LL;
  *v18 = &winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions::`vftable';
  *((_BYTE *)v18 + 32) = v24;
  *((_BYTE *)v18 + 33) = v25;
  *((_BYTE *)v18 + 34) = v26;
  *((_BYTE *)v18 + 35) = v20;
  *((_DWORD *)v18 + 9) = v43;
  *((_DWORD *)v18 + 10) = v37;
  *((_DWORD *)v18 + 11) = v17;
  *((_OWORD *)v18 + 3) = v40;
  v18[8] = v19;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v18 + 8);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v38);
  *v18 = &winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions::`vftable';
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v35);
  v27 = (unsigned __int64)(v18 + 2) & -(__int64)(v18 != 0LL);
  *(_QWORD *)&v38 = v27;
  v28 = *(_QWORD *)(v45 + 72);
  v29 = *(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, unsigned __int64))(*(_QWORD *)v28 + 80LL);
  winrt::impl::as<Windows::Internal::Shell::Text::IViewOptions,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v39,
    v27);
  *(float *)&v40 = (float)*a3;
  *((float *)&v40 + 1) = (float)a3[1];
  *((float *)&v40 + 2) = (float)(a3[2] - *a3);
  *((float *)&v40 + 3) = (float)(a3[3] - a3[1]);
  v45 = v40;
  v30 = v39;
  v31 = v29(v28, v36, &v45, v39);
  if ( v31 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9F,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v31,
      v34);
  if ( v30 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v39);
  if ( v27 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v38);
  if ( v44 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v44);
  std::vector<Geometry::CRect>::_Tidy(a4 + 32);
  return 0LL;
}
