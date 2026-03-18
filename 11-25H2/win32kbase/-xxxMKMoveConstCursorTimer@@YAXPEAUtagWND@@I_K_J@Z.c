/*
 * XREFs of ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F9820
 * Callers:
 *     <none>
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     MouseMove @ 0x1402168E0 (MouseMove.c)
 */

void __fastcall xxxMKMoveConstCursorTimer(struct tagWND *a1, __int64 a2)
{
  __int64 UserSessionState; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // bl
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  char v13; // bl
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rdx
  _BYTE v18[24]; // [rsp+20h] [rbp-18h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  v6 = *(unsigned int *)(W32GetUserSessionState(v4, v3) + 20580);
  if ( (v6 & 0x40) == 0 )
    goto LABEL_6;
  v7 = *(_BYTE *)(W32GetUserSessionState(v6, v5) + 21849);
  if ( ((*(_BYTE *)(UserSessionState + 21845) | (unsigned __int8)(*(_BYTE *)(W32GetUserSessionState(v9, v8) + 21850) | v7)) & 3) == 0 )
  {
    v13 = *(_BYTE *)(W32GetUserSessionState(v11, v10) + 21849);
    if ( ((*(_BYTE *)(UserSessionState + 21845) | (unsigned __int8)(*(_BYTE *)(W32GetUserSessionState(v15, v14) + 21850) | v13)) & 0xC) != 0 )
    {
      v12 = 4 * *(unsigned __int8 *)(UserSessionState + 20758);
      goto LABEL_7;
    }
LABEL_6:
    v10 = *(_DWORD *)(UserSessionState + 20624) % (unsigned int)*(unsigned __int8 *)(UserSessionState + 20757);
    v16 = *(_DWORD *)(UserSessionState + 20624) % (unsigned int)*(unsigned __int8 *)(UserSessionState + 20757);
    *(_DWORD *)(UserSessionState + 20624) = v16;
    v12 = *(unsigned __int8 *)(v10 + UserSessionState + 20758);
    *(_DWORD *)(UserSessionState + 20624) = v16 + 1;
    if ( !v12 )
      return;
    goto LABEL_7;
  }
  v12 = 1;
LABEL_7:
  LOBYTE(v10) = 1;
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v18, v10);
  MouseMove(*(_DWORD *)(UserSessionState + 20616) * v12, *(_DWORD *)(UserSessionState + 20620) * v12);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v18, v17);
}
