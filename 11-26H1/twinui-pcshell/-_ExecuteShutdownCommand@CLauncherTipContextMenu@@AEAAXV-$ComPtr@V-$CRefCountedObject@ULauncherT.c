/*
 * XREFs of ?_ExecuteShutdownCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipShutdownMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@PEBUtagRECT@@@Z @ 0x1806040E8
 * Callers:
 *     _lambda_190ccd1a8be9aac816201cee4203407b_$_ResumeCoro$1::operator() @ 0x180600B80 (_lambda_190ccd1a8be9aac816201cee4203407b_$_ResumeCoro$1--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18001DFD4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801E5778 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1LauncherTipContextMenuExecuteShutdownCommand@LauncherTipContextMenuTelemetry@@QEAA@XZ @ 0x1806009A4 (--1LauncherTipContextMenuExecuteShutdownCommand@LauncherTipContextMenuTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@LauncherTipContextMenuExecuteShutdownCommand@LauncherTipContextMenuTelemetry@@QEAAXXZ @ 0x1806032A8 (-StartActivity@LauncherTipContextMenuExecuteShutdownCommand@LauncherTipContextMenuTelemetry@@QEA.c)
 *     ?Stop@LauncherTipContextMenuExecuteShutdownCommand@LauncherTipContextMenuTelemetry@@QEAAXI@Z @ 0x180603358 (-Stop@LauncherTipContextMenuExecuteShutdownCommand@LauncherTipContextMenuTelemetry@@QEAAXI@Z.c)
 *     ?get@?$static_lazy@VTwinUISwitcherLogging@@@details@wil@@QEAAPEAVTwinUISwitcherLogging@@P6AXXZ@Z @ 0x180604684 (-get@-$static_lazy@VTwinUISwitcherLogging@@@details@wil@@QEAAPEAVTwinUISwitcherLogging@@P6AXXZ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CLauncherTipContextMenu::_ExecuteShutdownCommand(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  unsigned int v7; // esi
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  LPVOID v10; // rbx
  int (__fastcall *v11)(LPVOID, GUID *, __int64 *); // rdi
  unsigned int v12; // ebx
  __int64 v13; // rcx
  LPVOID ppv; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15[3]; // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int32 *v16[42]; // [rsp+50h] [rbp-B0h] BYREF

  v15[1] = a2;
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v16,
    (__int64)"LauncherTipContextMenuExecuteShutdownCommand");
  v16[0] = (volatile signed __int32 *)&LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteShutdownCommand::`vftable';
  LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteShutdownCommand::StartActivity((LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteShutdownCommand *)v16);
  v7 = *(_DWORD *)(*(_QWORD *)a2 + 8LL);
  if ( v7 == 1 )
  {
    v8 = *(_DWORD **)(wil::details::static_lazy<TwinUISwitcherLogging>::get(
                        v6,
                        _lambda_297a286f831baa642edc8499ff4b3ff7_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *v8 > 5u && tlgKeywordOn((__int64)v8, 0x200000000000LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        v9,
        byte_18082A006,
        0LL);
    LogoffWindowsDialog(0LL);
  }
  else
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
    if ( CoCreateInstance(&CLSID_AuthUIShutdownFlyout, 0LL, 1u, &GUID_36b1143f_d1db_4590_a855_b637d07e5d6b, &ppv) >= 0 )
    {
      v15[0] = 0LL;
      v10 = ppv;
      v11 = **(int (__fastcall ***)(LPVOID, GUID *, __int64 *))ppv;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v15);
      if ( v11(v10, &GUID_a8e1f9a8_d7f2_452d_a107_753fa8a4eab8, v15) >= 0 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15[0] + 24LL))(v15[0], 6LL);
      v12 = v7;
      if ( GetKeyState(160) < 0 || GetKeyState(161) < 0 )
      {
        if ( (v7 & 4) != 0 )
          v12 = v7 & 0xFDFDFFFF | 0x2000000;
      }
      else if ( (v7 & 2) != 0 && (v7 & 0x20000) == 0 )
      {
        v12 = v7 | 0x800000;
      }
      v7 = v12 | 0x10000;
      if ( GetKeyState(17) >= 0 )
        v7 = v12;
      (*(void (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64))(*(_QWORD *)ppv + 40LL))(
        ppv,
        v7,
        *(_QWORD *)(a1 + 128),
        a3);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v15);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  }
  LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteShutdownCommand::Stop(
    (LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteShutdownCommand *)v16,
    v7);
  LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteShutdownCommand::~LauncherTipContextMenuExecuteShutdownCommand(v16);
  v13 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
}
