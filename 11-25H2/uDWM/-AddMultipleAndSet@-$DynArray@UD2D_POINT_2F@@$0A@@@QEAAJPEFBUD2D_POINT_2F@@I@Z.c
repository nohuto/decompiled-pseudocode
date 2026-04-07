/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UD2D_POINT_2F@@$0A@@@QEAAJPEFBUD2D_POINT_2F@@I@Z @ 0x18002F8BC
 * Callers:
 *     ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UD2D_POINT_3F@@$0A@@@PEAV?$DynArray@UD2D_POINT_2F@@$0A@@@PEAV?$DynArray@I$0A@@@@Z @ 0x18002E8B0 (-TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEB.c)
 *     ?GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z @ 0x1800CE48C (-GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1800EB118 (memcpy_0.c)
 */

__int64 __fastcall DynArray<D2D_POINT_2F,0>::AddMultipleAndSet(__int64 a1, const void *a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v8; // eax

  v3 = *(_DWORD *)(a1 + 24);
  v5 = v3 + a3;
  if ( v3 + a3 < v3 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB3u, 0LL);
  }
  else
  {
    v6 = 0;
    if ( v5 > *(_DWORD *)(a1 + 20) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 8, a3, a2);
      v6 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xBEu, 0LL);
    }
    else
    {
      memcpy_0((void *)(*(_QWORD *)a1 + 8LL * v3), a2, 8LL * a3);
      *(_DWORD *)(a1 + 24) = v5;
    }
  }
  return v6;
}
