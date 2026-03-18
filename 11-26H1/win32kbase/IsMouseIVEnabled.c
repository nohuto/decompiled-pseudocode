/*
 * XREFs of IsMouseIVEnabled @ 0x14009C12C
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14009A480 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x14009C8D4 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1400D135C (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     RIMInitialize @ 0x14010F990 (RIMInitialize.c)
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x14012184C (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x140162848 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x140224010 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 */

char __fastcall IsMouseIVEnabled(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  char v6; // di
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v11; // ebx
  __int64 v12; // rcx
  int v13; // edx
  int v14; // ecx
  int v15; // r8d

  v6 = 0;
  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 19480) )
  {
    v11 = *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 19484);
    if ( (unsigned int)W32GetCurrentWin32kSessionId(v12) == v11 )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 19536) )
        return 1;
    }
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 36) == 3
    || (unsigned __int8)isChildPartition(v8, v7, v9) && *(_BYTE *)(W32GetUserSessionState(v14, v13, v15) + 19392) )
  {
    return 1;
  }
  return v6;
}
