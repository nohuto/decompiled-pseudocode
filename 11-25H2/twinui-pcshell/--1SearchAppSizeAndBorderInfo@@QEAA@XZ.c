/*
 * XREFs of ??1SearchAppSizeAndBorderInfo@@QEAA@XZ @ 0x18022C6C8
 * Callers:
 *     _UndockedSearchAppExperienceManager::PositionSearchAppWindow_::_1_::dtor$2 @ 0x1806C0304 (_UndockedSearchAppExperienceManager--PositionSearchAppWindow_--_1_--dtor$2.c)
 *     _SearchBoxOnTaskbarSearchAppPositioner::GetAppRectAndClippingRegion_::_1_::dtor$1 @ 0x1806C0A0B (_SearchBoxOnTaskbarSearchAppPositioner--GetAppRectAndClippingRegion_--_1_--dtor$1.c)
 *     _SearchBoxOnTaskbarSearchAppPositioner::GetSearchBoxOnTaskbarAppRectAndClippingRegion_::_1_::dtor$1 @ 0x1806C0A1D (_SearchBoxOnTaskbarSearchAppPositioner--GetSearchBoxOnTaskbarAppRectAndClippingRegion_--_1_--dto.c)
 * Callees:
 *     <none>
 */

void __fastcall SearchAppSizeAndBorderInfo::~SearchAppSizeAndBorderInfo(SearchAppSizeAndBorderInfo *this)
{
  std::vector<Geometry::CRect>::_Tidy((__int64)this + 72);
}
