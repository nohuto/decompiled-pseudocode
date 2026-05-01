/*
 * XREFs of ??$try_get_value@_K@?$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@QEBA?AV?$optional@_K@std@@PEBG0K@Z @ 0x1803A4048
 * Callers:
 *     ?AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ @ 0x1803A6C80 (-AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z @ 0x18033761C (-get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z.c)
 */

__int64 __fastcall wil::reg::reg_view_details::reg_view_t<wil::err_exception_policy>::try_get_value<unsigned __int64>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        wil::reg::reg_view_details *a5)
{
  DWORD value_flags_from_value_type; // eax
  LPCWSTR v7; // r8
  HKEY v8; // r10
  LSTATUS ValueW; // eax
  unsigned __int64 v10; // r9
  int v12; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp+18h] BYREF
  int v16; // [rsp+64h] [rbp+1Ch]

  v16 = HIDWORD(a3);
  pvData = 0LL;
  pcbData = 8;
  value_flags_from_value_type = wil::reg::reg_view_details::get_value_flags_from_value_type((wil::reg::reg_view_details *)(unsigned int)a5);
  ValueW = RegGetValueW(v8, 0LL, v7, value_flags_from_value_type, 0LL, &pvData, &pcbData);
  v10 = (unsigned int)ValueW;
  if ( ValueW > 0 )
    v10 = (unsigned __int16)ValueW | 0x80070000;
  if ( (v10 & 0x80000000) != 0LL )
  {
    if ( (unsigned int)(v10 + 2147024894) > 1 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C60,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
        (const char *)v10,
        v12);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    *(_QWORD *)a2 = pvData;
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
