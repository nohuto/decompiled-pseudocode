/*
 * XREFs of ?UnregisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800F5418
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1800AD728 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180239D80 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x1802493D0 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ??1UndockedSearchAppExperienceManager@@UEAA@XZ @ 0x1803A51D0 (--1UndockedSearchAppExperienceManager@@UEAA@XZ.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HasRegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAA_NXZ @ 0x1800F54D4 (-HasRegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAA_NXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??1_parameters_@?4??cancel_asynchronously@?$await_adapter@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@CA?AUfire_and_forget@4@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@4@@Z@QEAA@XZ @ 0x1802333A0 (--1_parameters_@-4--cancel_asynchronously@-$await_adapter@U-$IAsyncOperation@W4GamingPostureSyst.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_f59c905e597c1bbb723e0a8ecd312bc6___ @ 0x18039F128 (Windows--Internal--ComTaskPool--QueueTask__lambda_f59c905e597c1bbb723e0a8ecd312bc6___.c)
 *     _lambda_f59c905e597c1bbb723e0a8ecd312bc6_::_lambda_f59c905e597c1bbb723e0a8ecd312bc6_ @ 0x1803A41B0 (_lambda_f59c905e597c1bbb723e0a8ecd312bc6_--_lambda_f59c905e597c1bbb723e0a8ecd312bc6_.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UndockedSearchAppExperienceManager::UnregisterViewCoordinatorEvents(
        UndockedSearchAppExperienceManager *this)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  int v6[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF
  RTL_SRWLOCK *v10; // [rsp+68h] [rbp+20h] BYREF

  if ( UndockedSearchAppExperienceManager::HasRegisterViewCoordinatorEvents(this) )
  {
    wil::AcquireSRWLockExclusive(&v10, (char *)this + 296);
    v9 = *((_QWORD *)this + 39);
    *((_QWORD *)this + 39) = 0LL;
    v8 = *((_QWORD *)this + 40);
    *((_QWORD *)this + 40) = 0LL;
    v2 = lambda_f59c905e597c1bbb723e0a8ecd312bc6_::_lambda_f59c905e597c1bbb723e0a8ecd312bc6_(
           v6,
           (char *)this + 304,
           &v9,
           &v8);
    v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_f59c905e597c1bbb723e0a8ecd312bc6___(
           v4,
           v3,
           *((unsigned int *)this + 40),
           v2);
    `winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>,1>::cancel_asynchronously'::`5'::_parameters_::~_parameters_(v6);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xCD8,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v5,
        v6[0]);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v10);
  }
}
