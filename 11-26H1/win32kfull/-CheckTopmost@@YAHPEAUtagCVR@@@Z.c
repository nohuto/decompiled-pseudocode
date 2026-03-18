/*
 * XREFs of ?CheckTopmost@@YAHPEAUtagCVR@@@Z @ 0x14004952C
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1400487E4 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14026F8C8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     GetLastTopMostWindow @ 0x140048390 (GetLastTopMostWindow.c)
 *     CalcForegroundInsertAfter @ 0x140049328 (CalcForegroundInsertAfter.c)
 *     ?GetWindowWorker@@YAPEAUtagWND@@PEAU1@IH@Z @ 0x14008BC58 (-GetWindowWorker@@YAPEAUtagWND@@PEAU1@IH@Z.c)
 *     GetTopMostInsertAfter @ 0x140292758 (GetTopMostInsertAfter.c)
 */

__int64 __fastcall CheckTopmost(struct tagCVR *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rbx
  struct tagWND *v6; // rsi
  __int64 v7; // rax
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 *v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  struct tagWND *WindowWorker; // rax
  __int64 *LastTopMostWindow; // rax
  int v19; // r8d
  __int64 v20; // rax
  __int64 *TopMostInsertAfter; // rax

  v2 = _HMObjectFromHandle(*(_QWORD *)a1);
  v4 = *((unsigned int *)a1 + 8);
  v5 = 0LL;
  v6 = (struct tagWND *)v2;
  if ( (v4 & 0x14) == 0 )
  {
    v7 = *((_QWORD *)a1 + 1);
    if ( v7 != -1 && v7 != -2 )
    {
      v3 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 464LL);
      if ( v6 != *(struct tagWND **)(v3 + 128) && (*((_DWORD *)a1 + 39) & 0x400) == 0 )
        *((_QWORD *)a1 + 1) = 0LL;
    }
  }
  if ( (v4 & 4) != 0 )
    return 0LL;
  v9 = *((_QWORD *)a1 + 1);
  switch ( v9 )
  {
    case 1LL:
      return 2LL;
    case -2LL:
      v16 = *((_QWORD *)v6 + 5);
      if ( (*(_BYTE *)(v16 + 24) & 8) != 0 )
      {
        LastTopMostWindow = (__int64 *)GetLastTopMostWindow((__int64)v6);
        if ( LastTopMostWindow )
          v20 = *LastTopMostWindow;
        else
          v20 = 0LL;
        *((_QWORD *)a1 + 1) = v20;
        if ( v20 != *(_QWORD *)a1 )
          return 2LL;
        WindowWorker = GetWindowWorker(v6, 3u, v19);
      }
      else
      {
        if ( (*(_WORD *)(v16 + 42) & 0x2FFF) == 0x29D )
        {
LABEL_34:
          *((_QWORD *)a1 + 1) = v5;
          return 2LL;
        }
        WindowWorker = (struct tagWND *)*((_QWORD *)v6 + 12);
      }
      if ( WindowWorker )
        v5 = *(_QWORD *)WindowWorker;
      goto LABEL_34;
    case -1LL:
      if ( *(_QWORD *)(W32GetUserSessionState(v3, v4) + 19120) )
      {
        TopMostInsertAfter = (__int64 *)GetTopMostInsertAfter(v6);
        if ( TopMostInsertAfter )
          v5 = *TopMostInsertAfter;
      }
      *((_QWORD *)a1 + 1) = v5;
      return 1LL;
    case 0LL:
      if ( (*(_BYTE *)(*((_QWORD *)v6 + 5) + 24LL) & 8) == 0 )
      {
        v11 = (__int64 *)CalcForegroundInsertAfter((__int64)v6);
        if ( v11 )
          v5 = *v11;
        *((_QWORD *)a1 + 1) = v5;
        return 0LL;
      }
      goto LABEL_12;
  }
  v12 = (__int64 *)GetLastTopMostWindow((__int64)v6);
  if ( v12 )
    v13 = *v12;
  else
    v13 = 0LL;
  v14 = *((_QWORD *)a1 + 1);
  if ( v14 == v13 )
    return 0LL;
  v15 = _HMObjectFromHandle(v14);
  v3 = *(unsigned __int8 *)(*((_QWORD *)v6 + 5) + 24LL);
  if ( (*(_BYTE *)(*(_QWORD *)(v15 + 40) + 24LL) & 8) != 0 )
  {
    if ( (v3 & 8) != 0 )
    {
LABEL_12:
      if ( *(_QWORD *)(W32GetUserSessionState(v3, v4) + 19120) )
      {
        v10 = (_QWORD *)GetTopMostInsertAfter(v6);
        if ( v10 )
          *((_QWORD *)a1 + 1) = *v10;
      }
      return 0LL;
    }
    return 1LL;
  }
  return ((unsigned int)v3 >> 2) & 2;
}
