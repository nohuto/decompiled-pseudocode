/*
 * XREFs of ??$get_value_with_type@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@Uerr_returncode_policy@wil@@@?$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@AEBAJPEBG0AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@Z @ 0x1803354F8
 * Callers:
 *     ??$try_get_value@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@QEBA?AV?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEBG0K@Z @ 0x180335858 (--$try_get_value@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$reg_view_t@Uer.c)
 * Callees:
 *     ?get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z @ 0x18033761C (-get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z.c)
 *     ?resize_buffer_bytes@reg_value_type_info@reg_view_details@reg@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@Z @ 0x1803377FC (-resize_buffer_bytes@reg_value_type_info@reg_view_details@reg@wil@@YAJAEAV-$basic_string@GU-$cha.c)
 *     ?trim_buffer@reg_value_type_info@reg_view_details@reg@wil@@YA_KAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180337838 (-trim_buffer@reg_value_type_info@reg_view_details@reg@wil@@YA_KAEAV-$basic_string@GU-$char_trait.c)
 */

__int64 __fastcall wil::reg::reg_view_details::reg_view_t<wil::err_exception_policy>::get_value_with_type<std::wstring,wil::err_returncode_policy>(
        HKEY *a1,
        const WCHAR *a2,
        const WCHAR *a3,
        void **a4,
        wil::reg::reg_view_details *a5)
{
  void **v5; // rbx
  _WORD *v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  DWORD v12; // edx
  DWORD value_flags_from_value_type; // esi
  bool v14; // cc
  void *pvData; // rcx
  LSTATUS ValueW; // eax
  unsigned int v17; // edi
  void *v18; // rax
  __int64 v19; // rdx
  __int64 result; // rax
  DWORD pcbData; // [rsp+88h] [rbp+20h] BYREF

  v5 = a4;
  if ( (unsigned __int64)a4[3] <= 7 )
  {
    v9 = a4;
  }
  else
  {
    v9 = *a4;
    a4 = (void **)*a4;
  }
  v10 = (unsigned __int64)a4 + 2 * (_QWORD)v5[2];
  v11 = (v10 - (unsigned __int64)v9 + 1) >> 1;
  if ( (unsigned __int64)v9 > v10 )
    v11 = 0LL;
  if ( v11 )
  {
    while ( v11 )
    {
      *v9++ = 0;
      --v11;
    }
  }
  value_flags_from_value_type = wil::reg::reg_view_details::get_value_flags_from_value_type(
                                  (wil::reg::reg_view_details *)(unsigned int)a5,
                                  2 * *((_DWORD *)v5 + 4) + 2);
  while ( 1 )
  {
    v14 = (unsigned __int64)v5[3] <= 7;
    pvData = v5;
    pcbData = v12;
    if ( !v14 )
      pvData = *v5;
    ValueW = RegGetValueW(*a1, a2, a3, value_flags_from_value_type, 0LL, pvData, &pcbData);
    v17 = ValueW;
    if ( ValueW > 0 )
      v17 = (unsigned __int16)ValueW | 0x80070000;
    if ( v17 == -2147024662 )
    {
      v19 = pcbData;
      goto LABEL_26;
    }
    if ( (v17 & 0x80000000) != 0 )
      return v17;
    v18 = v5;
    if ( (unsigned __int64)v5[3] > 7 )
      v18 = *v5;
    v19 = pcbData;
    if ( v18 || !pcbData )
      break;
LABEL_26:
    result = wil::reg::reg_view_details::reg_value_type_info::resize_buffer_bytes(v5, v19);
    if ( (int)result < 0 )
      return result;
    v12 = pcbData;
  }
  if ( 2 * *((_DWORD *)v5 + 4) + 2 == pcbData
    || (result = wil::reg::reg_view_details::reg_value_type_info::resize_buffer_bytes(v5, pcbData), (int)result >= 0) )
  {
    wil::reg::reg_view_details::reg_value_type_info::trim_buffer(v5);
    return v17;
  }
  return result;
}
