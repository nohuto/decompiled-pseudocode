/*
 * XREFs of ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1401805B0
 * Callers:
 *     bDynamicModeChange @ 0x140030E68 (bDynamicModeChange.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140085350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     DrvDxgkLogCodePointPacket @ 0x14014FF40 (DrvDxgkLogCodePointPacket.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEBAKXZ @ 0x140168F9C (-ulLogPixelsY@PDEVOBJ@@QEBAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEBAKXZ @ 0x14016AF74 (-ulLogPixelsX@PDEVOBJ@@QEBAKXZ.c)
 */

__int64 __fastcall bDynamicMatchEnoughForModeChange(_DWORD *a1, _DWORD *a2)
{
  int v4; // edx
  unsigned int v5; // r15d
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // ebx
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // ebx
  int v24; // eax
  int v25; // ebx
  unsigned int v26; // eax
  int v27; // ecx
  int v28; // eax
  __int64 v29; // rsi
  __int64 v30; // rdx
  unsigned int v31; // edi
  __int64 v32; // rdx
  unsigned int v33; // ebx
  __int64 v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rdx
  int v37; // edi
  __int64 v38; // rdx
  int v39; // edi
  __int64 v40; // rdx
  int v41; // ebx
  __int64 v42; // rdx
  int v43; // eax
  _DWORD *v44; // [rsp+60h] [rbp+8h] BYREF
  _DWORD *v45; // [rsp+68h] [rbp+10h] BYREF

  v44 = a2;
  v4 = 1;
  v45 = a1;
  if ( a1[523] == 1 || a2[523] == 1 )
    v4 = 0;
  v5 = 0;
  v6 = (unsigned int)(a2[452] ^ a1[452]);
  if ( (v6 & 0x840000) == 0 )
    v5 = v4;
  v8 = *(_QWORD *)(W32GetSessionState(v6) + 88);
  if ( *(_DWORD *)(v8 + 1204) )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v8, v7);
    v12 = (unsigned int)a2[10];
    v13 = CurrentThreadDpiAwarenessContext;
    if ( (v12 & 1) == 0 || (v14 = CurrentThreadDpiAwarenessContext & 0xF, v14 == 1) || v14 == 2 )
      v15 = a2[540];
    else
      v15 = (v13 >> 8) & 0x1FF;
    v16 = W32GetCurrentThreadDpiAwarenessContext(v12, v11);
    v18 = (unsigned int)a1[10];
    if ( (v18 & 1) == 0 || (v18 = v16 & 0xF, (_DWORD)v18 == 1) || (_DWORD)v18 == 2 )
      v19 = a1[540];
    else
      v19 = (v16 >> 8) & 0x1FF;
    if ( v15 != v19 )
      goto LABEL_35;
    v20 = W32GetCurrentThreadDpiAwarenessContext(v18, v17);
    v22 = (unsigned int)a2[10];
    v23 = v20;
    if ( (v22 & 1) == 0 || (v24 = v20 & 0xF, v24 == 1) || v24 == 2 )
      v25 = a2[541];
    else
      v25 = (v23 >> 8) & 0x1FF;
    v26 = W32GetCurrentThreadDpiAwarenessContext(v22, v21);
    if ( (a1[10] & 1) == 0 || (v27 = v26 & 0xF, v27 == 1) || v27 == 2 )
      v28 = a1[541];
    else
      v28 = (v26 >> 8) & 0x1FF;
    if ( v25 != v28 )
    {
LABEL_35:
      v29 = (unsigned int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v44, v17);
      v31 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v44, v30);
      v33 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v45, v32);
      v35 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v45, v34);
      WdLogSingleEntry4(2LL, v35, v33, v31, v29);
      WdLogGlobalForLineNumber = 857;
      v37 = (unsigned __int16)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v44, v36);
      v39 = ((unsigned int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v44, v38) << 16) + v37;
      v41 = (unsigned __int16)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v45, v40);
      v43 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v45, v42);
      DrvDxgkLogCodePointPacket(95LL, (unsigned int)(v41 + (v43 << 16)), v39, 0);
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
