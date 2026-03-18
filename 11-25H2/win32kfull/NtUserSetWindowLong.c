/*
 * XREFs of NtUserSetWindowLong @ 0x140180160
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowLong @ 0x140180294 (xxxSetWindowLong.c)
 *     DesktopVerifyHeapRange @ 0x140189B28 (DesktopVerifyHeapRange.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall NtUserSetWindowLong(__int64 a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  ULONG_PTR v7; // rdi
  struct tagWND *v8; // rsi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  ULONG_PTR *CurrentThreadNonPaged; // rax
  __int64 v14; // rdx
  ULONG_PTR BugCheckParameter3[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwndEx(a1, 1LL, 1LL);
  v7 = 0LL;
  v8 = (struct tagWND *)v5;
  if ( v5 )
  {
    BugCheckParameter3[0] = *(_QWORD *)(v4 + 456);
    *(_QWORD *)(v4 + 456) = BugCheckParameter3;
    BugCheckParameter3[1] = v5;
    HMLockObject(v5);
    if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
    {
      if ( a2 != -21 )
      {
        v9 = 0;
        UserSetLastError(87);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v14);
        goto LABEL_6;
      }
      DesktopVerifyHeapRange(*((_QWORD *)v8 + 3), *((_QWORD *)v8 + 5), 344LL);
    }
    v9 = xxxSetWindowLong(v8, 1);
    CurrentThreadNonPaged = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v11, v10);
    if ( CurrentThreadNonPaged )
      v7 = *CurrentThreadNonPaged;
    Win32HM_UnlockFromThread<0>(v7, BugCheckParameter3);
  }
  else
  {
    v9 = 0;
  }
LABEL_6:
  UserSessionSwitchLeaveCrit(v6);
  return v9;
}
