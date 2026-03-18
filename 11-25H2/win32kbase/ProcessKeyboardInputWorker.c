/*
 * XREFs of ProcessKeyboardInputWorker @ 0x1400FAA64
 * Callers:
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x14002B018 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1400FA7EC (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 * Callees:
 *     ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x14002AF30 (-MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z.c)
 *     IsRemoteConnection @ 0x14002AFE4 (IsRemoteConnection.c)
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     GetActiveHKL @ 0x1400670C0 (GetActiveHKL.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     InternalMapVirtualKeyEx @ 0x14009F2F0 (InternalMapVirtualKeyEx.c)
 *     PtiKbdFromQ @ 0x1400B95DC (PtiKbdFromQ.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1400FB990 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1400FBA0C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     xxxProcessKeyEvent @ 0x1400FBC60 (xxxProcessKeyEvent.c)
 *     VKFromVSC @ 0x1401174C0 (VKFromVSC.c)
 *     ?AccessTimeOut@@YAXXZ @ 0x14011E280 (-AccessTimeOut@@YAXXZ.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x14015FD7C (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     ApiSetEditionRawInputRequestedForKeyboard @ 0x140196880 (ApiSetEditionRawInputRequestedForKeyboard.c)
 *     ApiSetEditionUserBeep @ 0x140196F38 (ApiSetEditionUserBeep.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     Feature_SkipRepeatedModifiers2__private_IsEnabledDeviceUsageNoInline @ 0x140217AC0 (Feature_SkipRepeatedModifiers2__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall ProcessKeyboardInputWorker(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rcx
  char v7; // si
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  __int16 v12; // ax
  unsigned __int8 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int8 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int16 v21; // bx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int16 ActiveHKL; // ax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  int v47; // r8d
  int v48; // r9d
  __int64 v49; // r14
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rdx
  bool v54; // bl
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  int v58; // r8d
  int v59; // r9d
  int v60; // r8d
  __int16 v61; // cx
  unsigned __int8 v62[4]; // [rsp+50h] [rbp-19h] BYREF
  int v63; // [rsp+54h] [rbp-15h]
  int v64; // [rsp+58h] [rbp-11h]
  _DWORD v65[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v66; // [rsp+68h] [rbp-1h]
  __int128 v67; // [rsp+70h] [rbp+7h]

  v4 = *(unsigned __int16 *)(a1 + 4);
  v65[0] = 0;
  v64 = 0;
  v7 = 1;
  v67 = 0LL;
  if ( (v4 & 0x10) != 0 || a2 && (*(_DWORD *)(a2 + 168) & 0x2000) != 0 || *(_WORD *)a1 == 0xFFFE )
    v64 = 1;
  if ( a2 )
    v66 = *(_QWORD *)a2;
  else
    v66 = 0LL;
  v8 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)&v67 = *(_QWORD *)a1;
  DWORD2(v67) = v8;
  v65[1] = 0;
  if ( (v4 & 0x28) != 0 )
  {
    if ( (v4 & 8) != 0 )
    {
      if ( (v4 & 0x10) != 0 )
        *(_DWORD *)(a1 + 8) |= 0x4000u;
      RemoteSyncToggleKeys(*(_DWORD *)(a1 + 8));
    }
    v60 = *(unsigned __int16 *)(a1 + 4);
    if ( (v60 & 0x20) != 0 )
    {
      v61 = (_WORD)v60 << 15;
      LOBYTE(v60) = (v60 & 0x10) != 0;
      LOWORD(v65[0]) = *(_WORD *)(a1 + 2);
      HIWORD(v65[0]) = v61 | 0x10E7;
      xxxProcessKeyEvent((unsigned int)v65, 0, v60, 0, a2, 0LL);
    }
    return;
  }
  if ( (*(_DWORD *)(W32GetUserSessionState(v4, a2) + 12924) & 0x8000) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v10, v9);
    RemoteSyncToggleKeys(*(_DWORD *)(UserSessionState + 12924));
  }
  v12 = *(_WORD *)(a1 + 4);
  if ( (v12 & 2) != 0 )
    v13 = -32;
  else
    v13 = (v12 & 4) != 0 ? 0xE1 : 0;
  v62[0] = v13;
  if ( *(_WORD *)(a1 + 2) == 255 )
  {
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v62, 1);
    ApiSetEditionUserBeep();
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v62, v14);
    v15 = 6LL;
LABEL_17:
    InputTraceLogging::Keyboard::DropInput(v15);
    return;
  }
  if ( isChildPartition(v10, v9) && (*(_BYTE *)(a1 + 4) & 0x40) != 0 )
  {
    HIWORD(v65[0]) = *(_WORD *)(a1 + 2);
    v18 = BYTE2(v65[0]);
  }
  else
  {
    LOBYTE(v65[0]) = *(_BYTE *)(a1 + 2) & 0x7F;
    if ( a3
      && (*(_QWORD *)(W32GetUserSessionState(v17, v16) + 12896) || *(_QWORD *)(W32GetUserSessionState(v20, v19) + 12904)) )
    {
      HIWORD(v65[0]) = 0;
      if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
        HIWORD(v65[0]) = 0x8000;
      if ( !(unsigned int)MapScancode((struct tagKE *)v65, v62, (struct DEVICEINFO *)a2) )
      {
        v15 = 7LL;
        goto LABEL_17;
      }
      v13 = v62[0];
    }
    LOBYTE(v16) = v13;
    v18 = VKFromVSC(v65, v16);
  }
  v21 = 0;
  *(_BYTE *)(W32GetUserSessionState(v17, v16) + 13992) = v18;
  if ( !v18 )
  {
    v24 = *(_QWORD *)(W32GetUserSessionState(v23, v22) + 18888);
    if ( v24 )
      v25 = PtiKbdFromQ(v24);
    else
      v25 = 0LL;
    if ( !(unsigned int)ApiSetEditionRawInputRequestedForKeyboard(v25) )
    {
      v15 = 8LL;
      goto LABEL_17;
    }
    v63 = 1;
    goto LABEL_36;
  }
  v63 = 0;
  if ( (unsigned __int8)(v18 - 91) > 1u || (*(_BYTE *)(a1 + 4) & 1) != 0 )
  {
LABEL_36:
    if ( *(_WORD *)(W32GetUserSessionState(v23, v22) + 12920) )
    {
      v29 = *(unsigned __int16 *)(W32GetUserSessionState(v27, v26) + 12920);
      if ( *(_WORD *)(a1 + 2) == (_WORD)v29 )
      {
        v18 = 76;
        *(_BYTE *)(W32GetUserSessionState(v29, v28) + 13992) = 76;
        HIWORD(v65[0]) = 76;
        v21 = 0;
      }
      v27 = *(unsigned int *)(W32GetUserSessionState(v29, v28) + 14012);
      if ( (v27 & 8) == 0 )
        goto LABEL_42;
      if ( (*(_BYTE *)(a1 + 4) & 1) == 0 )
        goto LABEL_60;
      if ( (unsigned __int8)(v18 - 91) <= 1u )
        goto LABEL_42;
    }
    goto LABEL_43;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v23, v22) + 18904)
    && (v32 = *(_QWORD *)(W32GetUserSessionState(v32, v31) + 18904), *(_QWORD *)(v32 + 480)) )
  {
    v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v32, v31) + 18904) + 480LL) + 48LL);
    v35 = *(_QWORD *)(v34 + 32);
  }
  else
  {
    v35 = *(_QWORD *)(W32GetUserSessionState(v32, v31) + 14064);
  }
  v36 = W32GetUserSessionState(v34, v33);
  v27 = 0LL;
  if ( !*(_WORD *)(v36 + 12920) )
  {
    v21 = InternalMapVirtualKeyEx(0x4Cu, 0, v35);
LABEL_42:
    *(_WORD *)(W32GetUserSessionState(v27, v26) + 12920) = v21;
  }
LABEL_43:
  if ( (*(_BYTE *)(a1 + 4) & 1) == 0 )
    goto LABEL_60;
  ActiveHKL = GetActiveHKL(v27, v26);
  if ( (unsigned __int8)(LOBYTE(v65[0]) + 15) <= 1u && (unsigned __int16)((ActiveHKL & 0x3FF) - 17) <= 1u )
  {
    if ( ((v18 - 22) & 0xFB) != 0 )
    {
      if ( v13 == 0xE1 )
        return;
    }
    else if ( v13 != 0xE1 )
    {
      goto LABEL_60;
    }
  }
  HIWORD(v65[0]) |= 0x8000u;
LABEL_60:
  if ( (unsigned int)IsRemoteConnection()
    && (unsigned __int8)(BYTE2(v65[0]) - 91) <= 1u
    && !*(_DWORD *)(W32GetUserSessionState(v38, v37) + 14036) )
  {
    v15 = 9LL;
    goto LABEL_17;
  }
  if ( !(unsigned int)Feature_SkipRepeatedModifiers2__private_IsEnabledDeviceUsageNoInline() )
  {
    v41 = W32GetUserSessionState(v40, v39);
    v44 = W32GetUserSessionState(v43, v42);
    v46 = (unsigned int)v18 - 91;
    if ( v18 == 91 )
    {
      LOBYTE(v46) = 64;
    }
    else
    {
      v46 = (unsigned int)v18 - 92;
      if ( v18 == 92 )
      {
        LODWORD(v46) = 128;
      }
      else if ( v18 == 160
             || v18 == 161
             || v18 == 162
             || v18 == 163
             || (v46 = (unsigned int)v18 - 164, (unsigned int)v46 < 2) )
      {
        v46 = 1LL;
        LOBYTE(v45) = v18 & 0xF;
        LOBYTE(v46) = 1 << (v18 & 0xF);
      }
      else
      {
        LOBYTE(v46) = 0;
      }
    }
    *(_BYTE *)(v41 + 21846) = v46;
    if ( !(_BYTE)v46 )
      goto LABEL_79;
    LOBYTE(v45) = *(_BYTE *)(v44 + 21845);
    if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
      goto LABEL_78;
    LOBYTE(v45) = v46 | v45;
    *(_BYTE *)(v44 + 21845) = v45;
LABEL_79:
    if ( v18 == 13 && (*(_BYTE *)(a1 + 4) & 1) == 0 )
      PoLatencySensitivityHint(1LL);
    if ( (*(_DWORD *)(W32GetUserSessionState(v45, v46) + 66800) & 0x100) != 0 )
    {
      AccessTimeOut();
      if ( (unsigned int)AccessProceduresStream((struct tagKE *)v65, *(_DWORD *)(a1 + 8), 0) )
      {
        LOBYTE(v59) = v63;
        LOBYTE(v58) = (*(_BYTE *)(a1 + 4) & 0x10) != 0;
        xxxProcessKeyEvent((unsigned int)v65, *(_DWORD *)(a1 + 8), v58, v59, a2, 0LL);
      }
    }
    else
    {
      LOBYTE(v47) = v64;
      LOBYTE(v48) = v63 != 0;
      xxxProcessKeyEvent((unsigned int)v65, *(_DWORD *)(a1 + 8), v47, v48, a2, 0LL);
    }
    return;
  }
  v49 = W32GetUserSessionState(v40, v39);
  v44 = W32GetUserSessionState(v51, v50);
  v46 = (unsigned int)v18 - 91;
  if ( v18 == 91 )
  {
    LOBYTE(v46) = 64;
  }
  else
  {
    v46 = (unsigned int)v18 - 92;
    if ( v18 == 92 )
    {
      LODWORD(v46) = 128;
    }
    else if ( v18 == 160
           || v18 == 161
           || v18 == 162
           || v18 == 163
           || (v46 = (unsigned int)v18 - 164, (unsigned int)v46 < 2) )
    {
      v46 = 1LL;
      LOBYTE(v45) = v18 & 0xF;
      LOBYTE(v46) = 1 << (v18 & 0xF);
    }
    else
    {
      LOBYTE(v46) = 0;
    }
  }
  *(_BYTE *)(v49 + 21846) = v46;
  if ( !(_BYTE)v46 )
    goto LABEL_79;
  LOBYTE(v45) = *(_BYTE *)(v44 + 21845);
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
  {
LABEL_78:
    LOBYTE(v46) = v45 & ~(_BYTE)v46;
    *(_BYTE *)(v44 + 21845) = v46;
    goto LABEL_79;
  }
  if ( ((unsigned __int8)v46 & (unsigned __int8)v45) != (_BYTE)v46 )
  {
    LOBYTE(v45) = v46 | v45;
    *(_BYTE *)(v44 + 21845) = v45;
    goto LABEL_79;
  }
  v45 = *(_QWORD *)(W32GetUserSessionState(v45, v46) + 18888);
  if ( v45 )
  {
    v52 = *(_QWORD *)(v45 + 104);
    if ( v52 )
    {
      if ( (*(_DWORD *)(v52 + 688) & 0x80000000) != 0 )
        goto LABEL_79;
    }
  }
  InputTraceLogging::Keyboard::DropInput(14LL);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
  {
    v7 = 0;
  }
  v54 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v55 = W32GetUserSessionState(WPP_GLOBAL_Control, v53);
    LOBYTE(v56) = v54;
    LOBYTE(v57) = v7;
    WPP_RECORDER_AND_TRACE_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v57,
      v56,
      *(_QWORD *)(v55 + 69144),
      3,
      7,
      10,
      (__int64)&WPP_922e16b1c9f3309382792bf0d3af51d8_Traceguids,
      v18);
  }
}
