/*
 * XREFs of xxxEndDeferWindowPosEx @ 0x14004CC40
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     NtUserEndDeferWindowPosEx @ 0x14004C490 (NtUserEndDeferWindowPosEx.c)
 *     xxxSetWindowRgn @ 0x14004E0F4 (xxxSetWindowRgn.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x14015CF34 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     xxxProcessSetWindowPosEvent @ 0x1401D64DC (xxxProcessSetWindowPosEvent.c)
 *     xxxSetWindowPosAndBand @ 0x140236EBC (xxxSetWindowPosAndBand.c)
 *     ?xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z @ 0x1402AA50C (-xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402DA4C0 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 *     xxxArrangeIconicWindows @ 0x1402EB4A4 (xxxArrangeIconicWindows.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14001BAD0 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     PostShellHookMessagesEx @ 0x1400216D0 (PostShellHookMessagesEx.c)
 *     ?xxxSetTrayWindow@@YAXPEAUtagDESKTOP@@PEAUtagWND@@@Z @ 0x140023234 (-xxxSetTrayWindow@@YAXPEAUtagDESKTOP@@PEAUtagWND@@@Z.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140023794 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??0CDwmSwpNotifyBatch@@QEAA@PEAUtagSMWP@@@Z @ 0x140060CF0 (--0CDwmSwpNotifyBatch@@QEAA@PEAUtagSMWP@@@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x140064194 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x140064420 (-ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     DestroySMWP @ 0x1400C8060 (DestroySMWP.c)
 *     ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1400C9BF0 (-UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z.c)
 *     SetWindowGroupBand @ 0x140152834 (SetWindowGroupBand.c)
 *     GreClientRgnUpdatedStable @ 0x14016CAA4 (GreClientRgnUpdatedStable.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z @ 0x1401894A8 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1401951B4 (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     ??1CDwmNotifyBatch@@IEAA@XZ @ 0x1401ADA18 (--1CDwmNotifyBatch@@IEAA@XZ.c)
 *     xxxDoSyncPaint @ 0x1401B0128 (xxxDoSyncPaint.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1401C3E28 (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x140232848 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x140232CAC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140233E58 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@W4SwpActivateOptions@@@Z @ 0x1402341E8 (-xxxSwpActivate@@YAHPEAUtagWND@@W4SwpActivateOptions@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x140234300 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     Feature_3444625720__private_IsEnabledDeviceUsageNoInline @ 0x140272058 (Feature_3444625720__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_FixSwpNoActivateAddedViaPosChanging2__private_IsEnabledDeviceUsageNoInline @ 0x140272154 (Feature_FixSwpNoActivateAddedViaPosChanging2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?xxxInterceptSetWindowPos@WindowActions@@YAXPEAUtagSMWP@@@Z @ 0x1402D1FC8 (-xxxInterceptSetWindowPos@WindowActions@@YAXPEAUtagSMWP@@@Z.c)
 */

