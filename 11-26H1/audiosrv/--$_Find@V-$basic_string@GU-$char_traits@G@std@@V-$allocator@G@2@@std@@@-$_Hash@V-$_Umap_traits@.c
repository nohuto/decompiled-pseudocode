/*
 * XREFs of ??$_Find@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@AEBAPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@_K@Z @ 0x180049010
 * Callers:
 *     ?find@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180140118 (-find@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$c.c)
 * Callees:
 *     wmemcmp @ 0x18009DD6C (wmemcmp.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>,0>>::_Find<std::wstring>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rsi
  const wchar_t *v8; // rdx
  const wchar_t *v9; // rcx
  size_t v10; // r8

  v4 = a1[3];
  v6 = *(_QWORD **)(v4 + 16 * (a3 & a1[6]) + 8);
  if ( v6 == (_QWORD *)a1[1] )
  {
    v6 = 0LL;
  }
  else
  {
    v7 = *(_QWORD **)(v4 + 16 * (a3 & a1[6]));
    while ( 1 )
    {
      v8 = (const wchar_t *)(v6 + 2);
      if ( v6[5] > 7uLL )
        v8 = *(const wchar_t **)v8;
      v9 = (const wchar_t *)a2;
      v10 = *(_QWORD *)(a2 + 16);
      if ( *(_QWORD *)(a2 + 24) > 7uLL )
        v9 = *(const wchar_t **)a2;
      if ( v10 == v6[4] && (!v10 || !wmemcmp(v9, v8, v10)) )
        break;
      if ( v6 == v7 )
      {
        v6 = 0LL;
        break;
      }
      v6 = (_QWORD *)v6[1];
    }
  }
  if ( v6 )
    return v6;
  else
    return (_QWORD *)a1[1];
}
