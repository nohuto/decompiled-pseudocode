/*
 * XREFs of ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1401670B8
 * Callers:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x140069BE4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14006A21C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x140166D28 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1401863C4 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1403179A8 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 * Callees:
 *     ?bIsCursorSprite@@YAHPEAVSPRITE@@@Z @ 0x14006A1F0 (-bIsCursorSprite@@YAHPEAVSPRITE@@@Z.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x140296C88 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 *     ?vLock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1403159BC (-vLock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

struct SPRITE *__fastcall pSpFindInZ(struct SPRITE *a1, struct _RECTL *a2)
{
  LONG left; // esi
  LONG top; // ebp
  LONG right; // r14d
  LONG bottom; // r15d
  int IsCursorSprite; // edi

  left = a2->left;
  top = a2->top;
  right = a2->right;
  bottom = a2->bottom;
  while ( 1 )
  {
    if ( !a1 )
      return 0LL;
    IsCursorSprite = bIsCursorSprite(a1);
    if ( IsCursorSprite == 1 )
      SINGLEREADERLOCK::vLock((struct SPRITE *)((char *)a1 + 248));
    if ( (*(_DWORD *)a1 & 0x400) == 0
      && *((_DWORD *)a1 + 20) <= right
      && *((_DWORD *)a1 + 21) <= bottom
      && *((_DWORD *)a1 + 22) >= left
      && *((_DWORD *)a1 + 23) >= top )
    {
      break;
    }
    if ( IsCursorSprite == 1 )
      SINGLEREADERLOCK::vUnlock((struct SPRITE *)((char *)a1 + 248));
    a1 = (struct SPRITE *)*((_QWORD *)a1 + 3);
  }
  return a1;
}
