/*
 * XREFs of xxxMNCancel @ 0x14003D33C
 * Callers:
 *     xxxMNButtonUp @ 0x14003CC8C (xxxMNButtonUp.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x14003D23C (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxHandleMenuMessages @ 0x1400439DC (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     xxxEndMenuLoop @ 0x140258BF0 (xxxEndMenuLoop.c)
 *     xxxMNChar @ 0x1402BF514 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1402BFBCC (xxxMNKeyDown.c)
 *     xxxEndMenu @ 0x1402E9D60 (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1402EC7F8 (xxxMNKeyFilter.c)
 * Callees:
 *     _PostTransformableMessage @ 0x140020914 (_PostTransformableMessage.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxMNCloseHierarchy @ 0x14003CF70 (xxxMNCloseHierarchy.c)
 *     xxxMNSelectItem @ 0x14003DFC0 (xxxMNSelectItem.c)
 *     xxxSendMenuSelect @ 0x14003F1D4 (xxxSendMenuSelect.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1400446D8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x140049CB8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     xxxPlayEventSound @ 0x1400D7F00 (xxxPlayEventSound.c)
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 *     xxxMNReleaseCapture @ 0x14026AD74 (xxxMNReleaseCapture.c)
 */

__int64 __fastcall xxxMNCancel(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  struct tagWND *v11; // rdi
  __int64 v12; // rdx
  int v13; // ebx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct tagTHREADINFO *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct tagTHREADINFO *v20; // rax
  __int64 v22; // rdx
  unsigned int v23; // [rsp+30h] [rbp-50h]
  _QWORD v24[2]; // [rsp+38h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+48h] [rbp-38h] BYREF
  ULONG_PTR v26[2]; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v27[24]; // [rsp+68h] [rbp-18h] BYREF

  v5 = (unsigned int)a3;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v24, *(_QWORD *)a1, a3, a4);
  v23 = **(_DWORD **)v24[0];
  *(_DWORD *)(a1 + 8) &= 0xFFFFFFF3;
  v6 = *(_QWORD *)v24[0];
  **(_DWORD **)v24[0] |= 0x8000u;
  if ( PtiCurrent(v6, v7) == *(struct tagTHREADINFO **)(a1 + 32) && (**(_DWORD **)v24[0] & 0x80000) == 0 )
  {
    **(_DWORD **)v24[0] |= 0x80000u;
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v26, *(_QWORD *)(*(_QWORD *)v24[0] + 16LL));
    xxxMNCloseHierarchy(*(_QWORD *)v24[0], a1, v8, v9);
    xxxMNSelectItem(v24, a1, 0xFFFFFFFFLL);
    v10 = v24[0];
    *(_DWORD *)(a1 + 8) &= ~1u;
    v11 = *(struct tagWND **)(*(_QWORD *)v10 + 8LL);
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v11);
    xxxMNReleaseCapture(a1);
    if ( ((v23 >> 3) & 1) != 0 )
    {
      xxxWindowEvent(7u, *(struct tagWND **)(*(_QWORD *)v24[0] + 16LL), -4, 0, 0);
      if ( *(_QWORD *)(*(_QWORD *)v24[0] + 16LL) )
        xxxDestroyWindow(*(struct tagWND **)(*(_QWORD *)v24[0] + 16LL));
    }
    if ( v11 )
    {
      v13 = -1;
      v14 = SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v27, 0xFFFFFFFFLL);
      xxxSendMenuSelect((_DWORD)v11, 0, v14, -1, a1);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v27);
      if ( ((v23 >> 2) & 1) == 0 )
        v13 = (v23 & 1) != 0 ? 0xFFFFFFFD : 0;
      xxxWindowEvent(5u, v11, v13, 0, 0);
      if ( (v23 & 0x800) == 0 )
        xxxSendMessage(v11, 0x212u);
      if ( a2 )
      {
        xxxPlayEventSound(6u);
        *(_DWORD *)(a1 + 24) = v5;
        if ( (v23 & 0x100) == 0 )
          PostTransformableMessage(v11, a2, v5, a4, 1);
      }
      else
      {
        *(_DWORD *)(a1 + 24) = 0;
      }
      v17 = PtiCurrent(v16, v15);
      Win32HM_UnlockFromThread<1>((ULONG_PTR)v17, BugCheckParameter3);
      v20 = PtiCurrent(v19, v18);
      Win32HM_UnlockFromThread<1>((ULONG_PTR)v20, v26);
    }
    else
    {
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v12);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v26, v22);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v24);
}
