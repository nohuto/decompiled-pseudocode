/*
 * XREFs of ?clear@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x180040DB0
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800176E0 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x180018FB0 (-MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualPr.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x18009849C (--1_Clear_guard@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$ha.c)
 * Callees:
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::clear(
        unsigned __int64 *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // r14
  unsigned __int8 *v4; // rcx
  unsigned __int8 *v5; // rdi
  void *v6; // rdi
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rax
  unsigned __int8 *v9; // rbp
  unsigned __int64 v10; // rdi
  unsigned __int8 *v11; // rsi
  unsigned __int8 **v12; // r15
  __int64 v13; // rax
  unsigned __int8 *v14; // r13
  unsigned __int64 *v15; // r12
  unsigned __int8 *v16; // rcx
  unsigned __int8 *v17; // rdi
  unsigned __int64 *v18; // rbp
  unsigned __int64 v19; // r12
  unsigned __int8 *v20; // rcx
  unsigned __int8 *v21; // rdi
  unsigned __int64 v22; // [rsp+60h] [rbp+8h]
  unsigned __int64 v23; // [rsp+68h] [rbp+10h]

  v2 = a1[2];
  if ( v2 )
  {
    v3 = a1[1];
    if ( a1[7] >> 3 > v2 )
    {
      v9 = *(unsigned __int8 **)v3;
      if ( *(_QWORD *)v3 != v3 )
      {
        v10 = a1[3];
        v11 = *(unsigned __int8 **)v3;
        v12 = (unsigned __int8 **)*((_QWORD *)v9 + 1);
        v23 = v10;
        v13 = 2 * (a1[6] & std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()(v9 + 16));
        v14 = *(unsigned __int8 **)(v10 + 8 * v13);
        v15 = (unsigned __int64 *)(v10 + 8 * v13);
        v22 = v15[1];
        while ( 1 )
        {
          v16 = v11;
          v17 = v11;
          v11 = *(unsigned __int8 **)v11;
          std::_Deallocate<16>(v16, 24LL);
          --a1[2];
          if ( v17 == (unsigned __int8 *)v22 )
            break;
          if ( v11 == (unsigned __int8 *)v3 )
          {
            if ( v14 == v9 )
              *v15 = (unsigned __int64)v11;
            goto LABEL_13;
          }
        }
        if ( v14 == v9 )
        {
          *v15 = v3;
          v8 = (_QWORD *)v3;
        }
        else
        {
          v8 = v12;
        }
        v15[1] = (unsigned __int64)v8;
        while ( v11 != (unsigned __int8 *)v3 )
        {
          v18 = (unsigned __int64 *)(v23
                                   + 16
                                   * (a1[6] & std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()(v11 + 16)));
          v19 = v18[1];
          while ( 1 )
          {
            v20 = v11;
            v21 = v11;
            v11 = *(unsigned __int8 **)v11;
            std::_Deallocate<16>(v20, 24LL);
            --a1[2];
            if ( v21 == (unsigned __int8 *)v19 )
              break;
            if ( v11 == (unsigned __int8 *)v3 )
            {
              *v18 = (unsigned __int64)v11;
              goto LABEL_13;
            }
          }
          *v18 = v3;
          v18[1] = v3;
        }
LABEL_13:
        *v12 = v11;
        *((_QWORD *)v11 + 1) = v12;
      }
    }
    else
    {
      **(_QWORD **)(v3 + 8) = 0LL;
      v4 = *(unsigned __int8 **)v3;
      if ( *(_QWORD *)v3 )
      {
        do
        {
          v5 = *(unsigned __int8 **)v4;
          std::_Deallocate<16>(v4, 24LL);
          v4 = v5;
        }
        while ( v5 );
      }
      *(_QWORD *)a1[1] = a1[1];
      *(_QWORD *)(a1[1] + 8) = a1[1];
      a1[2] = 0LL;
      v6 = (void *)a1[3];
      v7 = (a1[4] - (unsigned __int64)v6 + 7) >> 3;
      if ( (unsigned __int64)v6 > a1[4] )
        v7 = 0LL;
      if ( v7 )
        memset64(v6, a1[1], v7);
    }
  }
}
