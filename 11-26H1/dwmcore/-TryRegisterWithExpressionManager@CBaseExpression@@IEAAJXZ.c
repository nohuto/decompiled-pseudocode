/*
 * XREFs of ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18010E25C
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K@Z @ 0x180080338 (-UpdateExpressions@CExpressionManager@@QEAAX_K@Z.c)
 *     ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x18010CBB8 (-ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@UDCOMPOSITION_PROPERTY_REFERENCE@@W4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18010DE34 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@UDCOMPOSITION_PROPERTY_REFERENCE@@W4DCOMPOSITIO.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18010EAD0 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ?FlushPendingTriggeredAnimations@CExpressionManager@@AEAAX_N@Z @ 0x18018BA14 (-FlushPendingTriggeredAnimations@CExpressionManager@@AEAAX_N@Z.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@UDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW45KeyframeAnimationDelayBehavior@@MW45KeyframeAnimationDirection@@MW45KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801E1D08 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@UDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EX.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x18010E310 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 *     ??$emplace@AEAPEAVCBaseExpression@@@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@@std@@_N@1@AEAPEAVCBaseExpression@@@Z @ 0x18010E66C (--$emplace@AEAPEAVCBaseExpression@@@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseExpression::TryRegisterWithExpressionManager(CBaseExpression *this)
{
  CExpressionManager *v2; // rsi
  int v3; // eax
  unsigned int v4; // edi
  _BYTE v6[24]; // [rsp+30h] [rbp-18h] BYREF
  CBaseExpression *v7; // [rsp+50h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 216) & 0x20) == 0
    && (*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 232LL))(this) )
  {
    v2 = *(CExpressionManager **)(*((_QWORD *)this + 3) + 816LL);
    v3 = CExpressionManager::RegisterExpression(v2, this);
    v4 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0xE2u, 0LL);
      return v4;
    }
    *((_BYTE *)this + 216) |= 0x20u;
    if ( (*((_BYTE *)this + 217) & 1) != 0 )
    {
      v7 = this;
      std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::emplace<CBaseExpression * &>(
        (char *)v2 + 496,
        v6,
        &v7);
    }
  }
  return 0;
}
