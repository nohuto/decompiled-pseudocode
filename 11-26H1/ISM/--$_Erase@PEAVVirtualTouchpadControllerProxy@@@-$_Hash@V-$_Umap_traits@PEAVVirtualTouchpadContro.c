/*
 * XREFs of ??$_Erase@PEAVVirtualTouchpadControllerProxy@@@?$_Hash@V?$_Umap_traits@PEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@V?$_Uhash_compare@PEAVVirtualTouchpadControllerProxy@@U?$hash@PEAVVirtualTouchpadControllerProxy@@@std@@U?$equal_to@PEAVVirtualTouchpadControllerProxy@@@3@@std@@V?$allocator@U?$pair@QEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBQEAVVirtualTouchpadControllerProxy@@@Z @ 0x180137424
 * Callers:
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x180137A44 (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 *     ?OnDisconnected@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180138700 (-OnDisconnected@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??R?$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z @ 0x1800A5514 (--R-$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z.c)
 *     ??$_Find_last@PEAVVirtualTouchpadControllerProxy@@@?$_Hash@V?$_Umap_traits@PEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@V?$_Uhash_compare@PEAVVirtualTouchpadControllerProxy@@U?$hash@PEAVVirtualTouchpadControllerProxy@@@std@@U?$equal_to@PEAVVirtualTouchpadControllerProxy@@@3@@std@@V?$allocator@U?$pair@QEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@@std@@PEAX@std@@@1@AEBQEAVVirtualTouchpadControllerProxy@@_K@Z @ 0x1801374D0 (--$_Find_last@PEAVVirtualTouchpadControllerProxy@@@-$_Hash@V-$_Umap_traits@PEAVVirtualTouchpadCo.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<VirtualTouchpadControllerProxy *,VPTP_ID,std::_Uhash_compare<VirtualTouchpadControllerProxy *,std::hash<VirtualTouchpadControllerProxy *>,std::equal_to<VirtualTouchpadControllerProxy *>>,std::allocator<std::pair<VirtualTouchpadControllerProxy * const,VPTP_ID>>,0>>::_Erase<VirtualTouchpadControllerProxy *>(
        __int64 a1,
        unsigned __int8 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r11
  _QWORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r8
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = std::_Conditionally_enabled_hash<unsigned __int64,1>::operator()(a2);
  v5 = *(_QWORD **)(std::_Hash<std::_Umap_traits<VirtualTouchpadControllerProxy *,VPTP_ID,std::_Uhash_compare<VirtualTouchpadControllerProxy *,std::hash<VirtualTouchpadControllerProxy *>,std::equal_to<VirtualTouchpadControllerProxy *>>,std::allocator<std::pair<VirtualTouchpadControllerProxy * const,VPTP_ID>>,0>>::_Find_last<VirtualTouchpadControllerProxy *>(
                      v3,
                      v11,
                      v4,
                      v2)
                  + 8);
  if ( !v5 )
    return 0LL;
  v6 = qword_180253FA8;
  v7 = 2 * (v2 & qword_180253FC0);
  if ( *(_QWORD **)(qword_180253FA8 + 16 * (v2 & qword_180253FC0) + 8) == v5 )
  {
    if ( *(_QWORD **)(qword_180253FA8 + 16 * (v2 & qword_180253FC0)) == v5 )
    {
      v8 = qword_180253F98;
      *(_QWORD *)(qword_180253FA8 + 16 * (v2 & qword_180253FC0)) = qword_180253F98;
    }
    else
    {
      v8 = v5[1];
    }
    *(_QWORD *)(v6 + 8 * v7 + 8) = v8;
  }
  else if ( *(_QWORD **)(qword_180253FA8 + 16 * (v2 & qword_180253FC0)) == v5 )
  {
    *(_QWORD *)(qword_180253FA8 + 16 * (v2 & qword_180253FC0)) = *v5;
  }
  v9 = *v5;
  --qword_180253FA0;
  *(_QWORD *)v5[1] = v9;
  *(_QWORD *)(v9 + 8) = v5[1];
  std::_Deallocate<16>(v5, (struct std::nothrow_t *)0x20);
  return 1LL;
}
