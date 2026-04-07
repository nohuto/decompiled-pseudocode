/*
 * XREFs of ??1_Clear_guard@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UITransition@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@QEAA@XZ @ 0x1800DBCE4
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UITransition@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800DC478 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@PEAUHWND__@@UITransition@Transitions@Udwm@winrt@@V-$_Uha.c)
 * Callees:
 *     ??$fill@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@V12@@std@@YAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@0@0AEBV10@@Z @ 0x180062E60 (--$fill@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAUHWND__@@V-.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800DB97C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAUHWND__@@UITransition@Transitions@Udwm@w.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::ITransition,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransition>>,0>>::_Clear_guard::~_Clear_guard(
        _QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 *v4; // rdx
  unsigned __int64 *v5; // rcx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)*a1;
  if ( *a1 && v1[2] )
  {
    v2 = (_QWORD *)v1[1];
    if ( v1[7] >> 3 <= v1[2] )
    {
      std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransition>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransition>,void *>>>(
        (__int64)a1,
        (__int64)v2);
      *(_QWORD *)v1[1] = v1[1];
      *(_QWORD *)(v1[1] + 8LL) = v1[1];
      v1[2] = 0LL;
      v4 = (unsigned __int64 *)v1[4];
      v5 = (unsigned __int64 *)v1[3];
      v6 = v1[1];
      return std::fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>>>>(
               v5,
               v4,
               &v6);
    }
    else
    {
      return std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::ITransition,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransition>>,0>>::_Unchecked_erase(
               *a1,
               *v2,
               v1[1]);
    }
  }
  return result;
}
