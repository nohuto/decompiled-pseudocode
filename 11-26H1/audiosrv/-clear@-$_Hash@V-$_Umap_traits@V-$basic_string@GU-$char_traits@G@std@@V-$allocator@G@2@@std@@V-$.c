/*
 * XREFs of ?clear@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x1800C29B8
 * Callers:
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800C1768 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 * Callees:
 *     ??$fill@PEAV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@std@@YAXQEAV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@0@0AEBV10@@Z @ 0x18003E420 (--$fill@PEAV-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@V-$com_ptr_t@UIP.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800C1070 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,TokenManager<CAudioPumpDspResourceTracker>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,TokenManager<CAudioPumpDspResourceTracker>>>,0>>::clear(
        _QWORD *a1)
{
  _QWORD **v2; // rdx
  _QWORD *result; // rax
  unsigned __int64 *v4; // rdx
  unsigned __int64 *v5; // rcx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1[2] )
  {
    v2 = (_QWORD **)a1[1];
    if ( a1[7] >> 3 <= a1[2] )
    {
      std::_List_node<std::pair<std::wstring const,TokenManager<CAudioPumpDspResourceTracker>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<std::wstring const,TokenManager<CAudioPumpDspResourceTracker>>,void *>>>(
        (__int64)a1,
        (__int64)v2);
      *(_QWORD *)a1[1] = a1[1];
      *(_QWORD *)(a1[1] + 8LL) = a1[1];
      a1[2] = 0LL;
      v4 = (unsigned __int64 *)a1[4];
      v5 = (unsigned __int64 *)a1[3];
      v6 = a1[1];
      return (_QWORD *)std::fill<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>,std::_Iterator_base0> *,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>,std::_Iterator_base0>>(
                         v5,
                         v4,
                         &v6);
    }
    else
    {
      return std::_Hash<std::_Umap_traits<std::wstring,TokenManager<CAudioPumpDspResourceTracker>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,TokenManager<CAudioPumpDspResourceTracker>>>,0>>::_Unchecked_erase(
               a1,
               *v2,
               (_QWORD *)a1[1]);
    }
  }
  return result;
}
