/*
 * XREFs of ??1AppLayoutOperationData@TabletModeTraceLogging@@QEAA@XZ @ 0x1804F3BC8
 * Callers:
 *     ?StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@@Z @ 0x1804F9BE8 (-StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@.c)
 *     _TabletModeTraceLogging::ApplyLayoutOperationHelper::StartActivity_::_1_::dtor$0 @ 0x1806CB14A (_TabletModeTraceLogging--ApplyLayoutOperationHelper--StartActivity_--_1_--dtor$0.c)
 * Callees:
 *     ??1AppLayoutData@TabletModeTraceLogging@@QEAA@XZ @ 0x1804F3BA0 (--1AppLayoutData@TabletModeTraceLogging@@QEAA@XZ.c)
 */

void __fastcall TabletModeTraceLogging::AppLayoutOperationData::~AppLayoutOperationData(
        TabletModeTraceLogging::AppLayoutOperationData *this)
{
  TabletModeTraceLogging::AppLayoutData::~AppLayoutData((TabletModeTraceLogging::AppLayoutOperationData *)((char *)this + 120));
  TabletModeTraceLogging::AppLayoutData::~AppLayoutData(this);
}
