/*
 * XREFs of ?find@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@@2@AEBQEAVCBaseExpression@@@Z @ 0x180261DEC
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180046660 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResu.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x18010DA40 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x18010E7B4 (-EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?StartAsTriggeredAnimation@CNaturalAnimation@@UEAAJXZ @ 0x18027C580 (-StartAsTriggeredAnimation@CNaturalAnimation@@UEAAJXZ.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18016A2A0 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@PEAVCBaseExpression@@@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@PEAVCBaseExpression@@PEAX@std@@@1@AEBQEAVCBaseExpression@@_K@Z @ 0x180177B10 (--$_Find_last@PEAVCBaseExpression@@@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compa.c)
 */

__int64 **__fastcall std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::find(
        _QWORD *a1,
        __int64 **a2,
        const unsigned __int8 *a3)
{
  __int64 appended; // rax
  _QWORD *v6; // r11
  __int64 *v7; // r8
  __int64 *v9; // [rsp+20h] [rbp-18h] BYREF

  appended = std::_Fnv1a_append_bytes((__int64)a1, a3, 8uLL);
  v7 = std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::_Find_last<CBaseExpression *>(
         a1,
         &v9,
         v6,
         appended)[1];
  if ( !v7 )
    v7 = (__int64 *)a1[1];
  *a2 = v7;
  return a2;
}
