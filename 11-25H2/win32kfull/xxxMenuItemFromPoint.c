/*
 * XREFs of xxxMenuItemFromPoint @ 0x14026C8F0
 * Callers:
 *     NtUserMenuItemFromPoint @ 0x1402151F0 (NtUserMenuItemFromPoint.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14003D97C (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x14003DA44 (xxxMNRecomputeBarIfNeeded.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ?MNItemHitTest@@YAIPEAUtagMENU@@PEAUtagWND@@UtagPOINT@@@Z @ 0x140184AB8 (-MNItemHitTest@@YAIPEAUtagMENU@@PEAUtagWND@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall xxxMenuItemFromPoint(__int64 a1, __int64 *a2, struct tagPOINT a3)
{
  struct tagWND *MenuPwnd; // rsi
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // rdx
  struct tagMENU *v10; // rcx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  MenuPwnd = (struct tagWND *)GetMenuPwnd(a1, (__int64)a2);
  if ( !MenuPwnd )
    return 0xFFFFFFFFLL;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)*a2 + 40LL) + 40LL) & 1) == 0 )
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)MenuPwnd);
    xxxMNRecomputeBarIfNeeded((__int64)MenuPwnd, a2, v7, v8);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v9);
  }
  v10 = (struct tagMENU *)a2[2];
  if ( !v10 )
    v10 = *(struct tagMENU **)*a2;
  return MNItemHitTest(v10, MenuPwnd, a3);
}
