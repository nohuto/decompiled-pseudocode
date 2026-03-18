/*
 * XREFs of ?IsVisualInAncestorList@CBackdropVisualImage@@QEBA_NPEBVCVisual@@AEBVCVisualTreePath@@@Z @ 0x180167300
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180088B00 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CBackdropVisualImage::IsVisualInAncestorList(
        CBackdropVisualImage *this,
        const struct CVisual *a2,
        const struct CVisualTreePath *a3)
{
  __int64 v3; // r9
  __int64 v4; // r11
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // r10

  v3 = *((_QWORD *)this + 219);
  v4 = *((_QWORD *)this + 220);
  while ( 1 )
  {
    if ( v3 == v4 )
      return 0;
    if ( a2 == *(const struct CVisual **)v3 )
    {
      v6 = *(_QWORD **)(v3 + 8);
      if ( *((_QWORD *)a3 + 1) - *(_QWORD *)a3 == *(_QWORD *)(v3 + 16) - (_QWORD)v6 )
        break;
    }
LABEL_4:
    v3 += 64LL;
  }
  v7 = *(_QWORD *)a3 - (_QWORD)v6;
  while ( 1 )
  {
    v8 = (_QWORD *)((char *)v6 + v7);
    if ( (_QWORD *)((char *)v6 + v7) == *((_QWORD **)a3 + 1) )
      return 1;
    if ( *v8 != *v6 || v8[1] != v6[1] )
      goto LABEL_4;
    v6 += 2;
  }
}