__int64 __fastcall xxxEndDeferWindowPosEx(struct tagSMWP *a1, __int64 a2)
{
  int v2; // r15d
  struct tagSMWP *v3; // rdi
  int v4; // r12d
  struct tagTHREADINFO *v5; // r14
  struct tagWINDOWPOS *ValidWindowPos; // rax
  struct tagWND *v7; // r13
  struct tagSMWP *v8; // rdx
  int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  struct tagWND *v15; // rax
  struct tagSMWP *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct tagCVR *v21; // rbx
  int v22; // esi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v28; // rax
  void (__fastcall *v29)(struct tagSMWP *); // rax
  struct tagTHREADINFO *v30; // rax
  struct tagTHREADINFO *v31; // rax
  _QWORD *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // r15
  _QWORD *v35; // rbx
  __int64 v36; // rdx
  int v37; // esi
  int *v38; // rbx
  __int64 v39; // r15
  _QWORD *v40; // r12
  __int64 v41; // rax
  __int64 v42; // r12
  int v43; // r15d
  __int64 v44; // rdx
  __int64 v45; // rcx
  char valid; // al
  __int64 v47; // rdx
  int v48; // esi
  __int64 v49; // rsi
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  struct tagDESKTOP **v54; // r15
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rdx
  int v59; // eax
  unsigned int v60; // ecx
  int v61; // ebx
  __int64 v62; // rdx
  struct tagWND *v63; // rdx
  struct tagWND *v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 UserSessionState; // rbx
  __int64 v69; // rdx
  __int64 v70; // rcx
  struct tagTHREADINFO *v71; // rax
  ULONG_PTR BugCheckParameter2[2]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v73; // [rsp+40h] [rbp-59h]
  _QWORD *v74; // [rsp+48h] [rbp-51h]
  ULONG_PTR v75[2]; // [rsp+50h] [rbp-49h] BYREF
  struct tagTHREADINFO *v76; // [rsp+60h] [rbp-39h]
  ULONG_PTR v77[3]; // [rsp+68h] [rbp-31h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v79[96]; // [rsp+90h] [rbp-9h] BYREF
  int v80; // [rsp+100h] [rbp+67h]
  int v81; // [rsp+110h] [rbp+77h] BYREF
  __int64 v82; // [rsp+118h] [rbp+7Fh]

  v81 = 0;
  v2 = a2;
  v3 = a1;
  v4 = 0;
  v5 = PtiCurrent((__int64)a1, a2);
  v80 = 0;
  if ( !*((_DWORD *)v3 + 7) )
    goto LABEL_110;
  if ( !(unsigned int)ValidateSmwp(v3, &v81) )
    goto LABEL_110;
  v77[2] = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v73 = -1LL;
  ValidWindowPos = FindValidWindowPos(v3);
  if ( !ValidWindowPos )
    goto LABEL_110;
  v7 = *(struct tagWND **)(_HMObjectFromHandle(*(_QWORD *)ValidWindowPos) + 104);
  if ( !v7 || !*((_QWORD *)v7 + 3) )
    goto LABEL_110;
  v75[1] = 0LL;
  v75[0] = -1LL;
  if ( (unsigned int)Feature_3444625720__private_IsEnabledDeviceUsageNoInline() )
    Win32HMThreadLockBase<tagWND,0,1>::ManualLock<void>(v75, v7);
  v9 = 0;
  if ( *((int *)v3 + 7) > 0 )
  {
    v10 = 0LL;
    do
    {
      v11 = *((_QWORD *)v3 + 5);
      v12 = *(_QWORD *)(v10 + v11);
      if ( v12 && *(_DWORD *)(v10 + v11 + 152) )
      {
        v13 = _HMObjectFromHandle(v12);
        v14 = *((_QWORD *)v3 + 5);
        if ( *(_DWORD *)(*(_QWORD *)(v13 + 40) + 236LL) != *(_DWORD *)(v10 + v14 + 152) )
        {
          v15 = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)(v10 + v14));
          SetWindowGroupBand(v15);
        }
        *(_DWORD *)(v10 + *((_QWORD *)v3 + 5) + 152) = 0;
      }
      ++v9;
      v10 += 168LL;
    }
    while ( v9 < *((_DWORD *)v3 + 7) );
    v4 = 0;
  }
  if ( v2 )
    AsyncWindowPos(v3);
  WindowActions::xxxInterceptSetWindowPos(v3, v8);
  if ( v7 != (struct tagWND *)GetDesktopWindow((__int64)v7) )
  {
LABEL_32:
    if ( !(unsigned int)Feature_3444625720__private_IsEnabledDeviceUsageNoInline() )
      Win32HMThreadLockBase<tagWND,0,1>::ManualLock<void>(v75, v7);
    if ( (*((_DWORD *)v3 + 6) & 2) != 0 )
    {
      HMLockObject(v3);
      if ( v73 != -1 )
      {
        BugCheckParameter4 = PtiCurrent(v26, v25);
        KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v3, (ULONG_PTR)BugCheckParameter4);
      }
      v28 = PtiCurrent(v26, v25);
      v4 = 1;
      v80 = 1;
      BugCheckParameter2[0] = *((_QWORD *)v28 + 48);
      *((_QWORD *)v28 + 48) = BugCheckParameter2;
      v29 = UnrefAndDestroySMWP;
    }
    else
    {
      if ( v73 != -1 )
      {
        v30 = PtiCurrent(v24, v23);
        KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v3, (ULONG_PTR)v30);
      }
      v31 = PtiCurrent(v24, v23);
      BugCheckParameter2[0] = *((_QWORD *)v31 + 48);
      *((_QWORD *)v31 + 48) = BugCheckParameter2;
      v29 = (void (__fastcall *)(struct tagSMWP *))DestroySMWP;
    }
    ++*((_DWORD *)v5 + 334);
    v73 = (__int64)v29;
    BugCheckParameter2[1] = (ULONG_PTR)v3;
    *((_DWORD *)v3 + 6) |= 4u;
    CDwmSwpNotifyBatch::CDwmSwpNotifyBatch((CDwmSwpNotifyBatch *)v79, v3);
    v32 = 0LL;
    v74 = 0LL;
    if ( (unsigned int)Feature_FixSwpNoActivateAddedViaPosChanging2__private_IsEnabledDeviceUsageNoInline()
      && *((int *)v3 + 7) > 0 )
    {
      v34 = 0LL;
      while ( 1 )
      {
        LOBYTE(v33) = 1;
        v35 = (_QWORD *)(v34 + *((_QWORD *)v3 + 5));
        if ( HMValidateHandleNoSecure(*v35, v33) )
        {
          if ( (v35[4] & 0x10) == 0 )
            break;
        }
        LODWORD(v32) = (_DWORD)v32 + 1;
        v34 += 168LL;
        if ( (int)v32 >= *((_DWORD *)v3 + 7) )
        {
          v32 = v74;
          goto LABEL_48;
        }
      }
      v32 = v35;
      v74 = v35;
    }
