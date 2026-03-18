/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@AEAAPEAU?$_List_node@PEAVCBaseExpression@@PEAX@2@PEAU32@QEAU32@@Z @ 0x18019C8F4
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K@Z @ 0x180080338 (-UpdateExpressions@CExpressionManager@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??R?$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z @ 0x180211A54 (--R-$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x18021C79C (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compare@PEAVC.c)
 */

unsigned __int8 *__fastcall std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 v5; // rbp
  unsigned __int8 **v6; // r15
  unsigned __int8 **v7; // r13
  unsigned __int8 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r11
  __int64 v11; // r12
  unsigned __int8 *v12; // rbx
  __int64 v14; // rax
  __int64 v15; // r11
  __int64 v16; // r14
  unsigned __int8 *v17; // r15
  bool v18; // bl
  unsigned __int8 **v19; // rax
  _QWORD *v20; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int8 **v21; // [rsp+28h] [rbp-50h]
  unsigned __int8 *v22; // [rsp+30h] [rbp-48h]
  __int64 v24; // [rsp+88h] [rbp+10h]
  unsigned __int8 *v25; // [rsp+90h] [rbp+18h]

  if ( (unsigned __int8 *)a2 != a3 )
  {
    v5 = a1[3];
    v6 = *(unsigned __int8 ***)(a2 + 8);
    v7 = (unsigned __int8 **)a1[1];
    v8 = (unsigned __int8 *)a2;
    v20 = a1 + 1;
    v21 = v6;
    v9 = std::_Conditionally_enabled_hash<CBaseExpression *,1>::operator()((unsigned __int8 *)(a2 + 16));
    v11 = 2 * (*(_QWORD *)(v10 + 48) & v9);
    v24 = *(_QWORD *)(v5 + 16 * (*(_QWORD *)(v10 + 48) & v9));
    v25 = *(unsigned __int8 **)(v5 + 16 * (*(_QWORD *)(v10 + 48) & v9) + 8);
    while ( 1 )
    {
      v12 = v8;
      v8 = *(unsigned __int8 **)v8;
      v22 = v8;
      std::_Deallocate<16>(v12, 0x18uLL);
      --a1[2];
      if ( v12 == v25 )
        break;
      if ( v8 == a3 )
      {
        if ( v24 == a2 )
          *(_QWORD *)(v5 + 8 * v11) = v8;
        *v6 = v8;
        *((_QWORD *)v8 + 1) = v6;
        return a3;
      }
    }
    if ( v24 == a2 )
    {
      *(_QWORD *)(v5 + 8 * v11) = v7;
      v6 = v7;
    }
    *(_QWORD *)(v5 + 8 * v11 + 8) = v6;
    while ( v8 != a3 )
    {
      v14 = std::_Conditionally_enabled_hash<CBaseExpression *,1>::operator()(v8 + 16);
      v16 = 2 * (*(_QWORD *)(v15 + 48) & v14);
      v17 = *(unsigned __int8 **)(v5 + 16 * (*(_QWORD *)(v15 + 48) & v14) + 8);
      while ( 1 )
      {
        v18 = v8 == v17;
        std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::_Range_eraser::_Bump_erased(&v20);
        v8 = v22;
        if ( v18 )
          break;
        if ( v22 == a3 )
        {
          *(_QWORD *)(v5 + 8 * v16) = v22;
          goto LABEL_17;
        }
      }
      *(_QWORD *)(v5 + 8 * v16) = v7;
      *(_QWORD *)(v5 + 8 * v16 + 8) = v7;
    }
LABEL_17:
    v19 = v21;
    *v21 = v8;
    *((_QWORD *)v8 + 1) = v19;
  }
  return a3;
}
