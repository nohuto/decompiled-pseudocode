/*
 * XREFs of ?_IsFullscreenDesktopWindowForeground@CAppTransitionManager@@AEBA_NXZ @ 0x1804E34D4
 * Callers:
 *     ?_InitAnimationPassState@CAppTransitionManager@@AEAAXPEAUIAppLayoutOperation@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E3354 (-_InitAnimationPassState@CAppTransitionManager@@AEAAXPEAUIAppLayoutOperation@@PEAUIImmersiveAppl.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CAppTransitionManager::_IsFullscreenDesktopWindowForeground(IUnknown **this)
{
  bool v2; // bl
  int v4; // [rsp+30h] [rbp+8h] BYREF
  void *ppvOut; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
  if ( IUnknown_QueryService(this[22], &IID_IRudeWindowManager, &GUID_d29c946b_4f1c_425a_bb5b_d4e2e6e2993c, &ppvOut) >= 0 )
    (*(void (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 40LL))(ppvOut, &v4);
  v2 = v4 != 0;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
  return v2;
}
