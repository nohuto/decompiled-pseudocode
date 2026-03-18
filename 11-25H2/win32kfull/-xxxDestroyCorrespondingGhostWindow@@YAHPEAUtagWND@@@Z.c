/*
 * XREFs of ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1401809E0
 * Callers:
 *     ?xxxHandleGhostRelatedWindowDestruction@@YAXPEAUtagWND@@@Z @ 0x140181320 (-xxxHandleGhostRelatedWindowDestruction@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z @ 0x1402AEE08 (-xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x140180AB8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?RemoveGhostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z @ 0x140181470 (-RemoveGhostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z.c)
 *     ?RemoveFrostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z @ 0x14026E4E4 (-RemoveFrostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxDestroyCorrespondingGhostWindow(struct tagWND *a1)
{
  unsigned int v2; // ebx
  int v3; // ebp
  HWND v4; // rdx
  HWND v5; // rax
  __int64 v6; // rax
  struct tagWND *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = RemoveGhostProp(a1);
  if ( !v4 )
  {
    v5 = RemoveFrostProp(a1);
    if ( !v5 )
      return v2;
    v2 = 1;
    v3 = 1;
    goto LABEL_5;
  }
  v5 = 0LL;
  v2 = 1;
  if ( v4 != (HWND)-1LL )
    v5 = v4;
  if ( v5 )
  {
LABEL_5:
    LOBYTE(v4) = 1;
    v6 = HMValidateHandleNoSecure((__int64)v5, (__int64)v4);
    v7 = (struct tagWND *)v6;
    if ( v6 )
    {
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, v6);
      v9 = *(_WORD *)(*((_QWORD *)v7 + 5) + 42LL) & 0x2FFF;
      if ( (_DWORD)v9 == 682 )
      {
        if ( v3 )
          RemoveFrostProp(v7);
        else
          RemoveGhostProp(v7);
        xxxHideGhostWindow(v7, a1);
      }
      else
      {
        v2 = 0;
      }
      v10 = PtiCurrent(v9, v8);
      Win32HM_UnlockFromThread<0>((ULONG_PTR)v10, BugCheckParameter3);
    }
  }
  return v2;
}
