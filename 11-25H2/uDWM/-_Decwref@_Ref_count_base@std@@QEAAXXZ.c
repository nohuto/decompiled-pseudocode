/*
 * XREFs of ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18003D79C
 * Callers:
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x18003A7B4 (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 *     ??4?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18003BAB0 (--4-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18003BB18 (-CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4.c)
 *     ??1?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAA@XZ @ 0x18003D678 (--1-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAA@XZ.c)
 *     ??1CWindowBorder@@UEAA@XZ @ 0x18003D70C (--1CWindowBorder@@UEAA@XZ.c)
 *     ?GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18003E3B0 (-GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4Sha.c)
 *     ??1CCachedBorderBrush@CWindowBorder@@QEAA@XZ @ 0x18003E834 (--1CCachedBorderBrush@CWindowBorder@@QEAA@XZ.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18006D584 (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?ValidateVisual@CWindowBorder@@UEAAJXZ @ 0x180078FC0 (-ValidateVisual@CWindowBorder@@UEAAJXZ.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@@std@@@?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18007CD58 (--$_Freenode@V-$allocator@U-$_List_node@V-$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEA.c)
 *     ?OnGraphicsDeviceLost@CWindowBorder@@QEAAXXZ @ 0x1800E17AC (-OnGraphicsDeviceLost@CWindowBorder@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::_Ref_count_base::_Decwref(std::_Ref_count_base *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)this + 8LL))(this);
}
