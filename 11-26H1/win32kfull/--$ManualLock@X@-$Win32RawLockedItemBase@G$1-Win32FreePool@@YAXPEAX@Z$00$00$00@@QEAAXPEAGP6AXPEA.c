/*
 * XREFs of ??$ManualLock@X@?$Win32RawLockedItemBase@G$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEAX@Z@Z @ 0x1401DABA8
 * Callers:
 *     xxxSendNotifyMessage @ 0x140044970 (xxxSendNotifyMessage.c)
 *     xxxBroadcastMessageEx @ 0x140092830 (xxxBroadcastMessageEx.c)
 *     xxxDrawMenuBarUnderlines @ 0x14017819C (xxxDrawMenuBarUnderlines.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140193984 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1401FAD80 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMGetTextExtent @ 0x1401FB45C (xxxPSMGetTextExtent.c)
 *     NtUserDrawCaptionTemp @ 0x1402B1520 (NtUserDrawCaptionTemp.c)
 *     NtUserGetClassInfoEx @ 0x1402B2550 (NtUserGetClassInfoEx.c)
 *     NtUserRegisterClassExWOW @ 0x1402B9700 (NtUserRegisterClassExWOW.c)
 *     NtUserResolveDesktopForWOW @ 0x1402BADC0 (NtUserResolveDesktopForWOW.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
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
    BugCheckParameter4 = PtiCurrent((__int64)BugCheckParameter2);
    KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  }
  result = PtiCurrent((__int64)BugCheckParameter2);
  *BugCheckParameter2 = *((_QWORD *)result + 47);
  *((_QWORD *)result + 47) = BugCheckParameter2;
  BugCheckParameter2[2] = a3;
  BugCheckParameter2[1] = BugCheckParameter3;
  return result;
}
