/*
 * XREFs of ?_InitAnimationPassState@CAppTransitionManager@@AEAAXPEAUIAppLayoutOperation@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E3354
 * Callers:
 *     ?_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E2D30 (-_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@PEA_N@Z @ 0x1804E251C (-IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@P.c)
 *     ?_IsFullscreenDesktopWindowForeground@CAppTransitionManager@@AEBA_NXZ @ 0x1804E34D4 (-_IsFullscreenDesktopWindowForeground@CAppTransitionManager@@AEBA_NXZ.c)
 *     ?s_GetSpecialAppArrangementTransitionType@CAppTransitionManager@@CA?AW4AppArrangementSpecialTransitionType@@PEAUIAppLayoutOperation@@@Z @ 0x1804E4318 (-s_GetSpecialAppArrangementTransitionType@CAppTransitionManager@@CA-AW4AppArrangementSpecialTran.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAppTransitionManager::_InitAnimationPassState(
        CAppTransitionManager *this,
        struct IAppLayoutOperation *a2,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a3)
{
  void (__fastcall *v6)(struct IAppLayoutOperation *, char *); // rdi
  bool IsFullscreenDesktopWindowForeground; // al
  IUnknown *v8; // rcx
  bool *v9; // r9
  void *ppvOut; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11[4]; // [rsp+28h] [rbp-20h] BYREF

  if ( *((struct IImmersiveApplicationManagerSafeForSyncCallouts **)this + 25) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct IImmersiveApplicationManagerSafeForSyncCallouts *))(*(_QWORD *)a3 + 8LL))(a3);
    v11[0] = *((_QWORD *)this + 25);
    *((_QWORD *)this + 25) = a3;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v11);
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  if ( IUnknown_QueryService(
         *((IUnknown **)this + 22),
         (const GUID *const)&SID_ImmersiveLayout,
         &GUID_d770b2ad_8f5e_4b8e_b3df_f05a2ab5287c,
         &ppvOut) >= 0 )
    (*(void (__fastcall **)(void *, __int64, char *))(*(_QWORD *)ppvOut + 56LL))(ppvOut, 10LL, (char *)this + 264);
  v6 = *(void (__fastcall **)(struct IAppLayoutOperation *, char *))(*(_QWORD *)a2 + 72LL);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)this + 26);
  v6(a2, (char *)this + 208);
  IsFullscreenDesktopWindowForeground = CAppTransitionManager::_IsFullscreenDesktopWindowForeground(this);
  v8 = (IUnknown *)*((_QWORD *)this + 22);
  *((_BYTE *)this + 280) = IsFullscreenDesktopWindowForeground;
  ImmersiveMultimonHelpers::IsLauncherVisibleOnMonitor(v8, 0LL, (CAppTransitionManager *)((char *)this + 281), v9);
  if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)a2 + 80LL))(a2) & 0x100000) != 0 )
  {
    *((_DWORD *)this + 71) = 0;
  }
  else if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)a2 + 80LL))(a2) & 0x10000) != 0 )
  {
    *((_DWORD *)this + 72) = CAppTransitionManager::s_GetSpecialAppArrangementTransitionType(a2);
    *((_DWORD *)this + 71) = 1;
  }
  else if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)a2 + 80LL))(a2) & 0x1020000) != 0 )
  {
    *((_DWORD *)this + 71) = 2;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
}
