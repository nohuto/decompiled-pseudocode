/*
 * XREFs of ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x14015D174
 * Callers:
 *     ?xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z @ 0x14014E4EC (-xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z.c)
 * Callees:
 *     InternalMapVirtualKeyEx @ 0x14009F2F0 (InternalMapVirtualKeyEx.c)
 *     xxxKeyEventEx @ 0x140150824 (xxxKeyEventEx.c)
 */

void __fastcall xxxAdjustPushState(
        struct tagTHREADINFO *a1,
        __int64 a2,
        unsigned __int8 a3,
        struct tagKL *a4,
        struct tagKL *a5)
{
  unsigned __int64 v5; // rbp
  unsigned int v6; // r14d
  __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  int v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // eax

  v5 = a3;
  v6 = (unsigned __int8)a2;
  if ( (_BYTE)a2 )
  {
    v10 = (unsigned __int64)(unsigned __int8)a2 >> 2;
    v11 = 1 << (2 * (a2 & 3));
    if ( ((unsigned __int8)v11 & *(_BYTE *)(v10 + W32GetUserSessionState(a1, a2) + 14400)) != 0
      || ((unsigned __int8)v11 & *(_BYTE *)(W32GetUserSessionState(2 * (v6 & 3), v9) + v10 + 14336)) != 0
      || ((unsigned __int8)v11 & *(_BYTE *)(*((_QWORD *)a1 + 59) + v10 + 256)) != 0 )
    {
      v12 = InternalMapVirtualKeyEx(v6, 0, *(_QWORD *)(*((_QWORD *)a4 + 6) + 32LL));
      v13 = InternalMapVirtualKeyEx(v6, 0, *(_QWORD *)(*((_QWORD *)a5 + 6) + 32LL));
      if ( v12 )
      {
        if ( !v13 )
          xxxKeyEventEx(v6 | 0x8000, v12 | 0x200, 0, 0LL, 0LL, 0LL, 0, 0, 0LL, 0LL);
      }
    }
  }
  if ( (_BYTE)v5 )
  {
    v15 = v5 >> 2;
    v16 = 1 << (2 * (v5 & 3));
    if ( ((unsigned __int8)v16 & *(_BYTE *)((v5 >> 2) + W32GetUserSessionState(a1, a2) + 14400)) != 0
      || ((unsigned __int8)v16 & *(_BYTE *)(W32GetUserSessionState(2 * (unsigned int)(v5 & 3), v14) + v15 + 14336)) != 0
      || ((unsigned __int8)v16 & *(_BYTE *)(*((_QWORD *)a1 + 59) + v15 + 256)) != 0 )
    {
      v17 = InternalMapVirtualKeyEx(v5, 0, *(_QWORD *)(*((_QWORD *)a4 + 6) + 32LL));
      v18 = InternalMapVirtualKeyEx(v5, 0, *(_QWORD *)(*((_QWORD *)a5 + 6) + 32LL));
      if ( v17 )
      {
        if ( !v18 )
          xxxKeyEventEx(v5 | 0x8000, v17 | 0x200, 0, 0LL, 0LL, 0LL, 0, 0, 0LL, 0LL);
      }
    }
  }
}
