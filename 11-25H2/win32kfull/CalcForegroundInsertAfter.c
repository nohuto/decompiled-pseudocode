/*
 * XREFs of CalcForegroundInsertAfter @ 0x140023FF0
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1401955C4 (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagCVR@@@Z @ 0x1402326A0 (-CheckTopmost@@YAHPEAUtagCVR@@@Z.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x14027CB28 (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 * Callees:
 *     GetLastTopMostWindow @ 0x140065958 (GetLastTopMostWindow.c)
 *     ?GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z @ 0x14019F88C (-GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z.c)
 */

struct tagWND *__fastcall CalcForegroundInsertAfter(__int64 a1)
{
  struct tagWND *LastNonBottomMostWindow; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct tagWND *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  _BYTE *v9; // rdx
  __int64 v10; // r9
  struct tagWND *v11; // rdi
  struct tagWND *v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 20LL) & 0x20) != 0 )
    LastNonBottomMostWindow = GetLastNonBottomMostWindow((struct tagWND *)a1, 1);
  else
    LastNonBottomMostWindow = (struct tagWND *)GetLastTopMostWindow();
  v5 = LastNonBottomMostWindow;
  LOBYTE(v4) = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0;
  if ( (_BYTE)v4 != 64 )
  {
    if ( tagTHREADINFO::ComputeAndTestForegroundActivate(*(tagTHREADINFO **)(a1 + 16)) )
      return v5;
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL);
    if ( (*(_DWORD *)(v4 + 12) & 0x80100) != 0 )
      return v5;
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(v4, v3) + 18888) )
    return v5;
  UserSessionState = W32GetUserSessionState(v7, v6);
  v10 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v10 + 472) == *(_QWORD *)(UserSessionState + 18888) )
    return v5;
  v11 = v5;
  if ( v5 )
  {
    v12 = v5;
    goto LABEL_13;
  }
  v12 = *(struct tagWND **)(*(_QWORD *)(a1 + 104) + 112LL);
  if ( !v12 )
    goto LABEL_22;
LABEL_13:
  while ( v12 != (struct tagWND *)a1 )
  {
    v9 = (_BYTE *)*((_QWORD *)v12 + 5);
    if ( (v9[20] & 0x20) == 0
      && (*((_QWORD *)v12 + 2) != v10 || (v9[24] & 8) != 0 || (v9[31] & 0xC0) != 0x40 && (v9[31] & 0x10) == 0) )
    {
      v5 = v12;
      v12 = (struct tagWND *)*((_QWORD *)v12 + 11);
      if ( v12 )
        continue;
    }
    if ( !v12 )
      goto LABEL_22;
    break;
  }
  if ( (*(_BYTE *)(*((_QWORD *)v12 + 5) + 20LL) & 0x20) != 0 )
  {
LABEL_22:
    v5 = v11;
    if ( !v11 )
      v11 = *(struct tagWND **)(*(_QWORD *)(a1 + 104) + 112LL);
    v13 = 0LL;
    v15 = *(_QWORD *)(W32GetUserSessionState(v12, v9) + 18888);
    if ( *(_QWORD *)(v15 + 128) )
      v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v15, v14) + 18888) + 128LL) + 16LL);
    while ( v11 )
    {
      v16 = *((_QWORD *)v11 + 5);
      if ( (*(_BYTE *)(v16 + 20) & 0x20) != 0 )
        break;
      if ( *((_QWORD *)v11 + 2) == v13 )
      {
        if ( *((_QWORD *)v11 + 15) )
        {
          v5 = v11;
        }
        else if ( (*(_BYTE *)(v16 + 31) & 0x10) != 0 )
        {
          v5 = v11;
        }
      }
      v11 = (struct tagWND *)*((_QWORD *)v11 + 11);
    }
  }
  return v5;
}
