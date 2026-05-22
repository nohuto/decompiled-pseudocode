/*
 * XREFs of ?clear@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAAXXZ @ 0x18002EFC0
 * Callers:
 *     ?OnDisconnected@DragManagerClientProxy@@MEAAJXZ @ 0x18002EF50 (-OnDisconnected@DragManagerClientProxy@@MEAAJXZ.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA@XZ @ 0x180144C20 (--1_Clear_guard@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@W4_Button@@PEAX@std@@@std@@@?$_List_node@W4_Button@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@W4_Button@@PEAX@std@@@1@PEAU01@@Z @ 0x18001B388 (--$_Free_non_head@V-$allocator@U-$_List_node@W4_Button@@PEAX@std@@@std@@@-$_List_node@W4_Button@.c)
 *     ??$fill@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@std@@@std@@@std@@V12@@std@@YAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@std@@@std@@@0@0AEBV10@@Z @ 0x18001E3B0 (--$fill@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_KPEAUIMPC.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::clear(
        _QWORD *a1)
{
  unsigned __int64 v2; // rcx
  _QWORD *v3; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 *v5; // rdx
  unsigned __int64 *v6; // rcx
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1[2];
  if ( v2 )
  {
    v3 = (_QWORD *)a1[1];
    if ( a1[7] >> 3 <= v2 )
    {
      std::_List_node<enum _Button,void *>::_Free_non_head<std::allocator<std::_List_node<enum _Button,void *>>>(
        v2,
        (__int64)v3);
      *(_QWORD *)a1[1] = a1[1];
      *(_QWORD *)(a1[1] + 8LL) = a1[1];
      a1[2] = 0LL;
      v5 = (unsigned __int64 *)a1[4];
      v6 = (unsigned __int64 *)a1[3];
      v7 = a1[1];
      return std::fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,IMPCTarget *>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,IMPCTarget *>>>>>(
               v6,
               v5,
               &v7);
    }
    else
    {
      return std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorState>>,0>>::_Unchecked_erase(
               a1,
               *v3,
               a1[1]);
    }
  }
  return result;
}
