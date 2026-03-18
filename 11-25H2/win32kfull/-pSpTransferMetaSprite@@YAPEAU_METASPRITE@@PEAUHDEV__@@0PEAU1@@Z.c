/*
 * XREFs of ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x14032C81C
 * Callers:
 *     vSpDynamicModeChange @ 0x1400E0040 (vSpDynamicModeChange.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400DB7DC (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400DB8E8 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400DC1D8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1400E07BC (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1400E16A0 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1401DDCF0 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x14032BF58 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x14032DC90 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 */

struct _METASPRITE *__fastcall pSpTransferMetaSprite(_DWORD *a1, HDEV a2, struct _METASPRITE *a3)
{
  int v3; // r12d
  HDEV v4; // rsi
  _QWORD *v5; // rbx
  HDEV v7; // r15
  unsigned int v8; // ecx
  HBITMAP v9; // rax
  __int64 v10; // r10
  int v11; // r12d
  int v12; // r13d
  unsigned int v13; // r11d
  unsigned int v14; // r12d
  __int64 v15; // r9
  unsigned int v16; // r14d
  struct SPRITE *v17; // r8
  unsigned int v18; // edx
  _QWORD *v19; // rcx
  __int64 v20; // rax
  int v21; // edx
  int v22; // ecx
  __int64 v23; // r15
  __int64 v24; // rdx
  struct SPRITE *Sprite; // r14
  __int64 v26; // rax
  HDEV v27; // rcx
  int v28; // r9d
  __int64 v29; // rdx
  __int64 i; // r14
  struct SPRITE *v31; // rcx
  __int64 j; // r14
  __int64 k; // rsi
  struct SPRITE *v34; // rcx
  __int64 v35; // rcx
  __int64 m; // rax
  __int64 n; // rsi
  struct SPRITE *v38; // rcx
  HBITMAP hsurf; // [rsp+20h] [rbp-E0h]
  struct SPRITE *v41; // [rsp+28h] [rbp-D8h]
  __int64 v42; // [rsp+30h] [rbp-D0h]
  __int64 v43; // [rsp+38h] [rbp-C8h] BYREF
  struct _POINTL v44; // [rsp+40h] [rbp-C0h] BYREF
  struct _SPRITESTATE *v45[24]; // [rsp+50h] [rbp-B0h] BYREF
  struct _SPRITESTATE *v46[32]; // [rsp+110h] [rbp+10h] BYREF
  int v47; // [rsp+220h] [rbp+120h]
  int v49; // [rsp+230h] [rbp+130h]
  HDEV v50; // [rsp+238h] [rbp+138h] BYREF

