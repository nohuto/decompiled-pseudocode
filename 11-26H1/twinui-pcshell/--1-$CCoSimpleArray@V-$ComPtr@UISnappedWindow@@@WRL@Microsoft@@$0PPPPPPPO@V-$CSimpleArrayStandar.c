/*
 * XREFs of ??1?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@QEAA@XZ @ 0x1802C781C
 * Callers:
 *     _CActivationBasedAppAndGlomCollection::PositionNewCreatedApp_::_1_::dtor$0 @ 0x1806D1F46 (_CActivationBasedAppAndGlomCollection--PositionNewCreatedApp_--_1_--dtor$0.c)
 *     _CShellSnapComponent::GetSnappedViewFromToolWindow_::_1_::dtor$2 @ 0x1806D363F (_CShellSnapComponent--GetSnappedViewFromToolWindow_--_1_--dtor$2.c)
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::GetUnoccludedSnappedWindowsForWindow_::_1_::dtor$4 @ 0x1806DD661 (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--_ea_1806DD661.c)
 *     _HotkeyHandler::DetermineRectForSnapAction_::_1_::dtor$0 @ 0x1806E01BC (_HotkeyHandler--DetermineRectForSnapAction_--_1_--dtor$0.c)
 *     _TaskbarLayoutPolicyManager::PopulateAndSetPinned_::_1_::dtor$1 @ 0x1806E1536 (_TaskbarLayoutPolicyManager--PopulateAndSetPinned_--_1_--dtor$1.c)
 *     _std::_Default_allocator_traits_std::allocator_ParsedTaskbarLayout___::construct_ParsedTaskbarLayout_ParsedTaskbarLayout__::_1_::dtor$0 @ 0x1806E15E1 (_std--_Default_allocator_traits_std--allocator_ParsedTaskbarLayout___--construct_ParsedTaskbarLa.c)
 *     _SnapServiceProvider::GetSnapRectForDesktopMode_::_1_::dtor$2 @ 0x1806F8A0B (_SnapServiceProvider--GetSnapRectForDesktopMode_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CCoSimpleArray<Microsoft::WRL::ComPtr<ISnappedWindow>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ISnappedWindow>>>::~CCoSimpleArray<Microsoft::WRL::ComPtr<ISnappedWindow>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ISnappedWindow>>>(
        __int64 a1)
{
  CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll(a1);
}
