/*
 * XREFs of ?_SwitchToMonitor@CAppTransitionManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1804D1440
 * Callers:
 *     ?_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804D0A90 (-_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     CAppTransitionTargetManager_CreateInstance @ 0x1804D4314 (CAppTransitionTargetManager_CreateInstance.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppTransitionManager::_SwitchToMonitor(IUnknown *punkSite, struct IImmersiveMonitor *a2)
{
  int Instance; // eax
  unsigned int v5; // edi
  struct IUnknownVtbl *lpVtbl; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( punkSite[23].lpVtbl
    || (Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&punkSite[23]),
        Instance = CAppTransitionTargetManager_CreateInstance(punkSite),
        v5 = Instance,
        Instance >= 0) )
  {
    v9 = 0;
    lpVtbl = punkSite[22].lpVtbl;
    if ( !lpVtbl
      || (*((int (__fastcall **)(struct IUnknownVtbl *, struct IImmersiveMonitor *, int *))lpVtbl->QueryInterface + 12))(
           lpVtbl,
           a2,
           &v9) >= 0
      && !v9 )
    {
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)&punkSite[22], (__int64)a2);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33F,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)Instance);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16F,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)v5);
    return v5;
  }
}
