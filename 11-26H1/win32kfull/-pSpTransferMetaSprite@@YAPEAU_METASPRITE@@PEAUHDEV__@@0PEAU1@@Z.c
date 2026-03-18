/*
 * XREFs of ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x140315410
 * Callers:
 *     vSpDynamicModeChange @ 0x140185A00 (vSpDynamicModeChange.c)
 * Callees:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400801CC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x14009BDF8 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400BBFE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400BC0EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x140185834 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1402130C0 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x140314B20 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x140316840 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 */

struct _METASPRITE *__fastcall pSpTransferMetaSprite(_DWORD *a1, HDEV a2, struct _METASPRITE *a3)
{
  int v3; // r12d
  HDEV v4; // r14
  _QWORD *v5; // rbx
  HDEV v7; // r15
  HBITMAP v8; // rax
  __int64 v9; // r10
  int v10; // r12d
  int v11; // r13d
  unsigned int v12; // r11d
  unsigned int v13; // r12d
  __int64 v14; // r9
  unsigned int v15; // esi
  struct SPRITE *v16; // r8
  unsigned int v17; // edx
  _QWORD *v18; // rcx
  __int64 v19; // rax
  int v20; // edx
  int v21; // ecx
  __int64 v22; // r15
  struct SPRITE *Sprite; // rsi
  __int64 v24; // rax
  HDEV v25; // rcx
  int v26; // r9d
  __int64 i; // rsi
  struct SPRITE *v28; // rcx
  __int64 j; // rsi
  __int64 k; // rsi
  struct SPRITE *v31; // rcx
  __int64 v32; // rcx
  __int64 m; // rax
  __int64 n; // rsi
  struct SPRITE *v35; // rcx
  HBITMAP hsurf; // [rsp+20h] [rbp-E0h]
  struct SPRITE *v38; // [rsp+28h] [rbp-D8h]
  __int64 v39; // [rsp+30h] [rbp-D0h]
  __int64 v40; // [rsp+38h] [rbp-C8h] BYREF
  struct _POINTL v41; // [rsp+40h] [rbp-C0h] BYREF
  struct _SPRITESTATE *v42[24]; // [rsp+50h] [rbp-B0h] BYREF
  struct _SPRITESTATE *v43[32]; // [rsp+110h] [rbp+10h] BYREF
  int v44; // [rsp+220h] [rbp+120h]
  int v46; // [rsp+230h] [rbp+130h]
  HDEV v47; // [rsp+238h] [rbp+138h] BYREF

