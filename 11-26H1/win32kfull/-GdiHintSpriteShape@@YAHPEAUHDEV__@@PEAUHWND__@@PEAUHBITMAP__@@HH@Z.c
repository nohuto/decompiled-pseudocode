/*
 * XREFs of ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1400A5240
 * Callers:
 *     GreHintSpriteShape @ 0x1400A5AB4 (GreHintSpriteShape.c)
 *     GreTransferSpriteStateToDwmState @ 0x1402029BC (GreTransferSpriteStateToDwmState.c)
 *     GreTransferDwmStateToSpriteState @ 0x14028A2CC (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1402130C0 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x140315AA4 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 */

__int64 __fastcall GdiHintSpriteShape(HDEV a1, HWND a2, HBITMAP a3, int a4, int a5)
{
  unsigned int v6; // edi
  unsigned int v7; // r12d
  __int64 v9; // rdx
  __int64 v10; // r8
  HDEV v11; // rax
  int v12; // r14d
  int *v13; // rcx
  int *v14; // rsi
  int v15; // ebx
  __int64 SessionState; // rax
  __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // r12
  int v21; // r13d
  HDEV v22; // [rsp+20h] [rbp-30h]
  HDEV v23; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v24[16]; // [rsp+30h] [rbp-20h] BYREF
  int v25; // [rsp+40h] [rbp-10h] BYREF
  int v26; // [rsp+44h] [rbp-Ch]
  int v27; // [rsp+48h] [rbp-8h]
  int v28; // [rsp+4Ch] [rbp-4h]
  unsigned int v29; // [rsp+90h] [rbp+40h]

  v23 = a1;
  v6 = 0;
  v29 = 0;
  v7 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v24, (struct PDEVOBJ *)&v23);
  v11 = v23;
  v12 = 0;
  v22 = v23;
  v13 = (int *)*((unsigned int *)v23 + 35);
  if ( !(_DWORD)v13 )
  {
    if ( a2 )
    {
      v14 = (int *)*((_QWORD *)v23 + 11);
      if ( v14 )
      {
        do
        {
          if ( *((HWND *)v14 + 9) == a2 && (*v14 & 0x400) == 0 )
            break;
          v14 = (int *)*((_QWORD *)v14 + 3);
        }
        while ( v14 );
        if ( v14 )
        {
          v15 = *v14;
          v7 = pSpHintSpriteShape((struct SPRITE *)v14, a3, a4);
          if ( (v15 & 0x200) == 0 && (*v14 & 0x200) != 0 )
            v12 = 1;
          if ( a5 && !ERECTL::bEmpty((ERECTL *)(v14 + 20)) )
          {
            v25 = *v13;
            v26 = v13[1];
            v27 = v13[2];
            v28 = v13[3];
            vSpAddAndCompactDirtyRect(v14, &v25);
          }
        }
      }
    }
    goto LABEL_9;
  }
  v18 = 0LL;
  if ( !a2 )
  {
LABEL_16:
    if ( v18 )
    {
      LODWORD(v19) = 0;
      while ( (unsigned int)v19 < *((_DWORD *)v11 + 35) )
      {
        v20 = *(_QWORD *)(v18 + 8LL * (unsigned int)v19 + 24);
        v21 = *(_DWORD *)v20 & 0x200;
        v29 = pSpHintSpriteShape((struct SPRITE *)v20, a3, a4);
        if ( !v29 )
        {
          while ( (_DWORD)v19 )
          {
            v19 = (unsigned int)(v19 - 1);
            pSpHintSpriteShape(*(struct SPRITE **)(v18 + 8 * v19 + 24), 0LL, a4);
          }
          goto LABEL_12;
        }
        if ( !v21 && (*(_DWORD *)v20 & 0x200) != 0 )
          v12 = 1;
        if ( a5 && !ERECTL::bEmpty((ERECTL *)(v20 + 80)) )
        {
          v25 = *v13;
          v26 = *(_DWORD *)(v20 + 84);
          v27 = *(_DWORD *)(v20 + 88);
          v28 = *(_DWORD *)(v20 + 92);
          vSpAddAndCompactDirtyRect(v20, &v25);
        }
        v11 = v22;
        LODWORD(v19) = v19 + 1;
      }
      v7 = v29;
      if ( v29 )
      {
        v13 = (int *)(*(_DWORD *)(v18 + 16) | 0x40u);
        if ( !a3 )
          v13 = (int *)(*(_DWORD *)(v18 + 16) & 0xFFFFFFBF);
        *(_DWORD *)(v18 + 16) = (_DWORD)v13;
      }
    }
    goto LABEL_9;
  }
  v18 = *((_QWORD *)v23 + 19);
  if ( !v18 )
  {
LABEL_9:
    SessionState = W32GetSessionState(v13, v9, v10);
    if ( v12 == 1 )
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(SessionState + 96) + 4824LL), 1u);
    goto LABEL_11;
  }
  do
  {
    if ( *(HWND *)v18 == a2 && (*(_DWORD *)(v18 + 16) & 0x400) == 0 )
      break;
    v18 = *(_QWORD *)(v18 + 8);
  }
  while ( v18 );
  if ( !v18 || *(_DWORD *)(v18 + 20) >= (unsigned int)v13 )
  {
    v11 = v23;
    goto LABEL_16;
  }
  W32GetSessionState(v13, v9, v10);
LABEL_11:
  v6 = v7;
LABEL_12:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v24);
  return v6;
}
