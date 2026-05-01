/*
 * XREFs of _lambda_420994182feb68798a6ba33cec143f0f_::operator() @ 0x180425F7C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_420994182feb68798a6ba33cec143f0f___::Run @ 0x180426A10 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_420994182feb68798a6ba33cec143f0f___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$query@UIWindowWatcher_Input@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIWindowWatcher_Input@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18022DA68 (--$query@UIWindowWatcher_Input@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_t@.c)
 *     ?WindowEventDispatcher_WindowManagerWatcherDisconnected@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18042090C (-WindowEventDispatcher_WindowManagerWatcherDisconnected@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_420994182feb68798a6ba33cec143f0f_::operator()(__int64 *a1)
{
  __int64 v2; // rdx
  int v3; // edi
  __int64 v4; // rdx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  *(_BYTE *)(v2 + 192) = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v2 + 176) + 56LL))(
         *(_QWORD *)(v2 + 176),
         *(_QWORD *)(v2 + 200));
  if ( v3 < 0 )
  {
    v4 = 771LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 176) + 72LL))(
         *(_QWORD *)(*a1 + 176),
         *(_QWORD *)(*a1 + 208));
  if ( v3 < 0 )
  {
    v4 = 772LL;
    goto LABEL_3;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 176) + 104LL))(
         *(_QWORD *)(*a1 + 176),
         *(_QWORD *)(*a1 + 216));
  if ( v3 < 0 )
  {
    v4 = 773LL;
    goto LABEL_3;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 184) + 200LL))(
         *(_QWORD *)(*a1 + 184),
         *(_QWORD *)(*a1 + 112));
  if ( v3 < 0 )
  {
    v4 = 775LL;
    goto LABEL_3;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 184) + 232LL))(
         *(_QWORD *)(*a1 + 184),
         *(_QWORD *)(*a1 + 120));
  if ( v3 < 0 )
  {
    v4 = 776LL;
    goto LABEL_3;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 184) + 248LL))(
         *(_QWORD *)(*a1 + 184),
         *(_QWORD *)(*a1 + 128));
  if ( v3 < 0 )
  {
    v4 = 777LL;
    goto LABEL_3;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 184) + 72LL))(
         *(_QWORD *)(*a1 + 184),
         *(_QWORD *)(*a1 + 144));
  if ( v3 < 0 )
  {
    v4 = 778LL;
    goto LABEL_3;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 184) + 120LL))(
         *(_QWORD *)(*a1 + 184),
         *(_QWORD *)(*a1 + 152));
  if ( v3 < 0 )
  {
    v4 = 779LL;
    goto LABEL_3;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 184) + 104LL))(
         *(_QWORD *)(*a1 + 184),
         *(_QWORD *)(*a1 + 160));
  if ( v3 < 0 )
  {
    v4 = 780LL;
    goto LABEL_3;
  }
  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher_Input>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*a1 + 176),
    &v8);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, *(_QWORD *)(*a1 + 224));
  v3 = v5;
  if ( v5 >= 0 )
  {
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)(*a1 + 176));
    *(_BYTE *)(*a1 + 264) = 0;
    ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowManagerWatcherDisconnected();
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x310,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v5);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
  return (unsigned int)v3;
}