  v3 = 0;
  v4 = (HDEV)(a1 + 20);
  v5 = 0LL;
  v47 = 0;
  v7 = a2;
  if ( *(_QWORD *)a3 )
  {
    v8 = 8 * a1[35] + 32;
    if ( (*((_DWORD *)a3 + 4) & 4) == 0 )
    {
      v5 = (_QWORD *)PALLOCMEM(v8, 1836086087LL);
      if ( v5 )
      {
        v41 = 0LL;
        v9 = 0LL;
        v42 = 0LL;
        v10 = 0LL;
        LODWORD(v50) = 0;
        v11 = *((_DWORD *)a3 + 4) & 0x100;
        hsurf = 0LL;
        v12 = *((_DWORD *)a3 + 4) & 0x40;
        v49 = v11;
        if ( *((_DWORD *)v4 + 15) )
        {
          v13 = *((_DWORD *)a3 + 5);
          v14 = (unsigned int)v50;
          do
          {
            v15 = 0LL;
            if ( v13 )
            {
              v16 = v13;
              do
              {
                v17 = (struct SPRITE *)*((_QWORD *)a3 + v15 + 3);
                v18 = v16;
                if ( v17 )
                {
                  if ( v12 && !v9 )
                    hsurf = (HBITMAP)*((_QWORD *)v17 + 30);
                  v19 = (_QWORD *)*((_QWORD *)v17 + 2);
                  v20 = *v19;
                  if ( v4 == (HDEV)v19 )
                  {
                    v5[v10 + 3] = v17;
                    *((_QWORD *)a3 + v15 + 3) = 0LL;
                    *((_QWORD *)v17 + 1) = v5;
                    v13 = *((_DWORD *)a3 + 5);
                    v18 = v13;
                  }
                  if ( v14 < *(_DWORD *)(v20 + 2092) )
                  {
                    v41 = v17;
                    v14 = *(_DWORD *)(v20 + 2092);
                    v42 = v20;
                  }
                  v9 = hsurf;
                }
                v15 = (unsigned int)(v15 + 1);
                v16 = v18;
              }
              while ( (unsigned int)v15 < v18 );
            }
            v10 = (unsigned int)(v10 + 1);
          }
          while ( (unsigned int)v10 < *((_DWORD *)v4 + 15) );
          v11 = v49;
        }
        *v5 = *(_QWORD *)a3;
        v21 = *((_DWORD *)v4 + 15);
        *((_DWORD *)v5 + 5) = v21;
        v22 = v12 != 0 ? 0x40 : 0;
        *((_DWORD *)v5 + 4) = v22;
        if ( v11 )
          *((_DWORD *)v5 + 4) = v22 | 0x100;
        v23 = 0LL;
        if ( v21 )
        {
          while ( 1 )
          {
            if ( !v5[v23 + 3] )
            {
              v50 = *(HDEV *)(*((_QWORD *)v4 + 8) + 8 * v23);
              SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v46, (struct PDEVOBJ *)&v50);
              Sprite = pSpCreateSprite(v50, 0LL, *(HWND *)a3, 0LL);
              if ( Sprite )
              {
                v43 = v42;
                SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v45, (struct PDEVOBJ *)&v43);
                bSpTransferShape(Sprite, v41);
                v26 = v43;
                *((_QWORD *)Sprite + 24) = *((_QWORD *)v41 + 24);
                v27 = v50;
                *((_QWORD *)v41 + 24) = 0LL;
                v28 = *(_DWORD *)(v26 + 2580);
                v44.x = *((_DWORD *)v41 + 28) + *(_DWORD *)(v26 + 2576) - *((_DWORD *)v27 + 644);
                v44.y = v28 + *((_DWORD *)v41 + 29) - *((_DWORD *)v27 + 645);
                if ( (unsigned int)bSpUpdatePosition(Sprite, &v44, 0, 0) )
                {
                  v3 = v47;
                  v5[v23 + 3] = Sprite;
                  *((_QWORD *)Sprite + 1) = v5;
                }
                else
                {
                  vSpDeleteSprite(Sprite);
                  v3 = 1;
                  v47 = 1;
                }
                SPRITEDDIACCESS::~SPRITEDDIACCESS(v45, v29);
              }
              else
              {
                v3 = 1;
                v47 = 1;
              }
              SPRITEDDIACCESS::~SPRITEDDIACCESS(v46, v24);
              if ( v3 )
                break;
            }
            v23 = (unsigned int)(v23 + 1);
            if ( (unsigned int)v23 >= *((_DWORD *)v5 + 5) )
            {
              v11 = v49;
              goto LABEL_33;
            }
          }
        }
        else
        {
LABEL_33:
          v5[1] = *((_QWORD *)v4 + 9);
          *((_QWORD *)v4 + 9) = v5;
          if ( v12 )
          {
            for ( i = 0LL; (unsigned int)i < *((_DWORD *)v5 + 5); i = (unsigned int)(i + 1) )
            {
              v31 = (struct SPRITE *)v5[i + 3];
              if ( (*(_DWORD *)v31 & 0x40) == 0 )
                pSpHintSpriteShape(v31, (HSURF)hsurf, 0);
            }
          }
          if ( v11 )
          {
            for ( j = 0LL; (unsigned int)j < *((_DWORD *)v5 + 5); j = (unsigned int)(j + 1) )
            {
              if ( (*(_DWORD *)v5[j + 3] & 0x100) == 0 )
              {
                vSpCreateExMirror(*(HDEV *)v4);
                *(_DWORD *)v5[j + 3] |= 0x100u;
              }
            }
          }
          v3 = v47;
        }
        v7 = a2;
      }
    }
  }
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)a3 + 5); k = (unsigned int)(k + 1) )
  {
    v34 = (struct SPRITE *)*((_QWORD *)a3 + k + 3);
    if ( v34 )
    {
      if ( (*(_DWORD *)v34 & 0x40) != 0 )
        pSpHintSpriteShape(v34, 0LL, 0);
      vSpDeleteSprite(*((struct SPRITE **)a3 + k + 3));
    }
  }
  v35 = *((_QWORD *)v7 + 19);
  if ( (struct _METASPRITE *)v35 == a3 )
  {
    *((_QWORD *)v7 + 19) = *((_QWORD *)a3 + 1);
  }
  else
  {
    for ( m = *(_QWORD *)(v35 + 8); (struct _METASPRITE *)m != a3; m = *(_QWORD *)(m + 8) )
      v35 = m;
    *(_QWORD *)(v35 + 8) = *((_QWORD *)a3 + 1);
  }
  if ( v3 )
  {
    for ( n = 0LL; (unsigned int)n < *((_DWORD *)v5 + 5); n = (unsigned int)(n + 1) )
    {
      v38 = (struct SPRITE *)v5[n + 3];
      if ( v38 )
      {
        if ( (*(_DWORD *)v38 & 0x40) != 0 )
          pSpHintSpriteShape(v38, 0LL, 0);
        vSpDeleteSprite((struct SPRITE *)v5[n + 3]);
      }
    }
    Win32FreePool(v5);
    v5 = 0LL;
  }
  Win32FreePool(a3);
  return (struct _METASPRITE *)v5;
}
