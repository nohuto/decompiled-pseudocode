/*
 * XREFs of ??$MakeAndInitialize@VXamlLauncher@@V1@PEAVXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlLauncher@@$$QEAPEAVXamlLauncherState@@@Z @ 0x18022A790
 * Callers:
 *     XamlLauncher_CreateInstance @ 0x1804513E0 (XamlLauncher_CreateInstance.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VXamlLauncher@@@WRL@Microsoft@@IEAAKXZ @ 0x18023DD08 (-InternalRelease@-$ComPtr@VXamlLauncher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0XamlLauncher@@QEAA@XZ @ 0x18024EE7C (--0XamlLauncher@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<XamlLauncher,XamlLauncher,XamlLauncherState *>(
        XamlLauncher **a1,
        _QWORD *a2)
{
  void *v4; // rax
  XamlLauncher *v6; // rbx
  volatile int *v7; // rdx
  void *v8; // [rsp+40h] [rbp+8h] BYREF
  XamlLauncher *v9; // [rsp+50h] [rbp+18h] BYREF
  void *v10; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v4 = operator new(0x1F0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  v9 = (XamlLauncher *)v4;
  if ( !v4 )
    return 2147942414LL;
  v10 = v4;
  v6 = XamlLauncher::XamlLauncher((XamlLauncher *)v4);
  v9 = v6;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v6 + 47, (*a2 + 24LL) & -(__int64)(*a2 != 0LL));
  if ( v6 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((XamlLauncher *)((char *)v6 + 116), v7);
  *a1 = v6;
  Microsoft::WRL::ComPtr<XamlLauncher>::InternalRelease(&v9);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
  return 0LL;
}
