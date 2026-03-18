/*
 * XREFs of ?AreNonClientAreasToBePainted@@YAIPEAUtagWND@@@Z @ 0x140122E9C
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x140122C04 (xxxDWP_DoNCActivate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AreNonClientAreasToBePainted(struct tagWND *a1, __int64 a2)
{
  unsigned __int16 v3; // di
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rdx

  v3 = 0;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904);
  v5 = *(_DWORD *)(v4 + 4576);
  v7 = *(_QWORD *)(W32GetUserSessionState(v6, v4) + 19904);
  if ( v5 != *(_DWORD *)(v7 + 4580)
    || (v11 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19904),
        v12 = *(_DWORD *)(v11 + 4604),
        v12 != *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v13) + 19904) + 4644LL)) )
  {
    v3 = 4108;
  }
  v9 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v9 + 31) & 0x20) == 0 && (*(_BYTE *)(v9 + 30) & 4) != 0 )
  {
    v14 = *(_QWORD *)(W32GetUserSessionState(v9, v7) + 19904);
    v15 = *(_DWORD *)(v14 + 4608);
    if ( v15 != *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v14, v16) + 19904) + 4612LL) )
      v3 |= 0x8000u;
  }
  return v3;
}
