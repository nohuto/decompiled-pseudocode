/*
 * XREFs of xxxUpdateGlobalsAndSendKeyEvent @ 0x140123498
 * Callers:
 *     xxxKeyEventEx @ 0x140123104 (xxxKeyEventEx.c)
 *     NtMITSynthesizeKeyboardInput @ 0x140143DF0 (NtMITSynthesizeKeyboardInput.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsKeyboardDelegationEnabledForThread @ 0x14006C780 (IsKeyboardDelegationEnabledForThread.c)
 *     HasHidTable @ 0x14006CFAC (HasHidTable.c)
 *     UpdateAsyncKeyState @ 0x14008A330 (UpdateAsyncKeyState.c)
 *     GetActiveHKL @ 0x14008B420 (GetActiveHKL.c)
 *     xxxWindowEvent @ 0x14011CB00 (xxxWindowEvent.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x140123A60 (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x140124498 (ApiSetEditionIsGpqForegroundAccessibleExplicit.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x14012526C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     PtiKbdFromQ @ 0x14014521C (PtiKbdFromQ.c)
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x140174824 (-LowLevelHexNumpad@@YAXGEHG@Z.c)
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x140188A00 (ApiSetEditionHandleAndPostKeyEvent.c)
 *     ?HandleHotkey@Keyboard@InputTraceLogging@@SAXXZ @ 0x140192C98 (-HandleHotkey@Keyboard@InputTraceLogging@@SAXXZ.c)
 *     ApiSetEditionHandleRawInput @ 0x140198B74 (ApiSetEditionHandleRawInput.c)
 *     ApiSetEditionDoHotKeys @ 0x14019B8C0 (ApiSetEditionDoHotKeys.c)
 *     ApiSetEditionIsSAS @ 0x1401BEACC (ApiSetEditionIsSAS.c)
 *     GetKeyboardDelegationTargetQ @ 0x14021B5F0 (GetKeyboardDelegationTargetQ.c)
 *     UpdateKeyLights @ 0x14021CBA0 (UpdateKeyLights.c)
 */

