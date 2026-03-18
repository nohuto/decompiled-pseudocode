/*
 * XREFs of ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z @ 0x1402662BC
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400DC1D8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1400DCE5C (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1400DF610 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?bSpComputeUncoveredSpriteRegion@@YAHAEAVPDEVOBJ@@AEAVRGNOBJ@@@Z @ 0x1401D48E4 (-bSpComputeUncoveredSpriteRegion@@YAHAEAVPDEVOBJ@@AEAVRGNOBJ@@@Z.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x140268220 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     bSpEnableSprites @ 0x140330140 (bSpEnableSprites.c)
 * Callees:
 *     ?vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1401D47A8 (-vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bSpComputeScan@@YAHPEAU_SPRITESTATE@@PEAVSPRITE@@JJPEAPEAU_SPRITESCAN@@PEA_K@Z @ 0x1401D72E8 (-bSpComputeScan@@YAHPEAU_SPRITESTATE@@PEAVSPRITE@@JJPEAPEAU_SPRITESCAN@@PEA_K@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall vSpComputeSpriteRanges(__int64 a1)
{
  struct _SPRITESCAN *v2; // rax
  int v3; // r8d
  int v4; // r14d
  __int64 v5; // rdi
  struct SPRITE *v6; // rsi
  struct SPRITE *v7; // rcx
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  _BYTE *v11; // rcx
  _QWORD *v12; // rdx
  int v13; // eax
  unsigned __int64 v14; // [rsp+30h] [rbp-148h] BYREF
  struct _SPRITESCAN *v15; // [rsp+38h] [rbp-140h] BYREF
  _BYTE v16[56]; // [rsp+40h] [rbp-138h] BYREF
  struct SPRITE *v17; // [rsp+78h] [rbp-100h]

  memset_0(v16, 0, 0x110uLL);
  v2 = *(struct _SPRITESCAN **)(a1 + 144);
  v14 = 0LL;
  v3 = *(_DWORD *)(a1 + 44);
  v4 = *(_DWORD *)(a1 + 52);
  v5 = *(_QWORD *)(a1 + 24);
  v15 = v2;
  while ( v5 && *(_DWORD *)(v5 + 92) <= v3 )
    v5 = *(_QWORD *)(v5 + 40);
  v6 = v17;
  while ( 1 )
  {
    v7 = (struct SPRITE *)v16;
    v8 = v4;
    while ( v6 )
    {
      v9 = *((_DWORD *)v6 + 23);
      if ( v9 == v3 )
      {
        *((_QWORD *)v7 + 7) = *((_QWORD *)v6 + 7);
      }
      else
      {
        v7 = v6;
        if ( v9 > v8 )
          v9 = v8;
        v8 = v9;
      }
      v6 = (struct SPRITE *)*((_QWORD *)v7 + 7);
    }
    while ( v5 )
    {
      v10 = *(_DWORD *)(v5 + 84);
      if ( v10 != v3 )
      {
        if ( v10 <= v8 )
          v8 = *(_DWORD *)(v5 + 84);
        break;
      }
      v11 = v16;
      do
      {
        v12 = v11 + 56;
        v11 = (_BYTE *)*((_QWORD *)v11 + 7);
      }
      while ( v11 && *((_DWORD *)v11 + 16) < *(_DWORD *)(v5 + 64) );
      *v12 = v5;
      v13 = *(_DWORD *)(v5 + 92);
      *(_QWORD *)(v5 + 56) = v11;
      v5 = *(_QWORD *)(v5 + 40);
      if ( v13 > v8 )
        v13 = v8;
      v8 = v13;
    }
    v6 = v17;
    if ( !(unsigned int)bSpComputeScan((struct _SPRITESTATE *)a1, v17, v3, v8, &v15, &v14) )
      break;
    v3 = v8;
    if ( v8 >= v4 )
    {
      *(_DWORD *)(a1 + 116) = 1;
      vSpComputeUncoveredRegion((struct _SPRITESTATE *)a1, 1);
      return;
    }
  }
}
