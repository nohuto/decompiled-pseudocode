/*
 * XREFs of ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x14032C3A0
 * Callers:
 *     vSpDynamicModeChange @ 0x1400E0040 (vSpDynamicModeChange.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400DB7DC (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400DB8E8 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400DC1D8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1400E07BC (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1400E16A0 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     PALLOCNOZ @ 0x1400FD16C (PALLOCNOZ.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1401DDCF0 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x14032BF58 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x14032DC90 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 */

struct _METASPRITE *__fastcall pSpConvertSpriteToMeta(_DWORD *a1, _DWORD *a2, struct SPRITE *a3)
{
  unsigned int v3; // edi
  _QWORD *v7; // rbx
  int v8; // ecx
  unsigned int i; // ebp
  struct SPRITE *Sprite; // rax
  __int64 v11; // rdx
  struct SPRITE *v12; // r15
  HDEV v13; // rcx
  __int64 v14; // rdx
  unsigned int j; // ebp
  _DWORD *v16; // rax
  struct _SPRITESTATE *v18[31]; // [rsp+20h] [rbp-F8h] BYREF
  HDEV v19; // [rsp+130h] [rbp+18h] BYREF
  struct _POINTL v20; // [rsp+138h] [rbp+20h] BYREF

  v3 = 0;
  v7 = 0LL;
  if ( *((_QWORD *)a3 + 9) )
  {
    v8 = a1[35];
    if ( v8 )
    {
      v7 = (_QWORD *)PALLOCNOZ(8 * v8 + 32, 1836086087LL);
      if ( v7 )
      {
        for ( i = 0; i < a1[35]; ++i )
        {
          v19 = *(HDEV *)(*((_QWORD *)a1 + 18) + 8LL * i);
          SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v18, (struct PDEVOBJ *)&v19);
          Sprite = pSpCreateSprite(v19, 0LL, *((HWND *)a3 + 9), 0LL);
          v12 = Sprite;
          if ( !Sprite )
            goto LABEL_10;
          bSpTransferShape(Sprite, a3);
          *((_QWORD *)v12 + 24) = *((_QWORD *)a3 + 24);
          v13 = v19;
          *((_QWORD *)a3 + 24) = 0LL;
          v20.x = *((_DWORD *)a3 + 28) + a2[644] - *((_DWORD *)v13 + 644);
          v20.y = *((_DWORD *)a3 + 29) + a2[645] - *((_DWORD *)v13 + 645);
          if ( !(unsigned int)bSpUpdatePosition(v12, &v20, 0, 0) )
          {
            vSpDeleteSprite(v12);
LABEL_10:
            SPRITEDDIACCESS::~SPRITEDDIACCESS(v18, v11);
            while ( i )
              vSpDeleteSprite((struct SPRITE *)v7[--i + 3]);
            Win32FreePool(v7);
            v7 = 0LL;
            goto LABEL_22;
          }
          v7[i + 3] = v12;
          *((_QWORD *)v12 + 1) = v7;
          SPRITEDDIACCESS::~SPRITEDDIACCESS(v18, v14);
        }
        *v7 = *((_QWORD *)a3 + 9);
        *((_DWORD *)v7 + 5) = a1[35];
        *((_DWORD *)v7 + 4) = 0;
        v7[1] = *((_QWORD *)a1 + 19);
        *((_QWORD *)a1 + 19) = v7;
        if ( (*(_DWORD *)a3 & 0x40) != 0 )
        {
          for ( j = 0; j < a1[35]; ++j )
            pSpHintSpriteShape((struct SPRITE *)v7[j + 3], *((HSURF *)a3 + 30), 0);
          *((_DWORD *)v7 + 4) |= 0x40u;
        }
        if ( (*(_DWORD *)a3 & 0x100) != 0 )
        {
          if ( a1[35] )
          {
            do
            {
              v16 = (_DWORD *)v7[v3 + 3];
              *v16 |= 0x100u;
              vSpCreateExMirror(*(HDEV *)(*((_QWORD *)a1 + 18) + 8LL * v3++));
            }
            while ( v3 < a1[35] );
          }
          *((_DWORD *)v7 + 4) |= 0x100u;
        }
      }
    }
  }
LABEL_22:
  if ( (*(_DWORD *)a3 & 0x40) != 0 )
    pSpHintSpriteShape(a3, 0LL, 0);
  vSpDeleteSprite(a3);
  return (struct _METASPRITE *)v7;
}
