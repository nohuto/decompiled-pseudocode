/*
 * XREFs of xxxMNCloseHierarchy @ 0x14003CF70
 * Callers:
 *     xxxMNCancel @ 0x14003D33C (xxxMNCancel.c)
 *     xxxMNSelectItem @ 0x14003DFC0 (xxxMNSelectItem.c)
 *     xxxMNOpenHierarchy @ 0x14016D6F0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     xxxMNKeyDown @ 0x1402BFBCC (xxxMNKeyDown.c)
 *     xxxEndMenu @ 0x1402E9D60 (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1402EC7F8 (xxxMNKeyFilter.c)
 * Callees:
 *     FindTimer @ 0x14001A310 (FindTimer.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14001BAD0 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x140034CF8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140034D4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMenuSelect @ 0x14003F1D4 (xxxSendMenuSelect.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1400446D8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNAnimate @ 0x140045C18 (MNAnimate.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x140187B78 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x1401BB244 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x140285BFC (safe_cast_fnid_to_PMENUWND.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1402BEF74 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 */

__int64 __fastcall xxxMNCloseHierarchy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  struct tagWND *v6; // rbx
  struct tagTHREADINFO *v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  struct tagMENUWND *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  _QWORD v20[2]; // [rsp+38h] [rbp-29h] BYREF
  ULONG_PTR v21[2]; // [rsp+48h] [rbp-19h] BYREF
  _QWORD v22[2]; // [rsp+58h] [rbp-9h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+68h] [rbp+7h] BYREF
  ULONG_PTR v24[2]; // [rsp+80h] [rbp+1Fh] BYREF
  ULONG_PTR v25[2]; // [rsp+90h] [rbp+2Fh] BYREF
  ULONG_PTR v26[3]; // [rsp+A0h] [rbp+3Fh] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v20, a1, a3, a4);
  MNAnimate(a2, 0LL);
  if ( (**(_DWORD **)v20[0] & 0x20) != 0 )
  {
    if ( (**(_DWORD **)v20[0] & 0x4000) != 0 )
    {
      FindTimer(*(_QWORD *)(*(_QWORD *)v20[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
      **(_DWORD **)v20[0] &= ~0x4000u;
    }
    v6 = *(struct tagWND **)(*(_QWORD *)v20[0] + 24LL);
    if ( v6 )
    {
      v7 = PtiCurrent(*(_QWORD *)v20[0], v5);
      Win32HM_LockIntoThread<0>(v7, v6, v21);
      xxxSendMessage(v6, 0x1E4u);
      v8 = *(_DWORD *)(a2 + 8);
      if ( (v8 & 0x100) != 0 && (v8 & 4) != 0 && (**(_DWORD **)v20[0] & 1) == 0 )
      {
        Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(
          BugCheckParameter3,
          *(_QWORD *)(*(_QWORD *)v20[0] + 16LL));
        xxxActivateWindowWithOptions(*(_QWORD *)(*(_QWORD *)v20[0] + 16LL), 0LL, 0LL, 1LL, 0);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v9);
      }
      xxxWindowEvent(7u, v6, -4, 0, 0);
      if ( Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>((ULONG_PTR)v21) )
      {
        if ( !(unsigned int)xxxDestroyWindow(v6) )
        {
          v10 = (struct tagMENUWND *)safe_cast_fnid_to_PMENUWND(v6);
          if ( v10 )
            xxxMNDestroyHandler(v10);
        }
      }
      HMAssignmentUnlock(*(_QWORD *)v20[0] + 24LL);
      **(_DWORD **)v20[0] &= ~0x20u;
      Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(v21, v11);
    }
    v12 = *(_QWORD *)v20[0];
    if ( (**(_DWORD **)v20[0] & 1) != 0 )
    {
      HMAssignmentUnlock(v12 + 56);
    }
    else
    {
      v22[1] = *(_QWORD *)(v12 + 16);
      v22[0] = *(_QWORD *)(*(_QWORD *)v20[0] + 64LL) + 56LL;
      HMAssignmentLock(v22, 0LL);
    }
    if ( (*(_DWORD *)(a2 + 8) & 4) != 0 && *(_DWORD *)(*(_QWORD *)v20[0] + 80LL) != -1 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)v20[0] + 64LL);
      v14 = *(_QWORD *)(v13 + 8);
      if ( v14 )
      {
        Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v26, *(_QWORD *)(v13 + 8));
        Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v25, *(_QWORD *)(*(_QWORD *)v20[0] + 16LL));
        Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(
          v24,
          *(_QWORD *)(*(_QWORD *)v20[0] + 40LL));
        v15 = *(_DWORD *)(*(_QWORD *)v20[0] + 80LL);
        SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(BugCheckParameter3, *(_QWORD *)(*(_QWORD *)v20[0] + 40LL));
        xxxSendMenuSelect(v14, *(_QWORD *)(*(_QWORD *)v20[0] + 16LL), (unsigned int)BugCheckParameter3, v15, a2);
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(BugCheckParameter3);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v24, v16);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v25, v17);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v26, v18);
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v20);
}
