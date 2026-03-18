/*
 * XREFs of ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x140212EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1401BB43C (ApiSetEditionSetAccessibilityTimer.c)
 *     MouseMove @ 0x14021BDD0 (MouseMove.c)
 */

void __fastcall xxxMKMoveAccelCursorTimer(struct tagWND *a1, int a2, int a3)
{
  __int64 UserSessionState; // rdi
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // bl
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // ecx
  int v16; // ebx
  char v17; // bl
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  __int64 v21; // rcx
  int v22; // edx
  int v23; // r8d
  _BYTE v24[24]; // [rsp+20h] [rbp-18h] BYREF

  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
  v8 = *(_DWORD *)(W32GetUserSessionState(v5, v4, v6) + 20612);
  if ( (v8 & 0x40) != 0 )
  {
    v11 = *(_BYTE *)(W32GetUserSessionState(v8, v7, v9) + 21881);
    if ( ((*(_BYTE *)(UserSessionState + 21877) | (unsigned __int8)(*(_BYTE *)(W32GetUserSessionState(v13, v12, v14)
                                                                             + 21882) | v11)) & 3) != 0 )
    {
      v16 = 1;
LABEL_10:
      LOBYTE(v7) = 1;
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v24, v7, v9, v10);
      MouseMove(*(_DWORD *)(UserSessionState + 20648) * v16, *(_DWORD *)(UserSessionState + 20652) * v16);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v24, v22, v23);
      return;
    }
    v17 = *(_BYTE *)(W32GetUserSessionState(v15, v7, v9) + 21881);
    if ( ((*(_BYTE *)(UserSessionState + 21877) | (unsigned __int8)(*(_BYTE *)(W32GetUserSessionState(v19, v18, v20)
                                                                             + 21882) | v17)) & 0xC) != 0 )
    {
      v16 = 4 * *(unsigned __int8 *)(UserSessionState + 20790);
      goto LABEL_10;
    }
  }
  v21 = *(unsigned int *)(UserSessionState + 20656);
  if ( (unsigned int)v21 >= *(unsigned __int8 *)(UserSessionState + 20660) )
  {
    LOBYTE(v16) = *(_BYTE *)(UserSessionState + 20790);
    *(_DWORD *)(UserSessionState + 20656) = 1;
    *(_QWORD *)(UserSessionState + 20640) = ApiSetEditionSetAccessibilityTimer(
                                              *(_QWORD *)(UserSessionState + 20640),
                                              0x32u,
                                              (__int64)xxxMKMoveConstCursorTimer,
                                              0);
  }
  else
  {
    LOBYTE(v16) = *(_BYTE *)(v21 + UserSessionState + 20661);
    *(_DWORD *)(UserSessionState + 20656) = v21 + 1;
  }
  v16 = (unsigned __int8)v16;
  if ( (_BYTE)v16 )
    goto LABEL_10;
}
