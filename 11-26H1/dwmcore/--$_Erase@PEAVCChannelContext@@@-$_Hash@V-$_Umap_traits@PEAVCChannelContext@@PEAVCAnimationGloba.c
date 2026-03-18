/*
 * XREFs of ??$_Erase@PEAVCChannelContext@@@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@V?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBQEAVCChannelContext@@@Z @ 0x1802618C0
 * Callers:
 *     ?DetachFromChannel@CAnimationGlobalConfiguration@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180269AB0 (-DetachFromChannel@CAnimationGlobalConfiguration@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Find_last@PEAVCChannelContext@@@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@V?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@PEAX@std@@@1@AEBQEAVCChannelContext@@_K@Z @ 0x1801817D0 (--$_Find_last@PEAVCChannelContext@@@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationG.c)
 *     ??R?$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z @ 0x180211A54 (--R-$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CChannelContext *,CAnimationGlobalConfiguration *,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>>,0>>::_Erase<CChannelContext *>(
        _QWORD *a1,
        unsigned __int8 *a2)
{
  __int64 v3; // rax
  _QWORD *v4; // r11
  _QWORD *v5; // rcx
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = std::_Conditionally_enabled_hash<CBaseExpression *,1>::operator()(a2);
  v5 = (_QWORD *)std::_Hash<std::_Umap_traits<CChannelContext *,CAnimationGlobalConfiguration *,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>>,0>>::_Find_last<CChannelContext *>(
                   a1,
                   v12,
                   v4,
                   v3)[1];
  if ( !v5 )
    return 0LL;
  v7 = a1[3];
  v8 = 2 * (v6 & a1[6]);
  if ( *(_QWORD **)(v7 + 16 * (v6 & a1[6]) + 8) == v5 )
  {
    if ( *(_QWORD **)(v7 + 16 * (v6 & a1[6])) == v5 )
    {
      v9 = a1[1];
      *(_QWORD *)(v7 + 16 * (v6 & a1[6])) = v9;
    }
    else
    {
      v9 = v5[1];
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(_QWORD **)(v7 + 16 * (v6 & a1[6])) == v5 )
  {
    *(_QWORD *)(v7 + 16 * (v6 & a1[6])) = *v5;
  }
  v10 = *v5;
  --a1[2];
  *(_QWORD *)v5[1] = v10;
  *(_QWORD *)(v10 + 8) = v5[1];
  std::_Deallocate<16>(v5, 0x20uLL);
  return 1LL;
}
