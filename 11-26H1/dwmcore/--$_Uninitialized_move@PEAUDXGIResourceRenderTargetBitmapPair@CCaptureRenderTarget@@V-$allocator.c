/*
 * XREFs of ??$_Uninitialized_move@PEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@YAPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU12@0PEAU12@AEAV?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@0@@Z @ 0x1802569AC
 * Callers:
 *     ??$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@AEAAPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU23@AEBU23@@Z @ 0x18025684C (--$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@-$vector@UD.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@YAXPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU12@AEAV?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@0@@Z @ 0x18009A498 (--$_Destroy_range@V-$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@.c)
 */

CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *__fastcall std::_Uninitialized_move<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *>(
        __int64 *a1,
        __int64 *a2,
        CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *a3)
{
  __int64 *v4; // r8
  char *v5; // r9
  __int64 v6; // rax
  __int64 v7; // rcx

  if ( a1 != a2 )
  {
    v4 = a1 + 2;
    v5 = (char *)(a3 - (CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *)a1);
    do
    {
      *(_QWORD *)a3 = *(v4 - 2);
      a3 = (CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *)((char *)a3 + 24);
      v6 = *(v4 - 1);
      *(v4 - 1) = 0LL;
      *(__int64 *)((char *)v4 + (_QWORD)v5 - 8) = v6;
      v7 = *v4;
      *v4 = 0LL;
      *(__int64 *)((char *)v4 + (_QWORD)v5) = v7;
      v4 += 3;
    }
    while ( v4 - 2 != a2 );
  }
  std::_Destroy_range<std::allocator<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>>(a3, a3);
  return a3;
}
