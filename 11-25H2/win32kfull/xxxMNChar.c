/*
 * XREFs of xxxMNChar @ 0x1402BF514
 * Callers:
 *     xxxHandleMenuMessages @ 0x1400439DC (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     xxxMNChar @ 0x1402BF514 (xxxMNChar.c)
 *     xxxMNKeyFilter @ 0x1402EC7F8 (xxxMNKeyFilter.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x140034CF8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140034D4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxMNCancel @ 0x14003D33C (xxxMNCancel.c)
 *     xxxMNSelectItem @ 0x14003DFC0 (xxxMNSelectItem.c)
 *     MNGetpItemFromIndex @ 0x140042B84 (MNGetpItemFromIndex.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x140050410 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxMessageBeep @ 0x1401107D4 (xxxMessageBeep.c)
 *     xxxMNChar @ 0x1402BF514 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1402BFBCC (xxxMNKeyDown.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1402C07A4 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNFindChar @ 0x1402EC6B0 (xxxMNFindChar.c)
 */

_QWORD *__fastcall xxxMNChar(__int64 **a1, __int64 a2, unsigned int a3)
{
  __int64 *v6; // rax
  int v7; // r14d
  int v8; // r13d
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // r14d
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // r15d
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // edx
  char v25; // bl
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v29; // rcx
  struct tagTHREADINFO *v30; // rax
  ULONG_PTR v31[2]; // [rsp+20h] [rbp-60h] BYREF
  ULONG_PTR v32[2]; // [rsp+30h] [rbp-50h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v34[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v35; // [rsp+60h] [rbp-20h]
  __int64 v36[3]; // [rsp+68h] [rbp-18h] BYREF
  int v37; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v38; // [rsp+D8h] [rbp+58h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v34, a2);
  v6 = *a1;
  v7 = 0;
  v38 = 0LL;
  v37 = 0;
  v8 = 0;
  v9 = *(_QWORD *)(*v6 + 40);
  v35 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v34, v9);
  if ( (*(_DWORD *)**a1 & 0x8000) == 0 )
  {
    v11 = v35;
    if ( !v35 )
      v11 = *(_QWORD *)v34[0];
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v32, v11);
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v31, *(_QWORD *)(**a1 + 48));
    v12 = xxxMNFindChar(v34, a3, *(unsigned int *)(**a1 + 80), &v37);
    v13 = v12;
    if ( v12 != -1 )
    {
      v14 = v12;
      while ( 1 )
      {
        v15 = v35;
        if ( !v35 )
          v15 = *(_QWORD *)v34[0];
        v16 = MNGetpItemFromIndex(v15, v13);
        if ( !v16 || (*(_DWORD *)(*(_QWORD *)v16 + 4LL) & 3) == 0 )
          break;
        v13 = xxxMNFindChar(v34, a3, v13, &v37);
        if ( v13 == v14 )
          goto LABEL_53;
      }
      v17 = v13;
      do
      {
        v18 = xxxMNFindChar(v34, a3, v13, &v37);
        v19 = v35;
        v13 = v18;
        if ( !v35 )
          v19 = *(_QWORD *)v34[0];
        v20 = MNGetpItemFromIndex(v19, v18);
      }
      while ( v20 && (*(_DWORD *)(*(_QWORD *)v20 + 4LL) & 3) != 0 && v13 != v14 );
      if ( v14 == v13 || v13 == v17 )
        v8 = 1;
      v7 = v38;
      v13 = v17;
    }
    if ( v13 != -1 )
      goto LABEL_45;
    if ( (*(_DWORD *)**a1 & 1) != 0 && a3 == 32 )
    {
      if ( (*(_DWORD *)**a1 & 4) != 0 )
      {
        v13 = 0;
        v8 = 1;
        goto LABEL_45;
      }
      if ( *(_QWORD *)(**a1 + 48) )
        goto LABEL_56;
    }
    if ( (*(_DWORD *)**a1 & 1) != 0 )
    {
      if ( *(_QWORD *)(**a1 + 48) )
      {
        Win32HM_ExchangeThreadLock<1>(*(_QWORD *)(**a1 + 48), (__int64)v31);
        SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v36, *(_QWORD *)(**a1 + 48));
        v21 = xxxMNFindChar(v36, a3, 0LL, &v37);
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v36, v22);
        if ( v21 != -1 )
        {
LABEL_56:
          if ( (unsigned int)xxxMNSwitchToAlternateMenu(a1, a2) )
            xxxMNChar(a1, a2, a3);
          goto LABEL_47;
        }
      }
    }
    v24 = (*(_DWORD *)**a1 & 4) << 11;
    v25 = v24 | 0x10;
    if ( (*(_BYTE *)**a1 & 1) != 0 )
      v25 = v24;
    if ( *(_QWORD *)(**a1 + 8) )
    {
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, *(_QWORD *)(**a1 + 8));
      v7 = xxxSendMessage(*(struct tagWND **)(**a1 + 8), 0x120u);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v26);
    }
    v23 = HIWORD(v7);
    if ( HIWORD(v7) )
    {
      if ( HIWORD(v7) != 1 )
      {
        v23 = (unsigned int)HIWORD(v7) - 2;
        if ( HIWORD(v7) == 2 )
        {
          v8 = 1;
        }
        else if ( HIWORD(v7) != 3 )
        {
          goto LABEL_47;
        }
        v23 = (unsigned __int16)v7;
        v13 = (__int16)v7;
        if ( (unsigned int)(unsigned __int16)v7 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL)
          && (__int16)v7 != -1 )
        {
LABEL_45:
          xxxMNSelectItem(a1, a2, v13);
          if ( v8 )
            xxxMNKeyDown(a1, a2, 13LL);
        }
LABEL_47:
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v31, v23);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v32, v27);
        return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v34, v10);
      }
    }
    else
    {
      v29 = **a1;
      if ( !*(_QWORD *)(v29 + 8)
        || (v30 = PtiCurrent(v29, HIWORD(v7)), v23 = **a1, *((_QWORD *)v30 + 198) != *(_QWORD *)(v23 + 8)) )
      {
        xxxMessageBeep(0LL, v23);
      }
      if ( (v25 & 0x10) != 0 )
        goto LABEL_47;
    }
LABEL_53:
    xxxMNCancel(a2, 0, 0LL, 0LL);
    goto LABEL_47;
  }
  return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v34, v10);
}
