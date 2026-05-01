/*
 * XREFs of ?_ExcludeVisualType@CAppTransitionManager@@AEAAXW4TEMPORARY_APP_VISUAL_TYPE@@@Z @ 0x1804D0EC4
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804CFDF0 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAppTransitionManager::_ExcludeVisualType(__int64 a1, int a2)
{
  __int64 v4; // rcx
  unsigned int i; // esi
  __int64 v6; // rdi
  int (__fastcall *v7)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 v8; // rax
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(a1 + 208);
  if ( v4 )
  {
    v9 = 0;
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v4 + 24LL))(v4, &v9);
    for ( i = 0; i < v9; ++i )
    {
      v6 = *(_QWORD *)(a1 + 208);
      v10 = 0LL;
      v7 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v6 + 32LL);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v10);
      if ( v7(v6, i, &GUID_114ed843_c914_443d_9588_6ffb643e73d0, &v10) >= 0
        && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10) == a2 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 64LL))(v10);
        DwmpTransitionWindow(v8, 43LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v10);
        return;
      }
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v10);
    }
  }
}
