/*
 * XREFs of ??1vector_iterator@?$vector_range@U?$IVectorView@PEAVTileId@StartScreen@UI@WindowsUdk@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180068054
 * Callers:
 *     _MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts_::_1_::dtor$1 @ 0x1800BBD7D (_MobilityExperience--CDPActivityHelper--GetActivityStoresForSupportedWebAccounts_--_1_--dtor$1.c)
 *     _MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts_::_1_::dtor$2 @ 0x1800BBD8F (_MobilityExperience--CDPActivityHelper--GetActivityStoresForSupportedWebAccounts_--_1_--dtor$2.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ExtractTargetedContentTilesInCollection_::_1_::dtor$2 @ 0x1800BEAD9 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--ExtractTargetedContentTilesInC.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ExtractTargetedContentTilesInCollection_::_1_::dtor$3 @ 0x1800BEAEB (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--ExtractTargetedCo_ea_1800BEAEB.c)
 *     _StartDocked::GetStartDefaultPins_::_1_::dtor$4 @ 0x1800BEB21 (_StartDocked--GetStartDefaultPins_--_1_--dtor$4.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection_::_1_::dtor$7 @ 0x1800BEB33 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveItemsFromCollection_--.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection_::_1_::dtor$8 @ 0x1800BEDD6 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveItemsFrom_ea_1800BEDD6.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::vector_range<Windows::Foundation::Collections::IVectorView<WindowsUdk::UI::StartScreen::TileId *>,wil::err_exception_policy>::vector_iterator::~vector_iterator(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 16));
}
