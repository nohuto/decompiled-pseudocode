/*
 * XREFs of ?OnGlobalPlaybackRateChanged@CAnimationGlobalConfiguration@@QEAAXXZ @ 0x180269B50
 * Callers:
 *     ?SetGlobalPlaybackRate@?$CAnimationGlobalConfigurationGeneratedT@VCAnimationGlobalConfiguration@@VCResource@@@@QEAAJM@Z @ 0x18024B1F4 (-SetGlobalPlaybackRate@-$CAnimationGlobalConfigurationGeneratedT@VCAnimationGlobalConfiguration@.c)
 *     ?SetProperty@?$CAnimationGlobalConfigurationGeneratedT@VCAnimationGlobalConfiguration@@VCResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180269BD0 (-SetProperty@-$CAnimationGlobalConfigurationGeneratedT@VCAnimationGlobalConfiguration@@VCResourc.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ??$_Try_emplace@AEBQEAVCChannelContext@@$$V@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@V?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@PEAX@std@@_N@1@AEBQEAVCChannelContext@@@Z @ 0x180261968 (--$_Try_emplace@AEBQEAVCChannelContext@@$$V@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@PEAVCAn.c)
 */

void __fastcall CAnimationGlobalConfiguration::OnGlobalPlaybackRateChanged(CAnimationGlobalConfiguration *this)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 80) & 1) == 0 )
  {
    v3 = *((_QWORD *)this + 7);
    *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<CChannelContext *,CAnimationGlobalConfiguration *,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>>,0>>::_Try_emplace<CChannelContext * const &,>(
                             (float *)(*(_QWORD *)(*((_QWORD *)this + 3) + 816LL) + 432LL),
                             (__int64)v2,
                             (unsigned __int8 *)&v3)
              + 24LL) = this;
    *((_BYTE *)this + 80) |= 1u;
  }
  if ( *((_QWORD *)this + 6) )
    CResource::InvalidateConsumingAnimationsInternal((__int64)this);
  (*(void (__fastcall **)(CAnimationGlobalConfiguration *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
}
