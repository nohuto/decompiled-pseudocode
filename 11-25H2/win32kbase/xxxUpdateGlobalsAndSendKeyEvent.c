/*
 * XREFs of xxxUpdateGlobalsAndSendKeyEvent @ 0x14018D324
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1401048D0 (NtMITSynthesizeKeyboardInput.c)
 *     xxxKeyEventEx @ 0x140150824 (xxxKeyEventEx.c)
 * Callees:
 *     GetActiveHKL @ 0x1400670C0 (GetActiveHKL.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PtiKbdFromQ @ 0x1400B95DC (PtiKbdFromQ.c)
 *     IsKeyboardDelegationEnabledForThread @ 0x1400B9CF0 (IsKeyboardDelegationEnabledForThread.c)
 *     HasHidTable @ 0x1400E6884 (HasHidTable.c)
 *     ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x1400FB1D8 (ApiSetEditionIsGpqForegroundAccessibleExplicit.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1400FBA0C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ApiSetEditionIsSAS @ 0x14011094C (ApiSetEditionIsSAS.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x14011C85C (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     xxxWindowEvent @ 0x1401455A4 (xxxWindowEvent.c)
 *     ?HandleHotkey@Keyboard@InputTraceLogging@@SAXXZ @ 0x14015B240 (-HandleHotkey@Keyboard@InputTraceLogging@@SAXXZ.c)
 *     UpdateAsyncKeyState @ 0x14018CE40 (UpdateAsyncKeyState.c)
 *     UpdateKeyLights @ 0x14018D000 (UpdateKeyLights.c)
 *     ApiSetEditionDoHotKeys @ 0x140194F74 (ApiSetEditionDoHotKeys.c)
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x140195544 (ApiSetEditionHandleAndPostKeyEvent.c)
 *     ApiSetEditionHandleRawInput @ 0x140195760 (ApiSetEditionHandleRawInput.c)
 *     GetKeyboardDelegationTargetQ @ 0x1402161D0 (GetKeyboardDelegationTargetQ.c)
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x140217850 (-LowLevelHexNumpad@@YAXGEHG@Z.c)
 */

