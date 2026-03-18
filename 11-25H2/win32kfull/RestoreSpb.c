/*
 * XREFs of RestoreSpb @ 0x1402B0E30
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x140234300 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     IsVisible @ 0x140053FD8 (IsVisible.c)
 *     GreBitBltInternal @ 0x140084DC8 (GreBitBltInternal.c)
 *     FreeSpb @ 0x140156450 (FreeSpb.c)
 *     FindSpb @ 0x1402B0DE8 (FindSpb.c)
 *     GreSaveScreenBits @ 0x140332A34 (GreSaveScreenBits.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall RestoreSpb(__int64 *a1, __int64 a2, HDC *a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 **Spb; // rdi
  __int64 v10; // r12
  int v11; // eax
  __int128 v12; // xmm0
  __int64 *v13; // rbx
  __int64 UserSessionState; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  HDC v20; // rsi
  __int64 *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r13
  int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int128 v33; // [rsp+60h] [rbp-58h] BYREF

  v6 = 0;
  Spb = FindSpb(a1, a2);
  v10 = a2;
  if ( Spb[5] )
  {
    v6 = 1;
    v10 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 43088);
    if ( (unsigned int)GreCombineRgn(v10, a2, Spb[5], 1LL) < 2 )
      goto LABEL_10;
  }
  v11 = *((_DWORD *)Spb + 12);
  if ( (v11 & 1) != 0 )
  {
    v12 = *(_OWORD *)(Spb + 3);
    v13 = Spb[7];
    *((_DWORD *)Spb + 12) = v11 & 0xFFFFFFFE;
    v33 = v12;
    UserSessionState = W32GetUserSessionState(v8, v7);
    if ( GreSaveScreenBits(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL), 1LL, v13, &v33) )
    {
      v16 = W32GetUserSessionState(v15, v7);
      SetRectRgnIndirect(*(_QWORD *)(v16 + 43096), Spb + 3);
      v19 = W32GetUserSessionState(v18, v17);
      if ( (unsigned int)GreCombineRgn(a2, *(_QWORD *)(v19 + 43096), v10, 4LL) != 1 )
        v6 = 2;
      goto LABEL_12;
    }
LABEL_10:
    FreeSpb((char *)Spb, v7);
    return 1LL;
  }
  v20 = *a3;
  if ( !*a3 )
  {
    v8 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 56968);
    v20 = *(HDC *)(v8 + 64);
    *a3 = v20;
  }
  v21 = Spb[2];
  v22 = W32GetUserSessionState(v8, v7);
  v23 = GreSelectBitmap(*(_QWORD *)(v22 + 43248), v21);
  if ( !v23 )
    goto LABEL_10;
  GreSelectVisRgn(v20, v10, 2LL);
  v25 = (_DWORD)Spb[3] & 7;
  v28 = W32GetUserSessionState(v27, v26);
  GreBitBltInternal(
    v20,
    *((_DWORD *)Spb + 6),
    *((_DWORD *)Spb + 7),
    *((_DWORD *)Spb + 8) - *((_DWORD *)Spb + 6),
    *((_DWORD *)Spb + 9) - *((_DWORD *)Spb + 7),
    *(HDC *)(v28 + 43248),
    v25,
    0,
    0xCC0020u,
    0,
    0);
  v31 = W32GetUserSessionState(v30, v29);
  GreSelectBitmap(*(_QWORD *)(v31 + 43248), v23);
  GreCombineRgn(a2, a2, v10, 4LL);
LABEL_12:
  v32 = a1[5];
  if ( !*(_QWORD *)(v32 + 168) || !(unsigned int)IsVisible((__int64)a1) )
    FreeSpb((char *)Spb, v32);
  return v6;
}
