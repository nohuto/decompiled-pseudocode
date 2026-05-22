/*
 * XREFs of ?clear@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAAXXZ @ 0x18003E440
 * Callers:
 *     ?List@PointerMetadata@@YAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@Z @ 0x18003DFF0 (-List@PointerMetadata@@YAXPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$.c)
 * Callees:
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::clear(
        unsigned __int64 *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rsi
  unsigned __int8 *v4; // rcx
  unsigned __int8 *v5; // rdi
  void *v6; // rdi
  unsigned __int64 v7; // rcx
  unsigned __int8 *v8; // rbp
  unsigned __int64 v9; // rdi
  unsigned __int8 *v10; // r14
  unsigned __int8 **v11; // r15
  __int64 v12; // rax
  unsigned __int8 *v13; // r13
  unsigned __int64 *v14; // r12
  unsigned __int8 *v15; // rcx
  unsigned __int8 *v16; // rdi
  _QWORD *v17; // rax
  unsigned __int64 v18; // r13
  unsigned __int8 *v19; // rcx
  unsigned __int8 *v20; // rdi
  unsigned __int8 *v21; // [rsp+60h] [rbp+8h]
  unsigned __int64 v22; // [rsp+68h] [rbp+10h]

  v2 = a1[2];
  if ( v2 )
  {
    v3 = a1[1];
    if ( a1[7] >> 3 > v2 )
    {
      v8 = *(unsigned __int8 **)v3;
      if ( *(_QWORD *)v3 != v3 )
      {
        v9 = a1[3];
        v10 = *(unsigned __int8 **)v3;
        v11 = (unsigned __int8 **)*((_QWORD *)v8 + 1);
        v22 = v9;
        v12 = 2 * (a1[6] & std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()(v8 + 16));
        v13 = *(unsigned __int8 **)(v9 + 8 * v12 + 8);
        v14 = (unsigned __int64 *)(v9 + 8 * v12);
        v21 = (unsigned __int8 *)*v14;
        do
        {
          v15 = v10;
          v16 = v10;
          v10 = *(unsigned __int8 **)v10;
          std::_Deallocate<16>(v15, 24LL);
          --a1[2];
          if ( v16 == v13 )
          {
            if ( v21 == v8 )
            {
              *v14 = v3;
              v17 = (_QWORD *)v3;
            }
            else
            {
              v17 = v11;
            }
            v14[1] = (unsigned __int64)v17;
            while ( v10 != (unsigned __int8 *)v3 )
            {
              v14 = (unsigned __int64 *)(v22
                                       + 16
                                       * (a1[6] & std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()(v10 + 16)));
              v18 = v14[1];
              while ( 1 )
              {
                v19 = v10;
                v20 = v10;
                v10 = *(unsigned __int8 **)v10;
                std::_Deallocate<16>(v19, 24LL);
                --a1[2];
                if ( v20 == (unsigned __int8 *)v18 )
                  break;
                if ( v10 == (unsigned __int8 *)v3 )
                  goto LABEL_11;
              }
              *v14 = v3;
              v14[1] = v3;
            }
            goto LABEL_12;
          }
        }
        while ( v10 != (unsigned __int8 *)v3 );
        if ( v21 == v8 )
LABEL_11:
          *v14 = (unsigned __int64)v10;
LABEL_12:
        *v11 = v10;
        *((_QWORD *)v10 + 1) = v11;
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
