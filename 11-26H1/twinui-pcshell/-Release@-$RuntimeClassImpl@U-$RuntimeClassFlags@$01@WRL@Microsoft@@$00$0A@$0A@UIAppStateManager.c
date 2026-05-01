/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802C14E0
 * Callers:
 *     ?CreateWin32AppStateManager@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18017CBB8 (-CreateWin32AppStateManager@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$com_ptr_t@UIAppState.c)
 *     ?CreateUwpAppStateManager@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18017CC04 (-CreateUwpAppStateManager@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$com_ptr_t@UIAppStateMa.c)
 *     ??$Make@VWin32AppStateManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWin32AppStateManager@@@12@XZ @ 0x18017CCA0 (--$Make@VWin32AppStateManager@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VWin32AppStateManager@@@.c)
 *     ??$Make@VUwpAppStateManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VUwpAppStateManager@@@12@XZ @ 0x18017CF70 (--$Make@VUwpAppStateManager@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VUwpAppStateManager@@@12@X.c)
 *     ??1?$ComPtr@VWin32AppStateManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802203C8 (--1-$ComPtr@VWin32AppStateManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180572E80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_180572E80.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180063F80 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::FamilySafety::AppLimits::IAppStateManager,Microsoft::WRL::FtmBase>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r9

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 44), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 104LL))(v3, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
