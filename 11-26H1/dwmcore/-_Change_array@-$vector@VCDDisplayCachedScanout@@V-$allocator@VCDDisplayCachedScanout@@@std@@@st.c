/*
 * XREFs of ?_Change_array@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@AEAAXQEAVCDDisplayCachedScanout@@_K1@Z @ 0x18029B34C
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180299DC8 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VCDDisplayCachedScanout@@V-$allocator@VCDD.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanout@@QEAV1@AEAV?$allocator@VCDDisplayCachedScanout@@@0@@Z @ 0x1801D7D30 (--$_Destroy_range@V-$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanou.c)
 */

__int64 __fastcall std::vector<CDDisplayCachedScanout>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  CDDisplayCachedScanout *v6; // rcx
  __int64 result; // rax

  v6 = *(CDDisplayCachedScanout **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<CDDisplayCachedScanout>>(v6, *(CDDisplayCachedScanout **)(a1 + 8));
    std::_Deallocate<16>(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 40 * a3;
  result = 5 * a4;
  *(_QWORD *)(a1 + 16) = a2 + 40 * a4;
  return result;
}
