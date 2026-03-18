/*
 * XREFs of ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F96E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x14010AA14 (ApiSetEditionSetAccessibilityTimer.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     MouseMove @ 0x1402168E0 (MouseMove.c)
 */

void __fastcall xxxMKMoveAccelCursorTimer(struct tagWND *a1, __int64 a2)
{
  __int64 UserSessionState; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // bl
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // ebx
  char v12; // bl
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  _BYTE v17[24]; // [rsp+20h] [rbp-18h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  v6 = *(unsigned int *)(W32GetUserSessionState(v4, v3) + 20580);
  if ( (v6 & 0x40) != 0 )
  {
    v7 = *(_BYTE *)(W32GetUserSessionState(v6, v5) + 21849);
    if ( ((*(_BYTE *)(UserSessionState + 21845) | (unsigned __int8)(*(_BYTE *)(W32GetUserSessionState(v9, v8) + 21850) | v7)) & 3) != 0 )
    {
      v11 = 1;
LABEL_10:
      LOBYTE(v5) = 1;
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v17, v5);
      MouseMove(*(_DWORD *)(UserSessionState + 20616) * v11, *(_DWORD *)(UserSessionState + 20620) * v11);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v17, v16);
      return;
    }
    v12 = *(_BYTE *)(W32GetUserSessionState(v10, v5) + 21849);
    if ( ((*(_BYTE *)(UserSessionState + 21845) | (unsigned __int8)(*(_BYTE *)(W32GetUserSessionState(v14, v13) + 21850) | v12)) & 0xC) != 0 )
    {
      v11 = 4 * *(unsigned __int8 *)(UserSessionState + 20758);
      goto LABEL_10;
    }
  }
  v15 = *(unsigned int *)(UserSessionState + 20624);
  if ( (unsigned int)v15 >= *(unsigned __int8 *)(UserSessionState + 20628) )
  {
    LOBYTE(v11) = *(_BYTE *)(UserSessionState + 20758);
    *(_DWORD *)(UserSessionState + 20624) = 1;
    *(_QWORD *)(UserSessionState + 20608) = ApiSetEditionSetAccessibilityTimer(
                                              *(_QWORD *)(UserSessionState + 20608),
                                              50LL,
                                              (__int64)xxxMKMoveConstCursorTimer,
                                              0);
  }
  else
  {
    LOBYTE(v11) = *(_BYTE *)(v15 + UserSessionState + 20629);
    *(_DWORD *)(UserSessionState + 20624) = v15 + 1;
  }
  v11 = (unsigned __int8)v11;
  if ( (_BYTE)v11 )
    goto LABEL_10;
}
