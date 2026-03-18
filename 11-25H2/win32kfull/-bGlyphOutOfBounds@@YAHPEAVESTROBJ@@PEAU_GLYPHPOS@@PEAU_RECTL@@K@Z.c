/*
 * XREFs of ?bGlyphOutOfBounds@@YAHPEAVESTROBJ@@PEAU_GLYPHPOS@@PEAU_RECTL@@K@Z @ 0x1400A90EC
 * Callers:
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1400A9A18 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bGlyphOutOfBounds(struct ESTROBJ *a1, struct _GLYPHPOS *a2, struct _RECTL *a3, int a4)
{
  int v4; // edi
  unsigned int v5; // r11d
  LONG x; // r10d
  LONG y; // ebx
  GLYPHDEF *pgdf; // rax
  GLYPHBITS *pgb; // rdx
  LONG v10; // ecx
  LONG v11; // r9d
  int v13; // eax
  __int64 v14; // rcx
  int v15; // r10d

  v4 = *((_DWORD *)a1 + 58);
  v5 = 0;
  x = a2->ptl.x;
  y = a2->ptl.y;
  if ( (v4 & 0x1400) == 0 )
  {
    if ( a4 )
    {
      v13 = *((_DWORD *)a1 + 2);
      if ( v13 )
      {
        v14 = *((_QWORD *)a1 + 8);
        v15 = a4 * v13;
        if ( (v4 & 0x100) != 0 )
          v15 *= 16;
        x = *(_DWORD *)(v14 + 16) + v15;
        y = *(_DWORD *)(v14 + 20);
      }
    }
  }
  pgdf = a2->pgdf;
  pgb = pgdf->pgb;
  v10 = x + pgdf->pgb->ptlOrigin.x;
  v11 = y + pgdf->pgb->ptlOrigin.y;
  if ( v10 < a3->left || pgb->sizlBitmap.cx + v10 > a3->right || v11 < a3->top || v11 + pgb->sizlBitmap.cy > a3->bottom )
    return 1;
  return v5;
}
