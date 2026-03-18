/*
 * XREFs of ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x140219A5C
 * Callers:
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x140123A88 (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 * Callees:
 *     HMAssignmentLock @ 0x14009B8F0 (HMAssignmentLock.c)
 *     SetGlobalKeyboardTableInfo @ 0x14011C544 (SetGlobalKeyboardTableInfo.c)
 */

void __fastcall SearchAndSetKbdTbl(struct DEVICEINFO *a1, unsigned int a2, unsigned int a3)
{
  int v6; // edx
  __int64 v7; // rcx
  __int64 *v8; // rdi
  int v9; // r8d
  __int64 i; // rbx
  int v11; // edx
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // edx
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // r8d
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  __int64 UserSessionState; // rax
  int v22; // edx
  int v23; // r8d
  __int64 *v24[3]; // [rsp+20h] [rbp-18h] BYREF

  v8 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 14216) + 56LL);
  if ( *(_QWORD *)(v8[4] + 96) != __PAIR64__(a3, a2) && (*((_DWORD *)a1 + 42) & 0x20) == 0 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v12 = *(_QWORD *)(W32GetUserSessionState(v7, v6, v9) + 14216);
      if ( (unsigned int)i >= *(_DWORD *)(v12 + 88) )
        break;
      v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v12, v11, v13) + 14216) + 96LL) + 8 * i);
      if ( *(_DWORD *)(*(_QWORD *)(v7 + 32) + 96LL) == a2 )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v6, v9) + 14216) + 96LL) + 8 * i);
        if ( *(_DWORD *)(*(_QWORD *)(v7 + 32) + 100LL) == a3 )
        {
          v12 = *(_QWORD *)(W32GetUserSessionState(v7, v6, v9) + 14216);
          v8 = *(__int64 **)(*(_QWORD *)(v12 + 96) + 8 * i);
          break;
        }
      }
    }
    W32GetUserSessionState(v12, v11, v13);
  }
  v15 = *(_QWORD *)(W32GetUserSessionState(v7, v6, v9) + 14216);
  if ( *(__int64 **)(v15 + 48) != v8 )
  {
    v24[1] = v8;
    v24[0] = (__int64 *)(*(_QWORD *)(W32GetUserSessionState(v15, v14, v16) + 14216) + 48LL);
    HMAssignmentLock(v24, 0, v17);
    UserSessionState = W32GetUserSessionState(v19, v18, v20);
    SetGlobalKeyboardTableInfo(*(_QWORD *)(UserSessionState + 14216), v22, v23);
  }
}
