/*
 * XREFs of xxxMNKeyDown @ 0x1402BFBCC
 * Callers:
 *     xxxHandleMenuMessages @ 0x1400439DC (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     xxxMNChar @ 0x1402BF514 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1402BFBCC (xxxMNKeyDown.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x140034CF8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140034D4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxMNCloseHierarchy @ 0x14003CF70 (xxxMNCloseHierarchy.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x14003D23C (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMNCancel @ 0x14003D33C (xxxMNCancel.c)
 *     xxxMNSelectItem @ 0x14003DFC0 (xxxMNSelectItem.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1400446D8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1400458EC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     _GetSubMenu @ 0x1400460A4 (_GetSubMenu.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     HMValidateHandleNoRip @ 0x14006739C (HMValidateHandleNoRip.c)
 *     LockPopupMenu @ 0x14015AD40 (LockPopupMenu.c)
 *     xxxMNOpenHierarchy @ 0x14016D6F0 (xxxMNOpenHierarchy.c)
 *     xxxSendHelpMessage @ 0x140225E8C (xxxSendHelpMessage.c)
 *     xxxMNSetCapture @ 0x1402677EC (xxxMNSetCapture.c)
 *     UnlockPopupMenu @ 0x14026E578 (UnlockPopupMenu.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1402BEDCC (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     MNGetpItem @ 0x1402BF404 (MNGetpItem.c)
 *     xxxMNKeyDown @ 0x1402BFBCC (xxxMNKeyDown.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1402C07A4 (xxxMNSwitchToAlternateMenu.c)
 *     MNFindItemInColumn @ 0x1402EC4E8 (MNFindItemInColumn.c)
 *     MNFindNextValidItem @ 0x1402EC5F0 (MNFindNextValidItem.c)
 */

_QWORD *__fastcall xxxMNKeyDown(__int64 **a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r9
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned int MenuInheritedContextHelpId; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  int ValidItem; // r8d
  unsigned int v15; // esi
  int v16; // r12d
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // r15d
  __int64 v25; // rdx
  __int64 *v26; // rax
  __int64 v27; // rdx
  ULONG_PTR *v28; // rcx
  __int64 v29; // rcx
  struct tagTHREADINFO *v30; // rax
  __int64 *v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  _QWORD *v36; // r15
  __int64 v37; // rax
  __int64 v38; // r13
  int v39; // r14d
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 *v42; // rax
  __int64 *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rdx
  _DWORD *v48; // rdx
  __int64 v49; // rdx
  int v50; // eax
  __int64 v51; // r8
  __int64 v52; // r9
  _QWORD *v53; // r8
  int v54; // ecx
  _QWORD v56[2]; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v57[2]; // [rsp+40h] [rbp-59h] BYREF
  int v58; // [rsp+50h] [rbp-49h]
  ULONG_PTR v59[3]; // [rsp+58h] [rbp-41h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+70h] [rbp-29h] BYREF
  ULONG_PTR v61[2]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v62; // [rsp+90h] [rbp-9h]
  __int128 v63; // [rsp+98h] [rbp-1h]
  ULONG_PTR v64[9]; // [rsp+A8h] [rbp+Fh] BYREF
  BOOL v65; // [rsp+110h] [rbp+77h]
  int v66; // [rsp+118h] [rbp+7Fh]
  struct tagTHREADINFO *v67; // [rsp+118h] [rbp+7Fh]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v57, 0LL);
  v8 = *(_DWORD *)(a2 + 8);
  if ( (v8 & 8) != 0 )
  {
    if ( a3 != 112 )
    {
      if ( (v8 & 0x80u) != 0 && a3 == 27 )
        *(_DWORD *)(a2 + 8) = v8 | 0x2000;
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v57, v6);
    }
    goto LABEL_18;
  }
  switch ( a3 )
  {
    case 0xDu:
      if ( *(_DWORD *)(**a1 + 80) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
      {
        v53 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 88LL) + 96LL * *(unsigned int *)(**a1 + 80));
        v54 = *(_DWORD *)(*v53 + 4LL) & 3;
        if ( v53[2] )
        {
          if ( !v54 )
            goto LABEL_22;
        }
        else if ( !v54 )
        {
          xxxMNDismissWithNotify(a2, (__int64)a1, (__int64)v53, *(_DWORD *)(**a1 + 80), 0LL);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v57, v6);
        }
      }
      goto LABEL_109;
    case 0x12u:
LABEL_15:
      if ( (v8 & 0x100) == 0 )
      {
        xxxMNCancel(a2, 0, 0LL, 0LL);
        if ( a3 == 18 )
          *(_DWORD *)(a2 + 8) &= ~0x20u;
      }
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v57, v6);
    case 0x1Bu:
      if ( (*(_DWORD *)**a1 & 1) == 0
        && **a1 != *(_QWORD *)(**a1 + 64)
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 64) + 8LL) + 40LL) + 31LL) & 0x20) == 0 )
      {
        if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v56, *(_QWORD *)(**a1 + 64));
          **(_DWORD **)v56[0] &= ~0x400u;
          if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
            xxxMNCancel(a2, 0, 0LL, 0LL);
          else
            xxxMNCloseHierarchy(*(_QWORD *)v56[0], a2, v51, v52);
