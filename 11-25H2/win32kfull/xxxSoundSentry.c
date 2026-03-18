/*
 * XREFs of xxxSoundSentry @ 0x1401108CC
 * Callers:
 *     xxxMessageBeep @ 0x1401107D4 (xxxMessageBeep.c)
 *     NtUserSoundSentry @ 0x140110890 (NtUserSoundSentry.c)
 *     ?xxxUserBeep@@YAHKK_N@Z @ 0x14021DA40 (-xxxUserBeep@@YAHKK_N@Z.c)
 *     xxxProcessEventMessage @ 0x14024572C (xxxProcessEventMessage.c)
 *     xxxOldMessageBeep @ 0x1402AF948 (xxxOldMessageBeep.c)
 * Callees:
 *     InternalSetTimer @ 0x140019C44 (InternalSetTimer.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     GetScreenRectForDpi @ 0x140090A20 (GetScreenRectForDpi.c)
 *     GrePatBlt @ 0x14009F4D0 (GrePatBlt.c)
 *     GreDPtoLP @ 0x140158574 (GreDPtoLP.c)
 *     GreEnableAppContainerRestriction @ 0x140208DD0 (GreEnableAppContainerRestriction.c)
 *     GetPrimaryMonitorRect @ 0x1402193C8 (GetPrimaryMonitorRect.c)
 *     xxxFlashWindow @ 0x140253F78 (xxxFlashWindow.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSoundSentry(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  struct tagWND *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r14d
  int v17; // ebx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  HDC DCEx; // rbx
  __int128 v24; // xmm6
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 DesktopWindow; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int128 v30; // xmm0
  __int64 v31; // rdx
  _BYTE v32[8]; // [rsp+30h] [rbp-40h] BYREF
  __m128i BugCheckParameter3; // [rsp+38h] [rbp-38h] BYREF
  struct tagPOINT v34[2]; // [rsp+48h] [rbp-28h] BYREF

  *(_OWORD *)&v34[0].x = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v6 = *(unsigned int *)(W32GetUserSessionState(v4, v3) + 20948);
  if ( (v6 & 1) == 0 )
  {
    v7 = 50;
LABEL_3:
    UserSetLastError(v7);
    return 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v6, v5) + 18888) )
  {
    v12 = *(struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 18888) + 128LL);
    if ( v12 )
    {
      if ( !*(_QWORD *)(UserSessionState + 21008) )
      {
        v13 = (unsigned int)(*(_DWORD *)(UserSessionState + 20976) - 1);
        if ( *(_DWORD *)(UserSessionState + 20976) == 1
          || (v13 = (unsigned int)(*(_DWORD *)(UserSessionState + 20976) - 2), (unsigned int)v13 <= 1) )
        {
          v15 = *(_QWORD *)(W32GetUserSessionState(v13, v11) + 19872);
          if ( *(int *)(v15 + 4984) >= 1 )
          {
            v15 = *(_QWORD *)(W32GetUserSessionState(v15, v14) + 19872);
            v16 = *(_DWORD *)(v15 + 4984);
          }
          else
          {
            v16 = 1200;
          }
          v17 = *(_DWORD *)(UserSessionState + 20976);
          *(_DWORD *)(W32GetUserSessionState(v15, v14) + 21016) = v17;
          v18 = *(_QWORD *)v12;
          *(_QWORD *)(W32GetUserSessionState(v20, v19) + 21000) = v18;
          v21 = InternalSetTimer(0LL, 0LL, v16, (__int64)xxxSoundSentryTimer, 0, 20);
          *(_QWORD *)(UserSessionState + 21008) = v21;
          if ( !v21 )
          {
            v7 = 170;
            goto LABEL_3;
          }
        }
        switch ( *(_DWORD *)(UserSessionState + 20976) )
        {
          case 1:
            Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(&BugCheckParameter3, (__int64)v12);
            xxxFlashWindow(v12);
            Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)&BugCheckParameter3, v31);
            return 1LL;
          case 2:
            if ( (unsigned int)IsWindowDesktopComposed(v12) )
            {
              *(_OWORD *)&v34[0].x = *(_OWORD *)(*((_QWORD *)v12 + 5) + 88LL);
              LogicalToPhysicalDPIRect(v34, v34, *(unsigned int *)(*((_QWORD *)v12 + 5) + 288LL), 0LL);
              v24 = *(_OWORD *)&v34[0].x;
              *(_OWORD *)(W32GetUserSessionState(v26, v25) + 21020) = v24;
              DesktopWindow = GetDesktopWindow((__int64)v12);
              DCEx = (HDC)_GetDCEx(DesktopWindow, 0LL, 3LL);
              GreEnableAppContainerRestriction(0LL);
              LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v32, 1);
              GrePatBlt(DCEx, v34[0].x, v34[0].y, v34[1].x - v34[0].x, v34[1].y - v34[0].y, 5570569);
              goto LABEL_21;
            }
            v28 = _GetDCEx(v12, 0LL, 65537LL);
            v29 = *((_QWORD *)v12 + 5);
            DCEx = (HDC)v28;
            if ( (*(_WORD *)(v29 + 42) & 0x2FFF) == 0x29D )
              v30 = *(_OWORD *)GetPrimaryMonitorRect(&BugCheckParameter3);
            else
              v30 = *(_OWORD *)(v29 + 88);
            v34[1].x = DWORD2(v30) - v30;
            v34[1].y = HIDWORD(v30) - DWORD1(v30);
            v34[0].y = 0;
            v34[0].x = 0;
            GreDPtoLP(DCEx, v34);
            GreEnableAppContainerRestriction(0LL);
LABEL_27:
            GrePatBlt(DCEx, v34[0].x, v34[0].y, v34[1].x - v34[0].x, v34[1].y - v34[0].y, 5570569);
            goto LABEL_22;
          case 3:
            v22 = GetDesktopWindow((__int64)v12);
            DCEx = (HDC)_GetDCEx(v22, 0LL, 3LL);
            *(__m128i *)&v34[0].x = *GetScreenRectForDpi(&BugCheckParameter3, 0);
            GreEnableAppContainerRestriction(0LL);
            if ( (unsigned int)IsWindowDesktopComposed(v12) )
            {
              LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v32, 1);
              GrePatBlt(DCEx, v34[0].x, v34[0].y, v34[1].x - v34[0].x, v34[1].y - v34[0].y, 5570569);
LABEL_21:
              LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v32);
LABEL_22:
              GreEnableAppContainerRestriction(1LL);
              _ReleaseDC(DCEx);
              return 1LL;
            }
            goto LABEL_27;
        }
      }
    }
  }
  return 1LL;
}
