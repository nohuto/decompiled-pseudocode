/*
 * XREFs of xxxMNSelectItem @ 0x14003DFC0
 * Callers:
 *     xxxMNCancel @ 0x14003D33C (xxxMNCancel.c)
 *     xxxMNMouseMove @ 0x140044310 (xxxMNMouseMove.c)
 *     xxxMNButtonDown @ 0x14016D560 (xxxMNButtonDown.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     xxxMNChar @ 0x1402BF514 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1402BFBCC (xxxMNKeyDown.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1402C07A4 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNKeyFilter @ 0x1402EC7F8 (xxxMNKeyFilter.c)
 * Callees:
 *     FindTimer @ 0x14001A310 (FindTimer.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x140034CF8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140034D4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxMNCloseHierarchy @ 0x14003CF70 (xxxMNCloseHierarchy.c)
 *     xxxMNInvertItem @ 0x14003E628 (xxxMNInvertItem.c)
 *     xxxSendMenuSelect @ 0x14003F1D4 (xxxSendMenuSelect.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1400446D8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1400458EC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNAnimate @ 0x140045C18 (MNAnimate.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x140285BFC (safe_cast_fnid_to_PMENUWND.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1402BF250 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1402BF430 (MNSetTimerToCloseHierarchy.c)
 */

__int64 __fastcall xxxMNSelectItem(__int64 **a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rbx
  unsigned int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // rax
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  struct tagTHREADINFO *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r12
  __int64 v23; // rdx
  struct tagTHREADINFO *v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct tagTHREADINFO *v31; // rax
  struct tagTHREADINFO *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // ebx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdx
  _QWORD v45[2]; // [rsp+38h] [rbp-99h] BYREF
  _QWORD v46[2]; // [rsp+48h] [rbp-89h] BYREF
  _QWORD v47[2]; // [rsp+58h] [rbp-79h] BYREF
  __int64 v48; // [rsp+68h] [rbp-69h]
  _QWORD v49[2]; // [rsp+70h] [rbp-61h] BYREF
  __int64 v50; // [rsp+80h] [rbp-51h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+88h] [rbp-49h] BYREF
  ULONG_PTR v52[2]; // [rsp+98h] [rbp-39h] BYREF
  _QWORD v53[2]; // [rsp+A8h] [rbp-29h] BYREF
  ULONG_PTR v54[2]; // [rsp+B8h] [rbp-19h] BYREF
  ULONG_PTR v55[2]; // [rsp+C8h] [rbp-9h] BYREF
  ULONG_PTR v56[2]; // [rsp+D8h] [rbp+7h] BYREF
  ULONG_PTR v57[2]; // [rsp+E8h] [rbp+17h] BYREF
  ULONG_PTR v58[2]; // [rsp+F8h] [rbp+27h] BYREF

  v4 = a3;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v49);
  if ( *(_DWORD *)(**a1 + 80) == (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != -1 && (unsigned int)v4 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(**a1 + 40) + 88LL) + 96 * v4;
      goto LABEL_12;
    }
