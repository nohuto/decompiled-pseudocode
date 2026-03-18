/*
 * XREFs of ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1400F6830
 * Callers:
 *     NtGdiEngBitBlt @ 0x1400F4B10 (NtGdiEngBitBlt.c)
 *     NtGdiEngAlphaBlend @ 0x14032C760 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCopyBits @ 0x14032CB40 (NtGdiEngCopyBits.c)
 *     NtGdiEngPlgBlt @ 0x14032D980 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x14032DD50 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x14032E1F0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngTransparentBlt @ 0x14032F2F0 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bCheckXlate(struct _SURFOBJ *a1, struct _XLATEOBJ *a2)
{
  unsigned int v2; // r8d
  ULONG v4; // ecx
  ULONG v5; // ecx
  ULONG cEntries; // eax

  v2 = 1;
  if ( a1 && a2 && (a2->flXlate & 1) == 0 )
  {
    v4 = a1->iBitmapFormat - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 1 )
          return a2->cEntries <= 0x100;
      }
      else
      {
        cEntries = a2->cEntries;
        if ( cEntries != 16 )
          return cEntries == 8;
      }
    }
    else
    {
      return a2->cEntries == 2;
    }
  }
  return v2;
}
