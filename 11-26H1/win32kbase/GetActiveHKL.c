/*
 * XREFs of GetActiveHKL @ 0x14008B420
 * Callers:
 *     VKFromVSC @ 0x14008ABB0 (VKFromVSC.c)
 *     ?CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@PEAU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x14008B010 (-CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_IN.c)
 *     xxxKeyEventEx @ 0x140123104 (xxxKeyEventEx.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x140123498 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x140123A88 (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 *     ProcessKeyboardInputWorker @ 0x140123CFC (ProcessKeyboardInputWorker.c)
 *     xxxProcessKeyEvent @ 0x140124D60 (xxxProcessKeyEvent.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1401A4024 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 * Callees:
 *     _GetKeyboardLayout @ 0x14003B834 (_GetKeyboardLayout.c)
 */

__int64 __fastcall GetActiveHKL(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // edx
  __int64 v7; // rcx
  int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // rax
  int v12; // edx
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // rax

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 18928)
    && ((v7 = *(_QWORD *)(W32GetUserSessionState(v4, v3, v5) + 18928), *(_QWORD *)(v7 + 120))
     && (v7 = *(_QWORD *)(W32GetUserSessionState(v7, v6, v8) + 18928),
         (v9 = *(_QWORD *)(*(_QWORD *)(v7 + 120) + 16LL)) != 0)
     && (v10 = *(_QWORD *)(v9 + 472)) != 0
     || (v13 = *(_QWORD *)(W32GetUserSessionState(v7, v6, v8) + 18928), *(_QWORD *)(v13 + 128))
     && (v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v13, v12, v14) + 18928) + 128LL) + 16LL)) != 0
     && (v10 = *(_QWORD *)(v15 + 472)) != 0) )
  {
    return *(_QWORD *)(v10 + 40);
  }
  else
  {
    return GetKeyboardLayout(0);
  }
}
