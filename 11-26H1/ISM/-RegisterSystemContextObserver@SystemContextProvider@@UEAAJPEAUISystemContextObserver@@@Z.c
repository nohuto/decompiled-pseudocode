/*
 * XREFs of ?RegisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x1800800D0
 * Callers:
 *     ??0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1800262D8 (--0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800F9B48 (-find@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash_compare@_KU-$hash@.c)
 *     ??$emplace@AEBQEAUISystemContextObserver@@@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@std@@_N@1@AEBQEAUISystemContextObserver@@@Z @ 0x18010C7E8 (--$emplace@AEBQEAUISystemContextObserver@@@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V.c)
 */

__int64 __fastcall SystemContextProvider::RegisterSystemContextObserver(
        SystemContextProvider *this,
        struct ISystemContextObserver *a2)
{
  __int64 v3; // rdx
  int v5[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ISystemContextObserver *v7; // [rsp+48h] [rbp+10h] BYREF
  char v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = a2;
  if ( !a2 )
  {
    v3 = 51LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\systemcontextprovider.cpp",
      (const char *)0x80070057LL,
      v5[0]);
    return 2147942487LL;
  }
  if ( *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::find(
                    (char *)this + 24,
                    &v8,
                    &v7) != *((_QWORD *)this + 4) )
  {
    v3 = 57LL;
    goto LABEL_3;
  }
  std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::emplace<ISystemContextObserver * const &>(
    (char *)this + 24,
    v5,
    &v7);
  return 0LL;
}
