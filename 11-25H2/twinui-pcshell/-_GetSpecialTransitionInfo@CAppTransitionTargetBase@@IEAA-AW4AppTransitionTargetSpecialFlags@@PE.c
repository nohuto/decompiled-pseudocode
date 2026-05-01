/*
 * XREFs of ?_GetSpecialTransitionInfo@CAppTransitionTargetBase@@IEAA?AW4AppTransitionTargetSpecialFlags@@PEAUIApplicationView@@@Z @ 0x1804D35A4
 * Callers:
 *     ?PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804D2A20 (-PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationIte.c)
 *     ?v_ShouldUseGhostWindow@CAppArrangementSingleTransitionTarget@@EEAA_NPEAUIAppLayoutOperationItem@@@Z @ 0x1804D4230 (-v_ShouldUseGhostWindow@CAppArrangementSingleTransitionTarget@@EEAA_NPEAUIAppLayoutOperationItem.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppTransitionTargetBase::_GetSpecialTransitionInfo(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF
  void *ppvOut; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
  if ( IUnknown_QueryService(
         *(IUnknown **)(a1 + 24),
         &stru_180787A68,
         &GUID_60f78ac1_5edd_4b6d_9d29_b2300ef43343,
         &ppvOut) >= 0 )
    (*(void (__fastcall **)(void *, __int64, unsigned int *))(*(_QWORD *)ppvOut + 24LL))(ppvOut, a2, &v6);
  v4 = v6;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
  return v4;
}
