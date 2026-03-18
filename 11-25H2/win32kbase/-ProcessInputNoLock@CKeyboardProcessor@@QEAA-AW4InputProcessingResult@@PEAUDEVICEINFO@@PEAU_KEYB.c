/*
 * XREFs of ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1400FA7EC
 * Callers:
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1400FFC4C (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 * Callees:
 *     GetActiveHKL @ 0x1400670C0 (GetActiveHKL.c)
 *     ?ProcessInput@Keyboard@InputTraceLogging@@SAXPEBU_KEYBOARD_INPUT_DATA@@_N@Z @ 0x1400FA9E8 (-ProcessInput@Keyboard@InputTraceLogging@@SAXPEBU_KEYBOARD_INPUT_DATA@@_N@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1400FAA64 (ProcessKeyboardInputWorker.c)
 *     ProcessKeyboardInjectedInputViaRim @ 0x1400FB140 (ProcessKeyboardInjectedInputViaRim.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1400FBA0C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?TypeSubtypeUpdated@Keyboard@InputTraceLogging@@SAXPEAUHKL__@@KKKK@Z @ 0x14020E40C (-TypeSubtypeUpdated@Keyboard@InputTraceLogging@@SAXPEAUHKL__@@KKKK@Z.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x140212D78 (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 */

__int64 __fastcall CKeyboardProcessor::ProcessInputNoLock(
        __int64 a1,
        __int64 a2,
        const struct _KEYBOARD_INPUT_DATA *a3,
        unsigned int a4,
        bool a5)
{
  __int64 v5; // r12
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  __int64 v11; // rcx
  unsigned int v12; // ebp
  __int64 v13; // rdx
  __int64 UserSessionState; // rax
  unsigned int v15; // edi
  unsigned int v16; // esi
  __int64 v17; // rcx
  unsigned int v18; // ebx
  __int64 v19; // rdx
  HKL ActiveHKL; // rax
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // rdx
  const struct _KEYBOARD_INPUT_DATA *v27; // rdi
  __int64 v28; // r8

  v5 = a4;
  if ( a2 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 14224) )
    {
      v9 = *(_DWORD **)(W32GetUserSessionState(v9, v8) + 14224);
      if ( v9[22] )
      {
        v9 = *(_DWORD **)(W32GetUserSessionState(v9, v8) + 14224);
        if ( !v9[29] )
        {
          v9 = *(_DWORD **)(W32GetUserSessionState(v9, v8) + 14224);
          if ( v9[26] != *(_DWORD *)(a2 + 468)
            || (v9 = *(_DWORD **)(W32GetUserSessionState(v9, v8) + 14224), v9[27] != *(_DWORD *)(a2 + 472)) )
          {
            v11 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 14224);
            v12 = *(_DWORD *)(v11 + 108);
            UserSessionState = W32GetUserSessionState(v11, v13);
            v15 = *(_DWORD *)(a2 + 472);
            v16 = *(_DWORD *)(a2 + 468);
            v17 = *(_QWORD *)(UserSessionState + 14224);
            v18 = *(_DWORD *)(v17 + 104);
            ActiveHKL = (HKL)GetActiveHKL(v17, v19);
            InputTraceLogging::Keyboard::TypeSubtypeUpdated(ActiveHKL, v16, v15, v18, v12);
            SearchAndSetKbdTbl((struct DEVICEINFO *)a2, *(_DWORD *)(a2 + 468), *(_DWORD *)(a2 + 472));
            v21 = *(_DWORD *)(a2 + 468);
            v24 = *(_QWORD *)(W32GetUserSessionState(v23, v22) + 14224);
            *(_DWORD *)(v24 + 104) = v21;
            v25 = *(_DWORD *)(a2 + 472);
            v9 = *(_DWORD **)(W32GetUserSessionState(v24, v26) + 14224);
            v9[27] = v25;
          }
        }
      }
    }
    if ( (**(_DWORD **)(W32GetUserSessionState(v9, v8) + 19872) & 0x2000) != 0 )
    {
      InputTraceLogging::Keyboard::DropInput(1LL);
    }
    else if ( a3 )
    {
      v27 = (const struct _KEYBOARD_INPUT_DATA *)((char *)a3 + v5);
      do
      {
        if ( a3 >= v27 )
          break;
        InputTraceLogging::Keyboard::ProcessInput(a3, a5);
        if ( a5 )
        {
          ProcessKeyboardInjectedInputViaRim(a3, a2);
        }
        else
        {
          LOBYTE(v28) = 1;
          ProcessKeyboardInputWorker(a3, a2, v28);
        }
        ++a3;
      }
      while ( a3 );
    }
  }
  return 0LL;
}
