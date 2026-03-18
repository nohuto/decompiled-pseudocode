/*
 * XREFs of xxxSysCommand @ 0x1402B6EB4
 * Callers:
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402A8DA8 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140020958 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400262EC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetMessagePos @ 0x1400385F8 (_GetMessagePos.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1400446D8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxPlayEventSound @ 0x1400D7F00 (xxxPlayEventSound.c)
 *     xxxIsDragging @ 0x1401171C8 (xxxIsDragging.c)
 *     ?HasPendingPromotion@PointerPromotion@@YAHPEAUtagTHREADINFO@@@Z @ 0x14013A968 (-HasPendingPromotion@PointerPromotion@@YAHPEAUtagTHREADINFO@@@Z.c)
 *     ?DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x14014C134 (-DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x14014C1B4 (-MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     xxxMNLoop @ 0x14015A654 (xxxMNLoop.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x14015BD74 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     xxxMNEndMenuState @ 0x14015BDC0 (xxxMNEndMenuState.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x14015CE78 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1401701A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1401D9BFC (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxMNStartMenuState @ 0x140256734 (xxxMNStartMenuState.c)
 *     ?StartScreenSaver@@YAXH@Z @ 0x14026CCBC (-StartScreenSaver@@YAXH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x140281C38 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ @ 0x1402AC9D0 (-UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ.c)
 *     ?DelegateMoveSizeToShell@@YA_NPEAUtagWND@@I@Z @ 0x1402B68D4 (-DelegateMoveSizeToShell@@YA_NPEAUtagWND@@I@Z.c)
 *     xxxClientTrackInit @ 0x1402BE53C (xxxClientTrackInit.c)
 *     xxxSBTrackInit @ 0x1402E8980 (xxxSBTrackInit.c)
 *     xxxHelpLoop @ 0x1402EB044 (xxxHelpLoop.c)
 *     xxxMNKeyFilter @ 0x1402EC7F8 (xxxMNKeyFilter.c)
 */

