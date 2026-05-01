/*
 * XREFs of ?OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@34567@@Z @ 0x180592E30
 * Callers:
 *     <none>
 * Callees:
 *     ?Size@?$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180223CCC (-Size@-$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x1802388D8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?MigrationReason@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180338B90 (-MigrationReason@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventAr.c)
 *     ?ShellContext@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@I@Z @ 0x18034FA48 (-ShellContext@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18057DA74 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement@@@details@.c)
 *     ?ComputeMigrationInfo@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE@@@std@@AEBUCRect@Geometry@@00H@Z @ 0x180587234 (-ComputeMigrationInfo@SnapLayoutHelpers@@YA-AU-$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE.c)
 *     ?IsEnabled@SnapMigrationHandlerTelemetry@@SA_NE_K@Z @ 0x180592DE4 (-IsEnabled@SnapMigrationHandlerTelemetry@@SA_NE_K@Z.c)
 *     ?WindowMigrationAnswer_@SnapMigrationHandlerTelemetry@@QEBAX_KAEBUtagRECT@@@Z @ 0x180593314 (-WindowMigrationAnswer_@SnapMigrationHandlerTelemetry@@QEBAX_KAEBUtagRECT@@@Z.c)
 *     ?WindowMigrationEvent_@SnapMigrationHandlerTelemetry@@QEBAX_KIAEBUtagRECT@@1II1@Z @ 0x1805933C0 (-WindowMigrationEvent_@SnapMigrationHandlerTelemetry@@QEBAX_KIAEBUtagRECT@@1II1@Z.c)
 *     ?get@?$static_lazy@VSnapMigrationHandlerTelemetry@@@details@wil@@QEAAPEAVSnapMigrationHandlerTelemetry@@P6AXXZ@Z @ 0x18059349C (-get@-$static_lazy@VSnapMigrationHandlerTelemetry@@@details@wil@@QEAAPEAVSnapMigrationHandlerTel.c)
 *     ?HandleWinShiftHotKeyNarratorAnnouncementsAsync@SnapAccessibilityHelpers@@YA?AUfire_and_forget@winrt@@PEAUHWND__@@W4_SHELLSETWINDOWPOS_STATE@@UCRect@Geometry@@2PEAUIImmersiveMonitorManager@@@Z @ 0x18059B1BC (-HandleWinShiftHotKeyNarratorAnnouncementsAsync@SnapAccessibilityHelpers@@YA-AUfire_and_forget@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall SnapMigrationHandler::OnWindowMigrationEvent(
        SnapMigrationHandler *this,
        const struct winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *a2,
        const struct winrt::Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs *a3)
{
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // r14d
  unsigned __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // edi
  unsigned int v20; // esi
  SnapMigrationHandlerTelemetry *v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  unsigned __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  SnapMigrationHandlerTelemetry *v31; // rcx
  __int64 v32; // rdi
  __int128 v33; // xmm6
  struct tagRECT v34; // xmm7
  unsigned int v35; // esi
  __int64 v36; // rax
  const char *v37; // r9
  __int128 v38; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v39; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int v40; // [rsp+54h] [rbp-C4h] BYREF
  int v41; // [rsp+58h] [rbp-C0h] BYREF
  _BYTE v42[24]; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE v43[24]; // [rsp+80h] [rbp-98h] BYREF
  struct tagRECT v44; // [rsp+98h] [rbp-80h] BYREF
  struct tagRECT v45; // [rsp+A8h] [rbp-70h] BYREF
  struct tagRECT v46; // [rsp+B8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]

  v38 = 0LL;
  v5 = *(_QWORD *)a3;
  *(_DWORD *)v43 = 0;
  *(_OWORD *)&v43[8] = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v5 + 96LL))(v5, &v38);
  try
  {
    winrt::check_hresult((int *)&v39, v6, (__int64)v43);
    v46.left = (int)*(float *)&v38;
    v46.top = (int)*((float *)&v38 + 1);
    v46.right = (int)(float)(*(float *)&v38 + *((float *)&v38 + 2));
    v46.bottom = (int)(float)(*((float *)&v38 + 1) + *((float *)&v38 + 3));
    v38 = 0LL;
    v7 = *(_QWORD *)a3;
    *(_DWORD *)v43 = 0;
    *(_OWORD *)&v43[8] = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 56LL))(v7, &v38);
    winrt::check_hresult((int *)&v39, v8, (__int64)v43);
    v45.left = (int)*(float *)&v38;
    v45.top = (int)*((float *)&v38 + 1);
    v45.right = (int)(float)(*(float *)&v38 + *((float *)&v38 + 2));
    v45.bottom = (int)(float)(*((float *)&v38 + 1) + *((float *)&v38 + 3));
    v38 = 0LL;
    v9 = *(_QWORD *)a3;
    *(_DWORD *)v43 = 0;
    *(_OWORD *)&v43[8] = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v9 + 72LL))(v9, &v38);
    winrt::check_hresult((int *)&v39, v10, (__int64)v43);
    v44.left = (int)*(float *)&v38;
    v44.top = (int)*((float *)&v38 + 1);
    v44.right = (int)(float)(*(float *)&v38 + *((float *)&v38 + 2));
    v44.bottom = (int)(float)(*((float *)&v38 + 1) + *((float *)&v38 + 3));
    v40 = 0;
    v11 = *(_QWORD *)a3;
    *(_DWORD *)v43 = 0;
    *(_OWORD *)&v43[8] = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 64LL))(v11, &v40);
    winrt::check_hresult((int *)&v39, v12, (__int64)v43);
    v39 = 0;
    v13 = *(_QWORD *)a3;
    *(_DWORD *)v43 = 0;
    *(_OWORD *)&v43[8] = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 80LL))(v13, &v39);
    winrt::check_hresult(&v41, v14, (__int64)v43);
    v15 = winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::MigrationReason((__int64 *)a3);
    v16 = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::Size((__int64 *)a3);
    if ( SnapMigrationHandlerTelemetry::IsEnabled(v17) )
    {
      wil::details::static_lazy<SnapMigrationHandlerTelemetry>::get(
        v18,
        _lambda_09eb35d4d8d12ef89a70d65a1032a73e_::_lambda_invoker_cdecl_);
      v19 = v39;
      v20 = v40;
      SnapMigrationHandlerTelemetry::WindowMigrationEvent_(v21, v16, v15, &v45, &v44, v40, v39, &v46);
    }
    else
    {
      v20 = v40;
      v19 = v39;
    }
    if ( v20 != v19 || !Geometry::operator==(&v45, &v44) )
    {
      SnapLayoutHelpers::ComputeMigrationInfo((__int64)v43, &v46, &v45.left, (unsigned int *)&v44, v19);
      *(float *)&v38 = (float)*(int *)v43;
      *((float *)&v38 + 1) = (float)*(int *)&v43[4];
      *((float *)&v38 + 2) = (float)(*(_DWORD *)&v43[8] - *(_DWORD *)v43);
      *((float *)&v38 + 3) = (float)(*(_DWORD *)&v43[12] - *(_DWORD *)&v43[4]);
      v22 = *(_QWORD *)a3;
      *(_DWORD *)v42 = 0;
      *(_OWORD *)&v42[8] = 0LL;
      v23 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v22 + 104LL))(v22, &v38);
      winrt::check_hresult(&v41, v23, (__int64)v42);
      v24 = *(_QWORD *)a3;
      *(_DWORD *)v42 = 0;
      *(_OWORD *)&v42[8] = 0LL;
      v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 120LL))(v24, *(unsigned int *)&v43[16]);
      winrt::check_hresult(&v41, v25, (__int64)v42);
      v26 = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::Size((__int64 *)a3);
      if ( SnapMigrationHandlerTelemetry::IsEnabled(v27) )
      {
        wil::details::static_lazy<SnapMigrationHandlerTelemetry>::get(
          v28,
          _lambda_09eb35d4d8d12ef89a70d65a1032a73e_::_lambda_invoker_cdecl_);
        SnapMigrationHandlerTelemetry::WindowMigrationAnswer_(v31, v26, (const struct tagRECT *)v43);
      }
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::ReportUsage(
        (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::GetImpl'::`2'::impl,
        1u,
        v29,
        v30);
      if ( (unsigned int)winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::MigrationReason((__int64 *)a3) == 1 )
      {
        v32 = *((_QWORD *)this + 5);
        v33 = *(_OWORD *)v43;
        v34 = v44;
        v35 = *(_DWORD *)&v43[16];
        v36 = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::Size((__int64 *)a3);
        v38 = v33;
        *(struct tagRECT *)v42 = v34;
        SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync(v36, v35, v42, &v38, v32);
      }
    }
    if ( (unsigned int)winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::MigrationReason((__int64 *)a3) )
      winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::MigrationReason((__int64 *)a3);
    winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::ShellContext((__int64 *)a3);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x4F,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapmigrationhandler.cpp",
      v37);
  }
}
