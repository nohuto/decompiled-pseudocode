/*
 * XREFs of ??$_Uninitialized_move@PEAUMipLevelSurface@CCompositionMipmapSurface@@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@YAPEAUMipLevelSurface@CCompositionMipmapSurface@@QEAU12@0PEAU12@AEAV?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@0@@Z @ 0x18026ACC4
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UMipLevelSurface@CCompositionMipmapSurface@@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18026ABC8 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UMipLevelSurface@CCompositionMipmapSurface.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@YAXPEAUMipLevelSurface@CCompositionMipmapSurface@@QEAU12@AEAV?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@0@@Z @ 0x18026AB90 (--$_Destroy_range@V-$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@YAXPEAUMi.c)
 */

__int64 *__fastcall std::_Uninitialized_move<CCompositionMipmapSurface::MipLevelSurface *>(
        _BYTE *a1,
        _BYTE *a2,
        __int64 *a3)
{
  _BYTE *v4; // r8
  char *v5; // r9
  __int64 v6; // rax

  if ( a1 != a2 )
  {
    v4 = a1 + 24;
    v5 = (char *)((char *)a3 - a1);
    do
    {
      v6 = *((_QWORD *)v4 - 3);
      *((_QWORD *)v4 - 3) = 0LL;
      *a3 = v6;
      a3 += 4;
      *(_OWORD *)&v4[(_QWORD)v5 - 16] = *((_OWORD *)v4 - 1);
      v4[(_QWORD)v5] = *v4;
      v4 += 32;
    }
    while ( v4 - 24 != a2 );
  }
  std::_Destroy_range<std::allocator<CCompositionMipmapSurface::MipLevelSurface>>(a3, a3);
  return a3;
}
