/*
 * XREFs of xxxMNLoop @ 0x14015A654
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x14015AE18 (xxxTrackPopupMenuEx.c)
 *     xxxSysCommand @ 0x1402B6EB4 (xxxSysCommand.c)
 *     xxxMNKeyFilter @ 0x1402EC7F8 (xxxMNKeyFilter.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxCallMsgFilter @ 0x14001FA20 (xxxCallMsgFilter.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140020958 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxTranslateMessage @ 0x14002187C (xxxTranslateMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxHandleMenuMessages @ 0x1400439DC (xxxHandleMenuMessages.c)
 *     xxxGetSysMenuPtr @ 0x140047518 (xxxGetSysMenuPtr.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ClientGetMessageMPH @ 0x140115430 (ClientGetMessageMPH.c)
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x140116D64 (xxxDispatchMessage.c)
 *     xxxSendNotifyMessage @ 0x14012B560 (xxxSendNotifyMessage.c)
 *     ?IsInsideMPH@@YAHXZ @ 0x140145CE0 (-IsInsideMPH@@YAHXZ.c)
 *     _IsChild @ 0x1401512B0 (_IsChild.c)
 *     SlowAppThreadInShellFrame @ 0x140151514 (SlowAppThreadInShellFrame.c)
 *     IsShellFrameHangResilient @ 0x140151BD4 (IsShellFrameHangResilient.c)
 *     xxxMNStartMenu @ 0x14015D464 (xxxMNStartMenu.c)
 *     xxxWaitMessageEx @ 0x14016BF60 (xxxWaitMessageEx.c)
 *     _GetMenuState @ 0x1401BBFB4 (_GetMenuState.c)
 *     FindNCHit @ 0x1401D7FEC (FindNCHit.c)
 *     MNFlushDestroyedPopups @ 0x1402222C0 (MNFlushDestroyedPopups.c)
 *     TryDetachShellFrame @ 0x14023FB5C (TryDetachShellFrame.c)
 *     xxxEndMenuLoop @ 0x140258BF0 (xxxEndMenuLoop.c)
 *     xxxMNReleaseCapture @ 0x14026AD74 (xxxMNReleaseCapture.c)
 */

