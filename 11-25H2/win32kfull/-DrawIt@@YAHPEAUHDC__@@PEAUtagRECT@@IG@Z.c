/*
 * XREFs of ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1400568B8
 * Callers:
 *     DrawFrameControl @ 0x140054934 (DrawFrameControl.c)
 * Callees:
 *     GreSetTextColor @ 0x140056CB4 (GreSetTextColor.c)
 *     GreExtTextOutW @ 0x140057230 (GreExtTextOutW.c)
 */

__int64 __fastcall DrawIt(HDC a1, struct tagRECT *a2, __int16 a3, __int16 a4)
{
  int v5; // eax
  __int64 v6; // rcx
  int v7; // r9d
  int v8; // r9d
  __int64 v9; // rdx
  int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int16 v14; // [rsp+88h] [rbp+20h] BYREF

  v14 = a4;
  v5 = a2->right - a2->left;
  v6 = (unsigned int)v5;
  v7 = a2->bottom - a2->top;
  if ( v5 >= v7 )
    v6 = (unsigned int)v7;
  v8 = v7 - v6;
  v9 = (unsigned int)(v8 >> 31);
  LODWORD(v9) = v8 % 2;
  v10 = a3 & 0x100;
  if ( (a3 & 0x100) != 0 )
    W32GetUserSessionState(v6, v9);
  else
    W32GetUserSessionState(v6, v9);
  GreSetTextColor(a1);
  GreExtTextOutW(a1, 0LL, (__int64)&v14, 1);
  if ( v10 )
  {
    W32GetUserSessionState(v12, v11);
    GreSetTextColor(a1);
    GreExtTextOutW(a1, 0LL, (__int64)&v14, 1);
  }
  GreSetTextColor(a1);
  return 1LL;
}
