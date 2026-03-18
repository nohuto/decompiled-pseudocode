/*
 * XREFs of ?StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1401962A0
 * Callers:
 *     <none>
 * Callees:
 *     EngFreeMem @ 0x140044080 (EngFreeMem.c)
 *     EngDeletePalette @ 0x1400C2C10 (EngDeletePalette.c)
 */

void __fastcall StubDispDisablePDEV(_QWORD *pv)
{
  HPALETTE v2; // rcx

  v2 = (HPALETTE)pv[3];
  if ( v2 )
    EngDeletePalette(v2);
  EngFreeMem(pv);
}
