/*
 * XREFs of xxxEndMenuLoop @ 0x140258BF0
 * Callers:
 *     xxxMNLoop @ 0x14015A654 (xxxMNLoop.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     xxxCallHandleMenuMessages @ 0x14022EC60 (xxxCallHandleMenuMessages.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxMNCancel @ 0x14003D33C (xxxMNCancel.c)
 *     xxxDWP_DoNCActivate @ 0x14003EE4C (xxxDWP_DoNCActivate.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1400446D8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x140205BB0 (xxxDrawMenuBarUnderlines.c)
 *     xxxEndMenu @ 0x1402E9D60 (xxxEndMenu.c)
 */

_QWORD *__fastcall xxxEndMenuLoop(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  _DWORD *v4; // rbx
  __int64 v5; // rdx
  int v6; // edi
  struct tagWND *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  char v11; // bl
  __int64 v12; // rdx
  _QWORD v14[2]; // [rsp+20h] [rbp-30h] BYREF
  ULONG_PTR v15[2]; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v14, a2);
  v3 = *(_QWORD *)v14[0];
  if ( (**(_DWORD **)v14[0] & 8) != 0 )
  {
    v3 = *(_QWORD *)v14[0];
    if ( (**(_DWORD **)v14[0] & 0x80000) == 0 )
      xxxMNCancel(a1, 0, 0LL, 0LL);
    v4 = (_DWORD *)(a1 + 8);
  }
  else
  {
    v4 = (_DWORD *)(a1 + 8);
    if ( (*(_DWORD *)(a1 + 8) & 0x20) != 0 )
    {
      Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v15, *(_QWORD *)(*(_QWORD *)v14[0] + 8LL));
      xxxDrawMenuBarUnderlines(*(_QWORD *)(*(_QWORD *)v14[0] + 8LL), 0LL);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v15, v5);
    }
    if ( (*v4 & 0x10) == 0 )
      xxxEndMenu(a1);
  }
  if ( (*v4 & 0x100) != 0 )
  {
    v6 = 0;
    if ( *(_QWORD *)(*(_QWORD *)v14[0] + 8LL) )
    {
      v7 = *(struct tagWND **)(*(_QWORD *)v14[0] + 8LL);
      v8 = *((_QWORD *)v7 + 2);
      v9 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)v14[0], v3) + 18888);
      v10 = *(_QWORD *)(v8 + 472);
      if ( v10 == v9 && *(struct tagWND **)(v10 + 128) == v7 )
      {
        v6 = 1;
        v11 = 1;
      }
      else
      {
        v11 = 2;
      }
      if ( ((*(unsigned __int8 *)(*((_QWORD *)v7 + 5) + 16LL) >> 6) & 1) != v6 )
      {
        Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v7);
        xxxDWP_DoNCActivate(v7, v11, 1LL);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v12);
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v14, v3);
}
