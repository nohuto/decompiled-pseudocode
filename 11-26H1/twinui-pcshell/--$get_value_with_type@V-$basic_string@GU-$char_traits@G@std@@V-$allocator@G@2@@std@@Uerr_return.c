/*
 * XREFs of ??$get_value_with_type@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@Uerr_returncode_policy@wil@@@?$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@AEBAJPEBG0AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@Z @ 0x180334D54
 * Callers:
 *     ??$try_get_value@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@QEBA?AV?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEBG0K@Z @ 0x180335068 (--$try_get_value@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$reg_view_t@Uer.c)
 * Callees:
 *     ?get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z @ 0x1803370AC (-get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z.c)
 *     ?resize_buffer_bytes@reg_value_type_info@reg_view_details@reg@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@Z @ 0x180337294 (-resize_buffer_bytes@reg_value_type_info@reg_view_details@reg@wil@@YAJAEAV-$basic_string@GU-$cha.c)
 *     ?trim_buffer@reg_value_type_info@reg_view_details@reg@wil@@YA_KAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1803372D0 (-trim_buffer@reg_value_type_info@reg_view_details@reg@wil@@YA_KAEAV-$basic_string@GU-$char_trait.c)
 */

__int64 __fastcall wil::reg::reg_view_details::reg_view_t<wil::err_exception_policy>::get_value_with_type<std::wstring,wil::err_returncode_policy>(
        HKEY *a1,
        const WCHAR *a2,
        const WCHAR *a3,
        void **a4,
        wil::reg::reg_view_details *a5)
{
  void **v5; // rbx
  void **v9; // rdi
  unsigned __int64 v10; // rcx
  DWORD v11; // edx
  DWORD value_flags_from_value_type; // esi
  bool v13; // cc
  void *pvData; // rcx
  LSTATUS ValueW; // eax
  unsigned int v16; // edi
  void *v17; // rax
  __int64 v18; // rdx
  __int64 result; // rax
  DWORD pcbData; // [rsp+88h] [rbp+20h] BYREF

  v5 = a4;
  if ( (unsigned __int64)a4[3] > 7 )
    a4 = (void **)*a4;
  v9 = a4;
  v10 = (unsigned __int64)(2LL * (_QWORD)v5[2] + 1) >> 1;
  if ( a4 > (void **)((char *)a4 + 2 * (_QWORD)v5[2]) )
    v10 = 0LL;
  if ( v10 )
  {
    while ( v10 )
    {
      *(_WORD *)v9 = 0;
      v9 = (void **)((char *)v9 + 2);
      --v10;
    }
  }
  value_flags_from_value_type = wil::reg::reg_view_details::get_value_flags_from_value_type(
                                  (wil::reg::reg_view_details *)(unsigned int)a5,
                                  2 * *((_DWORD *)v5 + 4) + 2);
  while ( 1 )
  {
    v13 = (unsigned __int64)v5[3] <= 7;
    pvData = v5;
    pcbData = v11;
    if ( !v13 )
      pvData = *v5;
    ValueW = RegGetValueW(*a1, a2, a3, value_flags_from_value_type, 0LL, pvData, &pcbData);
    v16 = ValueW;
    if ( ValueW > 0 )
      v16 = (unsigned __int16)ValueW | 0x80070000;
    if ( v16 == -2147024662 )
    {
      v18 = pcbData;
      goto LABEL_25;
    }
    if ( (v16 & 0x80000000) != 0 )
      return v16;
    v17 = v5;
    if ( (unsigned __int64)v5[3] > 7 )
      v17 = *v5;
    v18 = pcbData;
    if ( v17 || !pcbData )
      break;
LABEL_25:
    result = wil::reg::reg_view_details::reg_value_type_info::resize_buffer_bytes(v5, v18);
    if ( (int)result < 0 )
      return result;
    v11 = pcbData;
  }
  if ( 2 * *((_DWORD *)v5 + 4) + 2 == pcbData
    || (result = wil::reg::reg_view_details::reg_value_type_info::resize_buffer_bytes(v5, pcbData), (int)result >= 0) )
  {
    wil::reg::reg_view_details::reg_value_type_info::trim_buffer(v5);
    return v16;
  }
  return result;
}
