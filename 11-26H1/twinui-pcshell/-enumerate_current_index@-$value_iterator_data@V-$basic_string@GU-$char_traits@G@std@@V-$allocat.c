/*
 * XREFs of ?enumerate_current_index@?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@AEAAJXZ @ 0x1803BBD84
 * Callers:
 *     ??0?$iterator_t@V?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@QEAA@PEAUHKEY__@@@Z @ 0x1803AD67C (--0-$iterator_t@V-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 *     ??Y?$iterator_t@V?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@QEAAAEAV012@_K@Z @ 0x1803AF964 (--Y-$iterator_t@V-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802B01C0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?resize_buffer_bytes@reg_value_type_info@reg_view_details@reg@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@Z @ 0x180337294 (-resize_buffer_bytes@reg_value_type_info@reg_view_details@reg@wil@@YAJAEAV-$basic_string@GU-$cha.c)
 *     ?trim_buffer@reg_value_type_info@reg_view_details@reg@wil@@YA_KAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1803372D0 (-trim_buffer@reg_value_type_info@reg_view_details@reg@wil@@YA_KAEAV-$basic_string@GU-$char_trait.c)
 *     ??$address_of_name@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg_iterator_details@reg@wil@@YAPEAGAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1803A85B0 (--$address_of_name@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg_iterator_d.c)
 *     ??$resize_name_cch@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg_iterator_details@reg@wil@@YA_KAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K1@Z @ 0x1803AC204 (--$resize_name_cch@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg_iterator_d.c)
 *     ?clear_name@reg_iterator_details@reg@wil@@YAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@Z @ 0x1803BB634 (-clear_name@reg_iterator_details@reg@wil@@YAXAEAV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 */

__int64 __fastcall wil::reg::value_iterator_data<std::wstring>::enumerate_current_index(
        wchar_t *S,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  DWORD v5; // eax
  unsigned __int64 v6; // rax
  DWORD *lpType; // rdx
  WCHAR *v8; // rax
  unsigned int v9; // eax
  int v11; // eax
  unsigned int v12; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD cchValueName; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)S + 12) == -1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x67B,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\registry_helpers.h",
      a4);
  v5 = 32;
  if ( *((_DWORD *)S + 14) )
    v5 = *((_DWORD *)S + 14);
  cchValueName = v5;
  while ( 1 )
  {
    v6 = wil::reg::reg_iterator_details::resize_name_cch<std::wstring>(S, *((_QWORD *)S + 7), v5);
    *((_QWORD *)S + 7) = v6;
    if ( !v6 )
      break;
    lpType = (DWORD *)(S + 16);
    if ( cchValueName )
      v8 = (WCHAR *)wil::reg::reg_iterator_details::address_of_name<std::wstring>(S);
    else
      v8 = 0LL;
    v9 = RegEnumValueW(*((HKEY *)S + 5), *((_DWORD *)S + 12), v8, &cchValueName, 0LL, lpType, 0LL, 0LL);
    if ( !v9 )
    {
      ++cchValueName;
      v11 = wil::reg::reg_view_details::reg_value_type_info::resize_buffer_bytes((__int64 *)S, 2 * cchValueName);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x69A,
          (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\registry_helpers.h",
          (const char *)(unsigned int)v11);
        return v12;
      }
      *((_QWORD *)S + 7) = cchValueName;
      *((_QWORD *)S + 7) = wil::reg::reg_view_details::reg_value_type_info::trim_buffer((__int64 *)S);
      return 0LL;
    }
    if ( v9 == 259 )
    {
      wil::reg::reg_iterator_details::clear_name(S);
      *((_DWORD *)S + 12) = -1;
      return 0LL;
    }
    if ( v9 != 234 )
      return wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x6BA,
               (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\registry_helpers.h",
               (const char *)v9);
    if ( cchValueName == 0x4000 )
      return 0LL;
    v5 = 2 * cchValueName;
    cchValueName = v5;
    if ( v5 > 0x4000 )
    {
      cchValueName = 0x4000;
      v5 = 0x4000;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x684,
    (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\registry_helpers.h",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
