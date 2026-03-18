/*
 * XREFs of xxxKeyEventEx @ 0x140150824
 * Callers:
 *     xxxProcessKeyEvent @ 0x1400FBC60 (xxxProcessKeyEvent.c)
 *     ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x14010ECA8 (-xxxAltGr@@YAXPEAUtagKE@@@Z.c)
 *     ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x140110600 (-xxxNumpadCursor@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxICO_00@@YAHPEAUtagKE@@@Z @ 0x140117E10 (-xxxICO_00@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x14014E39C (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 *     ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x1401505AC (-xxxShiftLock@@YAHPEAUtagKE@@@Z.c)
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1401506F0 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x14015D174 (-xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z.c)
 *     xxxKeyEvent @ 0x14019FCA0 (xxxKeyEvent.c)
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x140217EF0 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x140218010 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x140218220 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x140218430 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x140218610 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     GetActiveHKL @ 0x1400670C0 (GetActiveHKL.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?KeyEvent@Keyboard@InputTraceLogging@@SAXAEBUtagINPUT_MESSAGE_SOURCE@@HPEAXKHHPEAUHKL__@@E@Z @ 0x1400B78D4 (-KeyEvent@Keyboard@InputTraceLogging@@SAXAEBUtagINPUT_MESSAGE_SOURCE@@HPEAXKHHPEAUHKL__@@E@Z.c)
 *     ?OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ @ 0x1400ECE64 (-OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ.c)
 *     HMAssignmentLock @ 0x1400F4780 (HMAssignmentLock.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1400FBA0C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x140106DC8 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     EditionUpdateSASModifiers @ 0x1401164CC (EditionUpdateSASModifiers.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x14011C85C (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x140160080 (-ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_.c)
 *     GetKeyEventInputSource @ 0x14018C4F4 (GetKeyEventInputSource.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x14018D324 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ApiSetEditionKeyEventLLHook @ 0x140195D94 (ApiSetEditionKeyEventLLHook.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall xxxKeyEventEx(
        unsigned __int16 a1,
        unsigned __int16 a2,
        unsigned int a3,
        __int64 a4,
        void *a5,
        unsigned __int16 *a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        __int64 a9,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a10)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // esi
  unsigned __int16 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 UserSessionState; // rax
  int v19; // eax
  __int64 v20; // rax
  unsigned int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // rcx
  volatile signed __int32 *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  HKL ActiveHKL; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  int (*v35)(void); // rax
  __int64 KeyboardProcessor; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // esi
  unsigned int v42; // [rsp+50h] [rbp-69h]
  unsigned __int8 v43; // [rsp+60h] [rbp-59h]
  int v45; // [rsp+6Ch] [rbp-4Dh]
  unsigned __int16 v46; // [rsp+74h] [rbp-45h]
  struct tagTHREADINFO *v47; // [rsp+78h] [rbp-41h]
  __int64 v48; // [rsp+80h] [rbp-39h] BYREF
  void *v49; // [rsp+88h] [rbp-31h]
  __int64 v50[2]; // [rsp+90h] [rbp-29h] BYREF
  struct _KEYBOARD_VIRTUAL_DEVICE_INFO *v51; // [rsp+A0h] [rbp-19h]
  __int64 v52; // [rsp+A8h] [rbp-11h] BYREF
  int v53; // [rsp+B0h] [rbp-9h]

  v49 = a5;
  v51 = a10;
  v50[0] = a4;
  v47 = PtiCurrent();
  v48 = 0LL;
  v14 = 0;
  v53 = 0;
  if ( a6 )
    v15 = *a6;
  else
    v15 = -1;
  v52 = -1LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v13, v12) + 14496) )
  {
    UserSessionState = W32GetUserSessionState(v17, v16);
    CAsyncKeyEventMonitor::OnKeyEvent(*(CAsyncKeyEventMonitor **)(UserSessionState + 14496));
  }
  if ( a7 )
  {
    if ( a9 )
    {
      v14 = *(_DWORD *)(a9 + 12);
      v19 = *(_DWORD *)(a9 + 8);
      v52 = *(_QWORD *)a9;
    }
    else
    {
      v20 = *((_QWORD *)v47 + 58);
      v21 = *(_DWORD *)(v20 + 12);
      v52 = *(_QWORD *)(v20 + 864);
      v19 = *(_DWORD *)(v20 + 872);
      v14 = v21 >> 31;
    }
    v53 = v19;
  }
  GetKeyEventInputSource(a7, v15, a9, &v48);
  v24 = *(volatile signed __int32 **)(W32GetUserSessionState(v23, v22) + 19872);
  _InterlockedOr(v24, 0x40u);
  LOWORD(v24) = ((a1 & 0x8000) != 0) + 256;
  v46 = (unsigned __int16)v24;
  v45 = (unsigned __int16)v24;
  if ( (*(_BYTE *)(W32GetUserSessionState(v24, v25) + 14404) & 0x10) != 0
    && (*(_BYTE *)(W32GetUserSessionState(v27, v26) + 14404) & 4) == 0 )
  {
    v45 += 4;
  }
  v43 = CKeyboardProcessor::HandleLeftRightVKs(a1);
  ActiveHKL = (HKL)GetActiveHKL(v29, v28);
  InputTraceLogging::Keyboard::KeyEvent(
    (const struct tagINPUT_MESSAGE_SOURCE *)&v48,
    a1 & 0x8000,
    v49,
    a3,
    a7,
    a8,
    ActiveHKL,
    a1);
  v34 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v32, v31) + 48);
  v35 = *(int (**)(void))(v34 + 5880);
  if ( v35 && v35() >= 0 )
  {
    LOBYTE(v33) = v43;
    EditionUpdateSASModifiers(a7, v33, a2, a1 & 0x8000);
  }
  if ( a8 )
    goto LABEL_27;
  KeyboardProcessor = anonymous_namespace_::GetKeyboardProcessor(v34, v33);
  if ( !KeyboardProcessor || !*(_DWORD *)(KeyboardProcessor + 24) )
  {
    v42 = v14;
    v41 = v50[0];
    if ( (unsigned int)ApiSetEditionKeyEventLLHook(
                         (_DWORD)v47,
                         a1 & 0x100,
                         v46,
                         v45,
                         a1,
                         a2,
                         a1 & 0x8000,
                         a7,
                         a3,
                         v50[0],
                         v42,
                         (__int64)&v52) == 1 )
    {
      InputTraceLogging::Keyboard::DropInput();
      return;
    }
    goto LABEL_28;
  }
  if ( !a6 )
  {
LABEL_27:
    v41 = v50[0];
LABEL_28:
    xxxUpdateGlobalsAndSendKeyEvent(
      a1,
      a2,
      a3,
      v41,
      (__int64)v49,
      (__int64)a6,
      v15,
      a7,
      a8,
      a9,
      (__int64)&v48,
      (__int64)v51);
    return;
  }
  if ( !*((_QWORD *)v47 + 60) )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v38, v37) + 14240) )
    {
      v50[0] = (__int64)v47 + 480;
      v50[1] = *(_QWORD *)(W32GetUserSessionState(v40, v39) + 14240);
      HMAssignmentLock((__int64)v50, 0LL);
    }
  }
  CKeyboardProcessor::ForwardInputToKeyboardOverrider(a7, a2, a1, *a6, v49, a3, a6[2], v51);
}
