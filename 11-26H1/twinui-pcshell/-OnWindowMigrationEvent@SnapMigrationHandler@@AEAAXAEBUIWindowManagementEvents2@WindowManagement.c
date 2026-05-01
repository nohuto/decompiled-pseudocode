/*
 * XREFs of ?OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@34567@@Z @ 0x1805B6E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Size@?$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180214EBC (-Size@-$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x18022A7D8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?MigrationReason@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180338670 (-MigrationReason@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventAr.c)
 *     ?ShellContext@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@I@Z @ 0x180354148 (-ShellContext@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805A1534 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement@@@details@.c)
 *     ?ComputeMigrationInfo@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE@@@std@@AEBUCRect@Geometry@@00H@Z @ 0x1805AB194 (-ComputeMigrationInfo@SnapLayoutHelpers@@YA-AU-$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE.c)
 *     ?IsEnabled@SnapMigrationHandlerTelemetry@@SA_NE_K@Z @ 0x1805B6DB4 (-IsEnabled@SnapMigrationHandlerTelemetry@@SA_NE_K@Z.c)
 *     ?WindowMigrationAnswer_@SnapMigrationHandlerTelemetry@@QEBAX_KAEBUtagRECT@@@Z @ 0x1805B729C (-WindowMigrationAnswer_@SnapMigrationHandlerTelemetry@@QEBAX_KAEBUtagRECT@@@Z.c)
 *     ?WindowMigrationEvent_@SnapMigrationHandlerTelemetry@@QEBAX_KIAEBUtagRECT@@1II1@Z @ 0x1805B7340 (-WindowMigrationEvent_@SnapMigrationHandlerTelemetry@@QEBAX_KIAEBUtagRECT@@1II1@Z.c)
 *     ?WindowPhysicalFrame@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1805B741C (-WindowPhysicalFrame@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEve.c)
 *     ?get@?$static_lazy@VSnapMigrationHandlerTelemetry@@@details@wil@@QEAAPEAVSnapMigrationHandlerTelemetry@@P6AXXZ@Z @ 0x1805B746C (-get@-$static_lazy@VSnapMigrationHandlerTelemetry@@@details@wil@@QEAAPEAVSnapMigrationHandlerTel.c)
 *     ?HandleWinShiftHotKeyNarratorAnnouncementsAsync@SnapAccessibilityHelpers@@YA?AUfire_and_forget@winrt@@PEAUHWND__@@W4_SHELLSETWINDOWPOS_STATE@@UCRect@Geometry@@2PEAUIImmersiveMonitorManager@@@Z @ 0x1805BF404 (-HandleWinShiftHotKeyNarratorAnnouncementsAsync@SnapAccessibilityHelpers@@YA-AUfire_and_forget@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  struct tagRECT *v22; // rax
  unsigned int left; // esi
  unsigned __int64 v24; // xmm0_8
  __int64 v25; // rcx
  int v26; // eax
  unsigned __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  SnapMigrationHandlerTelemetry *v31; // rcx
  __int64 v32; // rdi
  struct tagRECT v33; // xmm6
  struct tagRECT v34; // xmm7
  __int64 v35; // rax
  const char *v36; // r9
  unsigned int v37[4]; // [rsp+40h] [rbp-D8h] BYREF
  struct tagRECT v38; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int v39[4]; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE v40[24]; // [rsp+70h] [rbp-A8h] BYREF
  int v41; // [rsp+90h] [rbp-88h] BYREF
  struct tagRECT v42; // [rsp+98h] [rbp-80h] BYREF
  struct tagRECT v43; // [rsp+A8h] [rbp-70h] BYREF
  struct tagRECT v44; // [rsp+B8h] [rbp-60h] BYREF
  struct tagRECT v45; // [rsp+C8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]

  v38 = 0LL;
  v5 = *(_QWORD *)a3;
  *(_DWORD *)v40 = 0;
  *(_OWORD *)&v40[8] = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v5 + 96LL))(v5, &v38);
  try
  {
    winrt::check_hresult((int *)v37, v6, (__int64)v40);
    v45.left = (int)*(float *)&v38.left;
    v45.top = (int)*(float *)&v38.top;
    v45.right = (int)(float)(*(float *)&v38.left + *(float *)&v38.right);
    v45.bottom = (int)(float)(*(float *)&v38.top + *(float *)&v38.bottom);
    v38 = 0LL;
    v7 = *(_QWORD *)a3;
    *(_DWORD *)v40 = 0;
    *(_OWORD *)&v40[8] = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v7 + 56LL))(v7, &v38);
    winrt::check_hresult((int *)v37, v8, (__int64)v40);
    v44.left = (int)*(float *)&v38.left;
    v44.top = (int)*(float *)&v38.top;
    v44.right = (int)(float)(*(float *)&v38.left + *(float *)&v38.right);
    v44.bottom = (int)(float)(*(float *)&v38.top + *(float *)&v38.bottom);
    v38 = 0LL;
    v9 = *(_QWORD *)a3;
    *(_DWORD *)v40 = 0;
    *(_OWORD *)&v40[8] = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v9 + 72LL))(v9, &v38);
    winrt::check_hresult((int *)v37, v10, (__int64)v40);
    v43.left = (int)*(float *)&v38.left;
    v43.top = (int)*(float *)&v38.top;
    v43.right = (int)(float)(*(float *)&v38.left + *(float *)&v38.right);
    v43.bottom = (int)(float)(*(float *)&v38.top + *(float *)&v38.bottom);
    v39[0] = 0;
    v11 = *(_QWORD *)a3;
    *(_DWORD *)v40 = 0;
    *(_OWORD *)&v40[8] = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 64LL))(v11, v39);
    winrt::check_hresult((int *)v37, v12, (__int64)v40);
    v37[0] = 0;
    v13 = *(_QWORD *)a3;
    *(_DWORD *)v40 = 0;
    *(_OWORD *)&v40[8] = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 80LL))(v13, v37);
    winrt::check_hresult(&v41, v14, (__int64)v40);
    v15 = winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::MigrationReason((__int64 *)a3);
    v16 = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::Size((__int64 *)a3);
    if ( SnapMigrationHandlerTelemetry::IsEnabled(v17) )
    {
      wil::details::static_lazy<SnapMigrationHandlerTelemetry>::get(
        v18,
        _lambda_09eb35d4d8d12ef89a70d65a1032a73e_::_lambda_invoker_cdecl_);
      v19 = v37[0];
      v20 = v39[0];
      SnapMigrationHandlerTelemetry::WindowMigrationEvent_(v21, v16, v15, &v44, &v43, v39[0], v37[0], &v45);
    }
    else
    {
      v20 = v39[0];
      v19 = v37[0];
    }
    if ( v20 != v19 || !Geometry::operator==(&v44, &v43) )
    {
      v22 = (struct tagRECT *)SnapLayoutHelpers::ComputeMigrationInfo(
                                (__int64)v40,
                                &v45.left,
                                &v44,
                                (unsigned int *)&v43,
                                v19);
      left = v22[1].left;
      v42 = *v22;
      v24 = _mm_srli_si128((__m128i)v42, 8).m128i_u64[0];
      *(float *)&v38.left = (float)v42.left;
      *(float *)&v38.top = (float)v42.top;
      *(float *)&v38.right = (float)((int)v24 - v42.left);
      *(float *)&v38.bottom = (float)(HIDWORD(v24) - v42.top);
      winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::WindowPhysicalFrame(
        a3,
        &v38);
      v25 = *(_QWORD *)a3;
      *(_DWORD *)v40 = 0;
      *(_OWORD *)&v40[8] = 0LL;
      v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 120LL))(v25, left);
      winrt::check_hresult(&v41, v26, (__int64)v40);
      v27 = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::Size((__int64 *)a3);
      if ( SnapMigrationHandlerTelemetry::IsEnabled(v28) )
      {
        wil::details::static_lazy<SnapMigrationHandlerTelemetry>::get(
          v29,
          _lambda_09eb35d4d8d12ef89a70d65a1032a73e_::_lambda_invoker_cdecl_);
        SnapMigrationHandlerTelemetry::WindowMigrationAnswer_(v31, v27, &v42);
      }
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::ReportUsage(
        (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::GetImpl'::`2'::impl,
        1u,
        v30);
      if ( (unsigned int)winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::MigrationReason((__int64 *)a3) == 1 )
      {
        v32 = *((_QWORD *)this + 5);
        v33 = v42;
        v34 = v43;
        v35 = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::Size((__int64 *)a3);
        v38 = v33;
        *(struct tagRECT *)v40 = v34;
        SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync(v35, left, v40, &v38, v32);
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
      (void *)0x64,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapmigrationhandler.cpp",
      v36);
  }
}
