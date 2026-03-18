/*
 * XREFs of _SetKeyboardState @ 0x140108F0C
 * Callers:
 *     NtUserSetKeyboardState @ 0x140147150 (NtUserSetKeyboardState.c)
 * Callees:
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall SetKeyboardState(_BYTE *a1)
{
  char *v1; // rbx
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r9
  char *v5; // r10
  int v6; // r8d
  int v7; // eax
  unsigned __int64 v8; // rdx
  int v9; // ecx
  int v10; // ecx
  char v11; // al
  __int64 UserSessionState; // rax
  _BYTE *v14; // [rsp+50h] [rbp+8h]

  v14 = a1;
  v1 = a1;
  v4 = *((_QWORD *)PtiCurrent() + 59);
  v5 = v1;
  v6 = 0;
  v7 = 0;
  while ( v7 < 256 )
  {
    v8 = (unsigned __int64)(unsigned __int8)v6 >> 2;
    v9 = *(unsigned __int8 *)(v8 + v4 + 256);
    if ( *v1 < 0 )
      v10 = v9 | (1 << (2 * (v6 & 3)));
    else
      v10 = v9 & ~(1 << (2 * (v6 & 3)));
    *(_BYTE *)(v8 + v4 + 256) = v10;
    v2 = (unsigned __int64)(unsigned __int8)v6 >> 2;
    v11 = 2 * (v6 & 3) + 1;
    v3 = *(unsigned __int8 *)(v2 + v4 + 256);
    if ( (*v14 & 1) != 0 )
      LODWORD(v3) = v3 | (1 << v11);
    else
      LODWORD(v3) = v3 & ~(1 << v11);
    *(_BYTE *)(v2 + v4 + 256) = v3;
    v7 = ++v6;
    v1 = ++v14;
  }
  if ( v1 != v5 )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    ++*(_DWORD *)(*(_QWORD *)(UserSessionState + 19872) + 6984LL);
  }
  return 1LL;
}