LABEL_104:
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v56, v25);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v57, v6);
        }
        Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v61, *(_QWORD *)(**a1 + 32));
        xxxSendMessage(*(struct tagWND **)(**a1 + 32), 0x1E4u);
        v28 = v61;
        goto LABEL_61;
      }
LABEL_109:
      xxxMNCancel(a2, 0, 0LL, 0LL);
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v57, v6);
  }
  if ( a3 != 37 )
  {
    if ( a3 == 38 )
    {
LABEL_21:
      if ( (*(_DWORD *)**a1 & 1) != 0 )
      {
LABEL_22:
        xxxMNOpenHierarchy(a1, a2);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v57, v6);
      }
      v13 = -1LL;
      if ( a3 != 38 )
        v13 = 1LL;
      ValidItem = MNFindNextValidItem(*(_QWORD *)(**a1 + 40), *(unsigned int *)(**a1 + 80), v13, 0LL);
LABEL_59:
      xxxMNSelectItem(a1, a2, ValidItem);
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v57, v6);
    }
    if ( a3 != 39 )
    {
      if ( a3 != 40 )
      {
        if ( a3 == 112 )
        {
LABEL_18:
          v9 = MNGetpItem((__int64)a1, *(_DWORD *)(**a1 + 80));
          v10 = v9;
          v6 = **a1;
          if ( *(_QWORD *)(v6 + 8) && v9 )
          {
            Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(
              BugCheckParameter3,
              *(_QWORD *)(**a1 + 8));
            MenuInheritedContextHelpId = GetMenuInheritedContextHelpId(a1);
            xxxSendHelpMessage(
              *(struct tagTHREADINFO ***)(**a1 + 8),
              2LL,
              *(_DWORD *)(*(_QWORD *)v10 + 8LL),
              **(_QWORD **)(**a1 + 40),
              MenuInheritedContextHelpId);
            Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v12);
          }
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v57, v6);
        }
        if ( a3 != 121 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v57, v6);
        goto LABEL_15;
      }
      goto LABEL_21;
    }
  }
  v15 = 1;
  v16 = 39;
  v17 = **a1;
  v58 = (*(_DWORD *)v17 >> 22) & 1;
  v66 = (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 40LL) + 26LL) >> 6) & 1;
  if ( v66 != v58 )
  {
    v18 = 39;
    if ( a3 != 37 )
      v18 = 37;
    a3 = v18;
  }
  if ( (*(_DWORD *)**a1 & 1) != 0
    || a3 != 39
    || *(_QWORD *)(**a1 + 24)
    || xxxMNOpenHierarchy(a1, a2) != -1 && (*(_DWORD *)**a1 & 0x20) == 0 )
  {
    if ( *(_QWORD *)(**a1 + 24) )
    {
      v65 = 1;
      if ( a3 == 37 && (*(_DWORD *)**a1 & 1) == 0 )
      {
        xxxMNCloseHierarchy(**a1, a2, 37LL, v7);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v57, v6);
      }
    }
    else
    {
      v65 = (*(_DWORD *)**a1 & 0x400) != 0;
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v57, **a1);
    if ( (*(_DWORD *)**a1 & 2) == 0 || (v19 = 1LL, **a1 != *(_QWORD *)(**a1 + 64)) )
      v19 = 0LL;
    v20 = 0xFFFFFFFFLL;
    if ( a3 != 37 )
      v20 = 1LL;
    v21 = MNFindItemInColumn(*(_QWORD *)(**a1 + 40), *(unsigned int *)(**a1 + 80), v20, v19);
    v6 = 0xFFFFFFFFLL;
    v24 = v21;
    if ( v21 != -1 )
    {
LABEL_56:
      if ( (*(_DWORD *)**a1 & 1) == 0 )
      {
        if ( v24 == -1 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v57, v6);
        ValidItem = v24;
        goto LABEL_59;
      }
      if ( v24 == -1 )
      {
        if ( *(_QWORD *)(**a1 + 8) )
        {
          v29 = *(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL);
          if ( (*(_BYTE *)(v29 + 30) & 8) != 0 )
          {
            v30 = PtiCurrent(v29, 0xFFFFFFFFLL);
            v31 = *a1;
            v63 = 0LL;
            v67 = v30;
            v32 = (*(_DWORD *)*v31 & 4) != 0
                ? (_QWORD *)GetSubMenu(*(_QWORD *)(**a1 + 40), *v31)
                : *(_QWORD **)(**a1 + 40);
            v62 = v32 ? *v32 : 0LL;
            Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v59, *(_QWORD *)(**a1 + 8));
            xxxSendMessage(*(struct tagWND **)(**a1 + 8), 0x213u);
            Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v59, v33);
            LOBYTE(v34) = 1;
            v36 = (_QWORD *)HMValidateHandleNoSecure(*((__int64 *)&v63 + 1), v34);
            if ( v36 )
            {
              if ( (struct tagTHREADINFO *)v36[2] == v67 )
              {
                LOBYTE(v35) = 2;
                v37 = HMValidateHandleNoRip(v63, v35);
                v38 = v37;
                if ( v37 )
                {
                  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v61, v37);
                  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v64, (__int64)v36);
                  v39 = v65;
                  if ( (*(_BYTE *)(v36[5] + 31LL) & 0x20) != 0 )
                    v39 = 1;
                  xxxMNSelectItem(a1, a2, -1);
                  *(_DWORD *)(a2 + 8) |= 2u;
                  UnlockPopupMenu((__int64)a1, (__int64 *)(**a1 + 48));
                  *(_DWORD *)**a1 &= ~0x80u;
                  v41 = v36[20];
                  if ( v41 && GetSubMenu(v41, v40) == v38 )
                    v38 = v36[20];
                  UnlockPopupMenu((__int64)a1, (__int64 *)(**a1 + 40));
                  v42 = *a1;
                  v56[1] = v36;
                  v56[0] = *v42 + 8;
                  HMAssignmentLock(v56, 0LL);
                  v43 = *a1;
                  BugCheckParameter3[1] = (ULONG_PTR)v36;
                  BugCheckParameter3[0] = *v43 + 16;
                  HMAssignmentLock(BugCheckParameter3, 0LL);
                  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v59, v38);
                  LockPopupMenu((__int64)a1, (__int64 *)(**a1 + 40), (__int64)v59);
                  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v59, v44);
                  if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
                  {
                    *(_DWORD *)(*((_QWORD *)v67 + 59) + 412LL) &= ~0x100000u;
                    xxxMNSetCapture((__int64)a1, a2);
                  }
                  if ( (*(_BYTE *)(v36[5] + 31LL) & 0x40) == 0 && *(_QWORD *)(**a1 + 40) )
                  {
                    v45 = v36[21];
                    if ( v45 == *(_QWORD *)(**a1 + 40) )
                    {
                      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v59, v36[20]);
                      LockPopupMenu((__int64)a1, (__int64 *)(**a1 + 48), (__int64)v59);
                      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v59, v46);
                      *(_DWORD *)(a2 + 8) &= ~2u;
                    }
                    else
                    {
                      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v59, v45);
                      LockPopupMenu((__int64)a1, (__int64 *)(**a1 + 48), (__int64)v59);
                      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v59, v47);
                    }
                  }
                  v24 = 0;
                  v48 = (_DWORD *)**a1;
                  *v48 ^= ((unsigned __int8)*v48 ^ (unsigned __int8)(2 * *(_DWORD *)(a2 + 8))) & 4;
                  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v64, (__int64)v48);
                  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v61, v49);
