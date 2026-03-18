/*
 * XREFs of ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z @ 0x140186748
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400801CC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x14018548C (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x140186134 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ??0ENUMUNCOVERED@@QEAA@PEAU_SPRITESTATE@@@Z @ 0x140186C30 (--0ENUMUNCOVERED@@QEAA@PEAU_SPRITESTATE@@@Z.c)
 *     bSpEnableSprites @ 0x140227250 (bSpEnableSprites.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x14023EB9C (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 * Callees:
 *     ?bSpComputeScan@@YAHPEAU_SPRITESTATE@@PEAVSPRITE@@JJPEAPEAU_SPRITESCAN@@PEA_K@Z @ 0x1401868B0 (-bSpComputeScan@@YAHPEAU_SPRITESTATE@@PEAVSPRITE@@JJPEAPEAU_SPRITESCAN@@PEA_K@Z.c)
 *     ?vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x140186A3C (-vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall vSpComputeSpriteRanges(__int64 a1)
{
  int v2; // r8d
  int v3; // r14d
  __int64 v4; // rdi
  struct SPRITE *v5; // rsi
  struct SPRITE *v6; // rcx
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  _BYTE *v10; // rcx
  _QWORD *v11; // rdx
  int v12; // eax
  unsigned __int64 v13; // [rsp+30h] [rbp-148h] BYREF
  struct _SPRITESCAN *v14; // [rsp+38h] [rbp-140h] BYREF
  _BYTE v15[56]; // [rsp+40h] [rbp-138h] BYREF
  struct SPRITE *v16; // [rsp+78h] [rbp-100h]

  memset_0(v15, 0, 0x110uLL);
  v2 = *(_DWORD *)(a1 + 44);
  v3 = *(_DWORD *)(a1 + 52);
  v4 = *(_QWORD *)(a1 + 24);
  v14 = *(struct _SPRITESCAN **)(a1 + 144);
  v13 = 0LL;
  while ( v4 && *(_DWORD *)(v4 + 92) <= v2 )
    v4 = *(_QWORD *)(v4 + 40);
  v5 = v16;
  while ( 1 )
  {
    v6 = (struct SPRITE *)v15;
    v7 = v3;
    while ( v5 )
    {
      v8 = *((_DWORD *)v5 + 23);
      if ( v8 == v2 )
      {
        *((_QWORD *)v6 + 7) = *((_QWORD *)v5 + 7);
      }
      else
      {
        v6 = v5;
        if ( v8 > v7 )
          v8 = v7;
        v7 = v8;
      }
      v5 = (struct SPRITE *)*((_QWORD *)v6 + 7);
    }
    while ( v4 )
    {
      v9 = *(_DWORD *)(v4 + 84);
      if ( v9 != v2 )
      {
        if ( v9 <= v7 )
          v7 = *(_DWORD *)(v4 + 84);
        break;
      }
      v10 = v15;
      do
      {
        v11 = v10 + 56;
        v10 = (_BYTE *)*((_QWORD *)v10 + 7);
      }
      while ( v10 && *((_DWORD *)v10 + 16) < *(_DWORD *)(v4 + 64) );
      *v11 = v4;
      v12 = *(_DWORD *)(v4 + 92);
      *(_QWORD *)(v4 + 56) = v10;
      v4 = *(_QWORD *)(v4 + 40);
      if ( v12 > v7 )
        v12 = v7;
      v7 = v12;
    }
    v5 = v16;
    if ( !(unsigned int)bSpComputeScan((struct _SPRITESTATE *)a1, v16, v2, v7, &v14, &v13) )
      break;
    v2 = v7;
    if ( v7 >= v3 )
    {
      *(_DWORD *)(a1 + 116) = 1;
      vSpComputeUncoveredRegion((struct _SPRITESTATE *)a1, 1);
      return;
    }
  }
}
