/*
 * XREFs of ?Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x180010598
 * Callers:
 *     ?OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x180010060 (-OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ??0PointerFrame@PointerInputMediator@@QEAA@PEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x180092BC8 (--0PointerFrame@PointerInputMediator@@QEAA@PEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 * Callees:
 *     ??$emplace@AEAIUContactData@PointerInputMediator@@@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@std@@@std@@@std@@_N@1@AEAI$$QEAUContactData@PointerInputMediator@@@Z @ 0x180010794 (--$emplace@AEAIUContactData@PointerInputMediator@@@-$_Hash@V-$_Umap_traits@IUContactData@Pointer.c)
 *     ?reserve@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAAX_K@Z @ 0x1800109B4 (-reserve@-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_compare@IU-$hash@.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x180010AB0 (-clear@-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_compare@IU-$hash@I@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180013B28 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositi.c)
 *     ??$emplace_back@AEAI@?$vector@IV?$allocator@I@std@@@std@@QEAAAEAIAEAI@Z @ 0x18008B2B0 (--$emplace_back@AEAI@-$vector@IV-$allocator@I@std@@@std@@QEAAAEAIAEAI@Z.c)
 *     ??$_Reallocate@$0A@@?$vector@IV?$allocator@I@std@@@std@@AEAAXAEA_K@Z @ 0x1800F49D8 (--$_Reallocate@$0A@@-$vector@IV-$allocator@I@std@@@std@@AEAAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PointerInputMediator::PointerFrame::Initialize(
        PointerInputMediator::PointerFrame *this,
        const struct tagMANIPULATION_INPUT_INFO *a2)
{
  char *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  char *v7; // r14
  char *v8; // rbx
  char *v9; // rdi
  _BYTE v10[16]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  __int128 v12; // [rsp+38h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp-8h]
  unsigned __int64 v14; // [rsp+70h] [rbp+20h] BYREF

  *(_DWORD *)this = *((_DWORD *)a2 + 42);
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 37);
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 24) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 40) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a2 + 4);
  *(_OWORD *)((char *)this + 88) = *((_OWORD *)a2 + 5);
  *(_OWORD *)((char *)this + 104) = *((_OWORD *)a2 + 6);
  *(_OWORD *)((char *)this + 120) = *((_OWORD *)a2 + 7);
  *(_OWORD *)((char *)this + 136) = *((_OWORD *)a2 + 8);
  *((_QWORD *)this + 19) = *((_QWORD *)a2 + 22);
  v4 = (char *)this + 160;
  v5 = *((_QWORD *)this + 20);
  if ( v5 != *((_QWORD *)this + 21) )
    *((_QWORD *)this + 21) = v5;
  v6 = *((_QWORD *)this + 23);
  if ( v6 != *((_QWORD *)this + 24) )
    *((_QWORD *)this + 24) = v6;
  v7 = (char *)this + 208;
  std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::clear((char *)this + 208);
  v14 = *((unsigned int *)this + 1);
  if ( v14 > (__int64)(*((_QWORD *)this + 22) - *((_QWORD *)this + 20)) >> 2 )
    std::vector<unsigned int>::_Reallocate<0>((char *)this + 160, &v14);
  v14 = *((unsigned int *)this + 1);
  if ( v14 > (__int64)(*((_QWORD *)this + 25) - *((_QWORD *)this + 23)) >> 2 )
    std::vector<unsigned int>::_Reallocate<0>((char *)this + 184, &v14);
  std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::reserve(
    (char *)this + 208,
    *((unsigned int *)this + 1));
  v8 = (char *)a2 + 160;
  if ( a2 == (const struct tagMANIPULATION_INPUT_INFO *)-160LL && *((_DWORD *)this + 1) )
  {
    _o_terminate();
    __debugbreak();
    JUMPOUT(0x180010753LL);
  }
  v9 = &v8[240 * *((unsigned int *)this + 1)];
  while ( v8 != v9 )
  {
    LODWORD(v14) = *((_DWORD *)v8 + 1);
    std::vector<unsigned int>::emplace_back<unsigned int &>(v4, &v14);
    v13 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::emplace<unsigned int &,PointerInputMediator::ContactData>(
      v7,
      v10,
      &v14,
      &v11);
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>((char *)&v12 + 8);
    v8 += 240;
  }
}
