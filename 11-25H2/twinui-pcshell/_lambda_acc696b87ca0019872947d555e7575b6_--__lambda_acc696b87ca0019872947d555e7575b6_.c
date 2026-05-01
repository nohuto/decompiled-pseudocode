/*
 * XREFs of _lambda_acc696b87ca0019872947d555e7575b6_::__lambda_acc696b87ca0019872947d555e7575b6_ @ 0x1803A4B04
 * Callers:
 *     ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18024B4C8 (-SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@A.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_acc696b87ca0019872947d555e7575b6___::_CTaskWrapper__lambda_acc696b87ca0019872947d555e7575b6___ @ 0x1803A4C54 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_acc696b87ca0019872947d555e7575b6___--_CTask.c)
 *     _CUndockedSearchAppExperienceManagerConfig::SetWindowRegionAsync_::_1_::dtor$1_0 @ 0x1806C047B (_CUndockedSearchAppExperienceManagerConfig--SetWindowRegionAsync_--_1_--dtor$1_0.c)
 * Callees:
 *     ??1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x18019243C (--1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ.c)
 */

void __fastcall lambda_acc696b87ca0019872947d555e7575b6_::__lambda_acc696b87ca0019872947d555e7575b6_(__int64 a1)
{
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::~UndockedSearchAppExperienceManager_SetWindowRgn((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *)(a1 + 48));
  std::vector<Geometry::CRect>::_Tidy(a1 + 24);
}
