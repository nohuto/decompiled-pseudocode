/*
 * XREFs of DSA_GetItemPtr @ 0x1801FE380
 * Callers:
 *     ?FindPidl@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@PEAH@Z @ 0x1801FE214 (-FindPidl@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@PEAH@Z.c)
 *     ?BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ @ 0x18059A478 (-BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ.c)
 *     ?ClearAdapterInfo@@YAXPEAV?$CDSA@U_AdapterInfo@@@@_N@Z @ 0x18064F130 (-ClearAdapterInfo@@YAXPEAV-$CDSA@U_AdapterInfo@@@@_N@Z.c)
 *     ?Search@?$CDSA_Base@U_TargetInfo@@@@QEBAHPEBU_TargetInfo@@HP6AH00_J@Z1I@Z @ 0x18064F220 (-Search@-$CDSA_Base@U_TargetInfo@@@@QEBAHPEBU_TargetInfo@@HP6AH00_J@Z1I@Z.c)
 *     ?_BuildDisplayIndex@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@0IPEAV?$CDSA@U_AdapterInfo@@@@HI_NPEAH3@Z @ 0x18064F31C (-_BuildDisplayIndex@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@0IPEAV-$CDSA@U_AdapterInfo@@@@HI_NPEAH3@Z.c)
 *     DSA_EnumCallback @ 0x18065E108 (DSA_EnumCallback.c)
 *     ?FindPinEntryFromAppId@CPinList@@QEAAPEAVPINENTRY@@PEBG_NPEAH@Z @ 0x1806686A0 (-FindPinEntryFromAppId@CPinList@@QEAAPEAVPINENTRY@@PEBG_NPEAH@Z.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x18066C480 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x18066DB10 (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x18066E4A0 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18066EF00 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 * Callees:
 *     <none>
 */

PVOID __stdcall DSA_GetItemPtr(HDSA hdsa, int i)
{
  PVOID result; // rax

  result = 0LL;
  if ( hdsa && i >= 0 && i < *(_DWORD *)hdsa )
    return (PVOID)(*((_QWORD *)hdsa + 1) + (unsigned int)(*((_DWORD *)hdsa + 5) * i));
  return result;
}
