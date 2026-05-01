/*
 * XREFs of ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x1800588F8
 * Callers:
 *     ?_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x180058724 (-_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWN.c)
 *     ?SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z @ 0x1801F3F50 (-SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z.c)
 *     ?HandleCrashRecovery@CTaskWindow@@UEAAX_N@Z @ 0x180301D10 (-HandleCrashRecovery@CTaskWindow@@UEAAX_N@Z.c)
 *     ?SendVisibilityChanged@CTaskWindow@@UEAAX_J@Z @ 0x1803021B0 (-SendVisibilityChanged@CTaskWindow@@UEAAX_J@Z.c)
 *     ?s_SetWindowCloak@CTaskWindow@@CAJPEBUWINDOW_ACTION_DATA@1@@Z @ 0x1803026B0 (-s_SetWindowCloak@CTaskWindow@@CAJPEBUWINDOW_ACTION_DATA@1@@Z.c)
 * Callees:
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180058A9C (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?_ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@AEAAXPEAUHWND__@@W4ZBID@@_J@Z @ 0x180086FC4 (-_ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@AEAAXPEAUHWND__@@W4ZBID@@_J@.c)
 *     ?NotifyWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@I_K_JW4DELIVERY_METHOD@1@@Z @ 0x180228688 (-NotifyWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@I_K_JW4DELIVERY_METHOD@1@@Z.c)
 *     WPP_SF_qll @ 0x1802E956C (WPP_SF_qll.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int8 __fastcall CReportWindowVisibilityChange::ReportWindowsVisibilityChange(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        struct IImmersiveMonitor *a4,
        struct IImmersiveApplicationInternal *a5,
        __int64 a6)
{
  unsigned __int8 result; // al
  __int64 v10; // r8
  int v11; // edi
  int v12; // r15d
  __int64 v13; // rbx

  result = CReportWindowVisibilityChange::IsReportingEnabled((CReportWindowVisibilityChange *)a1, a4, a5);
  v11 = 0;
  v12 = result;
  if ( a3 == 13 || result )
  {
    v13 = a6;
    if ( (a6 & 2) != 0 && *(_BYTE *)(a1 + 72) )
      v13 = a6 | 4;
    (*(void (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[18].Ptr
                                                                    + 24LL))(
      CApplicationManagerUtility::g_pIAMGlobals[18].Ptr,
      a2,
      0LL,
      *(unsigned int *)(a1 + 76),
      v13);
    if ( a3 == 13 )
      CApplicationManagerUtility::NotifyWindow(a2, 0LL, 0LL, 0LL, 0);
    result = CReportWindowVisibilityChange::_ReportOwnedWindowsVisibilityChange(a1, a2, a3, v13);
  }
  if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    LOBYTE(v11) = a3 == 13;
    return WPP_SF_qll(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 10LL, v10, a2, v11, v12);
  }
  return result;
}
