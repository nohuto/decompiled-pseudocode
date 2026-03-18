/*
 * XREFs of ?StartAsTriggeredAnimation@CNaturalAnimation@@UEAAJXZ @ 0x18027C580
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@@2@V32@@Z @ 0x18018796C (-erase@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compare@PEAVCBaseExpression@@U-$ha.c)
 *     ?ClearState@CNaturalAnimation@@AEAAXXZ @ 0x1801E3618 (-ClearState@CNaturalAnimation@@AEAAXXZ.c)
 *     ?find@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@@2@AEBQEAVCBaseExpression@@@Z @ 0x180261DEC (-find@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compare@PEAVCBaseExpression@@U-$has.c)
 *     ?StartAsTriggeredAnimation@CBaseExpression@@UEAAJXZ @ 0x18027C9E0 (-StartAsTriggeredAnimation@CBaseExpression@@UEAAJXZ.c)
 */

__int64 __fastcall CNaturalAnimation::StartAsTriggeredAnimation(CNaturalAnimation *this)
{
  int started; // eax
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rbx
  CNaturalAnimation *v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 *v8; // [rsp+60h] [rbp+18h] BYREF

  started = CBaseExpression::StartAsTriggeredAnimation(this);
  v3 = started;
  if ( started < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, started, 0x39Bu, 0LL);
  }
  else
  {
    v4 = *((_QWORD *)this + 3);
    *((_BYTE *)this + 216) |= 1u;
    v7 = this;
    v5 = *(_QWORD *)(v4 + 816);
    std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::find(
      (_QWORD *)(v5 + 560),
      &v8,
      (const unsigned __int8 *)&v7);
    if ( v8 != *(__int64 **)(v5 + 568) )
      std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::erase(
        (_QWORD *)(v5 + 560),
        &v7,
        (__int64)v8);
    CNaturalAnimation::ClearState(this);
  }
  return v3;
}
