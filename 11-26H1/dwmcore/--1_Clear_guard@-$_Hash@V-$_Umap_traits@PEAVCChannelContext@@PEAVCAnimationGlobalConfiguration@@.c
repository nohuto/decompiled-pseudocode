/*
 * XREFs of ??1_Clear_guard@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@V?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18021178C
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@V?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180261BFC (-_Forced_rehash@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@.c)
 * Callees:
 *     ??$fill@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@std@@@std@@@std@@V12@@std@@YAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@std@@@std@@@0@0AEBV10@@Z @ 0x180148494 (--$fill@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBIUInput@CF.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18019E870 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAVCChannelContext@@PEAVCAnimationGlobalCo.c)
 */

unsigned __int8 *__fastcall std::_Hash<std::_Umap_traits<CChannelContext *,CAnimationGlobalConfiguration *,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>>,0>>::_Clear_guard::~_Clear_guard(
        _QWORD **a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rdx
  unsigned __int8 *result; // rax
  unsigned __int64 *v4; // rdx
  unsigned __int64 *v5; // rcx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64)*a1;
  if ( *a1 && *(_QWORD *)(v1 + 16) )
  {
    v2 = *(__int64 **)(v1 + 8);
    if ( *(_QWORD *)(v1 + 56) >> 3 <= *(_QWORD *)(v1 + 16) )
    {
      std::_List_node<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>,void *>>>(
        (__int64)a1,
        (_QWORD **)v2);
      **(_QWORD **)(v1 + 8) = *(_QWORD *)(v1 + 8);
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 8LL) = *(_QWORD *)(v1 + 8);
      *(_QWORD *)(v1 + 16) = 0LL;
      v4 = *(unsigned __int64 **)(v1 + 32);
      v5 = *(unsigned __int64 **)(v1 + 24);
      v6 = *(_QWORD *)(v1 + 8);
      return (unsigned __int8 *)std::fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,CFilterEffect::Input>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,CFilterEffect::Input>>>>>(
                                  v5,
                                  v4,
                                  &v6);
    }
    else
    {
      return std::_Hash<std::_Umap_traits<CChannelContext *,CAnimationGlobalConfiguration *,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>>,0>>::_Unchecked_erase(
               *a1,
               *v2,
               *(unsigned __int8 **)(v1 + 8));
    }
  }
  return result;
}
