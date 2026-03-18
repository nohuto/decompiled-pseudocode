/*
 * XREFs of _anonymous_namespace_::FramesReport::_FramesReport @ 0x18022FA9C
 * Callers:
 *     std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport___::_unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport___ @ 0x18022FA48 (std--unique_ptr__anonymous_namespace_--FramesReport_std--default_delete__anonymous_namespace_--F.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     std::_Destroy_range_std::allocator__anonymous_namespace_::FrameSequenceInfo___ @ 0x18022F8FC (std--_Destroy_range_std--allocator__anonymous_namespace_--FrameSequenceInfo___.c)
 *     std::_Destroy_range_std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______ @ 0x18022F938 (std--_Destroy_range_std--allocator_std--unique_ptr__anonymous_namespace_--FramesReport--Resource.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const___A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const______0___::__Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const___A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const______0___ @ 0x18022F9E4 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_std--basic_string_unsigned_short.c)
 *     ??1?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18022FA18 (--1-$_Tree@V-$_Tset_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less.c)
 */

void __fastcall anonymous_namespace_::FramesReport::_FramesReport(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::~_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>((void **)(a1 + 160));
  std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const___A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const______0___::__Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const___A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const______0___(a1 + 136);
  v2 = *(_QWORD *)(a1 + 112);
  if ( v2 )
  {
    std::_Destroy_range_std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______(
      v2,
      *(_QWORD *)(a1 + 120));
    std::_Deallocate<16>(*(void **)(a1 + 112), (*(_QWORD *)(a1 + 128) - *(_QWORD *)(a1 + 112)) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_QWORD *)(a1 + 128) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    std::_Destroy_range_std::allocator__anonymous_namespace_::FrameSequenceInfo___(v3, *(_QWORD *)(a1 + 24));
    std::_Deallocate<16>(*(void **)(a1 + 16), 32 * ((__int64)(*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 16)) >> 5));
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
  }
}
