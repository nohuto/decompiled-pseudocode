/*
 * XREFs of ?MonitorFrameDismissAnimationCompleted@?QIMonitorFrameDismissAnimationCallback@@XamlAllUpViewController@@UE$AAAXXZ @ 0x18068F5D0
 * Callers:
 *     ?MonitorFrameDismissAnimationCompleted@?QIMonitorFrameDismissAnimationCallback@@XamlAllUpViewController@@WJI@E$AAAXXZ @ 0x18068F630 (-MonitorFrameDismissAnimationCompleted@-QIMonitorFrameDismissAnimationCallback@@Xam_ea_18068F630.c)
 *     ?__abi_IMonitorFrameDismissAnimationCallback____abi_MonitorFrameDismissAnimationCompleted@?QIMonitorFrameDismissAnimationCallback@@XamlAllUpViewController@@UE$AAAJXZ @ 0x180691220 (-__abi_IMonitorFrameDismissAnimationCallback____abi_MonitorFrameDismissAnimationCompleted@-QIMon.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIAllUpViewHostInternal@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAllUpViewHostInternal@@Uerr_exception_policy@wil@@@1@XZ @ 0x180201350 (--$query@UIAllUpViewHostInternal@@@-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _MonitorFrameDismissAnimationCompleted__QIMonitorFrameDismissAnimationCallback__XamlAllUpViewController__UE_AAAXXZ(
        __int64 a1)
{
  _QWORD *v1; // rax
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IAllUpViewHostInternal>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(a1 + 56),
         &v4);
  v2 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 48LL))(*v1);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x269,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v2);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v4);
}