LABEL_48:
    if ( (unsigned int)xxxCalcValidRects(v3) )
    {
      v82 = 0LL;
      if ( (unsigned int)Feature_FixSwpNoActivateAddedViaPosChanging2__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v32 )
        {
          LOBYTE(v36) = 1;
          v42 = HMValidateHandleNoSecure(*v32, v36);
        }
        else
        {
          v42 = v82;
        }
        v38 = (int *)((char *)v3 + 28);
      }
      else
      {
        v37 = 0;
        v38 = (int *)((char *)v3 + 28);
        if ( *((int *)v3 + 7) <= 0 )
        {
LABEL_55:
          v42 = v82;
        }
        else
        {
          v39 = 0LL;
          while ( 1 )
          {
            LOBYTE(v36) = 1;
            v40 = (_QWORD *)(v39 + *((_QWORD *)v3 + 5));
            v41 = HMValidateHandleNoSecure(*v40, v36);
            if ( v41 )
            {
              if ( (v40[4] & 0x10) == 0 )
                break;
            }
            ++v37;
            v39 += 168LL;
            if ( v37 >= *v38 )
              goto LABEL_55;
          }
          v74 = v40;
          v42 = v41;
        }
      }
      Win32HM_LockIntoThread<1>((__int64)v5, v42, (__int64 *)v77);
      v43 = *((_DWORD *)v5 + 237);
      LODWORD(v82) = v43;
      v76 = *(struct tagTHREADINFO **)(W32GetUserSessionState(v45, v44) + 18904);
      valid = zzzBltValidBits(v3);
      v48 = (valid & 1) != 0 ? v81 : 0;
      v81 = v48;
      if ( (valid & 2) != 0 )
        GenerateMouseMove(0LL);
      if ( (*((_DWORD *)v3 + 6) & 1) != 0 )
      {
        v49 = *v38;
        if ( *v38 )
        {
          v50 = 168 * v49;
          do
          {
            v51 = *((_QWORD *)v3 + 5);
            v50 -= 168LL;
            --v49;
            v52 = *(_QWORD *)(v50 + v51);
            if ( v52 )
            {
              if ( (*(_DWORD *)(v50 + v51 + 32) & 0x70000000) != 0 )
              {
                LOBYTE(v47) = 1;
                v53 = HMValidateHandleNoSecure(v52, v47);
                v54 = (struct tagDESKTOP **)v53;
                if ( v53 )
                {
                  Win32HM_LockIntoThread<0>((__int64)v5, v53, BugCheckParameter3);
                  v55 = *((_QWORD *)v3 + 5);
                  if ( (*(_DWORD *)(v50 + v55 + 32) & 0x10000000) != 0 )
                  {
                    v56 = *(_QWORD *)(v50 + v55);
                    if ( (*(_DWORD *)(v50 + v55 + 156) & 8) != 0 )
                    {
                      PostIAMShellHookMessage(0x15u, v56);
                    }
                    else
                    {
                      PostShellHookMessagesEx((LastWokenThread *)1, v56);
                      xxxCallHook(1, *(_QWORD *)(v50 + *((_QWORD *)v3 + 5)), 0LL, 10);
                    }
                  }
                  v57 = *((_QWORD *)v3 + 5);
                  if ( (*(_DWORD *)(v50 + v57 + 32) & 0x20000000) != 0 )
                  {
                    PostShellHookMessagesEx((LastWokenThread *)2, *(_QWORD *)(v50 + v57));
                    xxxCallHook(2, *(_QWORD *)(v50 + *((_QWORD *)v3 + 5)), 0LL, 10);
                  }
                  v58 = *((_QWORD *)v3 + 5);
                  if ( (*(_DWORD *)(v50 + v58 + 32) & 0x40000000) != 0 )
                  {
                    v59 = *(_DWORD *)(v50 + v58 + 156);
                    if ( (v59 & 8) != 0 )
                    {
                      v60 = 23;
                    }
                    else
                    {
                      if ( (v59 & 0x10) == 0 )
                        xxxSetTrayWindow(v54[3], (struct tagWND *)v54);
                      v58 = *((_QWORD *)v3 + 5);
                      v60 = 19;
                    }
                    PostIAMShellHookMessage(v60, *(_QWORD *)(v50 + v58));
                  }
                  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v58);
                }
              }
            }
          }
          while ( v49 );
          v43 = v82;
        }
        v48 = v81;
      }
      if ( v5 == v76 && v43 && !*((_DWORD *)v5 + 237) && !(unsigned int)IsImmersiveAppRestricted(*((_QWORD *)v5 + 58)) )
        tagTHREADINFO::SetForegroundActivate(v5, 16LL);
      v61 = 0;
      if ( v42 )
      {
        v62 = *((_BYTE *)v74 + 35) & 1 | 2u;
        if ( (*((_DWORD *)v74 + 39) & 0x400) == 0 )
          v62 = *((_BYTE *)v74 + 35) & 1;
        v61 = xxxSwpActivate(v42, v62);
      }
      if ( v48 )
        xxxDoSyncPaint(v7, 4u);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v77, v47);
      if ( v61 )
      {
        v63 = *(struct tagWND **)(*((_QWORD *)v5 + 59) + 128LL);
        if ( v63 )
          SetOrClrWF(0, v63, 0x101u, 1);
        v64 = *(struct tagWND **)(*((_QWORD *)v5 + 59) + 136LL);
        if ( v64 )
          SetOrClrWF(0, v64, 0x101u, 1);
      }
      xxxSendChangedMsgs(v3);
      v4 = v80;
    }
    CDwmNotifyBatch::~CDwmNotifyBatch((CDwmNotifyBatch *)v79);
    if ( (*((_DWORD *)v5 + 334))-- == 1 )
    {
      UserSessionState = W32GetUserSessionState(v66, v65);
      GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL));
      GreClientRgnUpdatedStable();
      GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL));
    }
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(v75, v65);
    if ( v73 != -1 )
    {
      v71 = PtiCurrent(v70, v69);
      *((_QWORD *)v71 + 48) = BugCheckParameter2[0];
      v73 = -1LL;
    }
    if ( v4 )
    {
      UnrefAndDestroySMWP(v3);
      return 1LL;
    }
LABEL_110:
    DestroySMWP(v3);
    return 1LL;
  }
  v16 = ZOrderByOwner(v3);
  v3 = v16;
  if ( v16 )
  {
    if ( v2 )
    {
      v21 = (struct tagCVR *)*((_QWORD *)v16 + 5);
      v22 = *((_DWORD *)v16 + 7);
      while ( --v22 >= 0 )
      {
        if ( *(_QWORD *)v21 && !(unsigned int)ValidateWindowPos(v21, 0LL) )
          *(_QWORD *)v21 = 0LL;
        v21 = (struct tagCVR *)((char *)v21 + 168);
      }
      AsyncWindowPos(v3);
    }
    goto LABEL_32;
  }
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(v75, v17);
  if ( v73 != -1 )
    *((_QWORD *)PtiCurrent(v19, v18) + 48) = BugCheckParameter2[0];
  return 0LL;
}
