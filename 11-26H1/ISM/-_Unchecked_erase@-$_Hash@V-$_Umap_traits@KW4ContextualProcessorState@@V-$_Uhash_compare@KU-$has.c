/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorState@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x18002F03C
 * Callers:
 *     ?ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ @ 0x18001AC90 (-ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ.c)
 *     ?clear@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAAXXZ @ 0x18002EFC0 (-clear@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$alloc.c)
 * Callees:
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 *__fastcall std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorState>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned __int8 *v6; // rdi
  __int64 v7; // rbp
  unsigned __int8 **v8; // r14
  __int64 v9; // rax
  __int64 v10; // r12
  unsigned __int8 *v11; // rcx
  __int64 *v12; // rbx
  unsigned __int8 **v13; // rax
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 *v16; // r12
  unsigned __int8 *v17; // rcx
  __int64 *v18; // rbx
  __int64 *v20; // [rsp+68h] [rbp+10h]
  unsigned __int8 **v21; // [rsp+70h] [rbp+18h]
  __int64 *v22; // [rsp+78h] [rbp+20h]

  if ( a2 != a3 )
  {
    v6 = (unsigned __int8 *)a2;
    v7 = a1[3];
    v8 = (unsigned __int8 **)a2[1];
    v21 = (unsigned __int8 **)a1[1];
    v9 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)a2 + 16);
    v10 = 2 * (a1[6] & v9);
    v20 = *(__int64 **)(v7 + 16 * (a1[6] & v9));
    v22 = *(__int64 **)(v7 + 16 * (a1[6] & v9) + 8);
    while ( 1 )
    {
      v11 = v6;
      v12 = (__int64 *)v6;
      v6 = *(unsigned __int8 **)v6;
      std::_Deallocate<16>(v11, 24LL);
      --a1[2];
      if ( v12 == v22 )
        break;
      if ( v6 == (unsigned __int8 *)a3 )
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
    while ( v6 != (unsigned __int8 *)a3 )
    {
      v14 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()(v6 + 16);
      v15 = 2 * (a1[6] & v14);
      v16 = *(__int64 **)(v7 + 16 * (a1[6] & v14) + 8);
      while ( 1 )
      {
        v17 = v6;
        v18 = (__int64 *)v6;
        v6 = *(unsigned __int8 **)v6;
        std::_Deallocate<16>(v17, 24LL);
        --a1[2];
        if ( v18 == v16 )
          break;
        if ( v6 == (unsigned __int8 *)a3 )
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
