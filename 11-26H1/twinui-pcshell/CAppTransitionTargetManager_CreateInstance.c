/*
 * XREFs of CAppTransitionTargetManager_CreateInstance @ 0x1804E6754
 * Callers:
 *     ?_SwitchToMonitor@CAppTransitionManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1804E3740 (-_SwitchToMonitor@CAppTransitionManager@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCAppTransitionTargetManager@@UIAppTransitionTargetManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAppTransitionTargetManager@@@Z @ 0x1804E4504 (--$MakeAndInitialize@VCAppTransitionTargetManager@@UIAppTransitionTargetManager@@$$V@Details@WRL.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppTransitionTargetManager_CreateInstance(IUnknown *punkSite, __int64 a2, _QWORD *a3)
{
  int v5; // ebx
  IUnknown *punk; // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0LL;
  punk = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&punk);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<CAppTransitionTargetManager,IAppTransitionTargetManager,>(&punk);
  if ( v5 >= 0 )
  {
    v5 = IUnknown_SetSite(punk, punkSite);
    if ( v5 >= 0 )
      v5 = ((__int64 (__fastcall *)(IUnknown *, GUID *, _QWORD *))punk->lpVtbl->QueryInterface)(
             punk,
             &GUID_60f78ac1_5edd_4b6d_9d29_b2300ef43343,
             a3);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&punk);
  return (unsigned int)v5;
}
