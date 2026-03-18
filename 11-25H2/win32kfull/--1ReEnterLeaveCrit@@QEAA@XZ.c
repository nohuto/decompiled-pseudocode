/*
 * XREFs of ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400D882C
 * Callers:
 *     xxxProcessHidInput @ 0x1400388A0 (xxxProcessHidInput.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1400608E0 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x140063468 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z.c)
 *     UserDetachQueueFromInputWindow @ 0x1400D81D8 (UserDetachQueueFromInputWindow.c)
 *     UserJobCallout @ 0x1400D8250 (UserJobCallout.c)
 *     EditionParseDesktop @ 0x1400D86C0 (EditionParseDesktop.c)
 *     DestroyWindowStation @ 0x1401EB510 (DestroyWindowStation.c)
 *     FreeWindowStation @ 0x1401EEE70 (FreeWindowStation.c)
 *     ?xxxUserBeep@@YAHKK_N@Z @ 0x14021DA40 (-xxxUserBeep@@YAHKK_N@Z.c)
 *     FreeDesktop @ 0x140243E30 (FreeDesktop.c)
 *     UnmapDesktop @ 0x140243FD0 (UnmapDesktop.c)
 *     EditionIsUsermodeRIMAccessAllowed @ 0x140276F60 (EditionIsUsermodeRIMAccessAllowed.c)
 *     UserSetTimer @ 0x1402DE08C (UserSetTimer.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x140325BAC (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ReEnterLeaveCrit::~ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  if ( !*(_BYTE *)this )
    UserSessionSwitchLeaveCritWithNonPaged(0LL);
}
