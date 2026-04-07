/*
 * XREFs of ?_Change_array@?$vector@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@_K1@Z @ 0x1800A4B60
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18009D388 (--$_Emplace_reallocate@AEBV-$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@-$vector@V-$ComPt.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@0@@Z @ 0x18009D09C (--$_Destroy_range@V-$allocator@V-$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@Y.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<CProjectionBorderVisual>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  CBaseObject **v6; // rcx
  __int64 result; // rax

  v6 = *(CBaseObject ***)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CProjectionBorderVisual>>>(v6, *(CBaseObject ***)(a1 + 8));
    std::_Deallocate<16>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
