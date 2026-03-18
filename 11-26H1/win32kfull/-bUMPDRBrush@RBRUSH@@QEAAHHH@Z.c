/*
 * XREFs of ?bUMPDRBrush@RBRUSH@@QEAAHHH@Z @ 0x14030A900
 * Callers:
 *     ?BRUSHOBJ_pvAllocRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@K@Z @ 0x14025FCF0 (-BRUSHOBJ_pvAllocRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RBRUSH::bUMPDRBrush(RBRUSH *this)
{
  unsigned int v2; // [rsp+50h] [rbp+18h] BYREF

  v2 = 1;
  GreProbeAndWriteToUntrustedVa((char *)this + 12, 4uLL, &v2, 4uLL, 1uLL);
  return v2;
}