void __fastcall xxxUpdateGlobalsAndSendKeyEvent(
        __int16 a1,
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
  unsigned __int16 v13; // si
  int v14; // r14d
  unsigned __int16 v15; // r12
  int v16; // ebx
  struct tagTHREADINFO *v17; // r13
  __int64 v18; // rcx
  unsigned int v19; // ecx
  __int64 v20; // xmm0_8
  __int64 v21; // rcx
  unsigned int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 KeyboardDelegationTargetQ; // rax
  unsigned __int8 v35; // si
  __int64 UserSessionState; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int16 ActiveHKL; // ax
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // esi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // r9d
  __int64 v53; // rax
  int v54; // r8d
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  int v61; // ecx
  unsigned __int16 v62; // ax
  int v63; // [rsp+88h] [rbp-41h]
  int v64; // [rsp+8Ch] [rbp-3Dh] BYREF
  int v65; // [rsp+90h] [rbp-39h] BYREF
  __int64 v66; // [rsp+98h] [rbp-31h]
  __int64 v67; // [rsp+A8h] [rbp-21h]
  __int64 v68; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v69; // [rsp+B8h] [rbp-11h] BYREF
  int v70; // [rsp+C0h] [rbp-9h]
  __int16 v71; // [rsp+118h] [rbp+4Fh]
  unsigned int v75; // [rsp+168h] [rbp+9Fh]

  v13 = a1 & 0x100;
  v14 = a1 & 0x8000;
  v71 = a1 & 0x100;
  v15 = (v14 != 0) + 256;
  v16 = v15;
  v63 = v15;
  v64 = 0;
  v17 = PtiCurrent();
  if ( a11 )
    v18 = *a11;
  else
    v18 = 0LL;
  v68 = v18;
  v66 = -1LL;
  v75 = 0;
  v67 = 0LL;
  if ( a8 )
  {
    if ( a10 )
    {
      v19 = *(_DWORD *)(a10 + 12);
      v20 = *(_QWORD *)a10;
      LODWORD(v67) = *(_DWORD *)(a10 + 8);
      v75 = v19;
    }
    else
    {
      v21 = *((_QWORD *)v17 + 58);
      v20 = *(_QWORD *)(v21 + 864);
      v75 = *(_DWORD *)(v21 + 12) >> 31;
      v16 = (unsigned __int16)((v14 != 0) + 256);
      LODWORD(v67) = *(_DWORD *)(v21 + 872);
    }
  }
  else
  {
    v20 = v66;
  }
  v66 = v20;
  v22 = CKeyboardProcessor::HandleLeftRightVKs(a1);
  if ( (*(_BYTE *)(W32GetUserSessionState(v24, v23) + 14404) & 0x10) != 0 )
  {
    LOBYTE(v26) = *(_BYTE *)(W32GetUserSessionState(v26, v25) + 14404);
    if ( (v26 & 4) == 0 )
      v63 = v16 + 4;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v26, v25) + 18944)
    && *(struct tagTHREADINFO **)(W32GetUserSessionState(v28, v27) + 18944) != v17 )
  {
    v65 = 0;
    LOBYTE(v28) = a1;
    if ( !(unsigned int)ApiSetEditionIsSAS(v28, (__int64)&v65) )
      goto LABEL_40;
    *(_QWORD *)(W32GetUserSessionState(v30, v29) + 18944) = 0LL;
  }
  v33 = *(_QWORD *)(W32GetUserSessionState(v28, v27) + 18888);
  if ( v33 )
  {
    if ( IsKeyboardDelegationEnabledForThread(*(InputDelegation **)(v33 + 104)) )
    {
      KeyboardDelegationTargetQ = GetKeyboardDelegationTargetQ();
      if ( KeyboardDelegationTargetQ )
        v33 = KeyboardDelegationTargetQ;
    }
  }
  if ( (_BYTE)v22 != (_BYTE)a1 )
  {
    v35 = a1 ^ 1;
    if ( !v14
      || (UserSessionState = W32GetUserSessionState(v32, v31),
          v31 = (unsigned int)(1 << (2 * (v35 & 3))),
          v32 = (unsigned __int64)v35 >> 2,
          ((unsigned __int8)v31 & *(_BYTE *)(v32 + UserSessionState + 14336)) == 0) )
    {
      if ( !*(_QWORD *)(W32GetUserSessionState(v32, v31) + 18944)
        || *(struct tagTHREADINFO **)(W32GetUserSessionState(v37, v31) + 18944) == v17 )
      {
        LOBYTE(v31) = v22;
        UpdateAsyncKeyState(v33, v31, v14 != 0);
      }
    }
    v13 = v71;
  }
  LOBYTE(v31) = a1;
  UpdateAsyncKeyState(v33, v31, v14 != 0);
  if ( *(_DWORD *)(W32GetUserSessionState(v39, v38) + 14708) )
  {
    if ( v33 )
    {
      v42 = PtiKbdFromQ(v33);
      if ( !(unsigned int)HasHidTable(v42, v43)
        || (v41 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(v33) + 464) + 824LL) + 100LL), (v41 & 0x20) == 0) )
      {
        LowLevelHexNumpad(a2, v22, v14, v13);
      }
    }
  }
  if ( !v14 )
  {
    if ( (_BYTE)v22 == 20
      || (unsigned __int8)(v22 + 112) <= 1u
      || (_BYTE)v22 == 21 && (ActiveHKL = GetActiveHKL(v41, v40), v41 = 1023LL, (ActiveHKL & 0x3FF) == 0x11) )
    {
      UpdateKeyLights(a8);
      xxxWindowEvent(2147483654LL, 0LL, v22, 0, 0);
    }
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v41, v40) + 18904) )
  {
    v46 = *(_QWORD *)(W32GetUserSessionState(v46, v45) + 18904);
    v47 = *(_DWORD *)(v46 + 924);
  }
  else
  {
    v47 = 0;
  }
  LOBYTE(v45) = a1;
  LOBYTE(v46) = v22;
  if ( (unsigned int)ApiSetEditionDoHotKeys(v46, v45, v14, v47, (__int64)&v68, (__int64)&v64) )
  {
    InputTraceLogging::Keyboard::HandleHotkey();
    return;
  }
  v69 = v66;
  v70 = v67;
  if ( !(unsigned int)ApiSetEditionIsGpqForegroundAccessibleExplicit(a8, (__int64)v17, &v69, v75)
    || (v51 = *(_QWORD *)(W32GetUserSessionState(v49, v48) + 19600), (*(_DWORD *)(v51 + 8) & 1) == 0)
    && ((a1 & 0x1000) == 0 || !a8 ? (v53 = a6) : (v53 = 0LL),
        v54 = a2,
        LOBYTE(v52) = a1,
        LOBYTE(v54) = v22,
        (unsigned int)ApiSetEditionHandleRawInput(a3, a9, v54, v52, v63, v53, a2, a1, v14, a5))
    || v64 )
  {
LABEL_40:
    InputTraceLogging::Keyboard::DropInput();
    return;
  }
  if ( (*(_BYTE *)(W32GetUserSessionState(v51, v50) + 14340) & 0x10) == 0
    || (LOBYTE(v56) = *(_BYTE *)(W32GetUserSessionState(v56, v55) + 14340), (v56 & 4) != 0)
    || (_BYTE)v22 == 23 )
  {
    if ( (_BYTE)v22 == 18 )
    {
      v60 = W32GetUserSessionState(v56, v55);
      if ( v14 )
      {
        v61 = *(_DWORD *)(v60 + 14032);
        v62 = (v14 != 0) + 260;
        if ( !v61 )
          v62 = (v14 != 0) + 256;
        v15 = v62;
      }
      else
      {
        *(_QWORD *)(v60 + 18840) = 0LL;
      }
    }
  }
  else
  {
    v15 = (v14 != 0) + 260;
    v71 |= 0x2000u;
    v57 = W32GetUserSessionState(v56, v55);
    if ( (_BYTE)v22 == 18 )
    {
      *(_DWORD *)(v57 + 14032) = 1;
      if ( !v14 )
        *(_QWORD *)(W32GetUserSessionState(v59, v58) + 18840) = 0LL;
    }
    else
    {
      *(_DWORD *)(v57 + 14032) = 0;
    }
  }
  if ( a8 && HIDWORD(v68) == 4 )
  {
    if ( a6 )
      a4 = *(unsigned __int16 *)(a6 + 6);
  }
  v70 = v67;
  v69 = v66;
  ApiSetEditionHandleAndPostKeyEvent(
    a8,
    (unsigned int)&v69,
    v75,
    v14,
    v22,
    v47,
    a2,
    a1,
    v71,
    a7,
    (__int64)&v68,
    a3,
    a5,
    a4,
    v15,
    a12);
}
