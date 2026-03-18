/*
 * XREFs of ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x1800AF130
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180027C60 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x1800AF084 (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x1800CF1A8 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x1800CF688 (-GetBspPolygonListCount@CVisual@@IEBAIXZ.c)
 *     ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z @ 0x1801C7630 (-AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetBspPolygonList(__int64 a1)
{
  _DWORD *v1; // rax
  __int64 v3; // rdx
  _BYTE *v4; // r9
  unsigned __int64 v5; // rcx
  unsigned int v6; // r8d

  v1 = *(_DWORD **)(a1 + 224);
  if ( (*v1 & 0x20000000) == 0 )
    return 0LL;
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
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    if ( v6 >= (unsigned int)v3 )
      return *(_QWORD *)v5;
  }
  v5 = (unsigned __int64)&v1[2 * v6] + ((v3 + 15) & 0xFFFFFFFFFFFFFFF8uLL);
  return *(_QWORD *)v5;
}
