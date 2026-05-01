/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1_::_1_::dtor$8 @ 0x1806FC175
 * Callers:
 *     <none>
 * Callees:
 *     ??1StartExperiencePackageHelper@@QEAA@XZ @ 0x1805CC43C (--1StartExperiencePackageHelper@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync__ResumeCoro_1_::_1_::dtor_8(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 112) = *(_QWORD *)(a2 + 64) + 304LL;
  StartExperiencePackageHelper::~StartExperiencePackageHelper(*(StartExperiencePackageHelper **)(a2 + 112));
}
