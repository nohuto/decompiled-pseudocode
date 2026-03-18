/*
 * XREFs of ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1402DF03C
 * Callers:
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1402DF124 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     IntersectRect @ 0x140052D08 (IntersectRect.c)
 *     GetScreenRect @ 0x14022EE5C (GetScreenRect.c)
 *     GreSaveScreenBits @ 0x140332A34 (GreSaveScreenBits.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall SaveScreen(struct tagWND *a1, unsigned int a2, __int64 a3, int a4, int a5, int a6, int a7)
{
  __int64 v9; // rdx
  int v10; // eax
  int v11; // r8d
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax
  __m128i v17; // [rsp+20h] [rbp-48h] BYREF
  int v18[4]; // [rsp+30h] [rbp-38h] BYREF

  v9 = *((_QWORD *)a1 + 5);
  if ( (*(_WORD *)(v9 + 42) & 0x2FFF) == 0x29D )
  {
    v10 = 0;
    v11 = 1;
  }
  else
  {
    v10 = *(_DWORD *)(v9 + 88);
    v11 = 0;
  }
  v18[0] = a4 + v10;
  v18[2] = a4 + a6;
  if ( v11 )
    v12 = 0;
  else
    v12 = *(_DWORD *)(v9 + 92);
  v18[3] = a7 + a5;
  v18[1] = a5 + v12;
  v17 = *GetScreenRect(&v17);
  if ( !(unsigned int)IntersectRect(v18, v18, v17.m128i_i32) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v14, v13);
  return GreSaveScreenBits(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL), a2, a3, v18);
}
