/*
 * XREFs of ??0ShellGesturesProcessor@@QEAA@XZ @ 0x1801A2738
 * Callers:
 *     ??$MakeAndInitialize@VShellGesturesProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVShellGesturesProcessor@@@Z @ 0x1800816E8 (--$MakeAndInitialize@VShellGesturesProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVShellGestu.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180011A60 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInputDeliveryServer@@UIInputServiceProxyOwner@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1800148E4 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInputDeliveryServer@@.c)
 *     ??0?$_Hash@V?$_Umap_traits@IUActiveContactData@ShellGesturesProcessor@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@1@AEBV?$allocator@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@@1@@Z @ 0x180087F04 (--0-$_Hash@V-$_Umap_traits@IUActiveContactData@ShellGesturesProcessor@@V-$_Uhash_compare@IU-$has.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
ShellGesturesProcessor *__fastcall ShellGesturesProcessor::ShellGesturesProcessor(ShellGesturesProcessor *this)
{
  _QWORD *v2; // rax
  char *v4; // [rsp+38h] [rbp+10h] BYREF

  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IInputDeliveryServer,IInputServiceProxyOwner>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IInputDeliveryServer,IInputServiceProxyOwner>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IContextualProcessor,IContextualProcessorEventStreamEnded>::`vftable'{for `IContextualProcessor'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IContextualProcessor,IContextualProcessorEventStreamEnded>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IContextualProcessorEventStreamEnded>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &ShellGesturesProcessor::`vftable'{for `IContextualProcessor'};
  *((_QWORD *)this + 1) = &ShellGesturesProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IContextualProcessorEventStreamEnded>'};
  *((_QWORD *)this + 3) = 0LL;
  v4 = (char *)this + 32;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits>(0x30uLL);
  *v2 = v2;
  v2[1] = v2;
  *((_QWORD *)this + 5) = v2;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 7LL;
  *((_QWORD *)this + 11) = 8LL;
  *((_DWORD *)this + 8) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (unsigned __int64 **)this + 7,
    0x10uLL,
    *((_QWORD *)this + 5));
  *((_BYTE *)this + 120) = 0;
  LODWORD(v4) = 0;
  std::_Hash<std::_Umap_traits<unsigned int,ShellGesturesProcessor::ActiveContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ShellGesturesProcessor::ActiveContactData>>,0>>::_Hash<std::_Umap_traits<unsigned int,ShellGesturesProcessor::ActiveContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ShellGesturesProcessor::ActiveContactData>>,0>>(
    (__int64)this + 128,
    &v4);
  return this;
}
