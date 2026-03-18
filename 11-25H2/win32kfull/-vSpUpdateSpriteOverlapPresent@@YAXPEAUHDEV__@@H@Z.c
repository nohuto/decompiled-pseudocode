/*
 * XREFs of ?vSpUpdateSpriteOverlapPresent@@YAXPEAUHDEV__@@H@Z @ 0x1400DD220
 * Callers:
 *     GreDeleteSpriteOverlapPresent @ 0x1400DB054 (GreDeleteSpriteOverlapPresent.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1400DE2E0 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x14032A3C0 (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400DCB5C (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 */

void __fastcall vSpUpdateSpriteOverlapPresent(HDEV a1, int a2)
{
  Gre::Base::Globals((Gre::Base *)a1);
  vSpComputeNoPresentRegion((struct _SPRITESTATE *)(a1 + 20), a2);
}
