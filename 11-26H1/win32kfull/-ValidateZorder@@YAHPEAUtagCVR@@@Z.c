/*
 * XREFs of ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x140047DFC
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14026F8C8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     PWInsertAfter @ 0x140048268 (PWInsertAfter.c)
 *     GetLastTopMostWindow @ 0x140048390 (GetLastTopMostWindow.c)
 *     HWInsertAfter @ 0x14012EC8C (HWInsertAfter.c)
 */

__int64 __fastcall ValidateZorder(struct tagCVR *a1)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rsi
  __int64 v4; // rax
  _QWORD *v5; // r9
  _QWORD *v6; // r8
  _QWORD *i; // rdx
  bool v8; // zf
  _QWORD *v10; // rdi
  char *v11; // r10
  __int64 v12; // rcx
  char v13; // dl
  char v14; // r8
  char v15; // cl
  _QWORD *LastTopMostWindow; // rax
  __int64 v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // r8

  v2 = 0;
  v3 = (_QWORD *)_HMObjectFromHandle(*(_QWORD *)a1);
  if ( *(char *)(v3[5] + 19LL) < 0 )
    return 1LL;
  v4 = PWInsertAfter(*((_QWORD *)a1 + 1));
  v5 = (_QWORD *)v4;
  if ( *((_QWORD *)a1 + 1) )
  {
    if ( !v4 )
      return 1LL;
  }
  if ( v4 == 1 )
  {
    if ( (*(_BYTE *)(v3[5] + 20LL) & 0x20) != 0 )
    {
      v8 = v3[11] == 0LL;
    }
    else
    {
      v6 = 0LL;
      for ( i = *(_QWORD **)(v3[13] + 112LL); i && (*(_BYTE *)(i[5] + 20LL) & 0x20) == 0; i = (_QWORD *)i[11] )
        v6 = i;
      v8 = v3 == v6;
    }
LABEL_12:
    LOBYTE(v2) = v8;
    return v2;
  }
  v10 = *(_QWORD **)(v3[13] + 112LL);
  if ( !v4 )
  {
    if ( *(_DWORD *)(v3[5] + 236LL) == 1 )
    {
      while ( v10 && *(_DWORD *)(v10[5] + 236LL) != 1 )
        v10 = (_QWORD *)v10[11];
    }
    v8 = v10 == v3;
    goto LABEL_12;
  }
  v11 = *(char **)(v4 + 40);
  if ( v11[19] >= 0 )
  {
    if ( (v11[20] & 0x20) != 0 )
    {
      v18 = 0LL;
      while ( v10 )
      {
        v19 = v18;
        if ( (*(_BYTE *)(v10[5] + 20LL) & 0x20) != 0 )
          break;
        v8 = v3 == v10;
        v18 = v10;
        v10 = (_QWORD *)v10[11];
        if ( v8 )
          v18 = v19;
      }
      *((_QWORD *)a1 + 1) = HWInsertAfter(v18);
      return 0LL;
    }
    v12 = v3[5];
    v13 = *(_BYTE *)(v12 + 19);
    v14 = *(_BYTE *)(v12 + 24) & 8;
    v15 = v14 ^ 8;
    if ( (v13 & 4) == 0 )
      v15 = v14;
    if ( v15 == (v11[24] & 8) )
    {
LABEL_19:
      if ( v10 != v3 )
      {
        while ( v10 )
        {
          if ( (_QWORD *)v10[11] == v3 )
          {
            v8 = v5 == v10;
            goto LABEL_12;
          }
          v10 = (_QWORD *)v10[11];
        }
        return 1LL;
      }
      return 0LL;
    }
    LastTopMostWindow = (_QWORD *)GetLastTopMostWindow(v3);
    v5 = LastTopMostWindow;
    if ( LastTopMostWindow != v3 )
    {
      if ( LastTopMostWindow )
        v17 = *LastTopMostWindow;
      else
        v17 = 0LL;
      *((_QWORD *)a1 + 1) = v17;
      goto LABEL_19;
    }
  }
  return 1LL;
}