LABEL_92:
                  if ( *(_QWORD *)(*(_QWORD *)v57[0] + 24LL) )
                    xxxMNCloseHierarchy(*(_QWORD *)v57[0], a2, v22, v23);
                  xxxMNSelectItem(a1, a2, v24);
                  if ( v39 )
                    goto LABEL_22;
                  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v57, v6);
                }
              }
            }
          }
        }
        if ( !(unsigned int)xxxMNSwitchToAlternateMenu(a1, a2) )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v57, v6);
        if ( a3 != 39 )
          v15 = -1;
        v50 = MNFindNextValidItem(*(_QWORD *)(**a1 + 40), 0xFFFFFFFFLL, v15, 0LL);
        v6 = 0xFFFFFFFFLL;
        v24 = v50;
        if ( v50 == -1 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v57, v6);
      }
      v39 = v65;
      goto LABEL_92;
    }
    if ( (*(_DWORD *)**a1 & 2) != 0 )
    {
      v22 = **a1;
      if ( *(_QWORD *)(v22 + 32) == *(_QWORD *)(v22 + 8) )
      {
        if ( v66 != v58 )
        {
          if ( a3 != 37 )
            v16 = 37;
          a3 = v16;
        }
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v56, *(_QWORD *)(**a1 + 64));
        xxxMNKeyDown(v56, a2, a3);
        goto LABEL_104;
      }
    }
    v6 = **a1;
    v26 = *a1;
    if ( v6 == *(_QWORD *)(v6 + 64) )
    {
      if ( (*(_DWORD *)*v26 & 1) == 0 )
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v57, v6);
      v6 = 0xFFFFFFFFLL;
      goto LABEL_56;
    }
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, *(_QWORD *)(*v26 + 32));
    xxxSendMessage(*(struct tagWND **)(**a1 + 32), 0x100u);
    v28 = BugCheckParameter3;
LABEL_61:
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v28, v27);
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v57, v6);
}
