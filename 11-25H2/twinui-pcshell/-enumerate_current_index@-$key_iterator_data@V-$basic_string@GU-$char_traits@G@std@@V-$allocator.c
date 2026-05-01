/*
 * XREFs of ?enumerate_current_index@?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@AEAAJXZ @ 0x18064ED5C
 * Callers:
 *     ??0?$iterator_t@V?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@QEAA@PEAUHKEY__@@@Z @ 0x18064D628 (--0-$iterator_t@V-$key_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ??Y?$iterator_t@V?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@QEAAAEAV012@_K@Z @ 0x18064DB0C (--Y-$iterator_t@V-$key_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x1801985AC (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802A9FD8 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?resize_buffer_bytes@reg_value_type_info@reg_view_details@reg@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@Z @ 0x1803377FC (-resize_buffer_bytes@reg_value_type_info@reg_view_details@reg@wil@@YAJAEAV-$basic_string@GU-$cha.c)
 *     ?trim_buffer@reg_value_type_info@reg_view_details@reg@wil@@YA_KAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180337838 (-trim_buffer@reg_value_type_info@reg_view_details@reg@wil@@YA_KAEAV-$basic_string@GU-$char_trait.c)
 *     ??$resize_name_cch@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg_iterator_details@reg@wil@@YA_KAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K1@Z @ 0x1803A3480 (--$resize_name_cch@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg_iterator_d.c)
 *     ?clear_name@reg_iterator_details@reg@wil@@YAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@Z @ 0x1803B2D08 (-clear_name@reg_iterator_details@reg@wil@@YAXAEAV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 */

__int64 __fastcall wil::reg::key_iterator_data<std::wstring>::enumerate_current_index(
        wchar_t *S,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  DWORD v5; // eax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  WCHAR *v8; // rax
  unsigned int v9; // eax
  int v11; // eax
  unsigned int v12; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD cchName; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)S + 10) == -1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x5EC,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\registry_helpers.h",
      a4);
  v5 = 32;
  if ( *((_DWORD *)S + 12) )
    v5 = *((_DWORD *)S + 12);
  while ( 1 )
  {
    v6 = *((_QWORD *)S + 6);
    cchName = v5;
    v7 = wil::reg::reg_iterator_details::resize_name_cch<std::wstring>(S, v6, v5);
    *((_QWORD *)S + 6) = v7;
    if ( !v7 )
      break;
    if ( cchName )
      v8 = (WCHAR *)std::wstring::c_str(S);
    else
      v8 = 0LL;
    v9 = RegEnumKeyExW(*((HKEY *)S + 4), *((_DWORD *)S + 10), v8, &cchName, 0LL, 0LL, 0LL, 0LL);
    if ( !v9 )
    {
      ++cchName;
      v11 = wil::reg::reg_view_details::reg_value_type_info::resize_buffer_bytes(S, 2 * cchName);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x60B,
          (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\registry_helpers.h",
          (const char *)(unsigned int)v11);
        return v12;
      }
      *((_QWORD *)S + 6) = cchName;
      *((_QWORD *)S + 6) = wil::reg::reg_view_details::reg_value_type_info::trim_buffer(S);
      return 0LL;
    }
    if ( v9 == 259 )
    {
      wil::reg::reg_iterator_details::clear_name(S);
      *((_DWORD *)S + 10) = -1;
      return 0LL;
    }
    if ( v9 != 234 )
      return wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x62C,
               (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\registry_helpers.h",
               (const char *)v9);
    if ( cchName >= 0x7F )
    {
      if ( cchName >= 0x100 )
        return 0LL;
      v5 = 256;
    }
    else
    {
      v5 = 127;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5F5,
    (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\registry_helpers.h",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
