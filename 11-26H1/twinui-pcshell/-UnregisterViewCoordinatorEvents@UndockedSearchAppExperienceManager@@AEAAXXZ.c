/*
 * XREFs of ?UnregisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800CB964
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x18023B458 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x18023C500 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18023CB30 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ??1UndockedSearchAppExperienceManager@@UEAA@XZ @ 0x1803AE508 (--1UndockedSearchAppExperienceManager@@UEAA@XZ.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1_parameters_@?4??cancel_asynchronously@?$await_adapter@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@CA?AUfire_and_forget@4@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@4@@Z@QEAA@XZ @ 0x180026978 (--1_parameters_@-4--cancel_asynchronously@-$await_adapter@U-$IAsyncOperation@W4GamingPostureSyst.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HasRegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAA_NXZ @ 0x1800CBA28 (-HasRegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAA_NXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8cd1210d367b63ec3c8edb91a8e9c966___ @ 0x1803A7854 (Windows--Internal--ComTaskPool--QueueTask__lambda_8cd1210d367b63ec3c8edb91a8e9c966___.c)
 *     _lambda_8cd1210d367b63ec3c8edb91a8e9c966_::_lambda_8cd1210d367b63ec3c8edb91a8e9c966_ @ 0x1803AD20C (_lambda_8cd1210d367b63ec3c8edb91a8e9c966_--_lambda_8cd1210d367b63ec3c8edb91a8e9c966_.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UndockedSearchAppExperienceManager::UnregisterViewCoordinatorEvents(RTL_SRWLOCK *this)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  int v6[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PVOID v8; // [rsp+58h] [rbp+10h] BYREF
  PVOID Ptr; // [rsp+60h] [rbp+18h] BYREF
  RTL_SRWLOCK *v10; // [rsp+68h] [rbp+20h] BYREF

  if ( UndockedSearchAppExperienceManager::HasRegisterViewCoordinatorEvents((UndockedSearchAppExperienceManager *)this) )
  {
    wil::AcquireSRWLockExclusive(&v10, this + 37);
    Ptr = this[39].Ptr;
    this[39].Ptr = 0LL;
    v8 = this[40].Ptr;
    this[40].Ptr = 0LL;
    v2 = lambda_8cd1210d367b63ec3c8edb91a8e9c966_::_lambda_8cd1210d367b63ec3c8edb91a8e9c966_(v6, &this[38], &Ptr, &v8);
    v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_8cd1210d367b63ec3c8edb91a8e9c966___(
           v4,
           v3,
           LODWORD(this[20].Ptr),
           v2);
    `winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>,1>::cancel_asynchronously'::`5'::_parameters_::~_parameters_((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v6);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE1B,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v5,
        v6[0]);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v10);
  }
}