void __fastcall xxxUpdateGlobalsAndSendKeyEvent(
        __int64 a1,
        unsigned __int16 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int16 a7,
        unsigned __int8 a8,
        unsigned __int8 a9,
        __int64 a10,
        __int64 *a11,
        __int64 a12)
{
  __int16 v12; // r12
  int v13; // r14d
  int v14; // r15d
  struct tagTHREADINFO *v15; // r13
  __int64 v16; // rcx
  unsigned int v17; // ecx
  __int64 v18; // xmm0_8
  __int64 v19; // rcx
  unsigned int v20; // esi
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // edx
  __int64 v28; // rcx
  int v29; // r8d
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  unsigned __int64 v33; // rdx
  int v34; // ecx
  __int64 v35; // rdi
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 KeyboardDelegationTargetQ; // rax
  unsigned int v39; // ebx
  __int64 UserSessionState; // rax
  int v41; // ecx
  int v42; // edx
  int v43; // ecx
  int v44; // r8d
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  __int64 v48; // rax
  __int16 ActiveHKL; // ax
  int v50; // edx
  __int64 v51; // rcx
  int v52; // r8d
  int v53; // edi
  __int64 v54; // rcx
  int v55; // edx
  int v56; // ecx
  int v57; // r8d
  int v58; // edx
  __int64 v59; // rcx
  int v60; // r8d
  int v61; // r9d
  __int64 v62; // rax
  int v63; // r8d
  int v64; // edx
  int v65; // ecx
  int v66; // r8d
  __int64 v67; // rax
  int v68; // edx
  int v69; // ecx
  int v70; // r8d
  __int64 v71; // rax
  int v72; // ecx
  __int16 v73; // ax
  int v74; // [rsp+88h] [rbp-41h]
  int v75; // [rsp+8Ch] [rbp-3Dh] BYREF
  int v76; // [rsp+90h] [rbp-39h] BYREF
  __int64 v77; // [rsp+98h] [rbp-31h]
  __int64 v78; // [rsp+A8h] [rbp-21h]
  __int64 v79; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v80; // [rsp+B8h] [rbp-11h] BYREF
  int v81; // [rsp+C0h] [rbp-9h]
  __int16 v82; // [rsp+118h] [rbp+4Fh]
  unsigned int v86; // [rsp+168h] [rbp+9Fh]

  v12 = a1;
  v13 = a1 & 0x8000;
  v82 = a1 & 0x100;
  LOWORD(a1) = (v13 != 0) + 256;
  v14 = (unsigned __int16)a1;
  v74 = (unsigned __int16)a1;
  v75 = 0;
  v15 = PtiCurrent(a1, 256LL);
  if ( a11 )
    v16 = *a11;
  else
    v16 = 0LL;
  v79 = v16;
  v86 = 0;
  v77 = -1LL;
  v78 = 0LL;
  if ( a8 )
  {
    if ( a10 )
    {
      v17 = *(_DWORD *)(a10 + 12);
      v18 = *(_QWORD *)a10;
      LODWORD(v78) = *(_DWORD *)(a10 + 8);
      v86 = v17;
    }
    else
    {
      v19 = *((_QWORD *)v15 + 57);
      v18 = *(_QWORD *)(v19 + 864);
      v86 = *(_DWORD *)(v19 + 12) >> 31;
      LODWORD(v78) = *(_DWORD *)(v19 + 872);
    }
  }
  else
  {
    v18 = v77;
  }
  v77 = v18;
  v20 = CKeyboardProcessor::HandleLeftRightVKs(v12);
  if ( (*(_BYTE *)(W32GetUserSessionState(v22, v21, v23) + 14396) & 0x10) != 0
    && (*(_BYTE *)(W32GetUserSessionState(v25, v24, v26) + 14396) & 4) == 0 )
  {
    v74 = v14 + 4;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v25, v24, v26) + 18984)
    && *(struct tagTHREADINFO **)(W32GetUserSessionState(v28, v27, v29) + 18984) != v15 )
  {
    v76 = 0;
    LOBYTE(v28) = v12;
    if ( !(unsigned int)ApiSetEditionIsSAS(v28, &v76) )
    {
      v54 = 2LL;
LABEL_40:
      InputTraceLogging::Keyboard::DropInput(v54);
      return;
    }
    *(_QWORD *)(W32GetUserSessionState(v31, v30, v32) + 18984) = 0LL;
  }
  v35 = *(_QWORD *)(W32GetUserSessionState(v28, v27, v29) + 18928);
  if ( v35 )
  {
    if ( IsKeyboardDelegationEnabledForThread(*(InputDelegation **)(v35 + 104), v33, v36) )
    {
      KeyboardDelegationTargetQ = GetKeyboardDelegationTargetQ();
      if ( KeyboardDelegationTargetQ )
        v35 = KeyboardDelegationTargetQ;
    }
  }
  if ( (_BYTE)v20 != (_BYTE)v12 )
  {
    if ( !v13
      || (v39 = (unsigned __int8)v12 ^ 1,
          UserSessionState = W32GetUserSessionState(v34, v33, v36),
          v33 = (unsigned __int64)v39 >> 2,
          v34 = 2 * (v39 & 3),
          LOBYTE(v36) = *(_BYTE *)(UserSessionState + v33 + 14328),
          ((unsigned __int8)v36 & (unsigned __int8)(1 << v34)) == 0) )
    {
      if ( !*(_QWORD *)(W32GetUserSessionState(v34, v33, v36) + 18984)
        || *(struct tagTHREADINFO **)(W32GetUserSessionState(v41, v33, v36) + 18984) == v15 )
      {
        LOBYTE(v33) = v20;
        LOBYTE(v36) = v13 != 0;
        UpdateAsyncKeyState(v35, v33, v36, v37);
      }
    }
  }
  LOBYTE(v33) = v12;
  LOBYTE(v36) = v13 != 0;
  UpdateAsyncKeyState(v35, v33, v36, v37);
  if ( *(_DWORD *)(W32GetUserSessionState(v43, v42, v44) + 14700) )
  {
    if ( v35 )
    {
      v48 = PtiKbdFromQ(v35);
      if ( !(unsigned int)HasHidTable(v48)
        || (v46 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(v35) + 456) + 824LL) + 100LL), (v46 & 0x20) == 0) )
      {
        LowLevelHexNumpad(a2, v20, v13, v82);
      }
    }
  }
  if ( !v13 )
  {
    if ( (_BYTE)v20 == 20
      || (unsigned __int8)(v20 + 112) <= 1u
      || (_BYTE)v20 == 21 && (ActiveHKL = GetActiveHKL(v46, v45, v47), v46 = 1023, (ActiveHKL & 0x3FF) == 0x11) )
    {
      UpdateKeyLights(a8);
      xxxWindowEvent(2147483654LL, 0LL, v20, 0, 0);
    }
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v46, v45, v47) + 18944) )
  {
    v51 = *(_QWORD *)(W32GetUserSessionState(v51, v50, v52) + 18944);
    v53 = *(_DWORD *)(v51 + 916);
  }
  else
  {
    v53 = 0;
  }
  LOBYTE(v50) = v12;
  LOBYTE(v51) = v20;
  if ( (unsigned int)ApiSetEditionDoHotKeys(v51, v50, v13, v53, (__int64)&v79, (__int64)&v75) )
  {
    InputTraceLogging::Keyboard::HandleHotkey();
    return;
  }
  v80 = v77;
  v81 = v78;
  if ( !(unsigned int)ApiSetEditionIsGpqForegroundAccessibleExplicit(a8, v15, &v80, v86) )
  {
    v54 = 0LL;
    goto LABEL_40;
  }
  v59 = *(_QWORD *)(W32GetUserSessionState(v56, v55, v57) + 19632);
  if ( (*(_DWORD *)(v59 + 8) & 1) == 0 )
  {
    v62 = (v12 & 0x1000) != 0 && a8 ? 0LL : a6;
    v63 = a2;
    LOBYTE(v61) = v12;
    LOBYTE(v63) = v20;
    if ( (unsigned int)ApiSetEditionHandleRawInput(a3, a9, v63, v61, v74, v62, a2, v12, v13, a5) )
    {
      v54 = 4LL;
      goto LABEL_40;
    }
  }
  if ( v75 )
  {
    v54 = 5LL;
    goto LABEL_40;
  }
  if ( (*(_BYTE *)(W32GetUserSessionState(v59, v58, v60) + 14332) & 0x10) == 0
    || (LOBYTE(v65) = *(_BYTE *)(W32GetUserSessionState(v65, v64, v66) + 14332), (v65 & 4) != 0)
    || (_BYTE)v20 == 23 )
  {
    if ( (_BYTE)v20 == 18 )
    {
      v71 = W32GetUserSessionState(v65, v64, v66);
      if ( v13 )
      {
        v72 = *(_DWORD *)(v71 + 14024);
        v73 = v14 + 4;
        if ( !v72 )
          v73 = v14;
        LOWORD(v14) = v73;
      }
      else
      {
        *(_QWORD *)(v71 + 18888) = 0LL;
      }
    }
  }
  else
  {
    v82 |= 0x2000u;
    LOWORD(v14) = v14 + 4;
    v67 = W32GetUserSessionState(v65, v64, v66);
    if ( (_BYTE)v20 == 18 )
    {
      *(_DWORD *)(v67 + 14024) = 1;
      if ( !v13 )
        *(_QWORD *)(W32GetUserSessionState(v69, v68, v70) + 18888) = 0LL;
    }
    else
    {
      *(_DWORD *)(v67 + 14024) = 0;
    }
  }
  if ( a8 && HIDWORD(v79) == 4 )
  {
    if ( a6 )
      a4 = *(unsigned __int16 *)(a6 + 6);
  }
  v81 = v78;
  v80 = v77;
  ApiSetEditionHandleAndPostKeyEvent(
    a8,
    (unsigned int)&v80,
    v86,
    v13,
    v20,
    v53,
    a2,
    v12,
    v82,
    a7,
    (__int64)&v79,
    a3,
    a5,
    a4,
    v14,
    a12);
}
