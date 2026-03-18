/*
 * XREFs of ??0CExpressionManager@@AEAA@XZ @ 0x1801A0C3C
 * Callers:
 *     ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x1801A0B70 (-Create@CExpressionManager@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800E8884 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_s.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??0CExpressionValueStack@@QEAA@XZ @ 0x18010B9C0 (--0CExpressionValueStack@@QEAA@XZ.c)
 *     ??0?$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ @ 0x1801A0DCC (--0-$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ.c)
 *     ??0?$unordered_set@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@V?$allocator@PEAVCBaseExpression@@@3@@std@@QEAA@XZ @ 0x1801A0DE8 (--0-$unordered_set@PEAVCBaseExpression@@U-$hash@PEAVCBaseExpression@@@std@@U-$equal_to@PEAVCBase.c)
 */

CExpressionManager *__fastcall CExpressionManager::CExpressionManager(CExpressionManager *this)
{
  char *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CExpressionManager::`vftable';
  CExpressionValueStack::CExpressionValueStack((CExpressionManager *)((char *)this + 24));
  v2 = (char *)this + 208;
  v3 = 2LL;
  do
  {
    DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>(v2);
    v2 += 32;
    --v3;
  }
  while ( v3 );
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_DWORD *)this + 74) = 0;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_DWORD *)this + 82) = 0;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_DWORD *)this + 90) = 0;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits>(0x20uLL, v4);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *((_QWORD *)this + 46) = v5;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_DWORD *)this + 102) = 0;
  *((_BYTE *)this + 416) = 0;
  *((_DWORD *)this + 108) = 0;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits>(0x20uLL, v6);
  *v7 = v7;
  v7[1] = v7;
  *((_QWORD *)this + 55) = v7;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 7LL;
  *((_QWORD *)this + 61) = 8LL;
  *((_DWORD *)this + 108) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<IUnknown *>>,std::_Iterator_base0>>>::_Assign_grow(
    (__int64)this + 456,
    0x10uLL,
    *((_QWORD *)this + 55));
  std::unordered_set<CBaseExpression *>::unordered_set<CBaseExpression *>((char *)this + 496);
  std::unordered_set<CBaseExpression *>::unordered_set<CBaseExpression *>((char *)this + 560);
  return this;
}
