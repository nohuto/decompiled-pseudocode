/*
 * XREFs of xxxKeyEventEx @ 0x140123104
 * Callers:
 *     ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x1401229A4 (-xxxAltGr@@YAXPEAUtagKE@@@Z.c)
 *     ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x140122ACC (-xxxShiftLock@@YAHPEAUtagKE@@@Z.c)
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x140122D20 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     xxxKeyEvent @ 0x140122E60 (xxxKeyEvent.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x140122EB8 (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 *     xxxProcessKeyEvent @ 0x140124D60 (xxxProcessKeyEvent.c)
 *     ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x14014D950 (-xxxNumpadCursor@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxICO_00@@YAHPEAUtagKE@@@Z @ 0x140157110 (-xxxICO_00@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x14019C20C (-xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z.c)
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021CD60 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021CE80 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D090 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D2A0 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D480 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ @ 0x140066084 (-OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ.c)
 *     GetActiveHKL @ 0x14008B420 (GetActiveHKL.c)
 *     HMAssignmentLock @ 0x14009B8F0 (HMAssignmentLock.c)
 *     GetKeyEventInputSource @ 0x140122C10 (GetKeyEventInputSource.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x140123498 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x140123A60 (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x14012526C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?KeyEvent@Keyboard@InputTraceLogging@@SAXAEBUtagINPUT_MESSAGE_SOURCE@@HPEAXKHHPEAUHKL__@@E@Z @ 0x1401252D8 (-KeyEvent@Keyboard@InputTraceLogging@@SAXAEBUtagINPUT_MESSAGE_SOURCE@@HPEAXKHHPEAUHKL__@@E@Z.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x14013E9E8 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     EditionUpdateSASModifiers @ 0x14015648C (EditionUpdateSASModifiers.c)
 *     ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1401A4EC0 (-ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_.c)
 *     ApiSetEditionKeyEventLLHook @ 0x1401BAE70 (ApiSetEditionKeyEventLLHook.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall xxxKeyEventEx(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        void *a5,
        unsigned __int16 *a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        __int64 a9,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a10)
{
  unsigned __int16 v10; // r12
  unsigned __int16 v11; // r15
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  unsigned int v15; // esi
  __int16 v16; // r13
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  __int64 UserSessionState; // rax
  int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // esi
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  volatile signed __int32 *v27; // rcx
  int v28; // edx
  int v29; // r8d
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  HKL ActiveHKL; // rax
  __int64 v37; // rcx
  int (*v38)(void); // rax
  __int64 v39; // rdx
  __int64 KeyboardProcessor; // rax
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  int v44; // edx
  int v45; // ecx
  int v46; // r8d
  int v47; // r8d
  int v48; // esi
  unsigned int v49; // [rsp+50h] [rbp-69h]
  unsigned __int8 v50; // [rsp+60h] [rbp-59h]
  int v52; // [rsp+6Ch] [rbp-4Dh]
  int v53; // [rsp+70h] [rbp-49h]
  struct tagTHREADINFO *v54; // [rsp+78h] [rbp-41h]
  __int64 *v56[2]; // [rsp+90h] [rbp-29h] BYREF
  struct _KEYBOARD_VIRTUAL_DEVICE_INFO *v57; // [rsp+A0h] [rbp-19h]
  __int64 v58; // [rsp+A8h] [rbp-11h] BYREF
  int v59; // [rsp+B0h] [rbp-9h]

  v10 = a2;
  v57 = a10;
  v11 = a1;
  v54 = PtiCurrent(a1, a2);
  v56[0] = 0LL;
  v15 = 0;
  v59 = 0;
  if ( a6 )
    v16 = *a6;
  else
    v16 = -1;
  v58 = -1LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v13, v12, v14) + 14488) )
  {
    UserSessionState = W32GetUserSessionState(v18, v17, v19);
    CAsyncKeyEventMonitor::OnKeyEvent(*(CAsyncKeyEventMonitor **)(UserSessionState + 14488));
  }
  if ( a7 )
  {
    if ( a9 )
    {
      v15 = *(_DWORD *)(a9 + 12);
      v21 = *(_DWORD *)(a9 + 8);
      v58 = *(_QWORD *)a9;
    }
    else
    {
      v22 = *((_QWORD *)v54 + 57);
      v23 = *(_DWORD *)(v22 + 12);
      v58 = *(_QWORD *)(v22 + 864);
      v21 = *(_DWORD *)(v22 + 872);
      v15 = v23 >> 31;
    }
    v59 = v21;
  }
  GetKeyEventInputSource(a7, v16, a9, v56);
  v27 = *(volatile signed __int32 **)(W32GetUserSessionState(v25, v24, v26) + 19904);
  _InterlockedOr(v27, 0x40u);
  LOWORD(v27) = ((v11 & 0x8000) != 0) + 256;
  v53 = (unsigned __int16)v27;
  v52 = (unsigned __int16)v27;
  if ( (*(_BYTE *)(W32GetUserSessionState((_DWORD)v27, v28, v29) + 14396) & 0x10) != 0
    && (*(_BYTE *)(W32GetUserSessionState(v31, v30, v32) + 14396) & 4) == 0 )
  {
    v52 = v53 + 4;
  }
  v50 = CKeyboardProcessor::HandleLeftRightVKs(v11);
  ActiveHKL = (HKL)GetActiveHKL(v34, v33, v35);
  InputTraceLogging::Keyboard::KeyEvent(
    (const struct tagINPUT_MESSAGE_SOURCE *)v56,
    v11 & 0x8000,
    a5,
    a3,
    a7,
    a8,
    ActiveHKL,
    v11);
  v38 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v37) + 48) + 5440LL);
  if ( v38 && v38() >= 0 )
  {
    LOBYTE(v39) = v50;
    EditionUpdateSASModifiers(a7, v39, v10, v11 & 0x8000);
  }
  if ( a8 )
    goto LABEL_27;
  KeyboardProcessor = anonymous_namespace_::GetKeyboardProcessor();
  if ( !KeyboardProcessor || !*(_DWORD *)(KeyboardProcessor + 24) )
  {
    v49 = v15;
    v48 = a4;
    if ( (unsigned int)ApiSetEditionKeyEventLLHook(
                         (_DWORD)v54,
                         v11 & 0x100,
                         (unsigned __int16)v53,
                         v52,
                         v11,
                         v10,
                         v11 & 0x8000,
                         a7,
                         a3,
                         a4,
                         v49,
                         (__int64)&v58) == 1 )
    {
      InputTraceLogging::Keyboard::DropInput(3LL);
      return;
    }
    goto LABEL_28;
  }
  if ( !a6 )
  {
LABEL_27:
    v48 = a4;
LABEL_28:
    xxxUpdateGlobalsAndSendKeyEvent(
      v11,
      v10,
      a3,
      v48,
      (__int64)a5,
      (__int64)a6,
      v16,
      a7,
      a8,
      a9,
      (__int64)v56,
      (__int64)v57);
    return;
  }
  if ( !*((_QWORD *)v54 + 59) )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v42, v41, v43) + 14232) )
    {
      v56[0] = (__int64 *)((char *)v54 + 472);
      v56[1] = *(__int64 **)(W32GetUserSessionState(v45, v44, v46) + 14232);
      HMAssignmentLock(v56, 0, v47);
    }
  }
  CKeyboardProcessor::ForwardInputToKeyboardOverrider(a7, v10, v11, *a6, a5, a3, a6[2], v57);
}
