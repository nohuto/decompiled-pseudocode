/*
 * XREFs of ??$hstring_convert@H@impl@winrt@@YA?AUhstring@1@H@Z @ 0x180671798
 * Callers:
 *     ?to_hstring@winrt@@YA?AUhstring@1@H@Z @ 0x180672F1C (-to_hstring@winrt@@YA-AUhstring@1@H@Z.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801A5654 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??$copy@PEADPEAG@std@@YAPEAGPEAD0PEAG@Z @ 0x18023AD84 (--$copy@PEADPEAG@std@@YAPEAGPEAD0PEAG@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$_Integer_to_chars@H@std@@YA?AUto_chars_result@0@PEADQEADHH@Z @ 0x180671428 (--$_Integer_to_chars@H@std@@YA-AUto_chars_result@0@PEADQEADHH@Z.c)
 */

struct winrt::impl::shared_hstring_header **__fastcall winrt::impl::hstring_convert<int>(
        struct winrt::impl::shared_hstring_header **a1,
        int a2)
{
  _QWORD v4[2]; // [rsp+38h] [rbp-A0h] BYREF
  char *v5; // [rsp+48h] [rbp-90h] BYREF
  char v6[32]; // [rsp+58h] [rbp-80h] BYREF
  _BYTE v7[8]; // [rsp+78h] [rbp-60h] BYREF
  _WORD v8[32]; // [rsp+80h] [rbp-58h] BYREF

  std::_Integer_to_chars<int>(&v5, v6, v7, a2);
  v4[0] = v8;
  v4[1] = std::copy<char *,unsigned short *>(v6, v5, v8) - v8;
  winrt::hstring::hstring(a1, (__int64)v4);
  return a1;
}