void __fastcall xxxSysCommand(struct tagWND *a1, __int64 a2, __int64 a3)
{
  char *v3; // r13
  int v4; // edi
  unsigned int v5; // r12d
  unsigned int v6; // esi
  __int64 v7; // r15
  struct tagTHREADINFO *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  const struct tagWND *v14; // rdx
  unsigned int v15; // esi
  unsigned int v16; // esi
  unsigned int v17; // esi
  unsigned int v18; // esi
  unsigned int v19; // esi
  unsigned int v20; // esi
  unsigned int v21; // esi
  unsigned int v22; // esi
  __int64 v23; // rdx
  Scrollbar::NonClient *v24; // rcx
  unsigned __int16 KeyState; // ax
  int v26; // ebx
  __int64 v27; // rcx
  int MessagePos; // esi
  char v29; // cl
  int v30; // r12d
  __int64 v31; // rcx
  int v32; // r8d
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct tagTHREADINFO **v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rax
  struct tagWND *v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  struct tagTHREADINFO *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  struct tagTHREADINFO *v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  struct tagWND *v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  char v55; // al
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 UserSessionState; // rax
  struct tagTHREADINFO **v59; // rax
  _DWORD *v60; // rdx
  __int64 v61; // rdx
  ULONG_PTR BugCheckParameter3; // [rsp+50h] [rbp-28h] BYREF
  __int64 v63; // [rsp+58h] [rbp-20h]
  __int64 v64; // [rsp+60h] [rbp-18h]
  __int64 v65; // [rsp+68h] [rbp-10h]
  int v66; // [rsp+C0h] [rbp+48h] BYREF
  int v67; // [rsp+C8h] [rbp+50h]
  __int64 v68; // [rsp+D0h] [rbp+58h] BYREF
  PointerPromotion *v69; // [rsp+D8h] [rbp+60h]

  v3 = (char *)a1 + 40;
  v4 = 0;
  v69 = (PointerPromotion *)*((_QWORD *)a1 + 2);
  v66 = 0;
  v5 = a2 & 0xF;
  v6 = a2 - v5;
  v7 = 0LL;
  if ( a3 != 0x10000 )
    v7 = a3;
  if ( !*(_QWORD *)(*((_QWORD *)v69 + 59) + 112LL) && (*(_BYTE *)(*(_QWORD *)v3 + 31LL) & 8) == 0
    || v6 == 61760
    || v6 == 61808
    || v6 == 61744 )
  {
    v9 = PtiCurrent((__int64)a1, a2);
    v12 = **((_QWORD **)PtiCurrent(v11, v10) + 63);
    v13 = (unsigned int)(*((_DWORD *)v9 + 180) | *(_DWORD *)(v12 + 16));
    if ( ((*((_BYTE *)v9 + 720) | *(_BYTE *)(v12 + 16)) & 0x40) == 0
      || !(unsigned int)xxxCallHook(8LL, v6, (unsigned int)v7, 5) )
    {
      v14 = *(const struct tagWND **)v3;
      if ( *(char *)(*(_QWORD *)v3 + 19LL) >= 0 )
      {
        if ( v6 <= 0xF090 )
        {
          if ( v6 != 61584 )
          {
            v15 = v6 - 61440;
            if ( v15 )
            {
              v16 = v15 - 16;
              if ( v16 )
              {
                v17 = v16 - 16;
                if ( v17 )
                {
                  v18 = v17 - 16;
                  if ( v18 )
                  {
                    v19 = v18 - 16;
                    if ( v19 && (v20 = v19 - 16) != 0 )
                    {
                      v21 = v20 - 16;
                      if ( v21 )
                      {
                        v22 = v21 - 16;
                        if ( !v22 || v22 == 16 )
                        {
                          if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
                            && Scrollbar::NonClient::UserModeSupportsUserModeScrollBars(v24, v23) )
                          {
                            KeyState = _GetKeyState(16LL);
                            xxxClientTrackInit(*(_QWORD *)a1, v7, v5, KeyState >> 15);
                          }
                          else
                          {
                            _GetKeyState(16LL);
                            xxxSBTrackInit(a1);
                          }
                        }
                      }
                      else
                      {
                        xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 16LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
                      }
                    }
                    else
                    {
                      v67 = 0x20000;
                      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 638);
                    }
                    return;
                  }
                  v26 = 3;
                  if ( (*((_BYTE *)v14 + 31) & 1) != 0 )
                    return;
                  v27 = 12LL;
                }
                else
                {
                  v26 = 6;
                  if ( (*((_BYTE *)v14 + 31) & 0x20) != 0 )
                    return;
                  v27 = 11LL;
                }
LABEL_85:
                xxxPlayEventSound(v27, (__int64)v14);
                UserSessionState = W32GetUserSessionState(v57, v56);
                xxxShowWindowEx(
                  a1,
                  v26 | *(_DWORD *)(UserSessionState + 66800) & 0x10000u,
                  v26 & 0x10000 | *(_DWORD *)(UserSessionState + 66800) & 0x10000);
                return;
              }
              MessagePos = GetMessagePos(v13, (__int64)v14);
              LODWORD(v68) = (__int16)MessagePos;
              HIDWORD(v68) = SHIWORD(MessagePos);
              if ( v5
                && !(unsigned int)PointerPromotion::HasPendingPromotion(
                                    v69,
                                    (struct tagTHREADINFO *)(unsigned int)SHIWORD(MessagePos))
                && !(unsigned int)xxxIsDragging(a1, v68) )
              {
                xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 3);
                v29 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
                if ( (v29 & 0x20) != 0 )
                  xxxSendTransformableMessageTimeout(
                    (struct tagTHREADINFO **)a1,
                    274LL,
                    0xF100uLL,
                    (struct tagDRAWITEMSTRUCT *)((v29 & 0x40) != 0 ? 45LL : 32LL),
                    0,
                    0,
                    0LL,
                    1,
                    0);
                goto LABEL_46;
              }
              v30 = -v5;
              if ( DelegateMoveSizeToShell(a1, 10 - (unsigned int)(v30 != 0))
                || (v31 = *((_QWORD *)a1 + 5), (*(_BYTE *)(v31 + 30) & 4) != 0)
                && (*(_BYTE *)(v31 + 31) & 1) != 0
                && !WindowArrangement::DragOperationFromMaximizedAllowed(a1, v14) )
              {
LABEL_46:
                xxxDeliverRestoreFocusMessage(a1, (__int64)v14);
                return;
              }
              v32 = MessagePos;
              v33 = 10 - (unsigned int)(v30 != 0);
            }
            else
            {
              if ( v5 > 0xA || DelegateMoveSizeToShell(a1, v5) )
                goto LABEL_46;
              v32 = GetMessagePos(v34, (__int64)v14);
              v33 = v5;
            }
            xxxMoveSize(a1, v33, v32);
            goto LABEL_46;
          }
          goto LABEL_63;
        }
        switch ( v6 )
        {
          case 0xF100u:
            v59 = (struct tagTHREADINFO **)xxxMNStartMenuState(a1, 0xF100u, v7);
            v36 = (__int64)v59;
            if ( !v59 )
              return;
            MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v68, v59);
            **(_DWORD **)v36 |= 0x80000000;
            v60 = *(_DWORD **)v36;
            *(_DWORD *)(v36 + 8) |= 0x20u;
            SmartObjStackRefBase<tagPOPUPMENU>::Init(&BugCheckParameter3, (__int64)v60);
            xxxMNKeyFilter(&BugCheckParameter3, v36, (unsigned int)v7);
LABEL_88:
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&BugCheckParameter3, v37);
            if ( (*(_DWORD *)(v36 + 8) & 0x100) == 0 )
              xxxMNEndMenuState((_QWORD *)v36, v61);
            MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v68);
            return;
          case 0xF120u:
            v55 = *((_BYTE *)v14 + 31);
            v27 = 9LL;
            v26 = 9;
            if ( (v55 & 0x20) == 0 && (v55 & 1) != 0 )
            {
              if ( WindowArrangement::MoveWithArrangementAllowed(a1, v14) )
                IsArranged(a1);
              v27 = 10LL;
            }
            goto LABEL_85;
          case 0xF130u:
            v42 = *(_QWORD *)(W32GetUserSessionState(v13, v14) + 19872);
            if ( (*(_DWORD *)(v42 + 2120) & 8) != 0 )
            {
              v43 = PtiCurrent(v42, v41);
              v46 = **((_QWORD **)PtiCurrent(v45, v44) + 63);
              v47 = (unsigned int)(*((_DWORD *)v43 + 180) | *(_DWORD *)(v46 + 16));
              if ( ((*((_WORD *)v43 + 360) | *(_WORD *)(v46 + 16)) & 0x800) != 0
                || (v47 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL), *(_QWORD *)(v47 + 184)) )
              {
                v48 = PtiCurrent(v47, v46);
                if ( ((*((_DWORD *)v48 + 180) | *(_DWORD *)(**((_QWORD **)PtiCurrent(v50, v49) + 63) + 16LL)) & 0x800) != 0 )
                  xxxCallHook(7LL, *(_QWORD *)a1, 0LL, 10);
                v51 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL);
                if ( v51 )
                {
                  LastWokenThread::Set(*((_QWORD *)v51 + 2), 1LL, 0LL);
                  v54 = W32GetUserSessionState(v53, v52);
                  _PostTransformableMessageExtended(
                    v51,
                    *(_DWORD *)(*(_QWORD *)(v54 + 19872) + 928LL),
                    7uLL,
                    0LL,
                    0LL,
                    1);
                }
              }
            }
            break;
          case 0xF140u:
            StartScreenSaver(0LL, (__int64)v14);
            return;
          case 0xF150u:
            v38 = ValidateHwnd(v7);
            if ( v38 )
            {
              v39 = *(struct tagWND **)(v38 + 200);
              if ( !v39 )
                v39 = (struct tagWND *)v38;
              Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(&BugCheckParameter3, (__int64)v39);
              xxxSetForegroundWindowWithOptions((__int64)v39, 2LL, 0, 0);
              if ( (*(_BYTE *)(*((_QWORD *)v39 + 5) + 31LL) & 0x20) != 0 )
                _PostTransformableMessageExtended(v39, 0x112u, 0xF120uLL, 0LL, 0LL, 1);
              Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)&BugCheckParameter3, v40);
            }
            break;
          case 0xF160u:
