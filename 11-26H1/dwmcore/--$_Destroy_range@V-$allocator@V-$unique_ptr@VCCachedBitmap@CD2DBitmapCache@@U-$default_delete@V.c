/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@0@@Z @ 0x1801A4414
 * Callers:
 *     ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x1800F4DDC (-ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x1800F51D4 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ??1CD2DBitmapCache@@MEAA@XZ @ 0x1800F55C8 (--1CD2DBitmapCache@@MEAA@XZ.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@2@_K1@Z @ 0x1801A435C (-_Change_array@-$vector@V-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@VCCached.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@0@@Z @ 0x1801A43D4 (--$_Uninitialized_move@PEAV-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@VCCach.c)
 *     ??1_Reallocation_guard@?$vector@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1802B0B94 (--1_Reallocation_guard@-$vector@V-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@.c)
 * Callees:
 *     ??1?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@QEAA@XZ @ 0x1800F5824 (--1-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@VCCachedBitmap@CD2DBitmapCache.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = std::unique_ptr<CD2DBitmapCache::CCachedBitmap>::~unique_ptr<CD2DBitmapCache::CCachedBitmap>(v3++);
    while ( v3 != a2 );
  }
  return result;
}
