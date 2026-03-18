/*
 * XREFs of EraseBitmap @ 0x14020DF78
 * Callers:
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 * Callees:
 *     GreExtGetObjectW @ 0x14007D99C (GreExtGetObjectW.c)
 *     GrePatBlt @ 0x14009F4D0 (GrePatBlt.c)
 */

__int64 __fastcall EraseBitmap(Gre::Base *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  int v16[4]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v17; // [rsp+40h] [rbp-18h]

  *(_OWORD *)v16 = 0LL;
  v17 = 0LL;
  GreExtGetObjectW(a1, 32LL, v16, a4);
  UserSessionState = W32GetUserSessionState(v6, v5);
  v8 = GreSelectBitmap(*(_QWORD *)(UserSessionState + 43248), a1);
  v11 = W32GetUserSessionState(v10, v9);
  GrePatBlt(*(HDC *)(v11 + 43248), 0, 0, v16[1], v16[2], 66);
  v14 = W32GetUserSessionState(v13, v12);
  return GreSelectBitmap(*(_QWORD *)(v14 + 43248), v8);
}
