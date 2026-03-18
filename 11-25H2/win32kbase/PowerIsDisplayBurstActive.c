/*
 * XREFs of PowerIsDisplayBurstActive @ 0x1400EDC20
 * Callers:
 *     PowerIsDisplayIdleExpired @ 0x1400ED980 (PowerIsDisplayIdleExpired.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PowerIsDisplayBurstActive(int *a1, __int64 a2)
{
  _QWORD *UserSessionState; // rax
  int v4; // r9d
  unsigned __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  _BOOL8 result; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  v4 = 0;
  v5 = 0LL;
  v6 = UserSessionState[359];
  if ( v6 )
  {
    v10 = v6 + 2000;
    if ( v10 )
    {
      v5 = v10;
      v4 = 25;
    }
  }
  v7 = UserSessionState[358];
  if ( v7 )
  {
    v11 = v7 + 5000;
    if ( v11 > v5 )
    {
      v5 = v11;
      v4 = 5;
    }
  }
  v8 = UserSessionState[357];
  if ( v8 )
  {
    v12 = v8 + 25000;
    if ( v12 > v5 )
    {
      v5 = v12;
      v4 = 6;
    }
  }
  result = v5 >= (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  if ( a1 )
    *a1 = v4;
  return result;
}
