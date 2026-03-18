/*
 * XREFs of ?pSpReverseFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1403153AC
 * Callers:
 *     ?vSpPIDLockSpriteArea@@YA?AW4SurfaceMapStatus@SURFACE@@PEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x140317074 (-vSpPIDLockSpriteArea@@YA-AW4SurfaceMapStatus@SURFACE@@PEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpPIDUnlockSpriteArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x140317128 (-vSpPIDUnlockSpriteArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bIsCursorSprite@@YAHPEAVSPRITE@@@Z @ 0x14006A1F0 (-bIsCursorSprite@@YAHPEAVSPRITE@@@Z.c)
 */

struct SPRITE *__fastcall pSpReverseFindInZForPidLock(struct SPRITE *a1, struct _RECTL *a2)
{
  __int64 v2; // rcx
  int v3; // r8d
  int v4; // r9d
  int v5; // r10d
  int v6; // r11d

  while ( a1 )
  {
    if ( !(unsigned int)bIsCursorSprite(a1)
      && *(_QWORD *)(v2 + 128)
      && (*(_DWORD *)v2 & 0x400) == 0
      && *(_DWORD *)(v2 + 80) <= v5
      && *(_DWORD *)(v2 + 84) <= v6
      && *(_DWORD *)(v2 + 88) >= v3
      && *(_DWORD *)(v2 + 92) >= v4 )
    {
      return (struct SPRITE *)v2;
    }
    a1 = *(struct SPRITE **)(v2 + 32);
  }
  return 0LL;
}
