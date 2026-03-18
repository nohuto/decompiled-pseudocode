/*
 * XREFs of xxxProcessKeyEvent @ 0x140124D60
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x140123CFC (ProcessKeyboardInputWorker.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x140124580 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x140124A80 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ProcessKeyboardInjectedInput @ 0x140124B80 (ProcessKeyboardInjectedInput.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x140157A4C (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1401A4024 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x140212A20 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x140212B50 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402132F0 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x14021CA34 (-SendKeyUpDown@@YAXEE@Z.c)
 * Callees:
 *     GetActiveHKL @ 0x14008B420 (GetActiveHKL.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1400D36E0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x1400E8CE0 (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1400EAA30 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     xxxKELocaleProcs @ 0x140122908 (xxxKELocaleProcs.c)
 *     xxxKeyEventEx @ 0x140123104 (xxxKeyEventEx.c)
 *     KEOEMProcs @ 0x140124530 (KEOEMProcs.c)
 *     xxxKENLSProcs @ 0x140125100 (xxxKENLSProcs.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x14012526C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x140147894 (-OnKeyEvent@CPTPProcessor@@SAXE_N@Z.c)
 *     UpdateRawKeyState @ 0x140148288 (UpdateRawKeyState.c)
 *     ?EndInertia@CInertiaManager@@QEAA_NXZ @ 0x1401B0814 (-EndInertia@CInertiaManager@@QEAA_NXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall xxxProcessKeyEvent(
        unsigned __int16 *a1,
        struct _CLIPOBJ *a2,
        int a3,
        unsigned __int8 a4,
        __int64 a5,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a6)
{
  unsigned __int64 v6; // rbp
  unsigned int v8; // r12d
  __int16 ActiveHKL; // ax
  int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rcx
  void *v13; // rsi
  __int64 UserSessionState; // rax
  int v15; // r8d
  unsigned __int64 v16; // rdx
  unsigned int v17; // ecx
  int v18; // r14d
  __int64 v19; // rax
  int v20; // ebx
  unsigned __int16 v21; // bx
  __int64 v22; // r10
  int v23; // eax
  int v24; // edx
  __int64 v25; // rcx
  int v26; // r8d
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // r8d
  int (*v31)(void); // rax
  void (__fastcall *v32)(unsigned __int16 *, __int64); // rax
  __int64 v33; // r13
  int v34; // edx
  int v35; // r8d
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  __int64 v39; // rax

  v6 = *((unsigned __int8 *)a1 + 2);
  v8 = (unsigned __int8)a3;
  ActiveHKL = GetActiveHKL((int)a1, (int)a2, a3);
  v11 = a1[1];
  v12 = 1023LL;
  v13 = 0LL;
  if ( (ActiveHKL & 0x3FF) == 0x12 )
  {
    if ( (v11 & 0x8000u) != 0LL && (v11 & 0x1000) == 0 && (*(_BYTE *)a1 == 0xF1 || *(_BYTE *)a1 == 0xF2) )
    {
      UserSessionState = W32GetUserSessionState(1023, v11, v10);
      v12 = 2 * (unsigned int)(v6 & 3);
      LOBYTE(v15) = *(_BYTE *)(UserSessionState + (v6 >> 2) + 14392);
      if ( ((unsigned __int8)v15 & (unsigned __int8)(1 << (2 * (v6 & 3)))) == 0 )
      {
        a1[1] &= ~0x8000u;
        goto LABEL_10;
      }
    }
    v11 = a1[1];
  }
  LOWORD(v11) = (unsigned __int16)v11 >> 15;
  LOBYTE(v12) = v6;
  UpdateRawKeyState(v12, v11);
LABEL_10:
  if ( (unsigned __int8)(v6 + 96) <= 5u )
  {
    LOBYTE(v6) = ((int)v6 - 160) / 2 + 16;
    LOBYTE(v12) = v6;
    UpdateRawKeyState(v12, a1[1] >> 15);
  }
  if ( a5 )
    LODWORD(v16) = -(*(_DWORD *)(a5 + 476) & 1);
  else
    LODWORD(v16) = 0;
  v17 = (unsigned __int8)v6 - 173;
  if ( (unsigned __int8)v6 == 173
    || (v17 = (unsigned __int8)v6 - 174, (unsigned __int8)v6 == 174)
    || (v17 = (unsigned __int8)v6 - 175, (unsigned __int8)v6 == 175)
    || (v17 = (unsigned __int8)v6 - 176, (unsigned __int8)v6 == 176)
    || (v17 = (unsigned __int8)v6 - 177, (unsigned __int8)v6 == 177)
    || (v17 = (unsigned __int8)v6 - 178, v17 < 2) )
  {
    v18 = 8 * v8;
  }
  else
  {
    v18 = 8 * v8;
    if ( !(_DWORD)v16 )
    {
      v19 = W32GetUserSessionState(v17, 0, v15);
      v20 = v6 & 3;
      v16 = (unsigned __int64)(unsigned __int8)v6 >> 2;
      v17 = 2 * v20;
      LOBYTE(v15) = *(_BYTE *)(v19 + v16 + 14392);
      if ( ((unsigned __int8)v15 & (unsigned __int8)(1 << (2 * v20))) != 0 )
        v18 = (8 * v8) | 0x20;
    }
  }
  v21 = a1[8];
  v22 = *(_QWORD *)(W32GetUserSessionState(v17, v16, v15) + 3056);
  v23 = v18 | 0x40;
  if ( v21 != 0xFFFD )
    v23 = v18;
  CInputGlobals::UpdateInputGlobals(
    v22,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    1,
    0,
    0,
    v23);
  if ( !(_BYTE)v8 || !*((_DWORD *)a1 + 1) )
  {
    v27 = W32GetUserSessionState(v25, v24, v26);
    *((_DWORD *)a1 + 1) = CInputGlobals::GetLastInputTime(*(CInputGlobals **)(v27 + 3056));
  }
  v29 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v25) + 48);
  v31 = *(int (**)(void))(v29 + 5264);
  if ( v31 )
  {
    if ( v31() >= 0 )
    {
      v29 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v29) + 48);
      v32 = *(void (__fastcall **)(unsigned __int16 *, __int64))(v29 + 5272);
      if ( v32 )
      {
        LOBYTE(v28) = v6;
        v32(a1, v28);
      }
    }
  }
  if ( a5 && (*(_DWORD *)(a5 + 168) & 0x2000) != 0 )
    v33 = a5 + 376;
  else
    v33 = 0LL;
  if ( _bittest16((const signed __int16 *)a1 + 1, 0xCu) )
  {
    if ( *(_BYTE *)(W32GetUserSessionState(v29, v28, v30) + 14496) )
      v13 = (void *)*((_QWORD *)a1 + 1);
    xxxKeyEventEx(
      a1[1],
      *a1,
      *((_DWORD *)a1 + 1),
      (__int64)a2,
      v13,
      (unsigned __int16 *)((unsigned __int64)(a1 + 8) & -(__int64)((_BYTE)v8 != 0)),
      v8,
      a4,
      v33,
      a6);
  }
  else if ( KEOEMProcs((struct tagKE *)a1)
         && xxxKELocaleProcs((struct tagKE *)a1, v34, v35)
         && (unsigned int)xxxKENLSProcs((struct _PATHOBJ *)a1, a2) )
  {
    if ( (unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(v8) )
    {
      if ( !a4 )
      {
        if ( !(_BYTE)v8 )
          CPTPProcessor::OnKeyEvent(v6, (a1[1] & 0x8000u) == 0);
        v39 = W32GetUserSessionState(v37, v36, v38);
        CInertiaManager::EndInertia((CInertiaManager *)(v39 + 16912));
      }
      xxxKeyEventEx(
        a1[1],
        *(unsigned __int8 *)a1,
        *((_DWORD *)a1 + 1),
        (__int64)a2,
        *((void **)a1 + 1),
        a1 + 8,
        v8,
        a4,
        v33,
        a6);
    }
    else
    {
      InputTraceLogging::Keyboard::DropInput(0LL);
    }
  }
}
