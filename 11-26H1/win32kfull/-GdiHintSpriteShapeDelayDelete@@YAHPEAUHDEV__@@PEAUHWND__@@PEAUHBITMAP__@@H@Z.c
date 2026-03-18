/*
 * XREFs of ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x140313250
 * Callers:
 *     GreHintSpriteShapeDelayDelete @ 0x140345484 (GreHintSpriteShapeDelayDelete.c)
 * Callees:
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1402130C0 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z @ 0x140255B38 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z.c)
 *     ?pSpGetSpriteDelayDelete@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x14031529C (-pSpGetSpriteDelayDelete@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GdiHintSpriteShapeDelayDelete(HDEV a1, HWND a2, HBITMAP a3)
{
  unsigned int v4; // edi
  unsigned int v5; // r14d
  HDEV v7; // r12
  int v8; // r15d
  const struct _SPRITESTATE *v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // ecx
  struct _METASPRITE *MetaSprite; // rsi
  __int64 v13; // rbx
  struct SPRITE *v14; // rcx
  int v15; // r13d
  __int64 SessionState; // rax
  struct SPRITE *v18; // rsi
  int v19; // ebx
  _BYTE v20[72]; // [rsp+20h] [rbp-48h] BYREF
  HDEV v21; // [rsp+70h] [rbp+8h] BYREF
  HBITMAP hsurf; // [rsp+80h] [rbp+18h]

  hsurf = a3;
  v21 = a1;
  v4 = 0;
  v5 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v20, (struct PDEVOBJ *)&v21);
  v7 = v21;
  v8 = 0;
  v9 = (const struct _SPRITESTATE *)(v21 + 20);
  if ( *((_DWORD *)v21 + 35) )
  {
    MetaSprite = pSpGetMetaSprite(v9, a2, 0LL, 1);
    if ( MetaSprite )
    {
      LODWORD(v13) = 0;
      while ( (unsigned int)v13 < *((_DWORD *)v7 + 35) )
      {
        v14 = (struct SPRITE *)*((_QWORD *)MetaSprite + (unsigned int)v13 + 3);
        v15 = *(_DWORD *)v14 & 0x200;
        v5 = pSpHintSpriteShape(v14, (HSURF)hsurf, 0);
        if ( !v5 )
        {
          while ( (_DWORD)v13 )
          {
            v13 = (unsigned int)(v13 - 1);
            pSpHintSpriteShape(*((struct SPRITE **)MetaSprite + v13 + 3), 0LL, 0);
          }
          goto LABEL_20;
        }
        if ( !v15 && (**((_DWORD **)MetaSprite + (unsigned int)v13 + 3) & 0x200) != 0 )
          v8 = 1;
        LODWORD(v13) = v13 + 1;
      }
      if ( v5 )
      {
        v11 = *((_DWORD *)MetaSprite + 4) | 0x40;
        if ( !hsurf )
          v11 = *((_DWORD *)MetaSprite + 4) & 0xFFFFFFBF;
        *((_DWORD *)MetaSprite + 4) = v11;
      }
    }
  }
  else
  {
    v18 = pSpGetSpriteDelayDelete(v9, a2, 0LL);
    v19 = *(_DWORD *)v18;
    v5 = pSpHintSpriteShape(v18, (HSURF)a3, 0);
    if ( (v19 & 0x200) == 0 && (*(_DWORD *)v18 & 0x200) != 0 )
    {
      SessionState = W32GetSessionState(v11, v10);
      goto LABEL_18;
    }
  }
  SessionState = W32GetSessionState(v11, v10);
  if ( v8 == 1 )
LABEL_18:
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(SessionState + 96) + 4824LL));
  v4 = v5;
LABEL_20:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v20);
  return v4;
}
