/*
 * XREFs of xxxMNMouseMove @ 0x140044310
 * Callers:
 *     xxxHandleMenuMessages @ 0x1400439DC (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x14002EA08 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxMNSelectItem @ 0x14003DFC0 (xxxMNSelectItem.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1400446D8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     IsMFMWFPWindow @ 0x140044744 (IsMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x14004476C (xxxMNFindWindowFromPoint.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140044D78 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x140045BC0 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     IsWindowBeingDestroyed @ 0x14005C540 (IsWindowBeingDestroyed.c)
 *     ?xxxMNHideNextHierarchy@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x14016D664 (-xxxMNHideNextHierarchy@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x14016D6F0 (xxxMNOpenHierarchy.c)
 *     TrackMouseEvent @ 0x1401A5CD4 (TrackMouseEvent.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1402019C0 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x140285BFC (safe_cast_fnid_to_PMENUWND.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1402C07A4 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNUpdateDraggingInfo @ 0x1402E9B84 (xxxMNUpdateDraggingInfo.c)
 */

void __fastcall xxxMNMouseMove(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rdx
  unsigned int v6; // ebx
  int v7; // eax
  struct tagWND *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rsi
  int v12; // eax
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagTHREADINFO *v16; // rax
  __int64 v17; // rdx
  struct tagWND *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct tagTHREADINFO *v21; // rax
  int v22; // ebx
  _QWORD *v23; // rax
  ULONG_PTR v24; // rax
  __int64 *v25[2]; // [rsp+20h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-30h] BYREF
  ULONG_PTR v27[4]; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v28; // [rsp+80h] [rbp+20h] BYREF
  int v29; // [rsp+90h] [rbp+30h]

  v29 = a3;
  BugCheckParameter3[1] = 0LL;
  v5 = (_QWORD *)*a1;
  v6 = a3;
  BugCheckParameter3[0] = -1LL;
  v28 = 0;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v25, *v5, a3, a4);
  if ( *v25[0] != *(_QWORD *)(*v25[0] + 64) )
    goto LABEL_16;
  if ( __PAIR64__(SHIWORD(v29), (__int16)v6) == *(_QWORD *)(a2 + 12) )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v25);
    Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v17);
    return;
  }
  v7 = SHIWORD(v29);
  *(_DWORD *)(a2 + 12) = (__int16)v6;
  *(_DWORD *)(a2 + 16) = v7;
  v8 = (struct tagWND *)xxxMNFindWindowFromPoint(v25, &v28, v6);
  if ( (unsigned int)IsMFMWFPWindow(v8) )
    Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>(BugCheckParameter3, v9);
  if ( (*(_DWORD *)(a2 + 8) & 0x8000) != 0 )
    xxxMNUpdateDraggingInfo(a2, v8, v28);
  if ( *(_DWORD *)(a2 + 20) == 1 )
  {
    if ( !v8
      || v8 == (struct tagWND *)0xFFFFFFFFLL
      && *(_QWORD *)(*v25[0] + 8)
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v25[0] + 8) + 40LL) + 31LL) & 0x20) != 0 )
    {
      goto LABEL_16;
    }
    *(_DWORD *)(a2 + 20) = -1;
  }
  if ( v8 == (struct tagWND *)4294967291LL )
  {
    if ( (*(_DWORD *)(a2 + 8) & 8) == 0 )
      goto LABEL_24;
    xxxMNSwitchToAlternateMenu(v25, a2);
  }
  else if ( v8 != (struct tagWND *)0xFFFFFFFFLL )
  {
    if ( v8 )
    {
      v10 = safe_cast_fnid_to_PMENUWND(v8);
      if ( (unsigned int)IsWindowBeingDestroyed(v8) || !v10 )
        goto LABEL_16;
      v11 = *(_QWORD *)(v10 + 8);
      if ( v11 != *v25[0] )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(v25);
        if ( v11 )
        {
          v25[0] = *(__int64 **)(v11 + 88);
          ++*((_DWORD *)v25[0] + 2);
        }
        else
        {
          v25[0] = (__int64 *)gSmartObjNullRef;
        }
      }
      v12 = *(_DWORD *)(a2 + 8);
      if ( (v12 & 0x100) != 0 && (v12 & 0x8000) == 0 && (**(_DWORD **)v25[0] & 0x100000) == 0 )
      {
        v24 = *(_QWORD *)v8;
        v27[0] = 0x200000000LL;
        v27[2] = 0LL;
        v27[1] = v24;
        TrackMouseEvent(v27);
        **(_DWORD **)v25[0] |= 0x100000u;
        xxxSendMessage(v8, 0x20u);
      }
      v13 = xxxSendMessage(v8, 0x1E5u);
      if ( (v13 & 0x10) == 0 || (v13 & 3) != 0 || xxxSendMessage(v8, 0x1F0u) || *(_QWORD *)(v10 + 8) != *v25[0] )
        goto LABEL_16;
      goto LABEL_31;
    }
LABEL_24:
    if ( *(_QWORD *)(*v25[0] + 56) )
    {
      v18 = *(struct tagWND **)(*v25[0] + 56);
      Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v27, (__int64)v18);
      xxxSendMessage(v18, 0x1E5u);
      MNSetTimerToAutoDismiss((struct tagMENUSTATE *)a2, v18);
      v21 = PtiCurrent(v20, v19);
      Win32HM_UnlockFromThread<1>((ULONG_PTR)v21, v27);
    }
    else
    {
      xxxMNSelectItem(v25, a2, -1);
    }
    goto LABEL_16;
  }
  if ( *(_DWORD *)(*v25[0] + 80) != v28 )
  {
    v22 = **(_DWORD **)v25[0];
    v23 = (_QWORD *)xxxMNSelectItem(v25, a2, v28);
    if ( v23 && v23[2] && (*(_DWORD *)(*v23 + 4LL) & 3) == 0 && (v22 & 0x400) != 0 )
      xxxMNOpenHierarchy(v25, a2);
    goto LABEL_16;
  }
LABEL_31:
  xxxMNHideNextHierarchy(v25);
LABEL_16:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v25);
  if ( BugCheckParameter3[0] != -1LL )
  {
    v16 = PtiCurrent(v15, v14);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v16, BugCheckParameter3);
  }
}
