/*
 * XREFs of ?_Calculate_growth@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEBA_K_K@Z @ 0x18018FCBC
 * Callers:
 *     ??$_Emplace_reallocate@AEBVCShapeRenderTask@@@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEAAPEAVCShapeRenderTask@@QEAV2@AEBV2@@Z @ 0x18019B418 (--$_Emplace_reallocate@AEBVCShapeRenderTask@@@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRe.c)
 *     ??$_Insert_counted_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@PEAULayoutData@CContent@@_K@Z @ 0x18026DB18 (--$_Insert_counted_range@PEAULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@U.c)
 *     ?_Clear_and_reserve_geometric@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAX_K@Z @ 0x18026E810 (-_Clear_and_reserve_geometric@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@.c)
 *     ??$_Emplace_reallocate@AEBULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAPEAULayoutData@CContent@@QEAU23@AEBU23@@Z @ 0x18027D7D0 (--$_Emplace_reallocate@AEBULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<CContent::LayoutData>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 result; // rax
  unsigned __int64 v4; // r9

  v2 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(a1[2] - *a1) >> 3);
  result = 0x492492492492492LL;
  v4 = v2 >> 1;
  if ( v2 <= 0x492492492492492LL - (v2 >> 1) )
  {
    result = v4 + v2;
    if ( v4 + v2 < a2 )
      return a2;
  }
  return result;
}
