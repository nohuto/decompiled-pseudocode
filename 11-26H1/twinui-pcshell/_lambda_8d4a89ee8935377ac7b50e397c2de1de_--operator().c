/*
 * XREFs of _lambda_8d4a89ee8935377ac7b50e397c2de1de_::operator() @ 0x1804F8208
 * Callers:
 *     _lambda_8d4a89ee8935377ac7b50e397c2de1de_::_lambda_invoker_cdecl_ @ 0x1804F25F0 (_lambda_8d4a89ee8935377ac7b50e397c2de1de_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800CD100 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$?0VGamingPosturePositioner@@@?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVGamingPosturePositioner@@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1804F271C (--$-0VGamingPosturePositioner@@@-$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEA.c)
 *     CreationThreadDispatcher::RunAsync__lambda_6de8a3c9a7f2afeabfb52c8d09309e45___ @ 0x1804F5AEC (CreationThreadDispatcher--RunAsync__lambda_6de8a3c9a7f2afeabfb52c8d09309e45___.c)
 *     ?WatchCurrentThread@GamingPosturePositionerTelemetryProvider@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1805039E0 (-WatchCurrentThread@GamingPosturePositionerTelemetryProvider@@SA-AVActivityThreadWatcher@wil@@PE.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_8d4a89ee8935377ac7b50e397c2de1de_::operator()(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6[2]; // [rsp+28h] [rbp-19h] BYREF
  __int64 v7[2]; // [rsp+38h] [rbp-9h] BYREF
  _BYTE v8[80]; // [rsp+48h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]
  __int64 v10; // [rsp+A8h] [rbp+67h] BYREF

  v10 = a1;
  GamingPosturePositionerTelemetryProvider::WatchCurrentThread(v8, "GamingFullScreenExperienceChangeNotification");
  wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(
    &v10,
    (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2);
  v3 = v10;
  v10 = 0LL;
  v7[0] = v3;
  v7[1] = a2;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
  v4 = *(_QWORD *)(a2 + 744);
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    v6,
    v7);
  v6[1] = a2;
  v5 = CreationThreadDispatcher::RunAsync__lambda_6de8a3c9a7f2afeabfb52c8d09309e45___(v4, (__int64)v6);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1EC,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)v5);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v7);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v8);
}
