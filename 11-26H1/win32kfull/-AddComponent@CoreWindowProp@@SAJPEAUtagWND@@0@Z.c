/*
 * XREFs of ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1402454B4
 * Callers:
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1402453DC (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x14003A3D0 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1401790C4 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z @ 0x1402E1558 (-FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z.c)
 */

__int64 __fastcall CoreWindowProp::AddComponent(struct tagWND *a1, struct tagWND *a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  v12 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>((__int64)a1, &v12) )
  {
    v5 = v12;
    if ( *(_DWORD *)(v12 + 24) )
    {
      if ( !CoreWindowProp::FindComponent(a1, a2, 0LL) )
      {
        v6 = (_QWORD *)Win32AllocPoolZInit(16LL, 1920430933LL);
        if ( !v6 )
          return (unsigned int)-1073741801;
        *v6 = *(_QWORD *)(v5 + 40);
        v6[1] = a2;
        *(_QWORD *)(v5 + 40) = v6;
        ++*(_DWORD *)(v5 + 48);
      }
      if ( *(_DWORD *)(*((_QWORD *)a2 + 5) + 236LL) != *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) )
      {
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v11);
        v8 = PtiCurrent(v7);
        Win32HM_LockIntoThread<1>((__int64)v8, (__int64)a2, (__int64 *)BugCheckParameter3);
        xxxSetWindowBand(a2, 0LL, *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL), 7);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v11);
      }
      return v3;
    }
  }
  UserSetLastError(5);
  return 3221225506LL;
}
