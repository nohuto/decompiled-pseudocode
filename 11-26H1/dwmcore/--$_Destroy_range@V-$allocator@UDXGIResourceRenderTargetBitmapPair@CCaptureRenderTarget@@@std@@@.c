/*
 * XREFs of ??$_Destroy_range@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@YAXPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU12@AEAV?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@0@@Z @ 0x18009A498
 * Callers:
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x180132A70 (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x1801345AC (--1CCaptureRenderTarget@@MEAA@XZ.c)
 *     ?_Change_array@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@AEAAXQEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@_K1@Z @ 0x1801DEC5C (-_Change_array@-$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V-$allocator@U.c)
 *     ??$_Uninitialized_move@PEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@YAPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU12@0PEAU12@AEAV?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@0@@Z @ 0x1802569AC (--$_Uninitialized_move@PEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V-$allocator.c)
 *     ??1_Reallocation_guard@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@QEAA@XZ @ 0x180256A84 (--1_Reallocation_guard@-$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V-$all.c)
 * Callees:
 *     ??1DXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAA@XZ @ 0x18009A9C4 (--1DXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>>(
        CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *this,
        CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *a2)
{
  CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair::~DXGIResourceRenderTargetBitmapPair(v3);
      v3 = (CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *)((char *)v3 + 24);
    }
    while ( v3 != a2 );
  }
}
