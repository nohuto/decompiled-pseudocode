/*
 * XREFs of ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x140268220
 * Callers:
 *     GreHideSprites @ 0x140212210 (GreHideSprites.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400DB7DC (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400DB8E8 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400DC1D8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$08P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400DD91C (--$GreReleaseSemaphoreCommon@$08P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z @ 0x1402662BC (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z.c)
 *     ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x140269754 (-vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ??0?$SEMOBJ@$08@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x140329A10 (--0-$SEMOBJ@$08@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x14032E3E4 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 */

void __fastcall vSpHideSprites(HDEV a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned int v7; // edx
  int v8; // eax
  struct _SPRITESTATE *v9[24]; // [rsp+20h] [rbp-C8h] BYREF
  HDEV v10; // [rsp+F0h] [rbp+8h] BYREF
  __int64 v11; // [rsp+100h] [rbp+18h] BYREF

  v10 = a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v9, (struct PDEVOBJ *)&v10);
  v4 = (__int64)(v10 + 20);
  *((_BYTE *)v10 + 208) = 1;
  v5 = *(_QWORD *)(v4 + 8);
  if ( v5 )
  {
    do
    {
      v6 = *(_QWORD *)(v5 + 24);
      v7 = *(_DWORD *)v5 | 0x10;
      if ( !a2 )
        v7 = *(_DWORD *)v5 & 0xFFFFFFEF;
      *(_DWORD *)v5 = v7;
      bSpUpdatePosition((struct SPRITE *)v5, (struct _POINTL *)(v5 + 112), 0, 1);
      v5 = v6;
    }
    while ( v6 );
  }
  v8 = *(_DWORD *)(v4 + 1088);
  if ( a2 )
  {
    if ( v8 )
      vSpUnhook((struct _SPRITESTATE *)v4);
  }
  else if ( !v8 )
  {
    vSpHook((struct _SPRITESTATE *)v4);
    if ( !*(_DWORD *)(v4 + 116) )
    {
      SEMOBJ<9>::SEMOBJ<9>(&v11, *(_QWORD *)(v4 + 120));
      vSpComputeSpriteRanges(v4);
      v3 = v11;
      if ( v11 )
        GreReleaseSemaphoreCommon<9,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          v11);
    }
  }
  *(_BYTE *)(v4 + 128) = 0;
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v9, v3);
}
