/*
 * XREFs of ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1401DDA40
 * Callers:
 *     GreHintSpriteShape @ 0x1400922F0 (GreHintSpriteShape.c)
 *     GreTransferDwmStateToSpriteState @ 0x14012313C (GreTransferDwmStateToSpriteState.c)
 *     GreTransferSpriteStateToDwmState @ 0x140172718 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1401DDCF0 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x14032CEE8 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 */

__int64 __fastcall GdiHintSpriteShape(HDEV a1, HWND a2, HBITMAP a3, int a4, int a5)
{
  unsigned int v6; // edi
  unsigned int v7; // r13d
  HDEV v10; // rcx
  int v11; // ebp
  __int64 v12; // rdx
  int *i; // rsi
  int v14; // ebx
  __int64 SessionState; // rax
  __int64 v17; // rbx
  __int64 v18; // r15
  int v19; // r12d
  __int64 v20; // rsi
  __int128 *v21; // rcx
  HDEV v22; // [rsp+20h] [rbp-68h]
  _BYTE v23[8]; // [rsp+28h] [rbp-60h] BYREF
  __int128 v24; // [rsp+30h] [rbp-58h]
  _OWORD v25[4]; // [rsp+40h] [rbp-48h] BYREF
  HDEV v26; // [rsp+90h] [rbp+8h] BYREF
  HBITMAP hsurf; // [rsp+A0h] [rbp+18h]
  int v28; // [rsp+A8h] [rbp+20h]

  v28 = a4;
  hsurf = a3;
  v26 = a1;
  v6 = 0;
  v7 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v23, (struct PDEVOBJ *)&v26);
  v10 = v26;
  v11 = 0;
  v22 = v26;
  v12 = *((unsigned int *)v26 + 35);
  if ( !a2 )
    goto LABEL_11;
  if ( !(_DWORD)v12 )
  {
    for ( i = (int *)*((_QWORD *)v26 + 11);
          i && (*((HWND *)i + 9) != a2 || (*i & 0x400) != 0);
          i = (int *)*((_QWORD *)i + 3) )
    {
      ;
    }
    if ( i )
    {
      v14 = *i;
      v7 = pSpHintSpriteShape((struct SPRITE *)i, a3, a4);
      if ( (v14 & 0x200) == 0 && _bittest(i, 9u) )
        v11 = 1;
      if ( a5 && !ERECTL::bEmpty((ERECTL *)(i + 20)) )
      {
        v24 = *(_OWORD *)v10;
        v25[0] = v24;
        vSpAddAndCompactDirtyRect(i, v25);
      }
    }
    goto LABEL_11;
  }
  v17 = *((_QWORD *)v26 + 19);
  if ( !v17 )
    goto LABEL_11;
  do
  {
    if ( *(HWND *)v17 == a2 && (*(_DWORD *)(v17 + 16) & 0x400) == 0 )
      break;
    v17 = *(_QWORD *)(v17 + 8);
  }
  while ( v17 );
  if ( !v17 )
  {
LABEL_11:
    SessionState = W32GetSessionState((_DWORD)v10, v12);
    if ( v11 == 1 )
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(SessionState + 96) + 4832LL), 1u);
    goto LABEL_13;
  }
  if ( *(_DWORD *)(v17 + 20) >= (unsigned int)v12 )
  {
    LODWORD(v20) = 0;
    while ( (unsigned int)v20 < *((_DWORD *)v10 + 35) )
    {
      v18 = *(_QWORD *)(v17 + 8LL * (unsigned int)v20 + 24);
      v19 = *(_DWORD *)v18 & 0x200;
      v7 = pSpHintSpriteShape((struct SPRITE *)v18, hsurf, v28);
      if ( !v7 )
      {
        while ( (_DWORD)v20 )
        {
          v20 = (unsigned int)(v20 - 1);
          pSpHintSpriteShape(*(struct SPRITE **)(v17 + 8 * v20 + 24), 0LL, v28);
        }
        goto LABEL_14;
      }
      if ( !v19 && (*(_DWORD *)v18 & 0x200) != 0 )
        v11 = 1;
      if ( a5 && !ERECTL::bEmpty((ERECTL *)(v18 + 80)) )
      {
        v24 = *v21;
        v25[0] = v24;
        vSpAddAndCompactDirtyRect(v18, v25);
      }
      v10 = v22;
      LODWORD(v20) = v20 + 1;
    }
    if ( v7 )
    {
      LODWORD(v10) = *(_DWORD *)(v17 + 16) | 0x40;
      if ( !hsurf )
        LODWORD(v10) = *(_DWORD *)(v17 + 16) & 0xFFFFFFBF;
      *(_DWORD *)(v17 + 16) = (_DWORD)v10;
    }
    goto LABEL_11;
  }
  W32GetSessionState((_DWORD)v26, v12);
LABEL_13:
  v6 = v7;
LABEL_14:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v23);
  return v6;
}
