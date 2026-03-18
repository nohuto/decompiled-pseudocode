/*
 * XREFs of ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1400D6A9C
 * Callers:
 *     NtGdiEngBitBlt @ 0x1400D5EE0 (NtGdiEngBitBlt.c)
 *     NtGdiEngStretchBlt @ 0x140263F90 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1402644B0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngAlphaBlend @ 0x14033AF40 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCopyBits @ 0x14033B220 (NtGdiEngCopyBits.c)
 *     NtGdiEngPlgBlt @ 0x14033BF20 (NtGdiEngPlgBlt.c)
 *     NtGdiEngTransparentBlt @ 0x14033C780 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bCheckXlate(struct _SURFOBJ *a1, struct _XLATEOBJ *a2)
{
  unsigned int v2; // r8d
  ULONG v4; // ecx
  ULONG v5; // ecx
  bool v6; // zf

  v2 = 1;
  if ( !a1 || !a2 || (a2->flXlate & 1) != 0 )
    return v2;
  v4 = a1->iBitmapFormat - 1;
  if ( !v4 )
  {
    v2 = 0;
    v6 = a2->cEntries == 2;
    goto LABEL_11;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v2 = 0;
    v6 = ((a2->cEntries - 8) & 0xFFFFFFF7) == 0;
LABEL_11:
    LOBYTE(v2) = v6;
    return v2;
  }
  if ( v5 == 1 )
    return a2->cEntries <= 0x100;
  return v2;
}
