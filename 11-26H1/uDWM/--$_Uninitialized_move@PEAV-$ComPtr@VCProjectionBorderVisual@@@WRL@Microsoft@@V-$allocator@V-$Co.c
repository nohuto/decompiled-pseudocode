/*
 * XREFs of ??$_Uninitialized_move@PEAV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@0@@Z @ 0x18009D848
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18009D388 (--$_Emplace_reallocate@AEBV-$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@-$vector@V-$ComPt.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@0@@Z @ 0x18009D09C (--$_Destroy_range@V-$allocator@V-$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@Y.c)
 */

CBaseObject **__fastcall std::_Uninitialized_move<Microsoft::WRL::ComPtr<CProjectionBorderVisual> *,std::allocator<Microsoft::WRL::ComPtr<CProjectionBorderVisual>>>(
        CBaseObject **a1,
        CBaseObject **a2,
        CBaseObject **a3)
{
  CBaseObject **i; // rax

  for ( i = a1; i != a2; ++i )
  {
    *a3 = 0LL;
    if ( a3 != i )
    {
      *a3 = *i;
      *i = 0LL;
    }
    ++a3;
  }
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CProjectionBorderVisual>>>(a3, a3);
  return a3;
}
