/*
 * XREFs of ??1?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEAA@XZ @ 0x18009E8C4
 * Callers:
 *     ??1?$vector_facade@PEBXV?$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@QEAA@XZ @ 0x18009E8EC (--1-$vector_facade@PEBXV-$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@QEAA@XZ.c)
 *     ??1?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEAA@XZ @ 0x1800AD3A4 (--1-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QE.c)
 *     ??1?$vector_facade@PEAVCCompositionSurfaceBitmap@@V?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@@detail@@QEAA@XZ @ 0x1800DF9A0 (--1-$vector_facade@PEAVCCompositionSurfaceBitmap@@V-$pointer_buffer_impl@PEAVCCompositionSurface.c)
 *     ??1?$vector_facade@PEAVCVisual@@V?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@QEAA@XZ @ 0x1801A9D00 (--1-$vector_facade@PEAVCVisual@@V-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@QEAA@X.c)
 *     ??1?$vector_facade@PEAVCGdiSpriteBitmap@@V?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@@detail@@QEAA@XZ @ 0x1801AA684 (--1-$vector_facade@PEAVCGdiSpriteBitmap@@V-$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detai.c)
 *     ??1?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@QEAA@XZ @ 0x1801AF40C (--1-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 */

void __fastcall detail::pointer_buffer_impl<CResource *,0>::~pointer_buffer_impl<CResource *,0>(__int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( (v1 & 3) == 1 )
    operator delete((void *)((v1 & 0xFFFFFFFFFFFFFFFCuLL) - 16));
}
