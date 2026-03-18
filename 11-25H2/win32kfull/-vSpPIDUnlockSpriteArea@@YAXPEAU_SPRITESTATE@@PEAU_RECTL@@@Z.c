/*
 * XREFs of ?vSpPIDUnlockSpriteArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x14032E59C
 * Callers:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1400DD258 (-bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTIO.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1402160B0 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 * Callees:
 *     ?vUnlockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1400DD8F4 (-vUnlockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?pSpReverseFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x14032C7B8 (-pSpReverseFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 */

void __fastcall vSpPIDUnlockSpriteArea(struct _SPRITESTATE *a1, struct _RECTL *a2)
{
  struct _RECTL *v3; // rsi
  struct SPRITE *v4; // rcx
  struct SPRITE *v5; // rax
  struct SPRITE *v6; // rbx

  v3 = a2;
  v4 = (struct SPRITE *)*((_QWORD *)a1 + 2);
  while ( 1 )
  {
    v5 = pSpReverseFindInZForPidLock(v4, a2);
    v6 = v5;
    if ( !v5 )
      break;
    SURFACE::bUnMap((SURFACE *)(*((_QWORD *)v5 + 16) - 24LL));
    v4 = (struct SPRITE *)*((_QWORD *)v6 + 4);
    a2 = v3;
  }
  SPRITERANGELOCK::vUnlockShared((struct _SPRITESTATE *)((char *)a1 + 120));
}
