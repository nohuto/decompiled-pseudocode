/*
 * XREFs of ?_Change_array@?$vector@PEAVCBaseExpression@@V?$allocator@PEAVCBaseExpression@@@std@@@std@@AEAAXQEAPEAVCBaseExpression@@_K1@Z @ 0x1801BD56C
 * Callers:
 *     ??$_Insert_counted_range@PEAPEAVCBaseExpression@@@?$vector@PEAVCBaseExpression@@V?$allocator@PEAVCBaseExpression@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCBaseExpression@@@std@@@std@@@1@PEAPEAVCBaseExpression@@_K@Z @ 0x18019F4C4 (--$_Insert_counted_range@PEAPEAVCBaseExpression@@@-$vector@PEAVCBaseExpression@@V-$allocator@PEA.c)
 *     ??$_Emplace_reallocate@AEBQEAVCPositionedLight@@@?$vector@PEAVCPositionedLight@@V?$allocator@PEAVCPositionedLight@@@std@@@std@@AEAAPEAPEAVCPositionedLight@@QEAPEAV2@AEBQEAV2@@Z @ 0x18023200C (--$_Emplace_reallocate@AEBQEAVCPositionedLight@@@-$vector@PEAVCPositionedLight@@V-$allocator@PEA.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@PEAUISpectreLightNode@@V?$allocator@PEAUISpectreLightNode@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1802345D4 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@PEAUISpectreLightNode@@V-$allocator@PEAUIS.c)
 *     ??$_Emplace_reallocate@PEAVCBrush@@@?$vector@PEAVCBrush@@V?$allocator@PEAVCBrush@@@std@@@std@@AEAAPEAPEAVCBrush@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x18026DA04 (--$_Emplace_reallocate@PEAVCBrush@@@-$vector@PEAVCBrush@@V-$allocator@PEAVCBrush@@@std@@@std@@AE.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CBaseExpression *>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
