/*
 * XREFs of ?ulSizeSet@RBRUSH@@QEAAKKH@Z @ 0x14030A98C
 * Callers:
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x140180DF0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     BRUSHOBJ_pvAllocRbrush @ 0x140184EF0 (BRUSHOBJ_pvAllocRbrush.c)
 *     ?BRUSHOBJ_pvAllocRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@K@Z @ 0x14025FCF0 (-BRUSHOBJ_pvAllocRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RBRUSH::ulSizeSet(RBRUSH *this, unsigned int a2, int a3)
{
  unsigned int *v3; // rcx
  unsigned int v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  v3 = (unsigned int *)((char *)this + 4);
  if ( a3 )
  {
    GreProbeAndWriteToUntrustedVa(v3, 4uLL, &v5, 4uLL, 1uLL);
    return v5;
  }
  else
  {
    *v3 = a2;
  }
  return a2;
}
