/*
 * XREFs of ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x140213030
 * Callers:
 *     <none>
 * Callees:
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     MouseMove @ 0x14021BDD0 (MouseMove.c)
 */

void __fastcall xxxMKMoveConstCursorTimer(struct tagWND *a1, int a2, int a3)
{
  __int64 UserSessionState; // rdi
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // edx
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // bl
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // ebx
  char v18; // bl
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  unsigned int v22; // eax
  int v23; // edx
  int v24; // r8d
  _BYTE v25[24]; // [rsp+20h] [rbp-18h] BYREF

  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
  v8 = *(_DWORD *)(W32GetUserSessionState(v5, v4, v6) + 20612);
  if ( (v8 & 0x40) == 0 )
    goto LABEL_6;
  v11 = *(_BYTE *)(W32GetUserSessionState(v8, v7, v9) + 21881);
  if ( ((*(_BYTE *)(UserSessionState + 21877) | (unsigned __int8)(*(_BYTE *)(W32GetUserSessionState(v13, v12, v14)
                                                                           + 21882) | v11)) & 3) == 0 )
  {
    v18 = *(_BYTE *)(W32GetUserSessionState(v16, v15, v9) + 21881);
    if ( ((*(_BYTE *)(UserSessionState + 21877) | (unsigned __int8)(*(_BYTE *)(W32GetUserSessionState(v20, v19, v21)
                                                                             + 21882) | v18)) & 0xC) != 0 )
    {
      v17 = 4 * *(unsigned __int8 *)(UserSessionState + 20790);
      goto LABEL_7;
    }
LABEL_6:
    v15 = *(_DWORD *)(UserSessionState + 20656) % (unsigned int)*(unsigned __int8 *)(UserSessionState + 20789);
    v22 = *(_DWORD *)(UserSessionState + 20656) % (unsigned int)*(unsigned __int8 *)(UserSessionState + 20789);
    *(_DWORD *)(UserSessionState + 20656) = v22;
    v17 = *(unsigned __int8 *)(v15 + UserSessionState + 20790);
    *(_DWORD *)(UserSessionState + 20656) = v22 + 1;
    if ( !v17 )
      return;
    goto LABEL_7;
  }
  v17 = 1;
LABEL_7:
  LOBYTE(v15) = 1;
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v25, v15, v9, v10);
  MouseMove(*(_DWORD *)(UserSessionState + 20648) * v17, *(_DWORD *)(UserSessionState + 20652) * v17);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v25, v23, v24);
}
