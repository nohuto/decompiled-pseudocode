/*
 * XREFs of ?clear@?$_Hash@V?$_Umap_traits@KGV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKG@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x1800329A0
 * Callers:
 *     ?EndCurrentSession@TouchInfoAdapter@@UEAAJK@Z @ 0x1801CAAA0 (-EndCurrentSession@TouchInfoAdapter@@UEAAJK@Z.c)
 * Callees:
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned long,unsigned short,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned short>>,0>>::clear(
        unsigned __int64 *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rsi
  unsigned __int8 *v4; // rcx
  unsigned __int8 *v5; // rdi
  void *v6; // rdi
  unsigned __int64 v7; // rcx
  unsigned __int8 *v8; // rbp
  unsigned __int8 **v9; // r12
  unsigned __int8 *v10; // r14
  __int64 v11; // rax
  unsigned __int8 *v12; // r13
  unsigned __int64 *v13; // r15
  unsigned __int8 *v14; // rcx
  unsigned __int8 *v15; // rdi
  _QWORD *v16; // rax
  unsigned __int64 v17; // rbp
  unsigned __int8 *v18; // rcx
  unsigned __int8 *v19; // rdi
  unsigned __int64 v20; // [rsp+60h] [rbp+8h]
  unsigned __int64 v21; // [rsp+68h] [rbp+10h]

  v2 = a1[2];
  if ( v2 )
  {
    v3 = a1[1];
    if ( a1[7] >> 3 > v2 )
    {
      v8 = *(unsigned __int8 **)v3;
      if ( *(_QWORD *)v3 != v3 )
      {
        v9 = (unsigned __int8 **)*((_QWORD *)v8 + 1);
        v10 = *(unsigned __int8 **)v3;
        v21 = a1[3];
        v11 = 2 * (a1[6] & std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()(v8 + 16));
        v12 = *(unsigned __int8 **)(v21 + 8 * v11);
        v13 = (unsigned __int64 *)(v21 + 8 * v11);
        v20 = v13[1];
        do
        {
          v14 = v10;
          v15 = v10;
          v10 = *(unsigned __int8 **)v10;
          std::_Deallocate<16>(v14, 24LL);
          --a1[2];
          if ( v15 == (unsigned __int8 *)v20 )
          {
            if ( v12 == v8 )
            {
              *v13 = v3;
              v16 = (_QWORD *)v3;
            }
            else
            {
              v16 = v9;
            }
            v13[1] = (unsigned __int64)v16;
            while ( v10 != (unsigned __int8 *)v3 )
            {
              v13 = (unsigned __int64 *)(v21
                                       + 16
                                       * (a1[6] & std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()(v10 + 16)));
              v17 = v13[1];
              while ( 1 )
              {
                v18 = v10;
                v19 = v10;
                v10 = *(unsigned __int8 **)v10;
                std::_Deallocate<16>(v18, 24LL);
                --a1[2];
                if ( v19 == (unsigned __int8 *)v17 )
                  break;
                if ( v10 == (unsigned __int8 *)v3 )
                  goto LABEL_19;
              }
              *v13 = v3;
              v13[1] = v3;
            }
            goto LABEL_20;
          }
        }
        while ( v10 != (unsigned __int8 *)v3 );
        if ( v12 == v8 )
LABEL_19:
          *v13 = (unsigned __int64)v10;
LABEL_20:
        *v9 = v10;
        *((_QWORD *)v10 + 1) = v9;
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
