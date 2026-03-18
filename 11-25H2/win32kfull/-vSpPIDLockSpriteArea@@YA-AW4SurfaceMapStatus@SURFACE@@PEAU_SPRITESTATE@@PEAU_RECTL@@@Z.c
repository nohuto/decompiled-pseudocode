/*
 * XREFs of ?vSpPIDLockSpriteArea@@YA?AW4SurfaceMapStatus@SURFACE@@PEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x14032E4E8
 * Callers:
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1402317E8 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1400DD838 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1400DD8F4 (-vUnlockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?pSpFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x14032C644 (-pSpFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?pSpReverseFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x14032C7B8 (-pSpReverseFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall vSpPIDLockSpriteArea(__int64 a1, struct _RECTL *a2)
{
  SPRITERANGELOCK *v2; // rbp
  unsigned int v4; // edi
  struct SPRITE *i; // rcx
  struct SPRITE *v7; // rax
  struct SPRITE *v8; // rbx
  struct SPRITE *v9; // rax

  v2 = (SPRITERANGELOCK *)(a1 + 120);
  v4 = 0;
  SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(a1 + 120));
  for ( i = *(struct SPRITE **)(a1 + 8); ; i = (struct SPRITE *)*((_QWORD *)v8 + 3) )
  {
    v7 = pSpFindInZForPidLock(i, a2);
    v8 = v7;
    if ( !v7 )
      break;
    v4 = SURFACE::Map(*((_QWORD *)v7 + 16) - 24LL);
    if ( v4 == 2 )
    {
      while ( 1 )
      {
        v9 = pSpReverseFindInZForPidLock(*((struct SPRITE **)v8 + 4), a2);
        v8 = v9;
        if ( !v9 )
          break;
        SURFACE::bUnMap((SURFACE *)(*((_QWORD *)v9 + 16) - 24LL));
      }
      SPRITERANGELOCK::vUnlockShared(v2);
      return v4;
    }
  }
  return v4;
}
