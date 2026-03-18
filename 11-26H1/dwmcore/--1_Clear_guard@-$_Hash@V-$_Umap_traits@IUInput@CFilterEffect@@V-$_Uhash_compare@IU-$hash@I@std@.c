/*
 * XREFs of ??1_Clear_guard@?$_Hash@V?$_Umap_traits@IUInput@CFilterEffect@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180266E80
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IUInput@CFilterEffect@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180267AB4 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IUInput@CFilterEffect@@V-$_Uhash_compare@IU-$hash@I@std@.c)
 * Callees:
 *     ??$fill@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@std@@@std@@@std@@V12@@std@@YAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@std@@@std@@@0@0AEBV10@@Z @ 0x180148494 (--$fill@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBIUInput@CF.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIUInput@CFilterEffect@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUInput@CFilterEffect@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUInput@CFilterEffect@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180266C60 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIUInput@CFilterEffect@@@std@@PEAX@std@@.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,CFilterEffect::Input,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFilterEffect::Input>>,0>>::_Clear_guard::~_Clear_guard(
        _QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD **v2; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 *v4; // rdx
  unsigned __int64 *v5; // rcx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)*a1;
  if ( *a1 && v1[2] )
  {
    v2 = (_QWORD **)v1[1];
    if ( v1[7] >> 3 <= v1[2] )
    {
      std::_List_node<std::pair<unsigned int const,CFilterEffect::Input>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,CFilterEffect::Input>,void *>>>(
        (__int64)a1,
        v2);
      *(_QWORD *)v1[1] = v1[1];
      *(_QWORD *)(v1[1] + 8LL) = v1[1];
      v1[2] = 0LL;
      v4 = (unsigned __int64 *)v1[4];
      v5 = (unsigned __int64 *)v1[3];
      v6 = v1[1];
      return std::fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,CFilterEffect::Input>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,CFilterEffect::Input>>>>>(
               v5,
               v4,
               &v6);
    }
    else
    {
      return std::_Hash<std::_Umap_traits<unsigned int,CFilterEffect::Input,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFilterEffect::Input>>,0>>::_Unchecked_erase(
               *a1,
               *v2,
               v1[1]);
    }
  }
  return result;
}
