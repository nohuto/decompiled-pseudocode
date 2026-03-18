/*
 * XREFs of ?GetGlobalPlaybackRate@CKeyframeAnimation@@AEAAMXZ @ 0x1800459D0
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180046660 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResu.c)
 * Callees:
 *     ?find@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@V?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@@std@@@std@@@2@AEBQEAVCChannelContext@@@Z @ 0x180261D90 (-find@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@V-$_Uhash_.c)
 */

float __fastcall CKeyframeAnimation::GetGlobalPlaybackRate(CKeyframeAnimation *this)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(*((_QWORD *)this + 3) + 816LL);
  v3 = *((_QWORD *)this + 7);
  if ( !v3 )
    return FLOAT_1_0;
  std::_Hash<std::_Umap_traits<CChannelContext *,CAnimationGlobalConfiguration *,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>>,0>>::find(
    v1 + 432,
    &v4,
    &v3);
  if ( v4 == *(_QWORD *)(v1 + 440) )
    return FLOAT_1_0;
  else
    return *(float *)(*(_QWORD *)(v4 + 24) + 72LL);
}
