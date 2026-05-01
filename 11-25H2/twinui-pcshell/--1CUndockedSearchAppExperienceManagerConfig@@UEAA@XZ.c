/*
 * XREFs of ??1CUndockedSearchAppExperienceManagerConfig@@UEAA@XZ @ 0x1803A50E4
 * Callers:
 *     ??_GCUndockedSearchAppExperienceManagerConfig@@UEAAPEAXI@Z @ 0x1803A68A0 (--_GCUndockedSearchAppExperienceManagerConfig@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall CUndockedSearchAppExperienceManagerConfig::~CUndockedSearchAppExperienceManagerConfig(
        CUndockedSearchAppExperienceManagerConfig *this)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((CUndockedSearchAppExperienceManagerConfig *)((char *)this + 24));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((CUndockedSearchAppExperienceManagerConfig *)((char *)this + 16));
  *(_QWORD *)this = &IUndockedSearchAppExperienceManagerConfig::`vftable';
}
