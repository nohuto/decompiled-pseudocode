/*
 * XREFs of ??$ManualLock@X@?$Win32RawLockedItemBase@G$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEAX@Z@Z @ 0x140128970
 * Callers:
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x14002A200 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMGetTextExtent @ 0x14002B2D0 (xxxPSMGetTextExtent.c)
 *     xxxBroadcastMessageEx @ 0x1401293EC (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x14012B560 (xxxSendNotifyMessage.c)
 *     xxxDrawMenuBarUnderlines @ 0x140205BB0 (xxxDrawMenuBarUnderlines.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x14023ABE8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     NtUserDrawCaptionTemp @ 0x140295B70 (NtUserDrawCaptionTemp.c)
 *     NtUserGetClassInfoEx @ 0x1402970E0 (NtUserGetClassInfoEx.c)
 *     NtUserRegisterClassExWOW @ 0x14029C000 (NtUserRegisterClassExWOW.c)
 *     NtUserResolveDesktopForWOW @ 0x14029D7D0 (NtUserResolveDesktopForWOW.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

struct tagTHREADINFO *__fastcall Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
        _QWORD *BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3)
{
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *result; // rax

  if ( BugCheckParameter2[2] != -1LL )
  {
    BugCheckParameter4 = PtiCurrent((__int64)BugCheckParameter2, BugCheckParameter3);
    KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  }
  result = PtiCurrent((__int64)BugCheckParameter2, BugCheckParameter3);
  *BugCheckParameter2 = *((_QWORD *)result + 48);
  *((_QWORD *)result + 48) = BugCheckParameter2;
  BugCheckParameter2[2] = a3;
  BugCheckParameter2[1] = BugCheckParameter3;
  return result;
}
