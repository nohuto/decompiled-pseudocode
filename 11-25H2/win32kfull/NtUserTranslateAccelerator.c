/*
 * XREFs of NtUserTranslateAccelerator @ 0x14016E580
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14003507C (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ @ 0x14003D904 (--1-$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ.c)
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     xxxTranslateAccelerator @ 0x14016E680 (xxxTranslateAccelerator.c)
 */

__int64 __fastcall NtUserTranslateAccelerator(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagWND *v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rsi
  struct tagTHREADINFO *v12; // rbx
  __int64 v13; // rdx
  ULONG_PTR v15[2]; // [rsp+28h] [rbp-60h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v17; // [rsp+48h] [rbp-40h]
  __int128 v18; // [rsp+58h] [rbp-30h]
  __int128 v19; // [rsp+68h] [rbp-20h]

  EnterCrit(0LL, 0LL);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (__int128 *)MmUserProbeAddress;
  v17 = *a3;
  v18 = a3[1];
  v19 = a3[2];
  v8 = (struct tagWND *)ValidateHwnd(a1);
  v9 = 0;
  if ( v8 )
  {
    LOBYTE(v6) = 8;
    v11 = HMValidateHandleWithDescriptor(a2, v6);
    if ( v11 )
    {
      v12 = PtiCurrent(v7, v10);
      Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, (__int64)v12, (__int64)v8);
      Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(v15, (__int64)v12, v11);
      v9 = xxxTranslateAccelerator(v8);
      Win32HMThreadLockAlways<tagACCELTABLE>::~Win32HMThreadLockAlways<tagACCELTABLE>((ULONG_PTR)v15);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v13);
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  return v9;
}
