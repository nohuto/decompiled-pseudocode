/*
 * XREFs of ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x140212D78
 * Callers:
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1400FA7EC (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 * Callees:
 *     SetGlobalKeyboardTableInfo @ 0x1400F4394 (SetGlobalKeyboardTableInfo.c)
 *     HMAssignmentLock @ 0x1400F4780 (HMAssignmentLock.c)
 */

void __fastcall SearchAndSetKbdTbl(struct DEVICEINFO *a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // r14d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 i; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  __int64 v17; // rdx
  _QWORD v18[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  v8 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 14224) + 56LL);
  if ( *(_QWORD *)(*(_QWORD *)(v8 + 32) + 96LL) != __PAIR64__(a3, v4) && (*((_DWORD *)a1 + 42) & 0x20) == 0 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v11 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 14224);
      if ( (unsigned int)i >= *(_DWORD *)(v11 + 88) )
        break;
      v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v10) + 14224) + 96LL) + 8 * i);
      if ( *(_DWORD *)(*(_QWORD *)(v7 + 32) + 96LL) == v4 )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v6) + 14224) + 96LL) + 8 * i);
        if ( *(_DWORD *)(*(_QWORD *)(v7 + 32) + 100LL) == a3 )
        {
          v11 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 14224);
          v8 = *(_QWORD *)(*(_QWORD *)(v11 + 96) + 8 * i);
          break;
        }
      }
    }
    W32GetUserSessionState(v11, v10);
  }
  v13 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 14224);
  if ( *(_QWORD *)(v13 + 48) != v8 )
  {
    v18[1] = v8;
    v18[0] = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 14224) + 48LL;
    HMAssignmentLock((__int64)v18, 0LL);
    UserSessionState = W32GetUserSessionState(v15, v14);
    SetGlobalKeyboardTableInfo(*(_QWORD *)(UserSessionState + 14224), v17);
  }
}
