/*
 * XREFs of winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync$_ResumeCoro$1 @ 0x1805BA650
 * Callers:
 *     ?LaunchSnappedWindowsInternalAsync@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUfire_and_forget@7@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@U?$com_ptr@UIServiceProvider@@@7@AEBUCRect@Geometry@@I@Z @ 0x1805BAC30 (-LaunchSnappedWindowsInternalAsync@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@I.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002C6F8 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x18002E5B4 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x18012BE08 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801E6D48 (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C047C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_Emplace_reallocate@$$V@?$vector@HV?$allocator@H@std@@@std@@AEAAPEAHQEAH@Z @ 0x1805B7ABC (--$_Emplace_reallocate@$$V@-$vector@HV-$allocator@H@std@@@std@@AEAAPEAHQEAH@Z.c)
 *     ??$_Reallocate@$0A@@?$vector@HV?$allocator@H@std@@@std@@AEAAXAEA_K@Z @ 0x1805B8448 (--$_Reallocate@$0A@@-$vector@HV-$allocator@H@std@@@std@@AEAAXAEA_K@Z.c)
 *     ??$capture@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBU7@@winrt@@YA?AU?$com_ptr@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@1@Z @ 0x1805B8908 (--$capture@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@A6AJPEAUIUnknown@@AEBU_GUID@@.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync_::_34_::_parameters_::__parameters_ @ 0x1805B990C (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutManager--Launc.c)
 *     ?TryLaunchWithRegisteredAumidAndSnapId@SnapLauncher@@YA_NAEBUhstring@winrt@@0H@Z @ 0x1805C304C (-TryLaunchWithRegisteredAumidAndSnapId@SnapLauncher@@YA_NAEBUhstring@winrt@@0H@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync__ResumeCoro_1(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  unsigned int v5; // r8d
  const char *v6; // r9
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r15
  float v10; // xmm3_4
  float v11; // xmm2_4
  void (__fastcall *v12)(_QWORD, _QWORD, __int64); // rax
  __int64 v13; // r8
  __int64 v14; // r14
  __int64 (__fastcall *v15)(__int64); // r12
  int v16; // eax
  unsigned int v17; // r8d
  __int64 v18; // r15
  unsigned int *j; // rsi
  __int64 v20; // rsi
  __int64 v21; // r15
  unsigned __int64 v22; // r8
  unsigned int i; // r15d
  __int64 v24; // rsi
  unsigned int v25; // r13d
  int v26; // ecx
  __int64 v27; // r12
  unsigned int v28; // r8d
  __int64 v29; // r9
  int v30; // eax
  _BYTE *v31; // [rsp+48h] [rbp-90h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_46;
      case 2:
        *((_QWORD *)a1 + 2) = *((_QWORD *)a1 + 28);
        winrt::capture<Windows::Internal::Shell::WindowSnapping::ISnapComponent2,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,_GUID const &>(
          (_QWORD *)a1 + 3,
          (__int64 (__fastcall *)(__int64, GUID *, void *, __int64 *))IUnknown_QueryService,
          (__int64 *)a1 + 2);
        *((_QWORD *)a1 + 4) = 0LL;
        *((_QWORD *)a1 + 5) = 0LL;
        *((_QWORD *)a1 + 6) = 0LL;
        v7 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)a1 + 26) - *((_QWORD *)a1 + 25)) >> 3);
        *((_QWORD *)a1 + 22) = v7;
        if ( v7 )
        {
          if ( v7 > 0x3FFFFFFFFFFFFFFFLL )
            std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
          std::vector<int>::_Reallocate<0>((const void **)a1 + 4, (unsigned __int64 *)a1 + 22);
        }
        v8 = *((_QWORD *)a1 + 25);
        v9 = *((_QWORD *)a1 + 26);
        break;
      case 4:
        for ( i = 0; ; ++i )
        {
          v24 = *((_QWORD *)a1 + 25);
          if ( i >= 0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)a1 + 26) - v24) >> 3) )
            break;
          v25 = *(_DWORD *)(*((_QWORD *)a1 + 4) + 4LL * i);
          v26 = *(_DWORD *)(v24 + 40LL * i);
          if ( v26 )
          {
            if ( v26 != 1 )
              wil::details::in1diag3::_FailFast_Unexpected(
                retaddr,
                (void *)0x218,
                (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
                a4);
            v27 = v24 + 40LL * i;
            if ( SnapLauncher::TryLaunchWithRegisteredAumidAndSnapId(
                   (SnapLauncher *)(v27 + 8),
                   (const struct winrt::hstring *)(v24 + 16 + 40LL * i),
                   (const struct winrt::hstring *)v25,
                   (int)a4) )
            {
              LOBYTE(v29) = *(_DWORD *)(v24 + 40LL * i) == 1;
              v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)a1 + 3) + 96LL))(
                      *((_QWORD *)a1 + 3),
                      v25,
                      a1[60],
                      v29);
              if ( v30 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x21D,
                  (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
                  (const char *)(unsigned int)v30);
            }
            else
            {
              *((_QWORD *)a1 + 16) = 0LL;
              winrt::hstring::operator=((struct winrt::impl::hstring_header **)a1 + 16, (__int64 *)(v27 + 8), v28);
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)a1 + 3) + 120LL))(
                *((_QWORD *)a1 + 3),
                *((_QWORD *)a1 + 16),
                a1[60]);
              wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>((HSTRING *)a1 + 16);
            }
          }
          else
          {
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x214,
              (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
              (const char *)0x80004001LL);
          }
        }
        std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64 *)a1 + 4);
        if ( *((_QWORD *)a1 + 3) )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 3);
        goto LABEL_46;
      case 5:
        std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64 *)a1 + 4);
        if ( *((_QWORD *)a1 + 3) )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 3);
        goto LABEL_46;
      default:
        __debugbreak();
        return;
    }
    while ( 1 )
    {
      if ( v8 == v9 )
      {
        v22 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)a1 + 26) - *((_QWORD *)a1 + 25)) >> 3);
        if ( v22 != (__int64)(*((_QWORD *)a1 + 5) - *((_QWORD *)a1 + 4)) >> 2 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x1F8,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
            v6);
        *((_BYTE *)a1 + 120) = 0;
        *((_WORD *)a1 + 4) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(
          (__int64)retaddr,
          (void (*)(void *, void *))a1,
          (void *)v22);
        return;
      }
      v10 = *(float *)(v8 + 28);
      v11 = *(float *)(v8 + 24);
      *(_OWORD *)(a1 + 18) = 0LL;
      *((float *)a1 + 18) = (float)(int)v11;
      *((float *)a1 + 19) = (float)(int)v10;
      *((float *)a1 + 20) = (float)((int)(float)(v11 + *(float *)(v8 + 32)) - (int)v11);
      *((float *)a1 + 21) = (float)((int)(float)(v10 + *(float *)(v8 + 36)) - (int)v10);
      *(_OWORD *)(a1 + 14) = *(_OWORD *)(a1 + 18);
      if ( *(_DWORD *)v8 == 1 )
      {
        *((_QWORD *)a1 + 11) = 0LL;
        winrt::hstring::operator=((struct winrt::impl::hstring_header **)a1 + 11, (__int64 *)(v8 + 8), v5);
        v12 = *(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)a1 + 3) + 104LL);
        v13 = a1[60];
        *((_OWORD *)a1 + 9) = *(_OWORD *)(a1 + 14);
        v12(*((_QWORD *)a1 + 3), *((_QWORD *)a1 + 11), v13);
        wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>((HSTRING *)a1 + 11);
      }
      v14 = *((_QWORD *)a1 + 3);
      v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 72LL);
      v31 = (_BYTE *)*((_QWORD *)a1 + 5);
      if ( v31 == *((_BYTE **)a1 + 6) )
      {
        std::vector<int>::_Emplace_reallocate<>((_QWORD *)a1 + 4, v31);
      }
      else
      {
        **((_DWORD **)a1 + 5) = 0;
        *((_QWORD *)a1 + 5) += 4LL;
      }
      *((_OWORD *)a1 + 10) = *(_OWORD *)(a1 + 14);
      v16 = v15(v14);
      if ( v16 < 0 )
        break;
      v8 += 40LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1DA,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
      (const char *)(unsigned int)v16);
    v18 = *((_QWORD *)a1 + 5) - 4LL;
    *((_QWORD *)a1 + 5) = v18;
    for ( j = (unsigned int *)*((_QWORD *)a1 + 4); j != (unsigned int *)v18; ++j )
    {
      *((_OWORD *)a1 + 6) = 0LL;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a1 + 3) + 80LL))(*((_QWORD *)a1 + 3), *j);
    }
    v20 = *((_QWORD *)a1 + 25);
    v21 = *((_QWORD *)a1 + 26);
    while ( v20 != v21 )
    {
      if ( *(_DWORD *)v20 == 1 )
      {
        *((_QWORD *)a1 + 14) = 0LL;
        winrt::hstring::operator=((struct winrt::impl::hstring_header **)a1 + 14, (__int64 *)(v20 + 8), v17);
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)a1 + 3) + 120LL))(
          *((_QWORD *)a1 + 3),
          *((_QWORD *)a1 + 14),
          a1[60]);
        wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>((HSTRING *)a1 + 14);
      }
      v20 += 40LL;
    }
    std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64 *)a1 + 4);
    if ( *((_QWORD *)a1 + 3) )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 3);
LABEL_46:
    winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync_::_34_::_parameters_::__parameters_((__int64)(a1 + 50));
    if ( *((_WORD *)a1 + 5) )
      operator delete(a1, (const struct std::nothrow_t *)0x100);
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
