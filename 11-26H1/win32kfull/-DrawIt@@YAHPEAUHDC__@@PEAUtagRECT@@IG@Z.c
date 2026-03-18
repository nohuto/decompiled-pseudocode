/*
 * XREFs of ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1401270D8
 * Callers:
 *     DrawFrameControl @ 0x140125D60 (DrawFrameControl.c)
 * Callees:
 *     GreSetTextColor @ 0x140027BB0 (GreSetTextColor.c)
 *     GreExtTextOutW @ 0x14012725C (GreExtTextOutW.c)
 */

__int64 __fastcall DrawIt(HDC a1, struct tagRECT *a2, __int16 a3, __int16 a4)
{
  LONG top; // r11d
  int v8; // r8d
  int v9; // r10d
  int v10; // r10d
  __int64 v11; // rdx
  int v12; // r12d
  __int64 v13; // rcx
  int v14; // edx
  int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 UserSessionState; // rax
  char v20; // [rsp+38h] [rbp-30h]
  char v21; // [rsp+38h] [rbp-30h]
  __int64 v22; // [rsp+88h] [rbp+20h] BYREF

  LOWORD(v22) = a4;
  top = a2->top;
  v8 = a2->right - a2->left;
  v9 = a2->bottom - top;
  if ( v8 >= v9 )
    v8 = a2->bottom - top;
  v10 = v9 - v8;
  v11 = (unsigned int)(v10 >> 31);
  LODWORD(v11) = v10 % 2;
  v12 = a3 & 0x100;
  if ( v12 )
  {
    v14 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(2LL, v11) + 19904) + 4648LL);
  }
  else
  {
    v13 = *(_QWORD *)(W32GetUserSessionState(2LL, v11) + 19904);
    if ( (a3 & 0x1000) != 0 )
      v14 = *(_DWORD *)(v13 + 4672);
    else
      v14 = *(_DWORD *)(v13 + 4640);
  }
  v15 = GreSetTextColor(a1, v14);
  GreExtTextOutW(a1, 0LL, (__int64)&v22, 1, v20);
  if ( v12 )
  {
    UserSessionState = W32GetUserSessionState(v17, v16);
    GreSetTextColor(a1, *(_DWORD *)(*(_QWORD *)(UserSessionState + 19904) + 4632LL));
    GreExtTextOutW(a1, 0LL, (__int64)&v22, 1, v21);
  }
  GreSetTextColor(a1, v15);
  return 1LL;
}
