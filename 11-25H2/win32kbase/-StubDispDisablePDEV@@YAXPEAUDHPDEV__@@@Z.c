/*
 * XREFs of ?StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1401D29F0
 * Callers:
 *     <none>
 * Callees:
 *     EngFreeMem @ 0x14001D0A0 (EngFreeMem.c)
 *     EngDeletePalette @ 0x140117250 (EngDeletePalette.c)
 */

void __fastcall StubDispDisablePDEV(_QWORD *pv)
{
  HPALETTE v2; // rcx

  v2 = (HPALETTE)pv[3];
  if ( v2 )
    EngDeletePalette(v2);
  EngFreeMem(pv);
}
