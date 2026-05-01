/*
 * XREFs of ?OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z @ 0x180078420
 * Callers:
 *     ?OnHitTestPartNotifyEvent@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUHitTestPartNotifyEventArgs@3456@@Z @ 0x180078660 (-OnHitTestPartNotifyEvent@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?OnArrangedWindowBorderExit@JointResize@@AEAAXXZ @ 0x1800786B8 (-OnArrangedWindowBorderExit@JointResize@@AEAAXXZ.c)
 *     ?GetViewForWindow@JointResize@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18007894C (-GetViewForWindow@JointResize@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?CalculateSecondaryViews@JointResize@@AEAAJXZ @ 0x1800794C0 (-CalculateSecondaryViews@JointResize@@AEAAJXZ.c)
 *     ?RegisterRawInput@JointResize@@AEAAX_N@Z @ 0x180186370 (-RegisterRawInput@JointResize@@AEAAX_N@Z.c)
 *     ?CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@@Z @ 0x1801BA37C (-CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@@Z.c)
 *     ?RegisterViewChanges@JointResize@@AEAAX_N@Z @ 0x1801BABB8 (-RegisterViewChanges@JointResize@@AEAAX_N@Z.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall JointResize::OnArrangedWindowBorderEnter(JointResize *this, HWND a2, int a3)
{
  JointResize *v6; // rbx
  char v7; // bp
  __int64 v8; // rdx
  __int64 (__fastcall ****v9)(ApplicationViewHelpers *, GUID *, __int64 *); // r15
  int ViewForWindow; // eax
  unsigned int v11; // edi
  __int64 (__fastcall ***v13)(ApplicationViewHelpers *, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v14)(ApplicationViewHelpers *, GUID *, __int64 *); // rdi
  int v15; // eax
  int v16; // eax
  struct IApplicationView *v17; // rdx
  int GhostDivider; // eax
  struct tagCURSORINFO pci; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v21; // [rsp+80h] [rbp+8h] BYREF

  v6 = *(JointResize **)winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
                          &v21,
                          this);
  v7 = 1;
  if ( !*(_BYTE *)(v8 + 280) )
  {
    pci.cbSize = 24;
    memset(&pci.flags, 0, 20);
    if ( (!GetCursorInfo(&pci) || (pci.flags & 1) != 0) && !*((_QWORD *)this + 24) )
    {
      v9 = (__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64 *))((char *)this + 208);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 26);
      ViewForWindow = JointResize::GetViewForWindow(this, a2, (struct IApplicationView **)this + 26);
      v11 = ViewForWindow;
      if ( ViewForWindow < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x465,
          (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)(unsigned int)ViewForWindow);
        JointResize::OnArrangedWindowBorderExit(v6);
        return v11;
      }
      v13 = *v9;
      v14 = (**v9)[10];
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 25);
      v15 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), char *))v14)(
              v13,
              (char *)this + 200);
      v11 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x466,
          (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)(unsigned int)v15);
        JointResize::OnArrangedWindowBorderExit(v6);
        return v11;
      }
      v16 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 25) + 88LL))(
              *((_QWORD *)this + 25),
              (char *)this + 296);
      v11 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x467,
          (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)(unsigned int)v16);
        JointResize::OnArrangedWindowBorderExit(v6);
        return v11;
      }
      *((_QWORD *)this + 36) = ApplicationViewHelpers::GetWindowForView(*v9, v17);
      *((_DWORD *)this + 80) = a3;
      v11 = JointResize::CalculateSecondaryViews(this);
      if ( (v11 & 0x80000000) != 0 )
      {
        JointResize::OnArrangedWindowBorderExit(v6);
        return v11;
      }
      GhostDivider = JointResize::CreateGhostDivider(this, 2LL);
      v11 = GhostDivider;
      if ( GhostDivider < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x46D,
          (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)(unsigned int)GhostDivider);
        JointResize::OnArrangedWindowBorderExit(v6);
        return v11;
      }
      JointResize::RegisterRawInput(this, 1);
      JointResize::RegisterViewChanges(this, 1);
      v7 = 0;
    }
  }
  if ( v7 )
    JointResize::OnArrangedWindowBorderExit(v6);
  return 0LL;
}
