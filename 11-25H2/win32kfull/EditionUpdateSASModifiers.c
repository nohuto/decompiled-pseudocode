/*
 * XREFs of EditionUpdateSASModifiers @ 0x140159020
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?VKTOMODIFIERS@@YAIE@Z @ 0x1401590B8 (-VKTOMODIFIERS@@YAIE@Z.c)
 *     IsRemoteConnection @ 0x1401590F0 (IsRemoteConnection.c)
 */

void __fastcall EditionUpdateSASModifiers(int a1, unsigned __int8 a2, __int16 a3, int a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx

  if ( !a1
    || (unsigned int)IsRemoteConnection()
    && (v13 = PtiCurrent(v12, v11), v13 == *(struct tagTHREADINFO **)(W32GetUserSessionState(v15, v14) + 18648)) )
  {
    if ( (a3 & 0x200) == 0 )
    {
      v7 = VKTOMODIFIERS(a2);
      UserSessionState = W32GetUserSessionState(v9, v8);
      if ( a4 )
        *(_DWORD *)(UserSessionState + 14012) &= ~v7;
      else
        *(_DWORD *)(UserSessionState + 14012) |= v7;
    }
  }
}