LABEL_11:
    v6 = 0LL;
    goto LABEL_12;
  }
  v15 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 32));
  if ( (*(_DWORD *)**a1 & 0x1000) != 0 && !v15 )
    goto LABEL_11;
  MNAnimate(a2, 0LL);
  if ( (*(_DWORD *)**a1 & 0x2000) != 0 )
  {
    FindTimer(*(_QWORD *)(**a1 + 16), 65534LL, 0, 1, 0LL);
    *(_DWORD *)**a1 &= ~0x2000u;
  }
  v16 = *(_QWORD *)(**a1 + 40);
  v50 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v49, v16);
  v19 = v50;
  if ( !v50 )
    v19 = *(_QWORD *)v49[0];
  v20 = PtiCurrent(v18, v17);
  Win32HM_LockIntoThread<1>(v20, v19, v52);
  v21 = **a1;
  v22 = *(_QWORD *)(v21 + 8);
  v24 = PtiCurrent(v21, v23);
  Win32HM_LockIntoThread<1>(v24, v22, BugCheckParameter3);
  if ( (*(_DWORD *)**a1 & 0x1000) != 0 )
  {
    v33 = *(_QWORD *)(v15 + 8);
    if ( v33 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v45, v33, v25, v26);
      FindTimer(*(_QWORD *)(*(_QWORD *)v45[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
      **(_DWORD **)v45[0] &= ~0x4000u;
      if ( (**(_DWORD **)v45[0] & 0x2000) != 0 )
      {
        FindTimer(*(_QWORD *)(*(_QWORD *)v45[0] + 16LL), 65534LL, 0, 1, 0LL);
        **(_DWORD **)v45[0] &= ~0x2000u;
      }
      if ( *(_DWORD *)(*(_QWORD *)v45[0] + 80LL) != *(_DWORD *)(*(_QWORD *)v45[0] + 84LL) )
      {
        SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v47, *(_QWORD *)(*(_QWORD *)v45[0] + 40LL));
        v34 = v48;
        v35 = *(_QWORD *)(*(_QWORD *)v45[0] + 8LL);
        if ( !v48 )
          v34 = *(_QWORD *)v47[0];
        Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v55, v34);
        Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v54, v35);
        if ( *(_DWORD *)(*(_QWORD *)v45[0] + 80LL) != -1 )
          xxxMNInvertItem((unsigned int)v45, (unsigned int)v47, *(_DWORD *)(*(_QWORD *)v45[0] + 80LL), v35, 0);
        *(_DWORD *)(*(_QWORD *)v45[0] + 80LL) = *(_DWORD *)(*(_QWORD *)v45[0] + 84LL);
        xxxMNInvertItem((unsigned int)v45, (unsigned int)v47, *(_DWORD *)(*(_QWORD *)v45[0] + 84LL), v35, 1);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v54, v36);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v55, v37);
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v47);
      }
      *(_DWORD *)**a1 &= ~0x1000u;
      v38 = **a1;
      v53[1] = *(_QWORD *)(v38 + 16);
      v53[0] = *(_QWORD *)(v38 + 64) + 56LL;
      HMAssignmentLock(v53, 0LL);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v45);
    }
  }
  v27 = **a1;
  if ( *(int *)(v27 + 80) >= 0 )
  {
    if ( *(_QWORD *)(v27 + 24) )
    {
      if ( (*(_DWORD *)**a1 & 1) != 0 )
        xxxMNCloseHierarchy(**a1, a2, v25, v26);
      else
        MNSetTimerToCloseHierarchy(a1);
    }
    goto LABEL_21;
  }
  if ( (unsigned int)(*(_DWORD *)(v27 + 80) + 4) <= 1 )
  {
    FindTimer(*(_QWORD *)(**a1 + 16), *(unsigned int *)(**a1 + 80), 0, 1, 0LL);
LABEL_21:
    xxxMNInvertItem((_DWORD)a1, (unsigned int)v49, *(_DWORD *)(**a1 + 80), v22, 0);
  }
  *(_DWORD *)(**a1 + 80) = v4;
  if ( (_DWORD)v4 == -1 )
  {
    if ( *(_QWORD *)(**a1 + 8) == *(_QWORD *)(**a1 + 16) )
      v7 = (*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD;
    else
      v7 = -4;
    xxxWindowEvent(0x8005u, *(struct tagWND **)(**a1 + 16), v7, 0, 0);
    if ( BugCheckParameter3[0] != -1LL )
    {
      v12 = PtiCurrent(v9, v8);
      Win32HM_UnlockFromThread<1>((ULONG_PTR)v12, BugCheckParameter3);
    }
    if ( v52[0] != -1LL )
    {
      v13 = PtiCurrent(v9, v8);
      Win32HM_UnlockFromThread<1>((ULONG_PTR)v13, v52);
    }
    if ( !*(_QWORD *)(**a1 + 32) )
      goto LABEL_11;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v46, 0LL, v10, v11);
    if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
    {
      v39 = *(_QWORD *)(**a1 + 64);
    }
    else
    {
      v40 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 32));
      if ( !v40 || (v39 = *(_QWORD *)(v40 + 8)) == 0 )
      {
LABEL_56:
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v46);
        goto LABEL_11;
      }
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v46, v39);
    if ( *(_QWORD *)v46[0] && *(_QWORD *)(*(_QWORD *)v46[0] + 8LL) )
    {
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v58, *(_QWORD *)(*(_QWORD *)v46[0] + 8LL));
      Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v57, *(_QWORD *)(*(_QWORD *)v46[0] + 16LL));
      Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v56, *(_QWORD *)(*(_QWORD *)v46[0] + 40LL));
      v41 = *(_DWORD *)(*(_QWORD *)v46[0] + 80LL);
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v47, *(_QWORD *)(*(_QWORD *)v46[0] + 40LL));
      xxxSendMenuSelect(
        *(_QWORD *)(*(_QWORD *)v46[0] + 8LL),
        *(_QWORD *)(*(_QWORD *)v46[0] + 16LL),
        (unsigned int)v47,
        v41,
        a2);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v47);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v56, v42);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v57, v43);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v58, v44);
    }
    goto LABEL_56;
  }
  v28 = *(_DWORD *)(a2 + 8) & 0xFFFFAFFF;
  *(_DWORD *)(a2 + 8) = v28;
  if ( (v28 & 8) != 0 )
    xxxMNDoScroll(a1, (unsigned int)v4, 1LL);
  v6 = xxxMNInvertItem((_DWORD)a1, (unsigned int)v49, v4, v22, 1);
  if ( BugCheckParameter3[0] != -1LL )
  {
    v31 = PtiCurrent(v30, v29);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v31, BugCheckParameter3);
  }
  if ( v52[0] != -1LL )
  {
    v32 = PtiCurrent(v30, v29);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v32, v52);
  }
LABEL_12:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v49);
  return v6;
}
