/*
 * XREFs of ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x14019C20C
 * Callers:
 *     ?xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z @ 0x140123000 (-xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z.c)
 * Callees:
 *     InternalMapVirtualKeyEx @ 0x140088250 (InternalMapVirtualKeyEx.c)
 *     xxxKeyEventEx @ 0x140123104 (xxxKeyEventEx.c)
 */

void __fastcall xxxAdjustPushState(
        struct tagTHREADINFO *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        struct tagKL *a4,
        struct tagKL *a5)
{
  unsigned __int64 v5; // rsi
  unsigned int v6; // ebp
  int v9; // r14d
  char v10; // dl
  __int64 UserSessionState; // rcx
  char v12; // r8
  unsigned __int64 v13; // rbx
  struct tagKL *v14; // r14
  unsigned int v15; // ebx
  unsigned int v16; // eax
  int v17; // edi
  char v18; // dl
  __int64 v19; // rcx
  char v20; // r8
  unsigned int v21; // ebx
  unsigned int v22; // eax

  v5 = a3;
  v6 = a2;
  if ( a2
    && ((v9 = 1 << (2 * (a2 & 3)),
         UserSessionState = W32GetUserSessionState(2 * (a2 & 3u), a2, a3),
         ((unsigned __int8)v9 & *(_BYTE *)(UserSessionState + ((unsigned __int64)v6 >> 2) + 14392)) != 0)
     || (v13 = (unsigned __int64)v6 >> 2,
         ((unsigned __int8)v9 & *(_BYTE *)(W32GetUserSessionState(UserSessionState, v10, v12) + v13 + 14328)) != 0)
     || ((unsigned __int8)v9 & *(_BYTE *)(*((_QWORD *)a1 + 58) + v13 + 280)) != 0) )
  {
    v14 = a5;
    v15 = InternalMapVirtualKeyEx(v6, 0, *(_QWORD *)(*((_QWORD *)a4 + 6) + 32LL));
    v16 = InternalMapVirtualKeyEx(v6, 0, *(_QWORD *)(*((_QWORD *)a5 + 6) + 32LL));
    if ( v15 && !v16 )
      xxxKeyEventEx((unsigned __int16)v6 | 0x8000u, (unsigned __int16)v15 | 0x200u, 0, 0LL, 0LL, 0LL, 0, 0, 0LL, 0LL);
  }
  else
  {
    v14 = a5;
  }
  if ( (_BYTE)v5 )
  {
    v17 = 1 << (2 * (v5 & 3));
    v19 = W32GetUserSessionState(2 * (unsigned int)(v5 & 3), a2, a3);
    if ( ((unsigned __int8)v17 & *(_BYTE *)(v19 + (v5 >> 2) + 14392)) != 0
      || ((unsigned __int8)v17 & *(_BYTE *)(W32GetUserSessionState(v19, v18, v20) + (v5 >> 2) + 14328)) != 0
      || ((unsigned __int8)v17 & *(_BYTE *)(*((_QWORD *)a1 + 58) + (v5 >> 2) + 280)) != 0 )
    {
      v21 = InternalMapVirtualKeyEx(v5, 0, *(_QWORD *)(*((_QWORD *)a4 + 6) + 32LL));
      v22 = InternalMapVirtualKeyEx(v5, 0, *(_QWORD *)(*((_QWORD *)v14 + 6) + 32LL));
      if ( v21 )
      {
        if ( !v22 )
          xxxKeyEventEx(
            (unsigned __int16)v5 | 0x8000u,
            (unsigned __int16)v21 | 0x200u,
            0,
            0LL,
            0LL,
            0LL,
            0,
            0,
            0LL,
            0LL);
      }
    }
  }
}
