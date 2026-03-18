/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@V?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1801D37DC
 * Callers:
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@V?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18021178C (--1_Clear_guard@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??R?$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z @ 0x180211A54 (--R-$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z.c)
 */

unsigned __int8 *__fastcall std::_Hash<std::_Umap_traits<CChannelContext *,CAnimationGlobalConfiguration *,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  unsigned __int8 *v6; // rdi
  __int64 v7; // rbp
  unsigned __int8 **v8; // r14
  __int64 v9; // rax
  __int64 v10; // r12
  unsigned __int8 *v11; // rcx
  unsigned __int8 *v12; // rbx
  unsigned __int8 **v13; // rax
  __int64 v14; // rax
  __int64 v15; // r15
  unsigned __int8 *v16; // r12
  unsigned __int8 *v17; // rcx
  unsigned __int8 *v18; // rbx
  __int64 v20; // [rsp+68h] [rbp+10h]
  unsigned __int8 **v21; // [rsp+70h] [rbp+18h]
  unsigned __int8 *v22; // [rsp+78h] [rbp+20h]

  if ( (unsigned __int8 *)a2 != a3 )
  {
    v6 = (unsigned __int8 *)a2;
    v7 = a1[3];
    v8 = *(unsigned __int8 ***)(a2 + 8);
    v21 = (unsigned __int8 **)a1[1];
    v9 = std::_Conditionally_enabled_hash<CBaseExpression *,1>::operator()((unsigned __int8 *)(a2 + 16));
    v10 = 2 * (a1[6] & v9);
    v20 = *(_QWORD *)(v7 + 16 * (a1[6] & v9));
    v22 = *(unsigned __int8 **)(v7 + 16 * (a1[6] & v9) + 8);
    while ( 1 )
    {
      v11 = v6;
      v12 = v6;
      v6 = *(unsigned __int8 **)v6;
      std::_Deallocate<16>(v11, 0x20uLL);
      --a1[2];
      if ( v12 == v22 )
        break;
      if ( v6 == a3 )
      {
        if ( v20 == a2 )
          *(_QWORD *)(v7 + 8 * v10) = v6;
        goto LABEL_16;
      }
    }
    if ( v20 == a2 )
    {
      *(_QWORD *)(v7 + 8 * v10) = v21;
      v13 = v21;
    }
    else
    {
      v13 = v8;
    }
    *(_QWORD *)(v7 + 8 * v10 + 8) = v13;
    while ( v6 != a3 )
    {
      v14 = std::_Conditionally_enabled_hash<CBaseExpression *,1>::operator()(v6 + 16);
      v15 = 2 * (a1[6] & v14);
      v16 = *(unsigned __int8 **)(v7 + 16 * (a1[6] & v14) + 8);
      while ( 1 )
      {
        v17 = v6;
        v18 = v6;
        v6 = *(unsigned __int8 **)v6;
        std::_Deallocate<16>(v17, 0x20uLL);
        --a1[2];
        if ( v18 == v16 )
          break;
        if ( v6 == a3 )
        {
          *(_QWORD *)(v7 + 8 * v15) = v6;
          goto LABEL_16;
        }
      }
      *(_QWORD *)(v7 + 8 * v15) = v21;
      *(_QWORD *)(v7 + 8 * v15 + 8) = v21;
    }
LABEL_16:
    *v8 = v6;
    *((_QWORD *)v6 + 1) = v8;
  }
  return a3;
}
