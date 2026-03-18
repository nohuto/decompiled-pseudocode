/*
 * XREFs of ?vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x14030229C
 * Callers:
 *     GreClientRgnUpdated @ 0x14001B35C (GreClientRgnUpdated.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x140301A98 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x140302010 (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 *     GreClientRgnDone @ 0x140302864 (GreClientRgnDone.c)
 *     GreDeleteWnd @ 0x140302960 (GreDeleteWnd.c)
 *     GreSetClientRgn @ 0x140302BC8 (GreSetClientRgn.c)
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x14032F540 (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall TRACKOBJ::vUpdateDrv(TRACKOBJ *this, struct EWNDOBJ *a2, unsigned int a3)
{
  (*((void (__fastcall **)(struct EWNDOBJ *, _QWORD))this + 5))(a2, a3);
}
