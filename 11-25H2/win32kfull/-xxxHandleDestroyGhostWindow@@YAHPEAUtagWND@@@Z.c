/*
 * XREFs of ?xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1401813E0
 * Callers:
 *     ?xxxHandleGhostRelatedWindowDestruction@@YAXPEAUtagWND@@@Z @ 0x140181320 (-xxxHandleGhostRelatedWindowDestruction@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x140180AB8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?RemoveGhostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z @ 0x140181470 (-RemoveGhostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z.c)
 *     ?RemoveFrostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z @ 0x14026E4E4 (-RemoveFrostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxHandleDestroyGhostWindow(struct tagWND *a1)
{
  int v2; // esi
  HWND v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  struct tagWND *v6; // rbx
  __int64 v7; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v3 = RemoveGhostProp(a1);
  if ( !v3 )
  {
    v3 = RemoveFrostProp(a1);
    if ( !v3 )
      return 0LL;
    v2 = 1;
  }
  LOBYTE(v4) = 1;
  v5 = HMValidateHandleNoSecure((__int64)v3, v4);
  v6 = (struct tagWND *)v5;
  if ( v5 )
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, v5);
    if ( v2 )
      RemoveFrostProp(v6);
    else
      RemoveGhostProp(v6);
    xxxHideGhostWindow((LARGE_INTEGER *)a1, v6);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v7);
  }
  return 0LL;
}
