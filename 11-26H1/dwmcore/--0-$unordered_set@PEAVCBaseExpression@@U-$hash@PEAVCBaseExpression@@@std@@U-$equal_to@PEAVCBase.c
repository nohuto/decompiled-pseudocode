/*
 * XREFs of ??0?$unordered_set@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@V?$allocator@PEAVCBaseExpression@@@3@@std@@QEAA@XZ @ 0x1801A0DE8
 * Callers:
 *     ??0CExpressionManager@@AEAA@XZ @ 0x1801A0C3C (--0CExpressionManager@@AEAA@XZ.c)
 * Callees:
 *     ??0?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@1@AEBV?$allocator@PEAVCBaseExpression@@@1@@Z @ 0x1801A0E14 (--0-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compare@PEAVCBaseExpression@@U-$hash@P.c)
 */

__int64 __fastcall std::unordered_set<CBaseExpression *>::unordered_set<CBaseExpression *>(__int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>(
    a1,
    &v3);
  return a1;
}
