/*
 * XREFs of ?RaiseUiaNotificationForMonitorMove@HotkeyHandler@@AEAAXPEAUHWND__@@IUIntendedHotKeySnapInfo@1@@Z @ 0x1805B0564
 * Callers:
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805AF390 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 *     ?HandleSnapHotKeyNarratorAnnouncements@HotkeyHandler@@UEAAXPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1805B01D0 (-HandleSnapHotKeyNarratorAnnouncements@HotkeyHandler@@UEAAXPEAUHWND__@@W4ARRANGEMENT_COMPLETED_R.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x180047744 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?InitializeResMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18054A27C (-InitializeResMessage@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@Q.c)
 *     ??1IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@XZ @ 0x1805AE62C (--1IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@XZ.c)
 *     ?reset@?$_Optional_destruct_base@UMonitorIDFinder@SnapAccessibilityHelpers@@$0A@@std@@QEAAXXZ @ 0x1805B166C (-reset@-$_Optional_destruct_base@UMonitorIDFinder@SnapAccessibilityHelpers@@$0A@@std@@QEAAXXZ.c)
 *     ??0MonitorIDFinder@SnapAccessibilityHelpers@@QEAA@XZ @ 0x1805BE6BC (--0MonitorIDFinder@SnapAccessibilityHelpers@@QEAA@XZ.c)
 *     ?BuildMonitorUIIDListString@SnapAccessibilityHelpers@@YA?AV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBV?$vector@IV?$allocator@I@std@@@std@@@Z @ 0x1805BEA78 (-BuildMonitorUIIDListString@SnapAccessibilityHelpers@@YA-AV-$NativeString@V-$CoTaskMemPolicy@G@I.c)
 *     ?GetUIIDs@MonitorIDFinder@SnapAccessibilityHelpers@@QEBA?AV?$vector@IV?$allocator@I@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x1805BECF8 (-GetUIIDs@MonitorIDFinder@SnapAccessibilityHelpers@@QEBA-AV-$vector@IV-$allocator@I@std@@@std@@P.c)
 *     ?RaiseSnapHotkeyResultsUiaNotification@SnapAccessibilityHelpers@@YAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x1805BF4C8 (-RaiseSnapHotkeyResultsUiaNotification@SnapAccessibilityHelpers@@YAXAEAV-$NativeString@V-$CoTask.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall HotkeyHandler::RaiseUiaNotificationForMonitorMove(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v8; // rdi
  int (__fastcall *v9)(__int64, __int64, ApplicationViewHelpers **); // rbx
  unsigned __int16 **v10; // r8
  ApplicationViewHelpers *v11; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int16 *v12; // [rsp+40h] [rbp-31h] BYREF
  __int64 v13; // [rsp+48h] [rbp-29h]
  __int64 v14; // [rsp+50h] [rbp-21h]
  void *v15; // [rsp+58h] [rbp-19h] BYREF
  __int128 v16; // [rsp+60h] [rbp-11h]
  _QWORD v17[3]; // [rsp+70h] [rbp-1h] BYREF
  _QWORD v18[4]; // [rsp+88h] [rbp+17h] BYREF

  if ( UiaClientsAreListening() )
  {
    v11 = 0LL;
    v8 = *(_QWORD *)(a1 + 56);
    v9 = *(int (__fastcall **)(__int64, __int64, ApplicationViewHelpers **))(*(_QWORD *)v8 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
    if ( v9(v8, a2, &v11) >= 0 && *(_DWORD *)(a4 + 28) )
    {
      if ( !*(_BYTE *)(a1 + 496) )
      {
        std::_Optional_destruct_base<SnapAccessibilityHelpers::MonitorIDFinder,0>::reset(a1 + 456);
        SnapAccessibilityHelpers::MonitorIDFinder::MonitorIDFinder((SnapAccessibilityHelpers::MonitorIDFinder *)(a1 + 456));
        *(_BYTE *)(a1 + 496) = 1;
      }
      SnapAccessibilityHelpers::MonitorIDFinder::GetUIIDs(a1 + 456, &v15, *(_QWORD *)(a4 + 48));
      if ( v15 == (void *)v16 )
      {
        if ( v15 )
        {
          std::_Deallocate<16>(
            v15,
            (struct std::nothrow_t *)((*((_QWORD *)&v16 + 1) - (_QWORD)v15) & 0xFFFFFFFFFFFFFFFCuLL));
          v15 = 0LL;
          v16 = 0LL;
        }
      }
      else
      {
        v12 = 0LL;
        v13 = 0LL;
        v14 = 0LL;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v12);
        v13 = -1LL;
        v14 = -1LL;
        if ( (int)ApplicationViewHelpers::GetViewTitle(
                    (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v11,
                    &v12,
                    v10) >= 0 )
        {
          SnapAccessibilityHelpers::BuildMonitorUIIDListString(v18, &v15);
          memset(v17, 0, sizeof(v17));
          if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
                      (__int64)v17,
                      &_ImageBase,
                      a3,
                      v12,
                      v18[0]) >= 0 )
            SnapAccessibilityHelpers::RaiseSnapHotkeyResultsUiaNotification(v17);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v17);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v18);
        }
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v12);
        if ( v15 )
          std::_Deallocate<16>(
            v15,
            (struct std::nothrow_t *)((*((_QWORD *)&v16 + 1) - (_QWORD)v15) & 0xFFFFFFFFFFFFFFFCuLL));
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  }
  HotkeyHandler::IntendedHotKeySnapInfo::~IntendedHotKeySnapInfo((HotkeyHandler::IntendedHotKeySnapInfo *)a4);
}
