/*
 * XREFs of ??$Write@UtagRECT@@@?$UserModePointer@UtagRECT@@@@QEAAXAEBUtagRECT@@@Z @ 0x1402574C8
 * Callers:
 *     NtUserGetUpdateRect @ 0x14025E9B0 (NtUserGetUpdateRect.c)
 *     NtUserCalculatePopupWindowPosition @ 0x1402AFF30 (NtUserCalculatePopupWindowPosition.c)
 *     NtUserGetOwnerTransformedMonitorRect @ 0x1402B41E0 (NtUserGetOwnerTransformedMonitorRect.c)
 *     NtUserGetPhysicalDeviceRect @ 0x1402B42E0 (NtUserGetPhysicalDeviceRect.c)
 *     NtUserGetWindowMinimizeRect @ 0x1402B55B0 (NtUserGetWindowMinimizeRect.c)
 *     NtUserScrollDC @ 0x1402BB370 (NtUserScrollDC.c)
 * Callees:
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 */

__int64 __fastcall UserModePointer<tagRECT>::Write<tagRECT>(void **a1, void *a2)
{
  return RtlCopyToUser(*a1, a2, 0x10uLL);
}
