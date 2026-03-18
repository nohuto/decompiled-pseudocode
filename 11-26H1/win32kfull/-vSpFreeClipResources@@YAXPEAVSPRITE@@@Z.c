/*
 * XREFs of ?vSpFreeClipResources@@YAXPEAVSPRITE@@@Z @ 0x14008018C
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x14007F220 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x14009BDF8 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpFreeClipResources(struct SPRITE *a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 23);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v2);
  *((_QWORD *)a1 + 23) = 0LL;
}
