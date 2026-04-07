/*
 * XREFs of ??$uninitialized_fill@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@@std@@@std@@@std@@V12@@std@@YAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@@std@@@std@@@0@0AEBV10@@Z @ 0x180062E44
 * Callers:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@std@@@std@@@2@@Z @ 0x180062BD0 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransition>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransition>>>>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 result; // rax

  while ( a1 != a2 )
  {
    result = *a3;
    *a1++ = *a3;
  }
  return result;
}
