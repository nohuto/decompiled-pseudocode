/*
 * XREFs of ??1?$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ @ 0x14003D904
 * Callers:
 *     NtUserTrackPopupMenuEx @ 0x14003CDB0 (NtUserTrackPopupMenuEx.c)
 *     NtUserGetMenuItemRect @ 0x14003D5F0 (NtUserGetMenuItemRect.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x14016A55C (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     NtUserTranslateAccelerator @ 0x14016E580 (NtUserTranslateAccelerator.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     NtUserPaintMonitor @ 0x14029B850 (NtUserPaintMonitor.c)
 * Callees:
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14003D91C (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 */

__int64 __fastcall Win32HMThreadLockAlways<tagACCELTABLE>::~Win32HMThreadLockAlways<tagACCELTABLE>(ULONG_PTR a1)
{
  return Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(a1);
}
