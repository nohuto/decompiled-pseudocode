/*
 * XREFs of ??$hstring_convert@H@impl@winrt@@YA?AUhstring@1@H@Z @ 0x18064B800
 * Callers:
 *     ?to_hstring@winrt@@YA?AUhstring@1@H@Z @ 0x18064CEE0 (-to_hstring@winrt@@YA-AUhstring@1@H@Z.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800AD0B4 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$_Integer_to_chars@H@std@@YA?AUto_chars_result@0@PEADQEADHH@Z @ 0x18064B48C (--$_Integer_to_chars@H@std@@YA-AUto_chars_result@0@PEADQEADHH@Z.c)
 */

struct winrt::impl::shared_hstring_header **__fastcall winrt::impl::hstring_convert<int>(
        struct winrt::impl::shared_hstring_header **a1,
        int a2)
{
  char *v3; // rcx
  char *i; // rdx
  __int16 v5; // ax
  _QWORD v7[3]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v8[32]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v9[8]; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v10[64]; // [rsp+70h] [rbp+7h] BYREF

  v7[0] = a1;
  std::_Integer_to_chars<int>((__int64)v7, v8, v9, a2);
  v3 = v10;
  for ( i = v8; i != (char *)v7[0]; v3 += 2 )
  {
    v5 = *i++;
    *(_WORD *)v3 = v5;
  }
  v7[0] = v10;
  v7[1] = (v3 - v10) >> 1;
  winrt::hstring::hstring(a1, (__int64)v7);
  return a1;
}
