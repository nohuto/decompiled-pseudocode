/*
 * XREFs of ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x140123A88
 * Callers:
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1400D5268 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 * Callees:
 *     GetActiveHKL @ 0x14008B420 (GetActiveHKL.c)
 *     ?ProcessInput@Keyboard@InputTraceLogging@@SAXPEBU_KEYBOARD_INPUT_DATA@@_N@Z @ 0x140123C80 (-ProcessInput@Keyboard@InputTraceLogging@@SAXPEBU_KEYBOARD_INPUT_DATA@@_N@Z.c)
 *     ProcessKeyboardInputWorker @ 0x140123CFC (ProcessKeyboardInputWorker.c)
 *     ProcessKeyboardInjectedInputViaRim @ 0x140124400 (ProcessKeyboardInjectedInputViaRim.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x14012526C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?TypeSubtypeUpdated@Keyboard@InputTraceLogging@@SAXPEAUHKL__@@KKKK@Z @ 0x1402177A4 (-TypeSubtypeUpdated@Keyboard@InputTraceLogging@@SAXPEAUHKL__@@KKKK@Z.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x140219A5C (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 */

__int64 __fastcall CKeyboardProcessor::ProcessInputNoLock(
        int a1,
        __int64 a2,
        const struct _KEYBOARD_INPUT_DATA *a3,
        unsigned int a4,
        bool a5)
{
  __int64 v5; // r13
  const struct _KEYBOARD_INPUT_DATA *v6; // r14
  int v8; // edx
  _DWORD *v9; // rcx
  int v10; // r8d
  const struct _KEYBOARD_INPUT_DATA *v12; // rdi
  __int64 v13; // r8
  unsigned int *v14; // r12
  __int64 v15; // rcx
  unsigned int v16; // ebp
  int v17; // edx
  int v18; // r8d
  __int64 UserSessionState; // rax
  unsigned int v20; // edi
  unsigned int v21; // esi
  __int64 v22; // rcx
  unsigned int v23; // ebx
  int v24; // edx
  int v25; // r8d
  HKL ActiveHKL; // rax
  int v27; // ebx
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  __int64 v31; // rcx
  unsigned int v32; // ebx
  int v33; // edx
  int v34; // r8d

  v5 = a4;
  v6 = a3;
  if ( a2 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, (_DWORD)a3) + 14216) )
    {
      v9 = *(_DWORD **)(W32GetUserSessionState((_DWORD)v9, v8, v10) + 14216);
      if ( v9[22] )
      {
        v9 = *(_DWORD **)(W32GetUserSessionState((_DWORD)v9, v8, v10) + 14216);
        if ( !v9[29] )
        {
          v14 = (unsigned int *)(a2 + 472);
          v9 = *(_DWORD **)(W32GetUserSessionState((_DWORD)v9, v8, v10) + 14216);
          if ( v9[26] != *(_DWORD *)(a2 + 468)
            || (v9 = *(_DWORD **)(W32GetUserSessionState((_DWORD)v9, v8, v10) + 14216), v9[27] != *v14) )
          {
            v15 = *(_QWORD *)(W32GetUserSessionState((_DWORD)v9, v8, v10) + 14216);
            v16 = *(_DWORD *)(v15 + 108);
            UserSessionState = W32GetUserSessionState(v15, v17, v18);
            v20 = *v14;
            v21 = *(_DWORD *)(a2 + 468);
            v22 = *(_QWORD *)(UserSessionState + 14216);
            v23 = *(_DWORD *)(v22 + 104);
            ActiveHKL = (HKL)GetActiveHKL(v22, v24, v25);
            InputTraceLogging::Keyboard::TypeSubtypeUpdated(ActiveHKL, v21, v20, v23, v16);
            SearchAndSetKbdTbl((struct DEVICEINFO *)a2, *(_DWORD *)(a2 + 468), *v14);
            v27 = *(_DWORD *)(a2 + 468);
            v31 = *(_QWORD *)(W32GetUserSessionState(v29, v28, v30) + 14216);
            *(_DWORD *)(v31 + 104) = v27;
            v32 = *v14;
            v9 = *(_DWORD **)(W32GetUserSessionState(v31, v33, v34) + 14216);
            v9[27] = v32;
          }
        }
      }
    }
    if ( (**(_DWORD **)(W32GetUserSessionState((_DWORD)v9, v8, v10) + 19904) & 0x2000) != 0 )
    {
      InputTraceLogging::Keyboard::DropInput(1LL);
    }
    else if ( v6 )
    {
      v12 = (const struct _KEYBOARD_INPUT_DATA *)((char *)v6 + v5);
      do
      {
        if ( v6 >= v12 )
          break;
        InputTraceLogging::Keyboard::ProcessInput(v6, a5);
        if ( a5 )
        {
          ProcessKeyboardInjectedInputViaRim(v6, a2);
        }
        else
        {
          LOBYTE(v13) = 1;
          ProcessKeyboardInputWorker(v6, a2, v13);
        }
        ++v6;
      }
      while ( v6 );
    }
  }
  return 0LL;
}
