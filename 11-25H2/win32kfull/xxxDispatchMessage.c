/*
 * XREFs of xxxDispatchMessage @ 0x140116D64
 * Callers:
 *     xxxRestoreCsrssThreadDesktop @ 0x1401148A0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x140114C00 (xxxSetCsrssThreadDesktop.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140114EA8 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxDCETrackCaptionButton @ 0x140117458 (xxxDCETrackCaptionButton.c)
 *     xxxTrackCaptionButton @ 0x1401192EC (xxxTrackCaptionButton.c)
 *     xxxMNLoop @ 0x14015A654 (xxxMNLoop.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     NtUserDispatchMessage @ 0x140295630 (NtUserDispatchMessage.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402E3E2C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxHelpLoop @ 0x1402EB044 (xxxHelpLoop.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSimpleDoSyncPaint @ 0x1400359F0 (xxxSimpleDoSyncPaint.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     xxxDefWindowProc @ 0x1400C36C0 (xxxDefWindowProc.c)
 *     SfnDWORD @ 0x1400C48E0 (SfnDWORD.c)
 *     ValidateTimerCallback @ 0x140142700 (ValidateTimerCallback.c)
 *     ?FindSystemTimer@@YAPEAUtagTIMER@@PEAUtagMSG@@PEAUtagWND@@@Z @ 0x1401679B0 (-FindSystemTimer@@YAPEAUtagTIMER@@PEAUtagMSG@@PEAUtagWND@@@Z.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     xxxDesktopWndProc @ 0x1401847E0 (xxxDesktopWndProc.c)
 *     ??1CEtwTraceDispatchMessage@@QEAA@XZ @ 0x140197A68 (--1CEtwTraceDispatchMessage@@QEAA@XZ.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1401EEA10 (RtlWCSMessageWParamCharToMB.c)
 *     RtlMBMessageWParamCharToWCS @ 0x14022458C (RtlMBMessageWParamCharToWCS.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     xxxEventWndProc @ 0x1402DD6A0 (xxxEventWndProc.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxDispatchMessage(struct tagMSG *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  struct tagWND *v5; // rsi
  __int64 v7; // rdx
  BOOL v8; // eax
  __int64 (__fastcall *v9)(int, int, int, int, __int64, __int64, char); // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rbx
  struct tagTIMER *SystemTimer; // rax
  struct tagTIMER *v14; // rbp
  void (__fastcall *v15)(struct tagWND *, __int64, _QWORD, _QWORD); // rax
  struct tagTHREADINFO *v16; // rcx
  __int64 v17; // rcx
  __int64 UserSessionState; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  char v22; // r8
  __int64 (__fastcall *v23)(__int64 *, __int64, __int64, __int64, __int64, __int64); // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rbp
  __int64 *v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 (__fastcall *v33)(int, int, int, int, __int64, __int64); // rbx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 (__fastcall *v36)(int, int, int, int, __int64, __int64); // rbx
  __int64 v37; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v39; // [rsp+90h] [rbp+8h] BYREF
  int v40; // [rsp+98h] [rbp+10h]

  v39 = *((_DWORD *)a1 + 2);
  v2 = v39;
  LOBYTE(v4) = *((_BYTE *)PtiCurrent((__int64)a1, a2) + 1456);
  EtwTraceBeginDispatchMessage(v4, v2);
  v5 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v5 = (struct tagWND *)ValidateHwnd(*(_QWORD *)a1);
    if ( !v5 )
      goto LABEL_3;
  }
  v7 = *((unsigned int *)a1 + 2);
  if ( (unsigned int)v7 < 0x400 )
  {
    v8 = _bittest16(&MessageTable[v7], 9u) || (_DWORD)v7 == 537 && (*((_DWORD *)a1 + 4) & 0x8000LL) != 0;
    if ( v8 || (_DWORD)v7 == 536 && (*((_DWORD *)a1 + 4) & 0x8000LL) != 0 )
    {
      UserSetLastError(1159);
LABEL_3:
      CEtwTraceDispatchMessage::~CEtwTraceDispatchMessage((CEtwTraceDispatchMessage *)&v39);
      return 0LL;
    }
  }
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v5);
  v11 = *((_DWORD *)a1 + 2);
  if ( (v11 == 275 || v11 == 280) && *((_QWORD *)a1 + 3) )
  {
    if ( v11 == 280 )
    {
      v12 = 0LL;
      SystemTimer = FindSystemTimer(a1, v5);
      v14 = SystemTimer;
      if ( SystemTimer )
      {
        if ( !*((_QWORD *)SystemTimer + 4) )
        {
          v40 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3457LL);
        }
        v15 = (void (__fastcall *)(struct tagWND *, __int64, _QWORD, _QWORD))*((_QWORD *)v14 + 4);
        if ( v15 )
          v15(
            v5,
            280LL,
            *((unsigned int *)a1 + 4),
            (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24));
      }
      goto LABEL_55;
    }
    v16 = PtiCurrent(v10, (__int64)v9);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v16 + 132, 0, 0) & 4) == 0
      && (unsigned int)ValidateTimerCallback(v16, *((_QWORD *)a1 + 3)) )
    {
      UserSessionState = W32GetUserSessionState(v17, v9);
      v19 = SfnDWORD(
              (__int64 *)v5,
              275LL,
              *((_QWORD *)a1 + 2),
              (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24),
              *((_QWORD *)a1 + 3),
              *(_QWORD *)(*(_QWORD *)(UserSessionState + 19872) + 752LL));
LABEL_27:
      v12 = v19;
      goto LABEL_55;
    }
    goto LABEL_24;
  }
  if ( !v5 )
    goto LABEL_24;
  if ( v11 == 15 )
    SetOrClrWF(1, v5, 0x240u, 1);
  v20 = *((_QWORD *)v5 + 5);
  v21 = *((unsigned int *)a1 + 2);
  v22 = *(_BYTE *)(v20 + 18);
  if ( (v22 & 4) == 0 )
  {
    v25 = *(_QWORD *)(v20 + 120);
    if ( (v22 & 8) != 0 )
    {
      v26 = (__int64 *)((char *)a1 + 16);
      RtlWCSMessageWParamCharToMB(v21, (char *)a1 + 16);
      v28 = *((unsigned int *)a1 + 2);
      if ( (_DWORD)v28 == 576 || (_DWORD)v28 == 281 )
      {
        v32 = (unsigned __int8)MessageTable[(unsigned __int16)v28];
        v33 = gapfnScSendMessage[v32];
        v34 = W32GetUserSessionState(v32, v27);
        v31 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, _QWORD, __int64, _QWORD, int, _QWORD))v33)(
                v5,
                *((unsigned int *)a1 + 2),
                *v26,
                *((_QWORD *)a1 + 3),
                v25,
                *(_QWORD *)(*(_QWORD *)(v34 + 19872) + 752LL),
                1,
                0LL);
        goto LABEL_51;
      }
      v29 = W32GetUserSessionState(v28, v27);
      v30 = *v26;
    }
    else
    {
      if ( (_DWORD)v21 == 576 || (_DWORD)v21 == 281 )
      {
        v35 = (unsigned __int8)MessageTable[(unsigned __int16)v21];
        v36 = gapfnScSendMessage[v35];
        v37 = W32GetUserSessionState(v35, v9);
        v31 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, _QWORD, _QWORD, __int64, _QWORD, int, _QWORD))v36)(
                v5,
                *((unsigned int *)a1 + 2),
                *((_QWORD *)a1 + 2),
                *((_QWORD *)a1 + 3),
                v25,
                *(_QWORD *)(*(_QWORD *)(v37 + 19872) + 752LL),
                1,
                0LL);
LABEL_51:
        v12 = v31;
        if ( *((_DWORD *)a1 + 2) == 15 )
        {
          LOBYTE(v9) = 1;
          if ( HMValidateHandleNoSecure(*(_QWORD *)a1, (__int64)v9) )
          {
            if ( (*(_BYTE *)(*((_QWORD *)v5 + 5) + 18LL) & 0x40) != 0 )
            {
              SetOrClrWF(0, v5, 0x401u, 1);
              xxxSimpleDoSyncPaint(v5);
            }
          }
        }
        goto LABEL_55;
      }
      v29 = W32GetUserSessionState(v21, v9);
      v30 = *((_QWORD *)a1 + 2);
    }
    v31 = SfnDWORD(
            (__int64 *)v5,
            *((unsigned int *)a1 + 2),
            v30,
            *((_QWORD *)a1 + 3),
            v25,
            *(_QWORD *)(*(_QWORD *)(v29 + 19872) + 752LL));
    goto LABEL_51;
  }
  if ( (unsigned int)v21 < 0x400 )
    v23 = (__int64 (__fastcall *)(__int64 *, __int64, __int64, __int64, __int64, __int64))gapfnScSendMessage[(unsigned __int8)MessageTable[v21]];
  else
    v23 = SfnDWORD;
  v9 = SfnINWPARAMCHAR;
  if ( (char *)v23 == (char *)SfnINWPARAMCHAR && (v22 & 8) != 0 )
    RtlMBMessageWParamCharToWCS(v21, (char *)a1 + 16);
  v24 = *(_QWORD *)(*((_QWORD *)v5 + 5) + 120LL);
  if ( v24 < 4 )
  {
    v19 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, _QWORD, _QWORD))(&gServerHandlers)[v24])(
            v5,
            *((unsigned int *)a1 + 2),
            *((_QWORD *)a1 + 2),
            *((_QWORD *)a1 + 3));
    goto LABEL_27;
  }
LABEL_24:
  v12 = 0LL;
LABEL_55:
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, (__int64)v9);
  CEtwTraceDispatchMessage::~CEtwTraceDispatchMessage((CEtwTraceDispatchMessage *)&v39);
  return v12;
}