LABEL_63:
            if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 472LL) != *(_QWORD *)(W32GetUserSessionState(v13, v14) + 18888) )
              return;
            v35 = (struct tagTHREADINFO **)xxxMNStartMenuState(a1, v6, v7);
            v36 = (__int64)v35;
            if ( !v35 )
              return;
            MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v68, v35);
            **(_DWORD **)v36 |= 0x80000000;
            SmartObjStackRefBase<tagPOPUPMENU>::Init(&BugCheckParameter3, *(_QWORD *)v36);
            LOBYTE(v4) = v6 == 61792;
            xxxMNLoop((__int64 **)&BugCheckParameter3, v36, v7, v4);
            goto LABEL_88;
          case 0xF170u:
            if ( v7 == -1 )
            {
              BugCheckParameter3 = 0LL;
              v65 = 3LL;
              v63 = 0LL;
              v64 = 4LL;
            }
            else
            {
              if ( v7 != 2 )
                return;
              BugCheckParameter3 = 0LL;
              v63 = 0LL;
              v64 = 5LL;
              if ( (unsigned int)PowerIsDisplayIdleExpired(0LL, &v66) )
                v65 = v66;
              else
                v65 = (unsigned int)PowerIsDisplayIdleExpired(5000LL, 0LL) != 0 ? 17LL : 3LL;
            }
            QueuePowerRequest(&BugCheckParameter3, 0LL);
            break;
          case 0xF180u:
            xxxHelpLoop(a1);
            break;
        }
      }
    }
  }
}
