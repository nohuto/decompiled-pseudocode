/*
 * XREFs of ??$try_get_value@K@?$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@QEBA?AV?$optional@K@std@@PEBG0K@Z @ 0x180334F64
 * Callers:
 *     ??$try_get_value@K@reg@wil@@YA?AV?$optional@K@std@@PEAUHKEY__@@PEBG1@Z @ 0x18033502C (--$try_get_value@K@reg@wil@@YA-AV-$optional@K@std@@PEAUHKEY__@@PEBG1@Z.c)
 *     ??$try_get_value@I@reg@wil@@YA?AV?$optional@I@std@@PEAUHKEY__@@PEBG1@Z @ 0x1803AD034 (--$try_get_value@I@reg@wil@@YA-AV-$optional@I@std@@PEAUHKEY__@@PEBG1@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z @ 0x1803370AC (-get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z.c)
 */

__int64 __fastcall wil::reg::reg_view_details::reg_view_t<wil::err_exception_policy>::try_get_value<unsigned long>(
        __int64 a1,
        __int64 a2,
        const WCHAR *a3,
        __int64 a4,
        wil::reg::reg_view_details *a5)
{
  DWORD value_flags_from_value_type; // eax
  HKEY *v8; // r10
  LPCWSTR v9; // r11
  LSTATUS ValueW; // eax
  unsigned __int64 v11; // r9
  int pdwType; // [rsp+20h] [rbp-38h]
  DWORD pcbData[6]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int pvData; // [rsp+60h] [rbp+8h] BYREF

  pvData = 0;
  pcbData[0] = 4;
  value_flags_from_value_type = wil::reg::reg_view_details::get_value_flags_from_value_type(
                                  (wil::reg::reg_view_details *)(unsigned int)a5,
                                  a2);
  ValueW = RegGetValueW(*v8, a3, v9, value_flags_from_value_type, 0LL, &pvData, pcbData);
  v11 = (unsigned int)ValueW;
  if ( ValueW > 0 )
    v11 = (unsigned __int16)ValueW | 0x80070000;
  if ( (v11 & 0x80000000) != 0LL )
  {
    if ( (unsigned int)(v11 + 2147024894) > 1 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C89,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
        (const char *)v11,
        pdwType);
    *(_BYTE *)(a2 + 4) = 0;
  }
  else
  {
    *(_DWORD *)a2 = pvData;
    *(_BYTE *)(a2 + 4) = 1;
  }
  return a2;
}
