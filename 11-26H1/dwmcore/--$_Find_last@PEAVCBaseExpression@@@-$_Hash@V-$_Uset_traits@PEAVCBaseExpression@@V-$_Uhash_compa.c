/*
 * XREFs of ??$_Find_last@PEAVCBaseExpression@@@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@PEAVCBaseExpression@@PEAX@std@@@1@AEBQEAVCBaseExpression@@_K@Z @ 0x180177B10
 * Callers:
 *     ??$emplace@AEAPEAVCBaseExpression@@@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@@std@@_N@1@AEAPEAVCBaseExpression@@@Z @ 0x18010E66C (--$emplace@AEAPEAVCBaseExpression@@@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compa.c)
 *     ?find@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@@2@AEBQEAVCBaseExpression@@@Z @ 0x180261DEC (-find@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compare@PEAVCBaseExpression@@U-$has.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::_Find_last<CBaseExpression *>(
        _QWORD *a1,
        __int64 **a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v4; // r11
  __int64 *v5; // r9
  __int64 **v6; // r11
  __int64 *v7; // rax
  __int64 **result; // rax
  __int64 *v9; // rcx

  v4 = a4 & a1[6];
  v5 = (__int64 *)a1[1];
  v6 = (__int64 **)(a1[3] + 16 * v4);
  v7 = v6[1];
  if ( v7 == v5 )
  {
    *a2 = v5;
    result = a2;
    a2[1] = 0LL;
  }
  else
  {
    while ( *a3 != v7[2] )
    {
      if ( v7 == *v6 )
      {
        *a2 = v7;
        result = a2;
        a2[1] = 0LL;
        return result;
      }
      v7 = (__int64 *)v7[1];
    }
    v9 = (__int64 *)*v7;
    a2[1] = v7;
    result = a2;
    *a2 = v9;
  }
  return result;
}
