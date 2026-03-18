/*
 * XREFs of ??0?$SEMOBJ@$0CC@@@QEAA@PEAVEWNDOBJ@@@Z @ 0x140318F6C
 * Callers:
 *     GreClientRgnUpdated @ 0x140013A14 (GreClientRgnUpdated.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x14031912C (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x140319690 (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 *     GreDeleteWnd @ 0x14031A0A0 (GreDeleteWnd.c)
 *     GreSetClientRgn @ 0x14031A314 (GreSetClientRgn.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0CC@@@YAXXZ @ 0x14028B11C (--$GrepAcquireLockValidate@$0CC@@@YAXXZ.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<34>::SEMOBJ<34>(HSEMAPHORE *a1, __int64 a2)
{
  HSEMAPHORE v3; // rcx

  v3 = *(HSEMAPHORE *)(a2 + 200);
  *a1 = v3;
  GreAcquireSemaphoreInternal(v3);
  GrepAcquireLockValidate<34>();
  return a1;
}
