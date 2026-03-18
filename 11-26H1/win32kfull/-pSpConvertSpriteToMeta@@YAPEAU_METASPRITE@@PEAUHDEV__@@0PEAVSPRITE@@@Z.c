/*
 * XREFs of ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x140314F7C
 * Callers:
 *     vSpDynamicModeChange @ 0x140185A00 (vSpDynamicModeChange.c)
 * Callees:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400801CC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x14009BDF8 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400BBFE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400BC0EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x140185834 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1402130C0 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x140314B20 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x140316840 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 */

struct _METASPRITE *__fastcall pSpConvertSpriteToMeta(_DWORD *a1, _DWORD *a2, struct SPRITE *a3)
{
  unsigned int v3; // edi
  _QWORD *v6; // rbx
  int v7; // ecx
  unsigned int v8; // ebp
  HDEV v9; // r12
  struct SPRITE *Sprite; // rax
  struct SPRITE *v11; // r15
  HDEV v12; // rcx
  unsigned int i; // ebp
  _DWORD *v14; // rax
  struct _SPRITESTATE *v16[31]; // [rsp+20h] [rbp-F8h] BYREF
  HDEV v18; // [rsp+130h] [rbp+18h] BYREF
  struct _POINTL v19; // [rsp+138h] [rbp+20h] BYREF

  v3 = 0;
  v6 = 0LL;
  if ( *((_QWORD *)a3 + 9) )
  {
    v7 = a1[35];
    if ( v7 )
    {
      v6 = (_QWORD *)PALLOCNOZ(8 * v7 + 32, 1836086087LL, (__int64)a3);
      if ( v6 )
      {
        v8 = 0;
        v9 = (HDEV)(a1 + 36);
        while ( v8 < a1[35] )
        {
          v9 = (HDEV)(a1 + 36);
          v18 = *(HDEV *)(*((_QWORD *)a1 + 18) + 8LL * v8);
          SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v16, (struct PDEVOBJ *)&v18);
          Sprite = pSpCreateSprite(v18, 0LL, *((HWND *)a3 + 9), 0LL);
          v11 = Sprite;
          if ( !Sprite )
            goto LABEL_10;
          bSpTransferShape(Sprite, a3);
          *((_QWORD *)v11 + 24) = *((_QWORD *)a3 + 24);
          v12 = v18;
          *((_QWORD *)a3 + 24) = 0LL;
          v19.x = *((_DWORD *)a3 + 28) + a2[644] - *((_DWORD *)v12 + 644);
          v19.y = *((_DWORD *)a3 + 29) + a2[645] - *((_DWORD *)v12 + 645);
          if ( !(unsigned int)bSpUpdatePosition(v11, &v19, 0, 0) )
          {
            vSpDeleteSprite(v11);
LABEL_10:
            SPRITEDDIACCESS::~SPRITEDDIACCESS(v16);
            while ( v8 )
              vSpDeleteSprite((struct SPRITE *)v6[--v8 + 3]);
            Win32FreePool(v6);
            v6 = 0LL;
            goto LABEL_22;
          }
          v6[v8 + 3] = v11;
          *((_QWORD *)v11 + 1) = v6;
          SPRITEDDIACCESS::~SPRITEDDIACCESS(v16);
          ++v8;
        }
        *v6 = *((_QWORD *)a3 + 9);
        *((_DWORD *)v6 + 5) = a1[35];
        *((_DWORD *)v6 + 4) = 0;
        v6[1] = *((_QWORD *)a1 + 19);
        *((_QWORD *)a1 + 19) = v6;
        if ( (*(_DWORD *)a3 & 0x40) != 0 )
        {
          for ( i = 0; i < a1[35]; ++i )
            pSpHintSpriteShape((struct SPRITE *)v6[i + 3], *((HSURF *)a3 + 30), 0);
          *((_DWORD *)v6 + 4) |= 0x40u;
          v9 = (HDEV)(a1 + 36);
        }
        if ( (*(_DWORD *)a3 & 0x100) != 0 )
        {
          if ( a1[35] )
          {
            do
            {
              v14 = (_DWORD *)v6[v3 + 3];
              *v14 |= 0x100u;
              vSpCreateExMirror(*(HDEV *)(*(_QWORD *)v9 + 8LL * v3++));
            }
            while ( v3 < a1[35] );
          }
          *((_DWORD *)v6 + 4) |= 0x100u;
        }
      }
    }
  }
LABEL_22:
  if ( (*(_DWORD *)a3 & 0x40) != 0 )
    pSpHintSpriteShape(a3, 0LL, 0);
  vSpDeleteSprite(a3);
  return (struct _METASPRITE *)v6;
}