  v3 = 0;
  v4 = (HDEV)(a1 + 20);
  v5 = 0LL;
  v44 = 0;
  v7 = a2;
  if ( *(_QWORD *)a3 )
  {
    if ( (*((_DWORD *)a3 + 4) & 4) == 0 )
    {
      v5 = (_QWORD *)PALLOCMEM(8 * a1[35] + 32, 1836086087LL);
      if ( v5 )
      {
        v38 = 0LL;
        v8 = 0LL;
        v39 = 0LL;
        v9 = 0LL;
        v10 = *((_DWORD *)a3 + 4) & 0x100;
        hsurf = 0LL;
        v11 = *((_DWORD *)a3 + 4) & 0x40;
        v46 = v10;
        if ( *((_DWORD *)v4 + 15) )
        {
          v12 = *((_DWORD *)a3 + 5);
          v13 = 0;
          do
          {
            v14 = 0LL;
            if ( v12 )
            {
              v15 = v12;
              do
              {
                v16 = (struct SPRITE *)*((_QWORD *)a3 + v14 + 3);
                v17 = v15;
                if ( v16 )
                {
                  if ( v11 && !v8 )
                    hsurf = (HBITMAP)*((_QWORD *)v16 + 30);
                  v18 = (_QWORD *)*((_QWORD *)v16 + 2);
                  v19 = *v18;
                  if ( v4 == (HDEV)v18 )
                  {
                    v5[v9 + 3] = v16;
                    *((_QWORD *)a3 + v14 + 3) = 0LL;
                    *((_QWORD *)v16 + 1) = v5;
                    v12 = *((_DWORD *)a3 + 5);
                    v17 = v12;
                  }
                  if ( v13 < *(_DWORD *)(v19 + 2092) )
                  {
                    v38 = v16;
                    v13 = *(_DWORD *)(v19 + 2092);
                    v39 = v19;
                  }
                  v8 = hsurf;
                }
                v14 = (unsigned int)(v14 + 1);
                v15 = v17;
              }
              while ( (unsigned int)v14 < v17 );
            }
            v9 = (unsigned int)(v9 + 1);
          }
          while ( (unsigned int)v9 < *((_DWORD *)v4 + 15) );
          v10 = v46;
        }
        *v5 = *(_QWORD *)a3;
        v20 = *((_DWORD *)v4 + 15);
        *((_DWORD *)v5 + 5) = v20;
        v21 = v11 != 0 ? 0x40 : 0;
        *((_DWORD *)v5 + 4) = v21;
        if ( v10 )
          *((_DWORD *)v5 + 4) = v21 | 0x100;
        v22 = 0LL;
        if ( v20 )
        {
          while ( 1 )
          {
            if ( !v5[v22 + 3] )
            {
              v47 = *(HDEV *)(*((_QWORD *)v4 + 8) + 8 * v22);
              SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v43, (struct PDEVOBJ *)&v47);
              Sprite = pSpCreateSprite(v47, 0LL, *(HWND *)a3, 0LL);
              if ( Sprite )
              {
                v40 = v39;
                SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v42, (struct PDEVOBJ *)&v40);
                bSpTransferShape(Sprite, v38);
                v24 = v40;
                *((_QWORD *)Sprite + 24) = *((_QWORD *)v38 + 24);
                v25 = v47;
                *((_QWORD *)v38 + 24) = 0LL;
                v26 = *((_DWORD *)v38 + 29) + *(_DWORD *)(v24 + 2580);
                v41.x = *((_DWORD *)v38 + 28) + *(_DWORD *)(v24 + 2576) - *((_DWORD *)v25 + 644);
                v41.y = v26 - *((_DWORD *)v25 + 645);
                if ( (unsigned int)bSpUpdatePosition(Sprite, &v41, 0, 0) )
                {
                  v3 = v44;
                  v5[v22 + 3] = Sprite;
                  *((_QWORD *)Sprite + 1) = v5;
                }
                else
                {
                  vSpDeleteSprite(Sprite);
                  v3 = 1;
                  v44 = 1;
                }
                SPRITEDDIACCESS::~SPRITEDDIACCESS(v42);
              }
              else
              {
                v3 = 1;
                v44 = 1;
              }
              SPRITEDDIACCESS::~SPRITEDDIACCESS(v43);
              if ( v3 )
                break;
            }
            v22 = (unsigned int)(v22 + 1);
            if ( (unsigned int)v22 >= *((_DWORD *)v5 + 5) )
            {
              v10 = v46;
              goto LABEL_33;
            }
          }
        }
        else
        {
LABEL_33:
          v5[1] = *((_QWORD *)v4 + 9);
          *((_QWORD *)v4 + 9) = v5;
          if ( v11 )
          {
            for ( i = 0LL; (unsigned int)i < *((_DWORD *)v5 + 5); i = (unsigned int)(i + 1) )
            {
              v28 = (struct SPRITE *)v5[i + 3];
              if ( (*(_DWORD *)v28 & 0x40) == 0 )
                pSpHintSpriteShape(v28, (HSURF)hsurf, 0);
            }
          }
          if ( v10 )
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
          v3 = v44;
        }
        v7 = a2;
      }
    }
  }
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)a3 + 5); k = (unsigned int)(k + 1) )
  {
    v31 = (struct SPRITE *)*((_QWORD *)a3 + k + 3);
    if ( v31 )
    {
      if ( (*(_DWORD *)v31 & 0x40) != 0 )
        pSpHintSpriteShape(v31, 0LL, 0);
      vSpDeleteSprite(*((struct SPRITE **)a3 + k + 3));
    }
  }
  v32 = *((_QWORD *)v7 + 19);
  if ( (struct _METASPRITE *)v32 == a3 )
  {
    *((_QWORD *)v7 + 19) = *((_QWORD *)a3 + 1);
  }
  else
  {
    for ( m = *(_QWORD *)(v32 + 8); (struct _METASPRITE *)m != a3; m = *(_QWORD *)(m + 8) )
      v32 = m;
    *(_QWORD *)(v32 + 8) = *((_QWORD *)a3 + 1);
  }
  if ( v3 )
  {
    for ( n = 0LL; (unsigned int)n < *((_DWORD *)v5 + 5); n = (unsigned int)(n + 1) )
    {
      v35 = (struct SPRITE *)v5[n + 3];
      if ( v35 )
      {
        if ( (*(_DWORD *)v35 & 0x40) != 0 )
          pSpHintSpriteShape(v35, 0LL, 0);
        vSpDeleteSprite((struct SPRITE *)v5[n + 3]);
      }
    }
    Win32FreePool(v5);
    v5 = 0LL;
  }
  Win32FreePool(a3);
  return (struct _METASPRITE *)v5;
}
