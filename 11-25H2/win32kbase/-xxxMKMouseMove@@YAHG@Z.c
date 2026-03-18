/*
 * XREFs of ?xxxMKMouseMove@@YAHG@Z @ 0x1401F9570
 * Callers:
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x14010A2E0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x14010AA14 (ApiSetEditionSetAccessibilityTimer.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     MouseMove @ 0x1402168E0 (MouseMove.c)
 */

__int64 __fastcall xxxMKMouseMove(__int64 a1, __int64 a2)
{
  __int16 v2; // bx
  __int64 UserSessionState; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // esi
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // bl
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  void (__fastcall *v21)(struct tagWND *, unsigned int, unsigned __int64, __int64); // r8
  char v23; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( (*(_DWORD *)(W32GetUserSessionState(v5, v4) + 66800) & 0x2000) == 0 || !*(_QWORD *)(UserSessionState + 20608) )
  {
    *(_DWORD *)(UserSessionState + 20616) = (char)v2;
    LOBYTE(v6) = 1;
    *(_DWORD *)(UserSessionState + 20620) = SHIBYTE(v2);
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v23, v6);
    v7 = *(_DWORD *)(UserSessionState + 20616);
    v8 = *(_DWORD *)(UserSessionState + 20620);
    v12 = *(unsigned int *)(W32GetUserSessionState(v10, v9) + 20580);
    if ( (v12 & 0x40) != 0 )
    {
      v13 = *(_BYTE *)(W32GetUserSessionState(v12, v11) + 21849);
      if ( ((*(_BYTE *)(UserSessionState + 21845) | (unsigned __int8)(*(_BYTE *)(W32GetUserSessionState(v15, v14) + 21850) | v13)) & 0xC) != 0 )
      {
        v16 = 4 * *(unsigned __int8 *)(UserSessionState + 20758);
        v7 *= v16;
        v8 *= v16;
      }
    }
    MouseMove(v7, v8);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v23, v17);
    if ( !*(_DWORD *)(UserSessionState + 20480) || (*(_DWORD *)(W32GetUserSessionState(v19, v18) + 66800) & 0x2000) != 0 )
    {
      v20 = W32GetUserSessionState(v19, v18);
      v21 = xxxMKMoveAccelCursorTimer;
      *(_DWORD *)(v20 + 20624) = 0;
      if ( !*(_BYTE *)(UserSessionState + 20628) )
        v21 = xxxMKMoveConstCursorTimer;
      *(_QWORD *)(UserSessionState + 20608) = ApiSetEditionSetAccessibilityTimer(
                                                *(_QWORD *)(UserSessionState + 20608),
                                                50LL,
                                                (__int64)v21,
                                                0);
    }
  }
  return 0LL;
}
