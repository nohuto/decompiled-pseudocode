/*
 * XREFs of ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18000D064
 * Callers:
 *     ?CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAVCBorderSprite@@@Z @ 0x18000BAA4 (-CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAVCBorderSprite@@@Z.c)
 *     ??4?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000BD84 (--4-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18000C1A4 (--4-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18000C210 (-GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4Sha.c)
 *     ?erase@?$list@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@V?$allocator@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@std@@@std@@@2@0@Z @ 0x18000C4F8 (-erase@-$list@V-$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@V-$allocator@V-$weak_ptr@VCCa.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@@std@@@?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18000C584 (--$_Freenode@V-$allocator@U-$_List_node@V-$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEA.c)
 *     ??1?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAA@XZ @ 0x18000D024 (--1-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAA@XZ.c)
 *     ?CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18000D360 (-CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4.c)
 *     ??1CCachedBorderBrush@CWindowBorder@@QEAA@XZ @ 0x1800501A0 (--1CCachedBorderBrush@CWindowBorder@@QEAA@XZ.c)
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::weak_ptr_CWindowBorder::CCachedBorderBrush_________CWindowBorder::CCachedBorderBrush::_CCachedBorderBrush_::_5_::_lambda_1___ @ 0x180050230 (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--weak_ptr_CWindowB.c)
 *     ??1CBorderSprite@@UEAA@XZ @ 0x180071BBC (--1CBorderSprite@@UEAA@XZ.c)
 *     ??$_Set_ptr_rep_and_enable_shared@VCCachedBorderBrush@CWindowBorder@@@?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@AEAAXQEAVCCachedBorderBrush@CWindowBorder@@QEAV_Ref_count_base@1@@Z @ 0x18007A4B8 (--$_Set_ptr_rep_and_enable_shared@VCCachedBorderBrush@CWindowBorder@@@-$shared_ptr@VCCachedBorde.c)
 *     ?OnGraphicsDeviceLost@CWindowBorder@@UEAAXXZ @ 0x1800DE660 (-OnGraphicsDeviceLost@CWindowBorder@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::_Ref_count_base::_Decwref(std::_Ref_count_base *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)this + 8LL))(this);
}
