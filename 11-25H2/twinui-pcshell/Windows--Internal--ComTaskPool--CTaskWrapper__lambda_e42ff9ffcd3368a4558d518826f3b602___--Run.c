/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e42ff9ffcd3368a4558d518826f3b602___::Run @ 0x180367130
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$try_query@UIControlCenterExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIControlCenterExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801EC6E8 (--$try_query@UIControlCenterExperienceManager@Experience@Shell@Internal@Windows@@@-$com_ptr_t@UI.c)
 *     ?CompleteHide@CControlCenterExperienceManager@@AEAAJXZ @ 0x180364A58 (-CompleteHide@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?EM_DismissAnimationTimeout@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ @ 0x180364ECC (-EM_DismissAnimationTimeout@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e42ff9ffcd3368a4558d518826f3b602___::Run(
        __int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::try_query<Windows::Internal::Shell::Experience::IControlCenterExperienceManager>(
    (__int64 *)(a1 + 24),
    &v5);
  if ( v5 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 446LL) )
    {
      ControlCenterUITelemetry::ControlCenterTelemetry::EM_DismissAnimationTimeout(v2);
      *(_BYTE *)(*(_QWORD *)(a1 + 16) + 446LL) = 0;
      v3 = CControlCenterExperienceManager::CompleteHide(*(CControlCenterExperienceManager **)(a1 + 16));
      if ( v3 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4C7,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v3);
    }
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v5);
}
