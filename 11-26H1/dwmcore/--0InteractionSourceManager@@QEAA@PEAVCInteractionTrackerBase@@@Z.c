/*
 * XREFs of ??0InteractionSourceManager@@QEAA@PEAVCInteractionTrackerBase@@@Z @ 0x1801079D0
 * Callers:
 *     ??0CInteractionTracker2@@QEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18010823C (--0CInteractionTracker2@@QEAA@PEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ??0CInteractionTracker@@QEAA@PEAVCComposition@@@Z @ 0x18020CEE8 (--0CInteractionTracker@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800E8884 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_s.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Alloc_proxy@V?$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV?$allocator@U_Container_proxy@std@@@1@@Z @ 0x180138AB8 (--$_Alloc_proxy@V-$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV-$a.c)
 */

InteractionSourceManager *__fastcall InteractionSourceManager::InteractionSourceManager(
        InteractionSourceManager *this,
        struct CInteractionTrackerBase *a2)
{
  _QWORD *v3; // rax
  InteractionSourceManager *result; // rax

  *(_QWORD *)this = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits>(0x20uLL, (__int64)a2);
  *v3 = v3;
  v3[1] = v3;
  *((_QWORD *)this + 2) = v3;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 7LL;
  *((_QWORD *)this + 8) = 8LL;
  *((_DWORD *)this + 2) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<IUnknown *>>,std::_Iterator_base0>>>::_Assign_grow(
    (__int64)this + 32,
    0x10uLL,
    *((_QWORD *)this + 2));
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  std::_Container_base12::_Alloc_proxy<std::allocator<std::_Container_proxy>>();
  result = this;
  *((_BYTE *)this + 112) = 0;
  return result;
}
