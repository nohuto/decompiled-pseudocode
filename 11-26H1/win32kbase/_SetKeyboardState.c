/*
 * XREFs of _SetKeyboardState @ 0x14014729C
 * Callers:
 *     NtUserSetKeyboardState @ 0x14017C0C0 (NtUserSetKeyboardState.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 */

__int64 __fastcall SetKeyboardState(__int64 a1, __int64 a2)
{
  char *v2; // rbx
  unsigned __int64 v3; // rdx
  int v4; // ecx
  __int64 v5; // r9
  char *v6; // r10
  int v7; // r8d
  int v8; // eax
  unsigned __int64 v9; // rdx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  __int64 UserSessionState; // rax

  v2 = (char *)a1;
  v5 = *((_QWORD *)PtiCurrent(a1, a2) + 58);
  v6 = v2;
  v7 = 0;
  v8 = 0;
  while ( v8 < 256 )
  {
    v9 = (unsigned __int64)(unsigned __int8)v7 >> 2;
    v10 = *(unsigned __int8 *)(v9 + v5 + 280);
    if ( *v2 < 0 )
      v11 = v10 | (1 << (2 * (v7 & 3)));
    else
      v11 = v10 & ~(1 << (2 * (v7 & 3)));
    *(_BYTE *)(v9 + v5 + 280) = v11;
    v3 = (unsigned __int64)(unsigned __int8)v7 >> 2;
    v12 = *(unsigned __int8 *)(v3 + v5 + 280);
    if ( (*v2 & 1) != 0 )
      v4 = v12 | (1 << (2 * (v7 & 3) + 1));
    else
      v4 = v12 & ~(1 << (2 * (v7 & 3) + 1));
    *(_BYTE *)(v3 + v5 + 280) = v4;
    v8 = ++v7;
    ++v2;
  }
  if ( v2 != v6 )
  {
    UserSessionState = W32GetUserSessionState(v4, v3, v7);
    ++*(_DWORD *)(*(_QWORD *)(UserSessionState + 19904) + 6984LL);
  }
  return 1LL;
}
