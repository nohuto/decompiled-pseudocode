/*
 * XREFs of xxxEnableMenuItem @ 0x140045E50
 * Callers:
 *     xxxSetSysMenu @ 0x140046248 (xxxSetSysMenu.c)
 *     NtUserEnableMenuItem @ 0x1401E53F0 (NtUserEnableMenuItem.c)
 * Callees:
 *     xxxRedrawTitle @ 0x140021BF8 (xxxRedrawTitle.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1400458EC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     MNGetPopupFromMenu @ 0x140045940 (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     MNLookUpItem @ 0x1400476D8 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140049FCC (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ?DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z @ 0x140190294 (-DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1402E23B4 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxEnableMenuItem(__int64 **a1, unsigned int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // r14
  struct tagWND *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct tagTHREADINFO *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // [rsp+20h] [rbp-40h] BYREF
  __int64 v23; // [rsp+28h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v25[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v26; // [rsp+50h] [rbp-10h]
  __int64 v27; // [rsp+80h] [rbp+20h] BYREF

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v25);
  v8 = PtiCurrent(v7, v6);
  v22 = (_QWORD *)gSmartObjNullRef;
  v23 = *((_QWORD *)v8 + 209);
  *((_QWORD *)v8 + 209) = &v23;
  v9 = v26;
  if ( !v26 )
    v9 = *(_QWORD *)v25[0];
  v10 = a1[2];
  v27 = v9;
  if ( !v10 )
    v10 = (__int64 *)**a1;
  v11 = MNLookUpItem(v10, a2, a3 & 0x400, &v27);
  if ( v11 )
  {
    v12 = *(_QWORD *)v11;
    v13 = *(_DWORD *)(*(_QWORD *)v11 + 4LL) & 3;
    *(_DWORD *)(*(_QWORD *)v11 + 4LL) ^= ((unsigned __int8)a3 ^ *(_BYTE *)(*(_QWORD *)v11 + 4LL) & 3) & 3;
  }
  else
  {
    v13 = -1;
  }
  v26 = 0LL;
  v14 = v27;
  if ( v27 != *(_QWORD *)v25[0] )
  {
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v25);
    if ( v14 )
    {
      v25[0] = *(_QWORD *)(v14 + 152);
      ++*(_DWORD *)(v25[0] + 8LL);
    }
    else
    {
      v25[0] = gSmartObjNullRef;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 0x100) != 0
    && a3 != v13
    && *(_QWORD *)(**a1 + 80)
    && (a2 == 61440 || a2 == 61456 || a2 == 61472 || a2 == 61488 || a2 == 61536 || a2 == 61728) )
  {
    v16 = *(struct tagWND **)(**a1 + 80);
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v16);
    xxxRedrawTitle(v16, 4096LL);
    if ( a2 == 61536 && (unsigned int)IsWindowDesktopComposed(v16) )
      DwmUpdateCloseButton(v16, 1);
    v19 = PtiCurrent(v18, v17);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v19, BugCheckParameter3);
  }
  if ( (a3 & 3) != v13 )
  {
    v20 = v26;
    if ( !v26 )
    {
      if ( !*(_QWORD *)v25[0] )
        goto LABEL_12;
      v20 = *(_QWORD *)v25[0];
    }
    v21 = MNGetPopupFromMenu(v20, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v22, v21);
    if ( *v22 )
      xxxMNUpdateShownMenu(&v22, 0LL, 1LL);
  }
LABEL_12:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v22, v12);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v25);
  return v13;
}
