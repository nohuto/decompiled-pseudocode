/*
 * XREFs of ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x14014527C
 * Callers:
 *     bDynamicModeChange @ 0x1401793D8 (bDynamicModeChange.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140042BB0 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     DrvDxgkLogCodePointPacket @ 0x1400E2640 (DrvDxgkLogCodePointPacket.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEBAKXZ @ 0x14012C800 (-ulLogPixelsY@PDEVOBJ@@QEBAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEBAKXZ @ 0x14012D2D4 (-ulLogPixelsX@PDEVOBJ@@QEBAKXZ.c)
 */

__int64 __fastcall bDynamicMatchEnoughForModeChange(_DWORD *a1, _DWORD *a2)
{
  int v4; // edx
  unsigned int v5; // r15d
  __int64 v6; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  int v9; // ebx
  unsigned int v10; // eax
  int v11; // eax
  unsigned int v12; // eax
  int v13; // ebx
  unsigned int v14; // eax
  int v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // eax
  int v18; // ebx
  int v19; // edi
  int v20; // ebx
  int v21; // eax
  _DWORD *v22; // [rsp+60h] [rbp+8h] BYREF
  _DWORD *v23; // [rsp+68h] [rbp+10h] BYREF

  v22 = a2;
  v4 = 1;
  v23 = a1;
  if ( a1[523] == 1 || a2[523] == 1 )
    v4 = 0;
  v5 = 0;
  v6 = (unsigned int)(a2[452] ^ a1[452]);
  if ( (v6 & 0x840000) == 0 )
    v5 = v4;
  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v6) + 88) + 1116LL) )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    if ( (a2[10] & 1) != 0 && (CurrentThreadDpiAwarenessContext & 0xF) - 1 > 1 )
      v9 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    else
      v9 = a2[540];
    v10 = W32GetCurrentThreadDpiAwarenessContext();
    if ( (a1[10] & 1) != 0 && (v10 & 0xF) - 1 > 1 )
      v11 = (v10 >> 8) & 0x1FF;
    else
      v11 = a1[540];
    if ( v9 != v11
      || ((v12 = W32GetCurrentThreadDpiAwarenessContext(), (a2[10] & 1) != 0) && (v12 & 0xF) - 1 > 1
        ? (v13 = (v12 >> 8) & 0x1FF)
        : (v13 = a2[541]),
          (v14 = W32GetCurrentThreadDpiAwarenessContext(), (a1[10] & 1) != 0) && (v14 & 0xF) - 1 > 1
        ? (v15 = (v14 >> 8) & 0x1FF)
        : (v15 = a1[541]),
          v13 != v15) )
    {
      PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v22);
      PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v22);
      v16 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v23);
      v17 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v23);
      WdLogSingleEntry4(2LL, v17, v16);
      WdLogGlobalForLineNumber = 857;
      v18 = (unsigned __int16)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v22);
      v19 = v18 + ((unsigned int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v22) << 16);
      v20 = (unsigned __int16)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v23);
      v21 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v23);
      DrvDxgkLogCodePointPacket(95LL, v20 + (v21 << 16), v19, 0);
    }
  }
  if ( *((_QWORD *)a2 + 361)
    || *((_QWORD *)a2 + 379)
    || *((_QWORD *)a2 + 380)
    || *((_QWORD *)a2 + 386)
    || *((_QWORD *)a2 + 372) )
  {
    v5 = 0;
  }
  if ( *((_QWORD *)a1 + 361)
    || *((_QWORD *)a1 + 379)
    || *((_QWORD *)a1 + 380)
    || *((_QWORD *)a1 + 386)
    || *((_QWORD *)a1 + 372) )
  {
    return 0;
  }
  return v5;
}
