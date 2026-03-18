/*
 * XREFs of ?EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x18010E7B4
 * Callers:
 *     ?CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z @ 0x180080910 (-CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z.c)
 *     ?NotifyAnimationStopped@CBaseExpression@@IEAAJXZ @ 0x18010D45C (-NotifyAnimationStopped@CBaseExpression@@IEAAJXZ.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x18010D710 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18010E190 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x18016D708 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 *     ?FlushQueuedSuspendAnimations@CExpressionManager@@AEAAXXZ @ 0x18016D8C0 (-FlushQueuedSuspendAnimations@CExpressionManager@@AEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??R?$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z @ 0x180211A54 (--R-$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z.c)
 *     ?find@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@@2@AEBQEAVCBaseExpression@@@Z @ 0x180261DEC (-find@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compare@PEAVCBaseExpression@@U-$has.c)
 */

void __fastcall CExpressionManager::EnsureAutoCompleteOnOccludedAnimationRemoved(
        CExpressionManager *this,
        struct CBaseExpression *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // r11
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  struct CBaseExpression *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::find(
    (char *)this + 496,
    &v9,
    &v10);
  v3 = *((_QWORD *)this + 63);
  if ( v9 != v3 )
  {
    v4 = std::_Conditionally_enabled_hash<CBaseExpression *,1>::operator()((unsigned __int8 *)(v9 + 16));
    v6 = *((_QWORD *)this + 65);
    v7 = 2 * (*((_QWORD *)this + 68) & v4);
    if ( *(_QWORD **)(v6 + 16 * (*((_QWORD *)this + 68) & v4) + 8) == v5 )
    {
      if ( *(_QWORD **)(v6 + 16 * (*((_QWORD *)this + 68) & v4)) == v5 )
        *(_QWORD *)(v6 + 16 * (*((_QWORD *)this + 68) & v4)) = v3;
      else
        v3 = v5[1];
      *(_QWORD *)(v6 + 8 * v7 + 8) = v3;
    }
    else if ( *(_QWORD **)(v6 + 16 * (*((_QWORD *)this + 68) & v4)) == v5 )
    {
      *(_QWORD *)(v6 + 16 * (*((_QWORD *)this + 68) & v4)) = *v5;
    }
    v8 = *v5;
    --*((_QWORD *)this + 64);
    *(_QWORD *)v5[1] = v8;
    *(_QWORD *)(v8 + 8) = v5[1];
    std::_Deallocate<16>(v5, 0x18uLL);
  }
}
