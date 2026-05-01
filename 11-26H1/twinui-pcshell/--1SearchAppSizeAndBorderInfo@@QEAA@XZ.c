/*
 * XREFs of ??1SearchAppSizeAndBorderInfo@@QEAA@XZ @ 0x1801C0C30
 * Callers:
 *     _UndockedSearchAppExperienceManager::PositionSearchAppWindow_::_1_::dtor$6 @ 0x1806E82CC (_UndockedSearchAppExperienceManager--PositionSearchAppWindow_--_1_--dtor$6.c)
 *     _SearchBoxOnTaskbarSearchAppPositioner::GetAppRectAndClippingRegion_::_1_::dtor$1 @ 0x1806E8A3D (_SearchBoxOnTaskbarSearchAppPositioner--GetAppRectAndClippingRegion_--_1_--dtor$1.c)
 *     _SearchBoxOnTaskbarSearchAppPositioner::GetSearchBoxOnTaskbarAppRectAndClippingRegion_::_1_::dtor$1 @ 0x1806E8A4F (_SearchBoxOnTaskbarSearchAppPositioner--GetSearchBoxOnTaskbarAppRectAndClippingRegion_--_1_--dto.c)
 * Callees:
 *     <none>
 */

void __fastcall SearchAppSizeAndBorderInfo::~SearchAppSizeAndBorderInfo(SearchAppSizeAndBorderInfo *this)
{
  std::vector<Geometry::CRect>::_Tidy((__int64 *)this + 9);
}
