/*
 * XREFs of ??0RGNMEMOBJ@@QEAA@XZ @ 0x140013C70
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x140013CA0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreCreateRectRgnIndirect @ 0x140015720 (GreCreateRectRgnIndirect.c)
 *     NtGdiCreateRectRgn @ 0x14008EAB0 (NtGdiCreateRectRgn.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1400925B8 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     GreExtCreateRegion @ 0x140096D00 (GreExtCreateRegion.c)
 *     GreCreateRectRgn @ 0x1400EF790 (GreCreateRectRgn.c)
 *     EngCreateClip @ 0x1401298C0 (EngCreateClip.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x140159390 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 *     EngUpdateDeviceSurface @ 0x1401787B0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x14000EE20 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 */

RGNMEMOBJ *__fastcall RGNMEMOBJ::RGNMEMOBJ(RGNMEMOBJ *this)
{
  *(_QWORD *)this = 0LL;
  RGNMEMOBJ::vInitialize(this, 0x70u);
  return this;
}
