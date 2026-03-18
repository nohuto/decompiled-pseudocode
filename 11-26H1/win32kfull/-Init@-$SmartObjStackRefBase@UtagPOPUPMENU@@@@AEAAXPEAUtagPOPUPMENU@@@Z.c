/*
 * XREFs of ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644
 * Callers:
 *     xxxMNMouseMove @ 0x14000F5A4 (xxxMNMouseMove.c)
 *     xxxInsertMenuItem @ 0x14003470C (xxxInsertMenuItem.c)
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x140049CF8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxHandleMenuMessages @ 0x14005B450 (xxxHandleMenuMessages.c)
 *     GetInheritedMonitor @ 0x14011EDF0 (GetInheritedMonitor.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z @ 0x14011F624 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNCancel @ 0x14011F744 (xxxMNCancel.c)
 *     xxxMNSelectItem @ 0x140120634 (xxxMNSelectItem.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x14013774C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x140175A04 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMNEndMenuState @ 0x140177ED0 (xxxMNEndMenuState.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxMNCloseHierarchy @ 0x140248D60 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x14024D400 (xxxMNOpenHierarchy.c)
 *     xxxCallHandleMenuMessages @ 0x140269B80 (xxxCallHandleMenuMessages.c)
 *     xxxMNEndMenuStateInternal @ 0x14026C3B0 (xxxMNEndMenuStateInternal.c)
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x140288E04 (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     xxxEndMenuLoop @ 0x14028CF70 (xxxEndMenuLoop.c)
 *     MNFlushDestroyedPopups @ 0x1402D0840 (MNFlushDestroyedPopups.c)
 *     MNUnlinkDelayedFreePopups @ 0x1402D0930 (MNUnlinkDelayedFreePopups.c)
 *     xxxMNStartMenuState @ 0x1402D09E8 (xxxMNStartMenuState.c)
 *     xxxSysCommand @ 0x1402D135C (xxxSysCommand.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1402D8D5C (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1402D8F04 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1402D938C (MNSetTimerToCloseHierarchy.c)
 *     xxxMNDismissIfOffMenu @ 0x1402D9808 (xxxMNDismissIfOffMenu.c)
 *     xxxMNKeyDown @ 0x1402D9B18 (xxxMNKeyDown.c)
 *     xxxHiliteMenuItem @ 0x1402F2B8C (xxxHiliteMenuItem.c)
 *     xxxMNDragOver @ 0x1402F97D8 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1402F9954 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1402F9B58 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmartObjStackRefBase<tagPOPUPMENU>::Init(_QWORD *a1, __int64 a2)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v5; // r8
  _QWORD *v6; // rcx
  __int64 result; // rax

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v5 = *CurrentThreadWin32Thread;
  else
    v5 = 0LL;
  v6 = a1 + 1;
  a1[1] = 0LL;
  *a1 = gSmartObjNullRef;
  if ( a2 )
  {
    *a1 = *(_QWORD *)(a2 + 88);
    ++*(_DWORD *)(*(_QWORD *)(a2 + 88) + 8LL);
  }
  result = *(_QWORD *)(v5 + 1672);
  *v6 = result;
  *(_QWORD *)(v5 + 1672) = v6;
  return result;
}