__int64 __fastcall xxxMNLoop(__int64 **a1, __int64 a2, __int64 a3, int a4)
{
  int v8; // r12d
  __int64 v9; // rdx
  struct tagTHREADINFO *v10; // r15
  __int64 v11; // rcx
  __int16 KeyState; // ax
  _DWORD *v13; // rcx
  unsigned __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // eax
  __int64 *v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  __int64 UserSessionState; // rax
  int v24; // eax
  int MessageMPH; // eax
  __int64 v26; // rcx
  int v27; // eax
  unsigned int v28; // ebx
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rdx
  unsigned int v33; // ebx
  int v34; // eax
  int Message; // eax
  int v36; // ebx
  __int64 v37; // rdx
  unsigned int v38; // ebx
  int v39; // eax
  _DWORD *v40; // rcx
  struct tagDRAWITEMSTRUCT *v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rbx
  struct tagTHREADINFO *v44; // rax
  struct tagTHREADINFO *v45; // r14
  struct tagTHREADINFO *v46; // rax
  struct tagWND *v47; // rbx
  __int64 SysMenuPtr; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  int v53; // eax
  struct tagINPUT_MESSAGE_SOURCE *v54; // [rsp+28h] [rbp-69h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+58h] [rbp-39h] BYREF
  ULONG_PTR v56[2]; // [rsp+68h] [rbp-29h] BYREF
  __int64 v57[2]; // [rsp+78h] [rbp-19h] BYREF
  __int64 v58; // [rsp+88h] [rbp-9h]
  __int64 v59[2]; // [rsp+90h] [rbp-1h] BYREF
  __int128 v60; // [rsp+A0h] [rbp+Fh]
  __int128 v61; // [rsp+B0h] [rbp+1Fh]
  int v62; // [rsp+100h] [rbp+6Fh] BYREF

  *(_DWORD *)(a2 + 8) |= 4u;
  *(_OWORD *)v59 = 0LL;
  *(_DWORD *)(a2 + 24) = 0;
  v60 = 0LL;
  v61 = 0LL;
  v8 = 1;
  v10 = PtiCurrent((__int64)a1, a2);
  *(_DWORD *)(a2 + 12) = *((_DWORD *)v10 + 199);
  *(_DWORD *)(a2 + 16) = *((_DWORD *)v10 + 200);
  *(_DWORD *)(*((_QWORD *)v10 + 59) + 412LL) &= ~0x40u;
  v11 = *(unsigned int *)(a2 + 8);
  if ( (v11 & 1) == 0 )
  {
    KeyState = _GetKeyState((unsigned int)((*(_DWORD *)**a1 & 0x40) != 0) + 1);
    v13 = (_DWORD *)**a1;
    if ( KeyState >= 0 )
    {
      if ( (*v13 & 0x800) == 0 && *(_QWORD *)(**a1 + 8) )
      {
        Win32HM_LockIntoThread<0>((__int64)v10, *(_QWORD *)(**a1 + 8), BugCheckParameter3);
        if ( (*(_DWORD *)**a1 & 8) == 0 || (v14 = 1LL, (*(_DWORD *)**a1 & 4) != 0) )
          v14 = 0LL;
        xxxSendNotifyMessage(*(struct tagWND **)(**a1 + 8), 0x212u, v14, 0LL, 1);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v15);
      }
      goto LABEL_95;
    }
    if ( (*v13 & 8) == 0 && !(unsigned int)xxxMNStartMenu(a1, a2, 0xFFFFFFFFLL) )
    {
LABEL_95:
      *(_DWORD *)(a2 + 8) &= 0xFFFFFEFB;
      xxxEndMenuLoop(a2, **a1);
      xxxMNReleaseCapture(a2);
      LOBYTE(v53) = IsInsideMPH(v52, v51);
      LODWORD(v54) = 2;
      if ( v53 )
        ClientGetMessageMPH(v59, 0LL, 512, 512, 2, 0);
      else
        xxxRealInternalGetMessage((__int64)v59, 0LL, 0x200u, 0x200u, (unsigned __int64)v54, 0);
      return *(unsigned int *)(a2 + 24);
    }
    if ( (*(_DWORD *)**a1 & 0x40) != 0 )
    {
      *(_QWORD *)&v60 = 2LL;
      v16 = a4 != 0 ? 518 : 516;
    }
    else
    {
      *(_QWORD *)&v60 = 1LL;
      v16 = a4 != 0 ? 515 : 513;
    }
    LODWORD(v59[1]) = v16;
    v17 = *a1;
    *((_QWORD *)&v60 + 1) = a3;
    if ( *(_QWORD *)(*v17 + 16) )
      v59[0] = **(_QWORD **)(**a1 + 16);
    else
      v59[0] = 0LL;
    xxxHandleMenuMessages((__int64)v59, a2, (__int64 *)a1);
  }
  v18 = *(_DWORD *)(a2 + 8);
  if ( (v18 & 0x100) == 0 )
  {
    while ( 1 )
    {
      if ( (v18 & 4) == 0 )
        goto LABEL_95;
      LOBYTE(v24) = IsInsideMPH(v11, v9);
      LODWORD(v54) = 2;
      if ( v24 )
        MessageMPH = ClientGetMessageMPH(v59, 0LL, 0, 0, 2, 0);
      else
        MessageMPH = xxxRealInternalGetMessage((__int64)v59, 0LL, 0, 0, (unsigned __int64)v54, 0);
      if ( !MessageMPH )
        goto LABEL_71;
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
        goto LABEL_95;
      if ( (*(_DWORD *)**a1 & 0x8000) != 0 )
        goto LABEL_95;
      if ( (*(_DWORD *)**a1 & 8) == 0 )
      {
        v9 = *(_QWORD *)(*((_QWORD *)v10 + 59) + 128LL);
        if ( v9 != *(_QWORD *)(**a1 + 8)
          && (!v9 || !(unsigned int)IsChild(*(_QWORD *)(*((_QWORD *)v10 + 59) + 128LL), *(_QWORD *)(**a1 + 8))) )
        {
          goto LABEL_95;
        }
      }
      v26 = **a1;
      if ( (*(_DWORD *)v26 & 1) == 0 )
        goto LABEL_43;
      v27 = v59[1];
      if ( LODWORD(v59[1]) == 515 )
        break;
LABEL_44:
      if ( v27 == 513 || v27 == 516 || v27 == 161 || v27 == 164 )
      {
        v36 = 1;
        goto LABEL_56;
      }
LABEL_48:
      _InterlockedOr((volatile signed __int32 *)v10 + 132, 0x200000u);
      v33 = v59[1];
      LOBYTE(v34) = IsInsideMPH(v26, v9);
      LODWORD(v54) = 1;
      if ( v34 )
        Message = ClientGetMessageMPH(v59, 0LL, v33, v33, 1, 0);
      else
        Message = xxxRealInternalGetMessage((__int64)v59, 0LL, v33, v33, (unsigned __int64)v54, 0);
      if ( !Message && (_InterlockedCompareExchange((volatile signed __int32 *)v10 + 132, 0, 0) & 0x200000) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)v10 + 132, 0xFFDFFFFF);
LABEL_71:
        if ( (*(_DWORD *)(a2 + 8) & 4) == 0 || (*(_DWORD *)**a1 & 0x8000) != 0 )
          goto LABEL_95;
        v40 = (_DWORD *)**a1;
        if ( (*v40 & 0x20000) != 0 )
        {
          MNFlushDestroyedPopups(**a1);
          v40 = (_DWORD *)**a1;
          *v40 &= ~0x20000u;
        }
        if ( v8 )
        {
          v11 = **a1;
          if ( *(_QWORD *)(v11 + 8) )
          {
            Win32HM_LockIntoThread<0>((__int64)v10, *(_QWORD *)(**a1 + 8), v56);
            if ( *(_QWORD *)(**a1 + 56) )
              v41 = **(struct tagDRAWITEMSTRUCT ***)(**a1 + 56);
            else
              v41 = 0LL;
            xxxSendTransformableMessageTimeout(*(struct tagTHREADINFO ***)(**a1 + 8), 289LL, 2uLL, v41, 0, 0, 0LL, 1, 1);
            Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v56, v42);
          }
          v8 = 0;
        }
        else
        {
          v43 = *(_QWORD *)(a2 + 96);
          v44 = PtiCurrent((__int64)v40, v9);
          v62 = 0;
          v45 = v44;
          xxxWaitMessageEx(15615LL, v43 != 0, &v62);
          if ( (unsigned int)IsShellFrameHangResilient((__int64)v45) )
          {
            if ( v62 )
            {
              v46 = SlowAppThreadInShellFrame(v45, 0LL, 0LL, 1);
              if ( v46 )
                TryDetachShellFrame(v45, v46, v62 == 2);
            }
          }
        }
        goto LABEL_86;
      }
      _InterlockedAnd((volatile signed __int32 *)v10 + 132, 0xFFDFFFFF);
      v36 = 0;
