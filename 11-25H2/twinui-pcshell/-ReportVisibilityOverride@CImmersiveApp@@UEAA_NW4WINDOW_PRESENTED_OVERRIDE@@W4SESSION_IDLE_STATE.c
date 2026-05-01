/*
 * XREFs of ?ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@W4ReportVisibilityOverrideOptions@@@Z @ 0x180137F30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x180042A44 (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     ?IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x18006BACC (-IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInter.c)
 *     ?_ScheduleApplicationNotification@CImmersiveApp@@AEAAXW4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x180089E4C (-_ScheduleApplicationNotification@CImmersiveApp@@AEAAXW4IMM_APP_CHANGED@@PEAUHWND__@@@Z.c)
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1801378F0 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1801380AC (-IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x1802C9114 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CImmersiveApp::ReportVisibilityOverride(unsigned __int64 a1, int a2, __int64 a3, __int64 a4, char a5)
{
  int v7; // edi
  char IsReportingEnabled; // bl
  CImmersiveApp::CImmersiveWindowCollection *v9; // r14
  int v10; // r9d
  void (__fastcall *v11)(unsigned __int64, struct IImmersiveMonitor **); // rbx
  struct IImmersiveMonitor *v12; // rcx
  __int64 v14; // rax
  struct IImmersiveMonitor *v15; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  IsReportingEnabled = 0;
  v9 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176);
  if ( (CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176))
     || a2 == 2)
    && a2 != *(_DWORD *)(a1 + 544) )
  {
    if ( a2 != 2 )
    {
      if ( v10 != 2
        && CReportWindowVisibilityChange::IsOverrideImmuneApplication(
             (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
             (struct IUnknown *)(a1 & ((unsigned __int128)-(__int128)(a1 - 112) >> 64))) )
      {
        return IsReportingEnabled;
      }
      IsReportingEnabled = 1;
      goto LABEL_16;
    }
    v15 = 0LL;
    v11 = *(void (__fastcall **)(unsigned __int64, struct IImmersiveMonitor **))(*(_QWORD *)a1 + 464LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    v11(a1, &v15);
    IsReportingEnabled = CReportWindowVisibilityChange::IsReportingEnabled(
                           (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                           (struct IUnknown *)v15,
                           (struct IUnknown *)(a1 & -(__int64)(a1 != 112)));
    v12 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( IsReportingEnabled )
    {
LABEL_16:
      *(_DWORD *)(a1 + 544) = a2;
      if ( a2 == 1 )
        CImmersiveApp::CImmersiveWindowCollection::SetVisibilityOverride(v9, 1LL, 1LL);
      else
        CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(v9, 1u);
      if ( (a5 & 1) != 0 && CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible(v9) )
      {
        v14 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)a1 + 384LL))(a1);
        LOBYTE(v7) = a2 != 2;
        CImmersiveApp::_ScheduleApplicationNotification((CImmersiveApp *)(a1 - 112), v7 + 13, v14);
      }
    }
  }
  return IsReportingEnabled;
}
