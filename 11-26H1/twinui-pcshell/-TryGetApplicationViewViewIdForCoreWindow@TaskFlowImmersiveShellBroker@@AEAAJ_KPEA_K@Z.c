/*
 * XREFs of ?TryGetApplicationViewViewIdForCoreWindow@TaskFlowImmersiveShellBroker@@AEAAJ_KPEA_K@Z @ 0x1803FA3B4
 * Callers:
 *     ?SessionCreated@TaskFlowImmersiveShellBroker@@UEAAJPEAUIUserActivitySessionInfo@UserActivities@Internal@ApplicationModel@Windows@@@Z @ 0x1803F9E00 (-SessionCreated@TaskFlowImmersiveShellBroker@@UEAAJPEAUIUserActivitySessionInfo@UserActivities@I.c)
 *     ?SessionDisposed@TaskFlowImmersiveShellBroker@@UEAAJPEAUIUserActivitySessionInfo@UserActivities@Internal@ApplicationModel@Windows@@@Z @ 0x1803F9F40 (-SessionDisposed@TaskFlowImmersiveShellBroker@@UEAAJPEAUIUserActivitySessionInfo@UserActivities@.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskFlowImmersiveShellBroker::TryGetApplicationViewViewIdForCoreWindow(
        TaskFlowImmersiveShellBroker *this,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 (*v4)(void); // rbx
  int v5; // eax
  struct IApplicationView *v6; // rdx
  const char *v7; // r9
  __int64 result; // rax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  ApplicationViewHelpers *v11; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v11 = 0LL;
  v4 = *(__int64 (**)(void))(**((_QWORD **)this + 34) + 48LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v11);
  try
  {
    v5 = v4();
    if ( v5 != -2147319765 )
    {
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2EE,
          (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v5,
          v9);
      *a3 = ApplicationViewHelpers::GetWindowForView(
              (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v11,
              v6);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2F5,
                           (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
                           v7);
  }
  return result;
}
