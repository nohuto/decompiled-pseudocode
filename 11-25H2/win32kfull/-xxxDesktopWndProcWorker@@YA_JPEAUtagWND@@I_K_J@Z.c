/*
 * XREFs of ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x140243864
 * Callers:
 *     xxxDesktopWndProc @ 0x1401847E0 (xxxDesktopWndProc.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     xxxRedrawWindow @ 0x140030830 (xxxRedrawWindow.c)
 *     ?SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z @ 0x140037CD8 (-SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z.c)
 *     xxxBeginPaint @ 0x140052240 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x140052E08 (xxxEndPaint.c)
 *     xxxDefWindowProc @ 0x1400C36C0 (xxxDefWindowProc.c)
 *     SetDesktopPattern @ 0x1400E4610 (SetDesktopPattern.c)
 *     xxxSetThreadDesktop @ 0x14011499C (xxxSetThreadDesktop.c)
 *     xxxSendNotifyMessage @ 0x14012B560 (xxxSendNotifyMessage.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x140148EB4 (PopAndFreeAlwaysW32ThreadLock.c)
 *     IsRemoteConnection @ 0x1401590F0 (IsRemoteConnection.c)
 *     xxxSetWindowLong @ 0x140180294 (xxxSetWindowLong.c)
 *     SetRITTimer @ 0x1401C8EB0 (SetRITTimer.c)
 *     xxxDWP_UpdateUIState @ 0x1401CE994 (xxxDWP_UpdateUIState.c)
 *     GreRealizeDefaultPalette @ 0x1401ED05C (GreRealizeDefaultPalette.c)
 *     GreGetSystemPaletteUse @ 0x1402011BC (GreGetSystemPaletteUse.c)
 *     xxxInternalPaintDesktop @ 0x14020D100 (xxxInternalPaintDesktop.c)
 *     xxxValidateClassAndSize @ 0x140242488 (xxxValidateClassAndSize.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     xxxRealizeDesktop @ 0x1402891C4 (xxxRealizeDesktop.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall xxxDesktopWndProcWorker(struct tagTHREADINFO **a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // r8
  struct tagWND *i; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int CurrentProcessId; // eax
  unsigned int CurrentThreadId; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 UserSessionState; // rax
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int128 v37; // [rsp+40h] [rbp-69h] BYREF
  __int64 v38; // [rsp+50h] [rbp-59h]
  __int64 v39; // [rsp+68h] [rbp-41h]
  _QWORD v40[10]; // [rsp+70h] [rbp-39h] BYREF

  memset_0(v40, 0, 0x48uLL);
  *(_QWORD *)&v37 = 0LL;
  if ( !(unsigned int)xxxValidateClassAndSize(
                        (__int64)a1,
                        a2,
                        (HWND)a3,
                        (struct tagDRAWITEMSTRUCT *)a4,
                        669,
                        1,
                        (__int64 *)&v37) )
    return v37;
  if ( !a1[13] )
  {
    if ( a2 != 128 )
    {
LABEL_5:
      v11 = a3;
      return xxxDefWindowProc(a1, a2, (HWND)v11, (struct tagDRAWITEMSTRUCT *)a4);
    }
    return 0LL;
  }
  if ( a2 > 0x80 )
  {
    if ( a2 != 161 )
    {
      switch ( a2 )
      {
        case 0x112u:
          v11 = 61760LL;
          if ( a3 == 61760 )
            return xxxDefWindowProc(a1, a2, (HWND)v11, (struct tagDRAWITEMSTRUCT *)a4);
          break;
        case 0x128u:
          return xxxDWP_UpdateUIState(a1, a3, a4);
        case 0x203u:
          a2 = 274;
          a3 = 61744LL;
          goto LABEL_5;
        case 0x30Fu:
          goto LABEL_48;
        case 0x311u:
          if ( *a1 != (struct tagTHREADINFO *)a3 )
LABEL_48:
            xxxRealizeDesktop(a1);
          break;
        case 0x401u:
          if ( !IsRemoteConnection(v9, v8)
            && *(_DWORD *)(W32GetUserSessionState(v28, v27) + 16296)
            && !*(_QWORD *)(W32GetUserSessionState(v30, v29) + 16304) )
          {
            UserSessionState = W32GetUserSessionState(v32, v31);
            v34 = SetRITTimer(*(_QWORD *)(UserSessionState + 16304), 0x14u, (__int64)HideMouseTrails, 0);
            *(_QWORD *)(W32GetUserSessionState(v36, v35) + 16304) = v34;
          }
          return 0LL;
        default:
          goto LABEL_5;
      }
    }
    return 0LL;
  }
  switch ( a2 )
  {
    case 0x80u:
      return 0LL;
    case 1u:
      v39 = 0LL;
      v37 = 0LL;
      v38 = -1LL;
      v23 = CreateProfileUserName(&v37);
      SetDesktopPattern(v23, 0LL);
      if ( v38 != -1 )
        PopAndFreeAlwaysW32ThreadLock((__int64)&v37, v24);
      xxxSendNotifyMessage((struct tagWND *)a1, 0x15u, 0LL, 0LL, 1);
      xxxRealizeDesktop(a1);
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      xxxSetWindowLong((struct tagWND *)a1, 0, CurrentProcessId, 0LL, 0);
      CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
      xxxSetWindowLong((struct tagWND *)a1, 4, CurrentThreadId, 0LL, 0);
      return 0LL;
    case 0xFu:
      xxxBeginPaint((unsigned int **)a1, (__int64)v40);
      xxxEndPaint((struct tagWND *)a1, v40);
      return 0LL;
    case 0x10u:
      return 0LL;
  }
  if ( a2 != 20 )
  {
    switch ( a2 )
    {
      case 0x15u:
        xxxRedrawWindow((struct tagWND *)a1, 0LL, 0LL, 133);
        break;
      case 0x3Au:
        LODWORD(v37) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1319LL);
        break;
      case 0x46u:
        if ( (*(_DWORD *)(a4 + 32) & 4) == 0 && !*(_QWORD *)(a4 + 8) )
        {
          v13 = W32GetUserSessionState(v9, v8);
          xxxSetThreadDesktop(0LL, *(_QWORD *)(v13 + 19144));
          v16 = W32GetUserSessionState(v15, v14);
          if ( (unsigned int)GreGetSystemPaletteUse(*(HDC *)(*(_QWORD *)(v16 + 56968) + 64LL)) != 1 )
          {
            v19 = W32GetUserSessionState(v18, v17);
            GreRealizeDefaultPalette(*(Gre::Base **)(*(_QWORD *)(v19 + 56968) + 64LL));
          }
          if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v18, v17) + 19144) + 48LL) & 1) != 0 )
          {
            xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x311u, (unsigned __int64)*a1, 0LL, 1);
            v22 = W32GetUserSessionState(v21, v20);
            *(_DWORD *)(*(_QWORD *)(v22 + 19144) + 48LL) &= ~1u;
          }
        }
        break;
      case 0x51u:
        LOBYTE(v37) = 0;
        *((_QWORD *)&v37 + 1) = 0LL;
        AtomicExecutionCheck::Arm((AtomicExecutionCheck *)&v37);
        for ( i = a1[14]; i; i = (struct tagWND *)*((_QWORD *)i + 11) )
          SendNotifyMessageAlways(i, 0x51u, a3, a4, 1u);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v37);
        break;
      default:
        goto LABEL_5;
    }
    return 0LL;
  }
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    xxxInternalPaintDesktop((__int64)a1, (HDC)a3, 1);
  return 1LL;
}
