/*
 * XREFs of NtUserPaintMenuBar @ 0x14003DEB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxPaintMenuBar @ 0x14003F7B0 (xxxPaintMenuBar.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x1402939A0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserPaintMenuBar(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // edi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagTHREADINFO *v16; // rax
  __int64 v18; // rdx
  ULONG_PTR BugCheckParameter3[5]; // [rsp+30h] [rbp-28h] BYREF

  v10 = EnterCrit(0LL, 0LL);
  v11 = ValidateReceivingHwnd(a1, 1LL);
  v12 = 0;
  v13 = v11;
  if ( v11 )
  {
    Win32HM_LockIntoThread<0>(v10, v11, BugCheckParameter3);
    if ( (*(_BYTE *)(*(_QWORD *)(v13 + 40) + 31LL) & 0xC0) == 0x40 )
      goto LABEL_3;
    if ( (a6 & 0xFFFFFFFE) != 0 )
    {
      UserSetLastError(1004);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v18);
      goto LABEL_5;
    }
    if ( a3 < 0 || a4 < 0 || a5 < 0 )
LABEL_3:
      UserSetLastError(87);
    else
      v12 = xxxPaintMenuBar(v13, a2, (unsigned int)a3, (unsigned int)a4, a5, a6);
    v16 = PtiCurrent(v15, v14);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v16, BugCheckParameter3);
  }
LABEL_5:
  UserSessionSwitchLeaveCrit();
  return v12;
}
