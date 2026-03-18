/*
 * XREFs of ??$ReadFromUser@UtagRECT@@@UmpDetail@@YA?AUtagRECT@@PEBU1@@Z @ 0x1402512A4
 * Callers:
 *     NtUserScrollWindowEx @ 0x14003E4E0 (NtUserScrollWindowEx.c)
 *     NtUserUpdateLayeredWindow @ 0x140234060 (NtUserUpdateLayeredWindow.c)
 *     NtUserValidateRect @ 0x140252F00 (NtUserValidateRect.c)
 *     NtUserCalcMenuBar @ 0x14025DF00 (NtUserCalcMenuBar.c)
 *     NtUserCalculatePopupWindowPosition @ 0x1402AFF30 (NtUserCalculatePopupWindowPosition.c)
 *     NtUserDrawAnimatedRects @ 0x1402B1320 (NtUserDrawAnimatedRects.c)
 *     NtUserDrawCaption @ 0x1402B1410 (NtUserDrawCaption.c)
 *     NtUserDrawCaptionTemp @ 0x1402B1520 (NtUserDrawCaptionTemp.c)
 *     NtUserInvalidateRect @ 0x1402B75F0 (NtUserInvalidateRect.c)
 *     NtUserPaintMonitor @ 0x1402B8D20 (NtUserPaintMonitor.c)
 *     NtUserScrollDC @ 0x1402BB370 (NtUserScrollDC.c)
 *     NtUserSetInternalWindowPos @ 0x1402BCF60 (NtUserSetInternalWindowPos.c)
 *     NtUserSetWindowCompositionTransition @ 0x1402BE3D0 (NtUserSetWindowCompositionTransition.c)
 *     NtUserSetWindowShowState @ 0x1402BE910 (NtUserSetWindowShowState.c)
 *     NtUserShellSetWindowPos @ 0x1402BF280 (NtUserShellSetWindowPos.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1402C08A0 (NtUserUpdateDefaultDesktopThumbnail.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

_OWORD *__fastcall UmpDetail::ReadFromUser<tagRECT>(_OWORD *a1, void *a2)
{
  *a1 = 0LL;
  RtlCopyFromUser(a1, a2, 0x10uLL);
  return a1;
}
