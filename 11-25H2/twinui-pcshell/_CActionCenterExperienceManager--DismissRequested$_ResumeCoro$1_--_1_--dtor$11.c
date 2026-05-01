/*
 * XREFs of _CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1_::_1_::dtor$11 @ 0x1806BE5CE
 * Callers:
 *     <none>
 * Callees:
 *     ??1DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18035D2C0 (--1DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 */

void __fastcall CActionCenterExperienceManager::DismissRequested__ResumeCoro_1_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 136) = *(_QWORD *)(a2 + 40) + 160LL;
  NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::~DismissActionCenter(*(NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter **)(a2 + 136));
}
