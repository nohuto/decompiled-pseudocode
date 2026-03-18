/*
 * XREFs of ?bGlyphOutOfBounds@@YAHPEAVESTROBJ@@PEAU_GLYPHPOS@@PEAU_RECTL@@K@Z @ 0x1400D9EF8
 * Callers:
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1400D9F98 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
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
  LONG v9; // edx
  LONG v10; // r9d
  int v12; // eax
  __int64 v13; // rcx
  int v14; // r10d

  v4 = *((_DWORD *)a1 + 58);
  v5 = 0;
  x = a2->ptl.x;
  y = a2->ptl.y;
  if ( (v4 & 0x1400) == 0 )
  {
    if ( a4 )
    {
      v12 = *((_DWORD *)a1 + 2);
      if ( v12 )
      {
        v13 = *((_QWORD *)a1 + 8);
        v14 = a4 * v12;
        if ( (v4 & 0x100) != 0 )
          v14 *= 16;
        x = *(_DWORD *)(v13 + 16) + v14;
        y = *(_DWORD *)(v13 + 20);
      }
    }
  }
  pgdf = a2->pgdf;
  v9 = x + pgdf->pgb->ptlOrigin.x;
  v10 = y + pgdf->pgb->ptlOrigin.y;
  if ( v9 < a3->left
    || v9 + pgdf->pgb->sizlBitmap.cx > a3->right
    || v10 < a3->top
    || v10 + pgdf->pgb->sizlBitmap.cy > a3->bottom )
  {
    return 1;
  }
  return v5;
}
