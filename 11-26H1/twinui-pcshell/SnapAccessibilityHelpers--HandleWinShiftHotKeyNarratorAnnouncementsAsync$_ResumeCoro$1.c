/*
 * XREFs of SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1 @ 0x1805BEF10
 * Callers:
 *     ?HandleWinShiftHotKeyNarratorAnnouncementsAsync@SnapAccessibilityHelpers@@YA?AUfire_and_forget@winrt@@PEAUHWND__@@W4_SHELLSETWINDOWPOS_STATE@@UCRect@Geometry@@2PEAUIImmersiveMonitorManager@@@Z @ 0x1805BF404 (-HandleWinShiftHotKeyNarratorAnnouncementsAsync@SnapAccessibilityHelpers@@YA-AUfire_and_forget@w.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x180047744 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x18016CF88 (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCRect@Geometry@.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801E6D48 (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ??$create_instance@UIServiceProvider@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x180208D68 (--$create_instance@UIServiceProvider@@@winrt@@YA-A_PAEBUguid@0@IPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?InitializeResMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18054A27C (-InitializeResMessage@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@Q.c)
 *     ??1MonitorIDFinder@SnapAccessibilityHelpers@@QEAA@XZ @ 0x1805AE654 (--1MonitorIDFinder@SnapAccessibilityHelpers@@QEAA@XZ.c)
 *     ??0MonitorIDFinder@SnapAccessibilityHelpers@@QEAA@XZ @ 0x1805BE6BC (--0MonitorIDFinder@SnapAccessibilityHelpers@@QEAA@XZ.c)
 *     ?BuildMonitorUIIDListString@SnapAccessibilityHelpers@@YA?AV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBV?$vector@IV?$allocator@I@std@@@std@@@Z @ 0x1805BEA78 (-BuildMonitorUIIDListString@SnapAccessibilityHelpers@@YA-AV-$NativeString@V-$CoTaskMemPolicy@G@I.c)
 *     ?GetResourceForRegion@SnapAccessibilityHelpers@@YAIW4SnapRegion@@M_N@Z @ 0x1805BEB40 (-GetResourceForRegion@SnapAccessibilityHelpers@@YAIW4SnapRegion@@M_N@Z.c)
 *     ?GetUIIDs@MonitorIDFinder@SnapAccessibilityHelpers@@QEBA?AV?$vector@IV?$allocator@I@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x1805BECF8 (-GetUIIDs@MonitorIDFinder@SnapAccessibilityHelpers@@QEBA-AV-$vector@IV-$allocator@I@std@@@std@@P.c)
 *     ?RaiseSnapHotkeyResultsUiaNotification@SnapAccessibilityHelpers@@YAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x1805BF4C8 (-RaiseSnapHotkeyResultsUiaNotification@SnapAccessibilityHelpers@@YAXAEAV-$NativeString@V-$CoTask.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync__ResumeCoro_1(
        char *a1,
        __int64 a2,
        void *a3)
{
  _QWORD *v4; // r12
  __int64 *v5; // r15
  __int64 v6; // rbx
  int (__fastcall *v7)(__int64, _QWORD, char *); // rbx
  SnapRectHelpers **v8; // r15
  __int64 v9; // rdi
  int (__fastcall *v10)(__int64, HMONITOR, char *); // rbx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  unsigned int ResourceForRegion; // edi
  float v15; // xmm6_4
  int v16; // eax
  void **v17; // rbx
  unsigned __int16 **v18; // r8
  __int64 v19; // r8
  const char *v20; // r9
  HMONITOR v21; // [rsp+38h] [rbp-110h]
  SnapRectHelpers *v22; // [rsp+60h] [rbp-E8h]
  __int64 v24; // [rsp+78h] [rbp-D0h]

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
      case 5:
        goto LABEL_34;
      case 2:
        *((_WORD *)a1 + 4) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(
          (__int64)&_ImageBase,
          (void (*)(void *, void *))a1,
          a3);
        return;
      case 4:
        if ( !UiaClientsAreListening() )
          goto LABEL_34;
        *((GUID *)a1 + 1) = CLSID_ImmersiveShell;
        v4 = a1 + 32;
        winrt::create_instance<IServiceProvider>((__int64)(a1 + 32), (_DWORD)a1 + 16);
        v5 = (__int64 *)(a1 + 40);
        *((_QWORD *)a1 + 5) = 0LL;
        v6 = *((_QWORD *)a1 + 4);
        wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)a1 + 5);
        if ( (*(int (__fastcall **)(__int64, GUID *, GUID *, char *))(*(_QWORD *)v6 + 24LL))(
               v6,
               &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
               &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
               a1 + 40) < 0 )
          goto LABEL_32;
        *((_QWORD *)a1 + 6) = 0LL;
        v24 = *v5;
        v7 = *(int (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)*v5 + 48LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a1 + 6);
        if ( v7(v24, *((_QWORD *)a1 + 27), a1 + 48) < 0 )
          goto LABEL_31;
        v21 = MonitorFromRect((LPCRECT)(a1 + 244), 0);
        v8 = (SnapRectHelpers **)(a1 + 56);
        *((_QWORD *)a1 + 7) = 0LL;
        if ( !v21 )
          goto LABEL_30;
        v9 = *((_QWORD *)a1 + 33);
        v10 = *(int (__fastcall **)(__int64, HMONITOR, char *))(*(_QWORD *)v9 + 48LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1 + 7);
        if ( v10(v9, v21, a1 + 56) < 0 )
          goto LABEL_30;
        v11 = *((_DWORD *)a1 + 56);
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              if ( v13 == 1 )
              {
                v15 = (float)((*((_DWORD *)a1 + 63) - *((_DWORD *)a1 + 61))
                            * (*((_DWORD *)a1 + 64) - *((_DWORD *)a1 + 62)))
                    / (float)((*((_DWORD *)a1 + 59) - *((_DWORD *)a1 + 57))
                            * (*((_DWORD *)a1 + 60) - *((_DWORD *)a1 + 58)));
                v16 = SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea((__int64)(a1 + 244), *v8);
                ResourceForRegion = SnapAccessibilityHelpers::GetResourceForRegion(v16, v15, 1);
              }
              else
              {
                ResourceForRegion = 15031;
              }
            }
            else
            {
              ResourceForRegion = 15003;
            }
          }
          else
          {
            ResourceForRegion = 15032;
          }
        }
        else
        {
          ResourceForRegion = 15033;
        }
        v22 = *v8;
        SnapAccessibilityHelpers::MonitorIDFinder::MonitorIDFinder((SnapAccessibilityHelpers::MonitorIDFinder *)(a1 + 160));
        v17 = (void **)(a1 + 64);
        SnapAccessibilityHelpers::MonitorIDFinder::GetUIIDs((int **)a1 + 20, (__int64)(a1 + 64), (__int64)v22);
        SnapAccessibilityHelpers::MonitorIDFinder::~MonitorIDFinder((void **)a1 + 20);
        if ( *((_QWORD *)a1 + 8) == *((_QWORD *)a1 + 9) )
        {
          if ( *v17 )
          {
            std::_Deallocate<16>(
              *v17,
              (struct std::nothrow_t *)((*((_QWORD *)a1 + 10) - (_QWORD)*v17) & 0xFFFFFFFFFFFFFFFCuLL));
            *v17 = 0LL;
            *((_QWORD *)a1 + 9) = 0LL;
            *((_QWORD *)a1 + 10) = 0LL;
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1 + 7);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a1 + 6);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a1 + 5);
          if ( *v4 )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 4);
        }
        else
        {
          *((_QWORD *)a1 + 11) = 0LL;
          *((_QWORD *)a1 + 12) = 0LL;
          *((_QWORD *)a1 + 13) = 0LL;
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)(a1 + 88));
          *((_QWORD *)a1 + 12) = -1LL;
          *((_QWORD *)a1 + 13) = -1LL;
          if ( (int)ApplicationViewHelpers::GetViewTitle(
                      *((__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64 *))a1 + 6),
                      (unsigned __int16 **)a1 + 11,
                      v18) >= 0 )
          {
            SnapAccessibilityHelpers::BuildMonitorUIIDListString((__int64)(a1 + 112), (unsigned int **)a1 + 8, v19, v20);
            *((_QWORD *)a1 + 17) = 0LL;
            *((_QWORD *)a1 + 18) = 0LL;
            *((_QWORD *)a1 + 19) = 0LL;
            if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
                        (__int64)(a1 + 136),
                        &_ImageBase,
                        ResourceForRegion) >= 0 )
              SnapAccessibilityHelpers::RaiseSnapHotkeyResultsUiaNotification(a1 + 136);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)(a1 + 136));
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)(a1 + 112));
          }
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)(a1 + 88));
          if ( *v17 )
            std::_Deallocate<16>(
              *v17,
              (struct std::nothrow_t *)((*((_QWORD *)a1 + 10) - (_QWORD)*v17) & 0xFFFFFFFFFFFFFFFCuLL));
LABEL_30:
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1 + 7);
          v5 = (__int64 *)(a1 + 40);
LABEL_31:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a1 + 6);
LABEL_32:
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v5);
          if ( *v4 )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 4);
        }
LABEL_34:
        if ( *((_WORD *)a1 + 5) )
          operator delete(a1, (const struct std::nothrow_t *)0x110);
        break;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
