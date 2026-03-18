/*
 * XREFs of ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x1801CA108
 * Callers:
 *     ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801CA050 (-CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2CCompositionSurfaceBitmap@@KAPEAX_K@Z @ 0x1801118D4 (--2CCompositionSurfaceBitmap@@KAPEAX_K@Z.c)
 *     ?SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x18012C478 (-SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::Create(
        struct CComposition *a1,
        struct CCompositionSurfaceInfo *a2,
        struct CCompositionSurfaceBitmap **a3)
{
  unsigned int v3; // edi
  CCompositionSurfaceBitmap *v7; // rax
  CCompositionSurfaceBitmap *v8; // rbx

  v3 = 0;
  *a3 = 0LL;
  v7 = (CCompositionSurfaceBitmap *)CCompositionSurfaceBitmap::operator new();
  v8 = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 2) = 0;
    *((_QWORD *)v7 + 2) = 0LL;
    *((_QWORD *)v7 + 3) = a1;
    *((_QWORD *)v7 + 4) = 2LL;
    *((_QWORD *)v7 + 6) = 0LL;
    *((_DWORD *)v7 + 10) = 0;
    *(_QWORD *)v7 = &CCompositionSurfaceBitmap::`vftable'{for `CContent'};
    *((_QWORD *)v7 + 9) = &CCompositionSurfaceBitmap::`vftable'{for `IBitmapResource'};
    *((_QWORD *)v7 + 10) = &CCompositionSurfaceBitmap::`vftable'{for `ICompositionSurfaceInfoListener'};
    *((_QWORD *)v7 + 11) = &CCompositionSurfaceBitmap::`vftable'{for `IDirtyRectSource'};
    *((_QWORD *)v7 + 12) = 0LL;
    (*(void (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v7 + 8LL))(v7);
    CCompositionSurfaceBitmap::SetSurfaceInfo(v8, a2);
    *a3 = v8;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1Cu, 0LL);
  }
  return v3;
}
