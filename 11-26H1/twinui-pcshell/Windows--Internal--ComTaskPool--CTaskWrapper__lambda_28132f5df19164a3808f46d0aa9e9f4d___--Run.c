/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28132f5df19164a3808f46d0aa9e9f4d___::Run @ 0x180367880
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$try_query@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1802BE69C (--$try_query@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@-$com_ptr_t@UIW.c)
 *     ?CompleteHide@CActionCenterExperienceManager@@AEAAJXZ @ 0x180364C68 (-CompleteHide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?EM_DismissAnimationTimeout@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x1803652D4 (-EM_DismissAnimationTimeout@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28132f5df19164a3808f46d0aa9e9f4d___::Run(
        __int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::try_query<Windows::Internal::Shell::Experience::IActionCenterExperienceManager>(
    (__int64 *)(a1 + 24),
    &v5);
  if ( v5 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 369LL) )
    {
      NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DismissAnimationTimeout(v2);
      *(_BYTE *)(*(_QWORD *)(a1 + 16) + 369LL) = 0;
      v3 = CActionCenterExperienceManager::CompleteHide(*(CActionCenterExperienceManager **)(a1 + 16));
      if ( v3 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x41C,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v3);
    }
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v5);
}
