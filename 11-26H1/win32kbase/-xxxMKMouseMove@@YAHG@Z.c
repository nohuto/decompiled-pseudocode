/*
 * XREFs of ?xxxMKMouseMove@@YAHG@Z @ 0x140212D80
 * Callers:
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1401496E0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1401BB43C (ApiSetEditionSetAccessibilityTimer.c)
 *     MouseMove @ 0x14021BDD0 (MouseMove.c)
 */

__int64 __fastcall xxxMKMouseMove(int a1, int a2, int a3)
{
  __int16 v3; // bx
  __int64 UserSessionState; // rdi
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // esi
  int v12; // ebp
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  char v19; // bl
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // eax
  int v24; // edx
  int v25; // r8d
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  __int64 v29; // rax
  void (__fastcall *v30)(struct tagWND *, unsigned int, unsigned __int64, __int64); // r8
  char v32; // [rsp+38h] [rbp+10h] BYREF

  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  if ( (*(_DWORD *)(W32GetUserSessionState(v6, v5, v7) + 66792) & 0x2000) == 0 || !*(_QWORD *)(UserSessionState + 20640) )
  {
    *(_DWORD *)(UserSessionState + 20648) = (char)v3;
    LOBYTE(v8) = 1;
    *(_DWORD *)(UserSessionState + 20652) = SHIBYTE(v3);
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v32, v8, v9, v10);
    v11 = *(_DWORD *)(UserSessionState + 20648);
    v12 = *(_DWORD *)(UserSessionState + 20652);
    v17 = *(_DWORD *)(W32GetUserSessionState(v14, v13, v15) + 20612);
    if ( (v17 & 0x40) != 0 )
    {
      v19 = *(_BYTE *)(W32GetUserSessionState(v17, v16, v18) + 21881);
      if ( ((*(_BYTE *)(UserSessionState + 21877) | (unsigned __int8)(*(_BYTE *)(W32GetUserSessionState(v21, v20, v22)
                                                                               + 21882) | v19)) & 0xC) != 0 )
      {
        v23 = 4 * *(unsigned __int8 *)(UserSessionState + 20790);
        v11 *= v23;
        v12 *= v23;
      }
    }
    MouseMove(v11, v12);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v32, v24, v25);
    if ( !*(_DWORD *)(UserSessionState + 20512)
      || (*(_DWORD *)(W32GetUserSessionState(v27, v26, v28) + 66792) & 0x2000) != 0 )
    {
      v29 = W32GetUserSessionState(v27, v26, v28);
      v30 = xxxMKMoveAccelCursorTimer;
      *(_DWORD *)(v29 + 20656) = 0;
      if ( !*(_BYTE *)(UserSessionState + 20660) )
        v30 = xxxMKMoveConstCursorTimer;
      *(_QWORD *)(UserSessionState + 20640) = ApiSetEditionSetAccessibilityTimer(
                                                *(_QWORD *)(UserSessionState + 20640),
                                                0x32u,
                                                (__int64)v30,
                                                0);
    }
  }
  return 0LL;
}