LABEL_56:
      if ( (unsigned int)xxxCallMsgFilter((__int64)v59, 2LL) )
      {
        if ( v36 )
        {
          v38 = v59[1];
          LOBYTE(v39) = IsInsideMPH(v11, v9);
          LODWORD(v54) = 1;
          if ( v39 )
            ClientGetMessageMPH(v59, 0LL, v38, v38, 1, 0);
          else
            xxxRealInternalGetMessage((__int64)v59, 0LL, v38, v38, (unsigned __int64)v54, 0);
        }
LABEL_70:
        v8 = 1;
        goto LABEL_86;
      }
      if ( !(unsigned int)xxxHandleMenuMessages((__int64)v59, a2, (__int64 *)a1) )
      {
        xxxTranslateMessage((__int64)v59, 0);
        xxxDispatchMessage((struct tagMSG *)v59, v37);
      }
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
        goto LABEL_95;
      if ( (*(_DWORD *)**a1 & 0x8000) != 0 )
        goto LABEL_95;
      v11 = *(unsigned int *)(*((_QWORD *)v10 + 59) + 412LL);
      if ( (v11 & 0x40) != 0 )
        goto LABEL_95;
      if ( LODWORD(v59[1]) == 280 )
        goto LABEL_71;
      if ( LODWORD(v59[1]) != 275 && LODWORD(v59[1]) != 15 )
        goto LABEL_70;
LABEL_86:
      v18 = *(_DWORD *)(a2 + 8);
    }
    v26 = **a1;
    if ( !*(_QWORD *)(v26 + 8) )
      goto LABEL_48;
    if ( (unsigned int)FindNCHit(*(_QWORD *)(**a1 + 8), DWORD2(v60)) == 2 )
    {
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v57, v9);
      v28 = v59[1];
      LOBYTE(v31) = IsInsideMPH(v30, v29);
      LODWORD(v54) = 1;
      if ( v31 )
        ClientGetMessageMPH(v59, 0LL, v28, v28, 1, 0);
      else
        xxxRealInternalGetMessage((__int64)v59, 0LL, v28, v28, (unsigned __int64)v54, 0);
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 || (*(_DWORD *)**a1 & 0x8000) != 0 )
        goto LABEL_94;
      if ( *(_QWORD *)(**a1 + 8) )
      {
        v47 = *(struct tagWND **)(**a1 + 8);
        Win32HM_LockIntoThread<0>((__int64)v10, (__int64)v47, BugCheckParameter3);
        SysMenuPtr = xxxGetSysMenuPtr(v47);
        v58 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v57, SysMenuPtr);
        v49 = v58;
        if ( !v58 )
          v49 = *(_QWORD *)v57[0];
        if ( (GetMenuState(v49, 61728LL) & 3) == 0 )
          _PostTransformableMessageExtended(v47, 0x112u, 0xF120uLL, 0LL, 0LL, 1);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v50);
LABEL_94:
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v57, v32);
        goto LABEL_95;
      }
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v57, v32);
    }
LABEL_43:
    v27 = v59[1];
    goto LABEL_44;
  }
  xxxMNReleaseCapture(a2);
  v21 = *(_DWORD *)(a2 + 8);
  if ( (v21 & 0x2000000) != 0 )
  {
    *(_DWORD *)(a2 + 8) = v21 & 0xFDFFFFFF;
    UserSessionState = W32GetUserSessionState(v20, v19);
    --*(_DWORD *)(UserSessionState + 18848);
  }
  return 0LL;
}
