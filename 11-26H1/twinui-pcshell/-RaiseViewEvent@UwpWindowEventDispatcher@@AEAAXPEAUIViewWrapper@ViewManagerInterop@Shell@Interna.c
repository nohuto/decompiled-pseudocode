/*
 * XREFs of ?RaiseViewEvent@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x1800EEB58
 * Callers:
 *     ?OverrideNavigationLevelForView@UwpWindowEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x1802065D0 (-OverrideNavigationLevelForView@UwpWindowEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInter.c)
 * Callees:
 *     ?RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1800EF554 (-RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerIntero.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall UwpWindowEventDispatcher::RaiseViewEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  if ( *a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a4 + 8LL))(*a4);
  UwpWindowEventDispatcher::RaiseViewEventWithPropertySet(a1, a2, a3, 0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(a4);
}
