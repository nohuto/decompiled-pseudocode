/*
 * XREFs of NtUserGetMenuItemRect @ 0x14003D5F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14002D4E4 (--0-$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxGetMenuItemRect @ 0x14003D798 (xxxGetMenuItemRect.c)
 *     ??1?$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ @ 0x14003D904 (--1-$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ.c)
 *     ??$?0VSmartObjStackRef@@@?$Win32HMThreadLockAlways@UtagMENU@@@@QEAA@PEAUtagTHREADINFO@@AEAV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14003D944 (--$-0VSmartObjStackRef@@@-$Win32HMThreadLockAlways@UtagMENU@@@@QEAA@PEAUtagTHREADINFO@@AEAV-$Sma.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140047180 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetMenuItemRect(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned int MenuItemRect; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v12; // rdx
  _BYTE v14[16]; // [rsp+28h] [rbp-90h] BYREF
  __int64 v15; // [rsp+38h] [rbp-80h]
  ULONG_PTR BugCheckParameter3[3]; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v17[16]; // [rsp+60h] [rbp-58h] BYREF
  __int128 v18; // [rsp+70h] [rbp-48h] BYREF

  v18 = 0LL;
  v8 = EnterCrit(0LL, 0LL);
  if ( !a1 || (a1 = ValidateHwnd(a1)) != 0 )
  {
    Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(BugCheckParameter3, v8, a1);
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v14);
    v9 = ValidateHmenu(a2, 1LL);
    v15 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v14, v9);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v14) )
    {
      MenuItemRect = 0;
    }
    else
    {
      Win32HMThreadLockAlways<tagMENU>::Win32HMThreadLockAlways<tagMENU>(v17, v8, v14);
      MenuItemRect = xxxGetMenuItemRect(a1, v14, a3, &v18);
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      if ( (unsigned __int8)ShouldVirtualizeWindowRect(a1, CurrentThreadDpiAwarenessContext) )
        TransformRectBetweenCoordinateSpaces(&v18, &v18, 0LL, a1);
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_OWORD *)MmUserProbeAddress;
      *a4 = v18;
      Win32HMThreadLockAlways<tagACCELTABLE>::~Win32HMThreadLockAlways<tagACCELTABLE>(v17);
    }
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v14);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v12);
  }
  else
  {
    MenuItemRect = 0;
  }
  UserSessionSwitchLeaveCrit();
  return MenuItemRect;
}
