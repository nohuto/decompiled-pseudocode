/*
 * XREFs of ProcessKeyboardInputWorker @ 0x140123CFC
 * Callers:
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x14007EC78 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x140123A88 (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 * Callees:
 *     ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x14007E904 (-MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z.c)
 *     IsRemoteConnection @ 0x14007E9B8 (IsRemoteConnection.c)
 *     InternalMapVirtualKeyEx @ 0x140088250 (InternalMapVirtualKeyEx.c)
 *     VKFromVSC @ 0x14008ABB0 (VKFromVSC.c)
 *     GetActiveHKL @ 0x14008B420 (GetActiveHKL.c)
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     xxxProcessKeyEvent @ 0x140124D60 (xxxProcessKeyEvent.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1401251F0 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x14012526C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     PtiKbdFromQ @ 0x14014521C (PtiKbdFromQ.c)
 *     ?AccessTimeOut@@YAXXZ @ 0x14015C610 (-AccessTimeOut@@YAXXZ.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1401A4024 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     Feature_SkipRepeatedModifiers2__private_IsEnabledDeviceUsageNoInline @ 0x14021CAD4 (Feature_SkipRepeatedModifiers2__private_IsEnabledDeviceUsageNoInline.c)
 *     ApiSetEditionRawInputRequestedForKeyboard @ 0x140227DDC (ApiSetEditionRawInputRequestedForKeyboard.c)
 *     ApiSetEditionUserBeep @ 0x140227F44 (ApiSetEditionUserBeep.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall ProcessKeyboardInputWorker(__int64 a1, __int64 a2, __int16 a3)
{
  int v4; // ecx
  char v5; // bl
  char v7; // si
  int v8; // eax
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 UserSessionState; // rax
  __int16 v14; // ax
  char v15; // r14
  int v16; // edx
  int v17; // r8d
  __int64 v18; // rcx
  int v19; // edx
  int v20; // ecx
  __int16 v21; // r8
  unsigned __int8 v22; // r15
  int v23; // edx
  int v24; // ecx
  __int16 v25; // r8
  __int16 v26; // bx
  int v27; // edx
  int v28; // ecx
  __int16 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // edx
  __int64 v33; // rcx
  int v34; // r8d
  int v35; // edx
  int v36; // ecx
  __int16 v37; // r8
  __int16 ActiveHKL; // ax
  __int16 v39; // ax
  int v40; // edx
  __int64 v41; // rcx
  __int16 v42; // r8
  int v43; // edx
  __int64 v44; // rcx
  __int16 v45; // r8
  __int64 v46; // rbx
  __int64 v47; // rax
  int v48; // edx
  int v49; // ecx
  __int16 v50; // r8
  int v51; // edx
  int v52; // ecx
  __int16 v53; // r8
  __int64 v54; // rbx
  int v55; // edx
  int v56; // ecx
  __int16 v57; // r8
  __int64 v58; // rax
  int v59; // ecx
  __int16 v60; // r8
  unsigned int v61; // edx
  int v62; // edx
  int v63; // ecx
  __int16 v64; // r8
  __int64 v65; // rax
  __int64 v66; // rax
  int v67; // r8d
  int v68; // r9d
  int v69; // r8d
  int v70; // r9d
  int v71; // edx
  __int16 v72; // r8
  bool v73; // bl
  __int64 v74; // rax
  int v75; // r8d
  int v76; // edx
  int v77; // r8d
  __int16 v78; // cx
  unsigned __int8 v79[4]; // [rsp+50h] [rbp-19h] BYREF
  int v80; // [rsp+54h] [rbp-15h]
  int v81; // [rsp+58h] [rbp-11h]
  _DWORD v82[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v83; // [rsp+68h] [rbp-1h]
  __int128 v84; // [rsp+70h] [rbp+7h]

  v4 = *(unsigned __int16 *)(a1 + 4);
  v82[0] = 0;
  v5 = a3;
  v81 = 0;
  v7 = 1;
  v84 = 0LL;
  if ( (v4 & 0x10) != 0 || a2 && (*(_DWORD *)(a2 + 168) & 0x2000) != 0 || *(_WORD *)a1 == 0xFFFE )
    v81 = 1;
  if ( a2 )
    v83 = *(_QWORD *)a2;
  else
    v83 = 0LL;
  v8 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)&v84 = *(_QWORD *)a1;
  DWORD2(v84) = v8;
  v82[1] = 0;
  if ( (v4 & 0x28) != 0 )
  {
    if ( (v4 & 8) != 0 )
    {
      if ( (v4 & 0x10) != 0 )
        *(_DWORD *)(a1 + 8) |= 0x4000u;
      RemoteSyncToggleKeys(*(_DWORD *)(a1 + 8));
    }
    v77 = *(unsigned __int16 *)(a1 + 4);
    if ( (v77 & 0x20) != 0 )
    {
      v78 = (_WORD)v77 << 15;
      LOBYTE(v77) = (v77 & 0x10) != 0;
      LOWORD(v82[0]) = *(_WORD *)(a1 + 2);
      HIWORD(v82[0]) = v78 | 0x10E7;
      xxxProcessKeyEvent((unsigned int)v82, 0, v77, 0, a2, 0LL);
    }
    return;
  }
  if ( (*(_DWORD *)(W32GetUserSessionState(v4, a2, a3) + 12916) & 0x8000) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v10, v9, (_WORD)v11);
    RemoteSyncToggleKeys(*(_DWORD *)(UserSessionState + 12916));
  }
  v14 = *(_WORD *)(a1 + 4);
  if ( (v14 & 2) != 0 )
    v15 = -32;
  else
    v15 = (v14 & 4) != 0 ? 0xE1 : 0;
  v79[0] = v15;
  if ( *(_WORD *)(a1 + 2) == 255 )
  {
    LOBYTE(v9) = 1;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v79, v9, v11, v12);
    ApiSetEditionUserBeep();
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v79, v16, v17);
    v18 = 6LL;
LABEL_17:
    InputTraceLogging::Keyboard::DropInput(v18);
    return;
  }
  if ( isChildPartition(v10, v9, v11) && (*(_BYTE *)(a1 + 4) & 0x40) != 0 )
  {
    HIWORD(v82[0]) = *(_WORD *)(a1 + 2);
    v22 = BYTE2(v82[0]);
  }
  else
  {
    LOBYTE(v82[0]) = *(_BYTE *)(a1 + 2) & 0x7F;
    if ( v5
      && (*(_QWORD *)(W32GetUserSessionState(v20, v19, v21) + 12888)
       || *(_QWORD *)(W32GetUserSessionState(v24, v23, v25) + 12896)) )
    {
      HIWORD(v82[0]) = 0;
      if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
        HIWORD(v82[0]) = 0x8000;
      if ( !(unsigned int)MapScancode((struct tagKE *)v82, v79, (struct DEVICEINFO *)a2) )
      {
        v18 = 7LL;
        goto LABEL_17;
      }
      v15 = v79[0];
    }
    v22 = VKFromVSC((unsigned __int8 *)v82, v15);
  }
  v26 = 0;
  *(_BYTE *)(W32GetUserSessionState(v20, v19, v21) + 13984) = v22;
  if ( !v22 )
  {
    v30 = *(_QWORD *)(W32GetUserSessionState(v28, v27, v29) + 18928);
    if ( v30 )
      v31 = PtiKbdFromQ(v30);
    else
      v31 = 0LL;
    if ( !(unsigned int)ApiSetEditionRawInputRequestedForKeyboard(v31) )
    {
      v18 = 8LL;
      goto LABEL_17;
    }
    v80 = 1;
    goto LABEL_36;
  }
  v80 = 0;
  if ( (unsigned __int8)(v22 - 91) > 1u || (*(_BYTE *)(a1 + 4) & 1) != 0 )
  {
LABEL_36:
    if ( *(_WORD *)(W32GetUserSessionState(v28, v27, v29) + 12912) )
    {
      v36 = *(unsigned __int16 *)(W32GetUserSessionState(v33, v32, (_WORD)v34) + 12912);
      if ( *(_WORD *)(a1 + 2) == (_WORD)v36 )
      {
        v22 = 76;
        *(_BYTE *)(W32GetUserSessionState(v36, v35, v37) + 13984) = 76;
        HIWORD(v82[0]) = 76;
        v26 = 0;
      }
      v33 = *(unsigned int *)(W32GetUserSessionState(v36, v35, v37) + 14004);
      if ( (v33 & 8) == 0 )
        goto LABEL_42;
      if ( (*(_BYTE *)(a1 + 4) & 1) == 0 )
        goto LABEL_61;
      if ( (unsigned __int8)(v22 - 91) <= 1u )
        goto LABEL_42;
    }
    goto LABEL_43;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v28, v27, v29) + 18944)
    && (v41 = *(_QWORD *)(W32GetUserSessionState(v41, v40, v42) + 18944), *(_QWORD *)(v41 + 472)) )
  {
    v44 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v41, v40, v42) + 18944) + 472LL) + 48LL);
    v46 = *(_QWORD *)(v44 + 32);
  }
  else
  {
    v46 = *(_QWORD *)(W32GetUserSessionState(v41, v40, v42) + 14056);
  }
  v47 = W32GetUserSessionState(v44, v43, v45);
  v33 = 0LL;
  if ( !*(_WORD *)(v47 + 12912) )
  {
    v26 = InternalMapVirtualKeyEx(0x4Cu, 0, v46);
LABEL_42:
    *(_WORD *)(W32GetUserSessionState(v33, v32, (_WORD)v34) + 12912) = v26;
  }
LABEL_43:
  if ( (*(_BYTE *)(a1 + 4) & 1) == 0 )
    goto LABEL_61;
  ActiveHKL = GetActiveHKL(v33, v32, v34);
  LOBYTE(v33) = LOBYTE(v82[0]) + 15;
  if ( (unsigned __int8)(LOBYTE(v82[0]) + 15) <= 1u )
  {
    v33 = 1023LL;
    v39 = ActiveHKL & 0x3FF;
    if ( v39 == 18 || v39 == 17 )
    {
      if ( ((v22 - 22) & 0xFB) != 0 )
      {
        if ( v15 == -31 )
          return;
      }
      else if ( v15 != -31 )
      {
        goto LABEL_61;
      }
    }
  }
  HIWORD(v82[0]) |= 0x8000u;
LABEL_61:
  if ( (unsigned int)IsRemoteConnection(v33)
    && (unsigned __int8)(BYTE2(v82[0]) - 91) <= 1u
    && !*(_DWORD *)(W32GetUserSessionState(v49, v48, v50) + 14028) )
  {
    v18 = 9LL;
    goto LABEL_17;
  }
  if ( !(unsigned int)Feature_SkipRepeatedModifiers2__private_IsEnabledDeviceUsageNoInline() )
  {
    v54 = W32GetUserSessionState(v52, v51, v53);
    v58 = W32GetUserSessionState(v56, v55, v57);
    v61 = v22 - 91;
    if ( v22 == 91 )
    {
      *(_BYTE *)(v54 + 21878) = 64;
      LOBYTE(v61) = 64;
    }
    else if ( v22 == 92 )
    {
      *(_BYTE *)(v54 + 21878) = 0x80;
      v61 = 128;
    }
    else
    {
      if ( v22 != 160 && v22 != 161 && v22 != 162 && v22 != 163 )
      {
        v61 = v22 - 164;
        if ( v61 >= 2 )
        {
LABEL_73:
          *(_BYTE *)(v54 + 21878) = 0;
          goto LABEL_99;
        }
      }
      v61 = 1;
      LOBYTE(v59) = v22 & 0xF;
      LOBYTE(v61) = 1 << (v22 & 0xF);
      *(_BYTE *)(v54 + 21878) = v61;
      if ( !(_BYTE)v61 )
      {
LABEL_99:
        if ( v22 == 13 && (*(_BYTE *)(a1 + 4) & 1) == 0 )
          PoLatencySensitivityHint(1LL);
        if ( (*(_DWORD *)(W32GetUserSessionState(v59, v61, v60) + 66792) & 0x100) != 0 )
        {
          AccessTimeOut();
          if ( (unsigned int)AccessProceduresStream((struct tagKE *)v82, *(_DWORD *)(a1 + 8), 0) )
          {
            LOBYTE(v70) = v80;
            LOBYTE(v69) = (*(_BYTE *)(a1 + 4) & 0x10) != 0;
            xxxProcessKeyEvent((unsigned int)v82, *(_DWORD *)(a1 + 8), v69, v70, a2, 0LL);
          }
        }
        else
        {
          LOBYTE(v67) = v81;
          LOBYTE(v68) = v80 != 0;
          xxxProcessKeyEvent((unsigned int)v82, *(_DWORD *)(a1 + 8), v67, v68, a2, 0LL);
        }
        return;
      }
    }
    LOBYTE(v59) = *(_BYTE *)(v58 + 21877);
    if ( (*(_BYTE *)(a1 + 4) & 1) == 0 )
    {
      LOBYTE(v61) = v59 | v61;
      goto LABEL_80;
    }
LABEL_79:
    LOBYTE(v61) = v59 & ~(_BYTE)v61;
LABEL_80:
    *(_BYTE *)(v58 + 21877) = v61;
    goto LABEL_99;
  }
  v54 = W32GetUserSessionState(v52, v51, v53);
  v58 = W32GetUserSessionState(v63, v62, v64);
  v60 = v58;
  v61 = v22 - 91;
  if ( v22 == 91 )
  {
    LOBYTE(v61) = 64;
    *(_BYTE *)(v54 + 21878) = 64;
  }
  else if ( v22 == 92 )
  {
    *(_BYTE *)(v54 + 21878) = 0x80;
    v61 = 128;
  }
  else
  {
    if ( v22 != 160 && v22 != 161 && v22 != 162 && v22 != 163 )
    {
      v61 = v22 - 164;
      if ( v61 > 1 )
        goto LABEL_73;
    }
    v61 = 1;
    LOBYTE(v59) = v22 & 0xF;
    LOBYTE(v61) = 1 << (v22 & 0xF);
    *(_BYTE *)(v54 + 21878) = v61;
    if ( !(_BYTE)v61 )
      goto LABEL_99;
  }
  LOBYTE(v59) = *(_BYTE *)(v58 + 21877);
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
    goto LABEL_79;
  if ( ((unsigned __int8)v59 & (unsigned __int8)v61) != (_BYTE)v61 )
  {
    LOBYTE(v61) = v59 | v61;
    *(_BYTE *)(v58 + 21877) = v61;
    goto LABEL_99;
  }
  v65 = *(_QWORD *)(W32GetUserSessionState(v59, v61, (_WORD)v58) + 18928);
  if ( v65 )
  {
    v66 = *(_QWORD *)(v65 + 104);
    if ( v66 )
    {
      if ( (*(_DWORD *)(v66 + 680) & 0x80000000) != 0 )
        goto LABEL_99;
    }
  }
  InputTraceLogging::Keyboard::DropInput(14LL);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
  {
    v7 = 0;
  }
  v73 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v74 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v71, v72);
    LOBYTE(v75) = v73;
    LOBYTE(v76) = v7;
    WPP_RECORDER_AND_TRACE_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v76,
      v75,
      *(_QWORD *)(v74 + 69136),
      3,
      7,
      10,
      (__int64)&WPP_09be1e9f8593375d8a8ea34c3536ea49_Traceguids,
      v22);
  }
}
