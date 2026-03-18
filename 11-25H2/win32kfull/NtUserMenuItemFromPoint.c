/*
 * XREFs of NtUserMenuItemFromPoint @ 0x1402151F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140047180 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxMenuItemFromPoint @ 0x14026C8F0 (xxxMenuItemFromPoint.c)
 */

__int64 __fastcall NtUserMenuItemFromPoint(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct tagTHREADINFO *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct tagTHREADINFO *v21; // rax
  ULONG_PTR v23[2]; // [rsp+20h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v25[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v26; // [rsp+50h] [rbp-10h]
  __int64 v27; // [rsp+80h] [rbp+20h] BYREF

  v27 = a3;
  v5 = EnterCrit(0LL, 0LL);
  if ( !a1 || (a1 = ValidateHwnd(a1)) != 0 )
  {
    Win32HM_LockIntoThread<1>(v5, a1, (__int64 *)v23);
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v25, v8);
    v9 = ValidateHmenu(a2, 1LL);
    v26 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v25, v9);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v25) )
    {
      v7 = -1;
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v25, v10);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v23, v12);
    }
    else
    {
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v11);
      if ( (unsigned __int8)ShouldVirtualizeWindowRect(a1, CurrentThreadDpiAwarenessContext) )
        TransformPointBetweenCoordinateSpaces(&v27, &v27, a1, 0LL);
      v14 = v26;
      if ( !v26 )
        v14 = *(_QWORD *)v25[0];
      Win32HM_LockIntoThread<0>(v5, v14, BugCheckParameter3);
      v7 = xxxMenuItemFromPoint(a1, v25, v27);
      v17 = PtiCurrent(v16, v15);
      Win32HM_UnlockFromThread<0>((ULONG_PTR)v17, BugCheckParameter3);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v25, v18);
      v21 = PtiCurrent(v20, v19);
      Win32HM_UnlockFromThread<1>((ULONG_PTR)v21, v23);
    }
  }
  else
  {
    v7 = -1;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
