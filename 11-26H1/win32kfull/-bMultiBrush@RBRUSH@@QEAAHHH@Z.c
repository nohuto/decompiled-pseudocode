/*
 * XREFs of ?bMultiBrush@RBRUSH@@QEAAHHH@Z @ 0x14030A8B4
 * Callers:
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400651E0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x14006719C (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ?BRUSHOBJ_pvAllocRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@K@Z @ 0x14025FCF0 (-BRUSHOBJ_pvAllocRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RBRUSH::bMultiBrush(RBRUSH *this, unsigned int a2, int a3)
{
  unsigned int *v3; // rcx
  unsigned int v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  v3 = (unsigned int *)((char *)this + 8);
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
