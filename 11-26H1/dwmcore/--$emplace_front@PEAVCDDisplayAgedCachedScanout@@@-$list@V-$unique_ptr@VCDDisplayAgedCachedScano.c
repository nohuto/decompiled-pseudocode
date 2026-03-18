/*
 * XREFs of ??$emplace_front@PEAVCDDisplayAgedCachedScanout@@@?$list@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@V?$allocator@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@1@$$QEAPEAVCDDisplayAgedCachedScanout@@@Z @ 0x18029A210
 * Callers:
 *     ?FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIW4ScanoutScaleMode@1@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180035C58 (-FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIW4Sc.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1801AE9F8 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801CB898 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@V-$unique_ptr@VCDDisplayAgedCachedScanout.c)
 */

_QWORD *__fastcall std::list<std::unique_ptr<CDDisplayAgedCachedScanout>>::emplace_front<CDDisplayAgedCachedScanout *>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 v4; // rsi
  SIZE_T size_of; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = **a1;
  if ( a1[1] == (__int64 *)0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("list too long");
  v12[0] = a1;
  size_of = std::_Get_size_of_n<24>(1uLL);
  v7 = std::_Allocate<16,std::_Default_allocate_traits>(size_of, v6);
  v8 = *a2;
  v9 = v7;
  v12[1] = 0LL;
  v7[2] = v8;
  a1[1] = (__int64 *)((char *)a1[1] + 1);
  v10 = *(_QWORD **)(v4 + 8);
  *v7 = v4;
  v7[1] = v10;
  *(_QWORD *)(v4 + 8) = v7;
  *v10 = v7;
  std::_List_node_emplace_op2<std::allocator<std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>>>((__int64)v12);
  return v9 + 2;
}
