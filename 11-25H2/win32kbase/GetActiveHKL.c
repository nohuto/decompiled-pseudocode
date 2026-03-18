/*
 * XREFs of GetActiveHKL @ 0x1400670C0
 * Callers:
 *     ?CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@PEAU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x140066C20 (-CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_IN.c)
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1400FA7EC (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 *     ProcessKeyboardInputWorker @ 0x1400FAA64 (ProcessKeyboardInputWorker.c)
 *     xxxProcessKeyEvent @ 0x1400FBC60 (xxxProcessKeyEvent.c)
 *     VKFromVSC @ 0x1401174C0 (VKFromVSC.c)
 *     xxxKeyEventEx @ 0x140150824 (xxxKeyEventEx.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x14015FD7C (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x14018D324 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     _GetKeyboardLayout @ 0x140048D38 (_GetKeyboardLayout.c)
 */

__int64 __fastcall GetActiveHKL(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18888)
    && ((v5 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 18888), *(_QWORD *)(v5 + 120))
     && (v5 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 18888), (v6 = *(_QWORD *)(*(_QWORD *)(v5 + 120) + 16LL)) != 0)
     && (v7 = *(_QWORD *)(v6 + 480)) != 0
     || (v10 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 18888), *(_QWORD *)(v10 + 128))
     && (v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 18888) + 128LL) + 16LL)) != 0
     && (v7 = *(_QWORD *)(v11 + 480)) != 0) )
  {
    return *(_QWORD *)(v7 + 40);
  }
  else
  {
    return GetKeyboardLayout(0);
  }
}
