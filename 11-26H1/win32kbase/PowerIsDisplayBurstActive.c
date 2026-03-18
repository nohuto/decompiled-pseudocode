/*
 * XREFs of PowerIsDisplayBurstActive @ 0x1401356E0
 * Callers:
 *     PowerIsDisplayIdleExpired @ 0x140135530 (PowerIsDisplayIdleExpired.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PowerIsDisplayBurstActive(int *a1, int a2, int a3)
{
  _QWORD *UserSessionState; // rax
  int v5; // r9d
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  _BOOL8 result; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax

  UserSessionState = (_QWORD *)W32GetUserSessionState((_DWORD)a1, a2, a3);
  v5 = 0;
  v6 = 0LL;
  v7 = UserSessionState[359];
  if ( v7 )
  {
    v11 = v7 + 2000;
    if ( v11 )
    {
      v6 = v11;
      v5 = 25;
    }
  }
  v8 = UserSessionState[358];
  if ( v8 )
  {
    v12 = v8 + 5000;
    if ( v12 > v6 )
    {
      v6 = v12;
      v5 = 5;
    }
  }
  v9 = UserSessionState[357];
  if ( v9 )
  {
    v13 = v9 + 25000;
    if ( v13 > v6 )
    {
      v6 = v13;
      v5 = 6;
    }
  }
  result = v6 >= (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  if ( a1 )
    *a1 = v5;
  return result;
}
