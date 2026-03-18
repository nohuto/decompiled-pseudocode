/*
 * XREFs of ??1_Reallocation_guard@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@QEAA@XZ @ 0x18025F4CC
 * Callers:
 *     ??$_Reallocate@$0A@@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@AEAAXAEA_K@Z @ 0x18014850C (--$_Reallocate@$0A@@-$vector@U_D3D11_PARAMETER_DESC@@V-$allocator@U_D3D11_PARAMETER_DESC@@@std@@.c)
 *     ??$_Emplace_reallocate@AEBVCShapeRenderTask@@@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEAAPEAVCShapeRenderTask@@QEAV2@AEBV2@@Z @ 0x18019B418 (--$_Emplace_reallocate@AEBVCShapeRenderTask@@@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRe.c)
 *     ??$_Emplace_reallocate@AEBU_D3D11_PARAMETER_DESC@@@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@AEAAPEAU_D3D11_PARAMETER_DESC@@QEAU2@AEBU2@@Z @ 0x18025F350 (--$_Emplace_reallocate@AEBU_D3D11_PARAMETER_DESC@@@-$vector@U_D3D11_PARAMETER_DESC@@V-$allocator.c)
 *     ??$_Insert_counted_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@PEAULayoutData@CContent@@_K@Z @ 0x18026DB18 (--$_Insert_counted_range@PEAULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@U.c)
 *     ??$_Emplace_reallocate@AEBULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAPEAULayoutData@CContent@@QEAU23@AEBU23@@Z @ 0x18027D7D0 (--$_Emplace_reallocate@AEBULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULa.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<_D3D11_PARAMETER_DESC>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
    std::_Deallocate<16>(*(void **)(a1 + 8), 56LL * *(_QWORD *)(a1 + 16));
}
