/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopSwitcherHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopSwitcherHost@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x18029DEE8
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VVirtualDesktopSwitcherHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA?AV?$ComPtr@VVirtualDesktopSwitcherHost@@@WRL@Microsoft@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x18029DE80 (--$MakeAndInitializeOrThrow@VVirtualDesktopSwitcherHost@@AEBUXamlViewHostInitializeArgs@@@wil@@Y.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualDesktopSwitcherHost@@QEAA@XZ @ 0x180684840 (--0VirtualDesktopSwitcherHost@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopSwitcherHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x180687D1C (-RuntimeClassInitialize@VirtualDesktopSwitcherHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopSwitcherHost,VirtualDesktopSwitcherHost,XamlViewHostInitializeArgs const &>(
        VirtualDesktopSwitcherHost **a1,
        const struct XamlViewHostInitializeArgs *a2)
{
  void *v4; // rax
  VirtualDesktopSwitcherHost *v6; // rbx
  int v7; // edi
  void *v8; // [rsp+40h] [rbp+8h] BYREF
  VirtualDesktopSwitcherHost *v9; // [rsp+50h] [rbp+18h] BYREF
  void *v10; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v4 = operator new(0x218uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  v9 = (VirtualDesktopSwitcherHost *)v4;
  if ( !v4 )
    return 2147942414LL;
  v10 = v4;
  v6 = VirtualDesktopSwitcherHost::VirtualDesktopSwitcherHost((VirtualDesktopSwitcherHost *)v4);
  v9 = v6;
  v8 = 0LL;
  v7 = VirtualDesktopSwitcherHost::RuntimeClassInitialize(v6, a2);
  if ( v7 >= 0 )
  {
    if ( v6 )
      (*(void (__fastcall **)(VirtualDesktopSwitcherHost *))(*(_QWORD *)v6 + 8LL))(v6);
    *a1 = v6;
    v7 = 0;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
  return (unsigned int)v7;
}
