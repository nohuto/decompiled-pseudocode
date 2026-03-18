/*
 * XREFs of ?CheckTopmost@@YAHPEAUtagCVR@@@Z @ 0x1402326A0
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x140232848 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x140232CAC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     CalcForegroundInsertAfter @ 0x140023FF0 (CalcForegroundInsertAfter.c)
 *     GetLastTopMostWindow @ 0x140065958 (GetLastTopMostWindow.c)
 *     ?GetWindowWorker@@YAPEAUtagWND@@PEAU1@IH@Z @ 0x1401692A4 (-GetWindowWorker@@YAPEAUtagWND@@PEAU1@IH@Z.c)
 *     GetTopMostInsertAfter @ 0x140236DE0 (GetTopMostInsertAfter.c)
 */

__int64 __fastcall CheckTopmost(struct tagCVR *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // r8d
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax
  struct tagWND *v9; // rcx
  __int64 *LastTopMostWindow; // rax
  __int64 v11; // rax
  struct tagWND *WindowWorker; // rax
  __int64 *TopMostInsertAfter; // rax
  struct tagWND *v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // rax

  v2 = _HMObjectFromHandle(*(_QWORD *)a1);
  v5 = *((_DWORD *)a1 + 8);
  v6 = 0LL;
  v7 = v2;
  if ( (v5 & 0x14) == 0 && *((_QWORD *)a1 + 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v4 = *(_QWORD *)(v2 + 16);
    v3 = *(_QWORD *)(v4 + 472);
    if ( v2 != *(_QWORD *)(v3 + 128) && (*((_DWORD *)a1 + 39) & 0x400) == 0 )
      *((_QWORD *)a1 + 1) = 0LL;
  }
  if ( (v5 & 4) != 0 )
    return 0LL;
  v8 = *((_QWORD *)a1 + 1);
  switch ( v8 )
  {
    case 1LL:
      return 2LL;
    case -2LL:
      v9 = (struct tagWND *)v7;
      if ( (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 24LL) & 8) != 0 )
      {
        LastTopMostWindow = (__int64 *)GetLastTopMostWindow(v7, v3);
        if ( LastTopMostWindow )
          v11 = *LastTopMostWindow;
        else
          v11 = 0LL;
        *((_QWORD *)a1 + 1) = v11;
        if ( v11 != *(_QWORD *)a1 )
          return 2LL;
        v9 = (struct tagWND *)v7;
      }
      WindowWorker = GetWindowWorker(v9, 3);
      if ( WindowWorker )
        v6 = *(_QWORD *)WindowWorker;
      *((_QWORD *)a1 + 1) = v6;
      return 2LL;
    case -1LL:
      if ( *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19080) )
      {
        TopMostInsertAfter = (__int64 *)GetTopMostInsertAfter(v7);
        if ( TopMostInsertAfter )
          v6 = *TopMostInsertAfter;
      }
      *((_QWORD *)a1 + 1) = v6;
      return 1LL;
    case 0LL:
      if ( (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 24LL) & 8) == 0 )
      {
        v15 = CalcForegroundInsertAfter(v7);
        if ( v15 )
          v6 = *(_QWORD *)v15;
        *((_QWORD *)a1 + 1) = v6;
        return 0LL;
      }
LABEL_37:
      if ( *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19080) )
      {
        v20 = (_QWORD *)GetTopMostInsertAfter(v7);
        if ( v20 )
          *((_QWORD *)a1 + 1) = *v20;
      }
      return 0LL;
  }
  v16 = (__int64 *)GetLastTopMostWindow(v7, v3);
  if ( v16 )
    v17 = *v16;
  else
    v17 = 0LL;
  v18 = *((_QWORD *)a1 + 1);
  if ( v18 == v17 )
    return 0LL;
  v19 = _HMObjectFromHandle(v18);
  v4 = *(_QWORD *)(v7 + 40);
  if ( (*(_BYTE *)(*(_QWORD *)(v19 + 40) + 24LL) & 8) != 0 )
  {
    if ( (*(_BYTE *)(v4 + 24) & 8) == 0 )
      return 1LL;
    goto LABEL_37;
  }
  return (*(unsigned __int8 *)(v4 + 24) >> 2) & 2;
}
