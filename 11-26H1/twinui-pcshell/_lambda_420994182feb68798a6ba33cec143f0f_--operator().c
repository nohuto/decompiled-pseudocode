/*
 * XREFs of _lambda_420994182feb68798a6ba33cec143f0f_::operator() @ 0x180431D18
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_420994182feb68798a6ba33cec143f0f___::Run @ 0x180432800 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_420994182feb68798a6ba33cec143f0f___--.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$query@UIWindowWatcher_Input@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIWindowWatcher_Input@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801DC450 (--$query@UIWindowWatcher_Input@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_t@.c)
 *     ?WindowEventDispatcher_WindowManagerWatcherDisconnected@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18042BCDC (-WindowEventDispatcher_WindowManagerWatcherDisconnected@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_420994182feb68798a6ba33cec143f0f_::operator()(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rdx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)(*(_QWORD *)a1 + 192LL) = 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 176LL) + 56LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 176LL),
         *(_QWORD *)(*(_QWORD *)a1 + 200LL));
  if ( v2 < 0 )
  {
    v3 = 771LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 176LL) + 72LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 176LL),
         *(_QWORD *)(*(_QWORD *)a1 + 208LL));
  if ( v2 < 0 )
  {
    v3 = 772LL;
    goto LABEL_3;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 176LL) + 104LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 176LL),
         *(_QWORD *)(*(_QWORD *)a1 + 216LL));
  if ( v2 < 0 )
  {
    v3 = 773LL;
    goto LABEL_3;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 184LL) + 200LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 184LL),
         *(_QWORD *)(*(_QWORD *)a1 + 112LL));
  if ( v2 < 0 )
  {
    v3 = 775LL;
    goto LABEL_3;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 184LL) + 232LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 184LL),
         *(_QWORD *)(*(_QWORD *)a1 + 120LL));
  if ( v2 < 0 )
  {
    v3 = 776LL;
    goto LABEL_3;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 184LL) + 248LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 184LL),
         *(_QWORD *)(*(_QWORD *)a1 + 128LL));
  if ( v2 < 0 )
  {
    v3 = 777LL;
    goto LABEL_3;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 184LL) + 72LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 184LL),
         *(_QWORD *)(*(_QWORD *)a1 + 144LL));
  if ( v2 < 0 )
  {
    v3 = 778LL;
    goto LABEL_3;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 184LL) + 120LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 184LL),
         *(_QWORD *)(*(_QWORD *)a1 + 152LL));
  if ( v2 < 0 )
  {
    v3 = 779LL;
    goto LABEL_3;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 184LL) + 104LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 184LL),
         *(_QWORD *)(*(_QWORD *)a1 + 160LL));
  if ( v2 < 0 )
  {
    v3 = 780LL;
    goto LABEL_3;
  }
  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher_Input>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*(_QWORD *)a1 + 176LL),
    &v7);
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, *(_QWORD *)(*(_QWORD *)a1 + 224LL));
  v2 = v4;
  if ( v4 >= 0 )
  {
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)(*(_QWORD *)a1 + 176LL));
    *(_BYTE *)(*(_QWORD *)a1 + 264LL) = 0;
    ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowManagerWatcherDisconnected();
    v2 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x310,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v4);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
  return (unsigned int)v2;
}
