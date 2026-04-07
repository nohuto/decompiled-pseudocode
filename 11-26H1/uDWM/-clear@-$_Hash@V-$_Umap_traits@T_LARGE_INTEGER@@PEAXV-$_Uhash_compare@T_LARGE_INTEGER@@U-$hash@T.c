/*
 * XREFs of ?clear@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1800E4FB0
 * Callers:
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800DF6FC (--1_Clear_guard@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@PEAXV-$_Uhash_compare@T_LARGE_INTEGER@@.c)
 * Callees:
 *     ??$fill@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@V12@@std@@YAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@0@0AEBV10@@Z @ 0x18002FD60 (--$fill@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAUHWND__@@V-.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800BFE9C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@PEAX@std@@@s.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::clear(
        _QWORD *a1)
{
  __int64 *v2; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 *v4; // rdx
  unsigned __int64 *v5; // rcx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1[2] )
  {
    v2 = (__int64 *)a1[1];
    if ( a1[7] >> 3 <= a1[2] )
    {
      std::_List_node<std::pair<_LARGE_INTEGER const,void *>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,void *>,void *>>>(
        (__int64)a1,
        (_QWORD **)v2);
      *(_QWORD *)a1[1] = a1[1];
      *(_QWORD *)(a1[1] + 8LL) = a1[1];
      a1[2] = 0LL;
      v4 = (unsigned __int64 *)a1[4];
      v5 = (unsigned __int64 *)a1[3];
      v6 = a1[1];
      return std::fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>>>>(
               v5,
               v4,
               &v6);
    }
    else
    {
      return std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::_Unchecked_erase(
               a1,
               *v2,
               a1[1]);
    }
  }
  return result;
}
