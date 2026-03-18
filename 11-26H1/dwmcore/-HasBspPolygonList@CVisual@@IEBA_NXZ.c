/*
 * XREFs of ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x18016C150
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180027C60 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::HasBspPolygonList(CVisual *this)
{
  _DWORD *v1; // rax
  __int64 v3; // rcx
  _BYTE *v4; // r9
  unsigned __int64 v5; // rdx
  unsigned int v6; // r8d

  v1 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v1 & 0x20000000) == 0 )
    return 0;
  v3 = (unsigned int)v1[1];
  v4 = v1 + 2;
  v5 = 0LL;
  v6 = 0;
  if ( (_DWORD)v3 )
  {
    while ( *v4 != 3 )
    {
      ++v6;
      ++v4;
      if ( v6 >= (unsigned int)v3 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    if ( v6 >= (unsigned int)v3 )
      return *(_QWORD *)v5 && *(_DWORD *)(*(_QWORD *)v5 + 24LL);
  }
  v5 = (unsigned __int64)&v1[2 * v6] + ((v3 + 15) & 0xFFFFFFFFFFFFFFF8uLL);
  return *(_QWORD *)v5 && *(_DWORD *)(*(_QWORD *)v5 + 24LL);
}
