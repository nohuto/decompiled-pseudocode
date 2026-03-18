/*
 * XREFs of ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1400F6A40
 * Callers:
 *     NtGdiEngBitBlt @ 0x1400F4B10 (NtGdiEngBitBlt.c)
 *     NtGdiEngPlgBlt @ 0x14032D980 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x14032DD50 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x14032E1F0 (NtGdiEngStretchBltROP.c)
 * Callees:
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x14032C35C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 __fastcall bCheckMask(struct _SURFOBJ *a1, struct _RECTL *a2)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 )
  {
    if ( a1->iBitmapFormat == 1 )
      return bCheckSurfaceRect(a1, a2, 0LL);
    else
      return 0LL;
  }
  return result;
}
