/*
 * XREFs of NtUserTrackPopupMenuEx @ 0x14003CDB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14003507C (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ @ 0x14003D904 (--1-$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ.c)
 *     ??$?0VSmartObjStackRef@@@?$Win32HMThreadLockAlways@UtagMENU@@@@QEAA@PEAUtagTHREADINFO@@AEAV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14003D944 (--$-0VSmartObjStackRef@@@-$Win32HMThreadLockAlways@UtagMENU@@@@QEAA@PEAUtagTHREADINFO@@AEAV-$Sma.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140047180 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     xxxTrackPopupMenuEx @ 0x14015AE18 (xxxTrackPopupMenuEx.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserTrackPopupMenuEx(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        ULONG64 a6)
{
  __int128 *v10; // rsi
  int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r14
  struct tagTHREADINFO *v16; // rbx
  __int64 v17; // rdx
  _BYTE v19[16]; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-A0h]
  __int128 *v21; // [rsp+58h] [rbp-90h]
  _BYTE v22[16]; // [rsp+68h] [rbp-80h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+78h] [rbp-70h] BYREF
  __int128 v24; // [rsp+88h] [rbp-60h] BYREF
  int v25; // [rsp+98h] [rbp-50h]

  v10 = (__int128 *)a6;
  v21 = (__int128 *)a6;
  v24 = 0LL;
  v25 = 0;
  EnterCrit(0LL, 0LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v19);
  if ( (a2 & 0xFFFE0200) != 0 )
  {
    UserSetLastError(1004);
    v11 = 0;
  }
  else
  {
    v12 = ValidateHmenu(a1, 1LL);
    v11 = 0;
    v20 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v19, v12);
    if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v19) )
    {
      v15 = ValidateHwnd(a5);
      if ( v15 )
      {
        v16 = PtiCurrent(v14, v13);
        Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, (__int64)v16, v15);
        Win32HMThreadLockAlways<tagMENU>::Win32HMThreadLockAlways<tagMENU>(v22, v16, v19);
        if ( a6 )
        {
          if ( a6 >= MmUserProbeAddress )
            v10 = (__int128 *)MmUserProbeAddress;
          v24 = *v10;
          v25 = *((_DWORD *)v10 + 4);
          v10 = &v24;
          v21 = &v24;
        }
        v11 = xxxTrackPopupMenuEx(v19, a2, a3, a4, v15, v10);
        Win32HMThreadLockAlways<tagACCELTABLE>::~Win32HMThreadLockAlways<tagACCELTABLE>(v22);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v17);
      }
    }
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v19);
  UserSessionSwitchLeaveCrit();
  return v11;
}
