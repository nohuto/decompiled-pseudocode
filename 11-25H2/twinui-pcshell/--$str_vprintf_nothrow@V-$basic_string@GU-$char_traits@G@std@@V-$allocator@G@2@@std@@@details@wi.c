/*
 * XREFs of ??$str_vprintf_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEAPEAD@Z @ 0x1803CFACC
 * Callers:
 *     ??$str_printf@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGZZ @ 0x1803CFA4C (--$str_printf@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@wil@@YA-AV-$basic_s.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?make@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAAJPEBG_K@Z @ 0x1800585DC (-make@-$string_maker@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AEF48 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?StringCchVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z @ 0x18019094C (-StringCchVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _vscwprintf @ 0x1802D3134 (_vscwprintf.c)
 */

__int64 __fastcall wil::details::str_vprintf_nothrow<std::wstring>(__int64 a1, wchar_t *a2, va_list *a3)
{
  unsigned __int64 v6; // r14
  int v7; // eax
  wchar_t *v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wchar_t *v11; // rcx
  __int128 v12; // xmm0
  __m128i v13; // xmm1
  wchar_t *Buffer[2]; // [rsp+40h] [rbp-29h] BYREF
  __m128i si128; // [rsp+50h] [rbp-19h]
  _OWORD v17[2]; // [rsp+60h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v6 = vscwprintf(a2, *a3);
  *(_OWORD *)Buffer = 0LL;
  LOWORD(Buffer[0]) = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v7 = wil::details::string_maker<std::wstring>::make((__int128 *)Buffer, 0LL, v6);
  v9 = v7;
  if ( v7 >= 0 )
  {
    v11 = (wchar_t *)Buffer;
    if ( si128.m128i_i64[1] > 7uLL )
      v11 = Buffer[0];
    v7 = StringCchVPrintfExW(v11, v6 + 1, 0LL, v8, 0x800u, a2, *a3);
    v9 = v7;
    if ( v7 >= 0 )
    {
      v12 = *(_OWORD *)Buffer;
      v13 = si128;
      LOWORD(Buffer[0]) = 0;
      v17[0] = v12;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v17[1] = v13;
      std::wstring::operator=(a1, (__int64)v17);
      std::wstring::_Tidy_deallocate((void **)v17);
      v9 = 0;
      goto LABEL_9;
    }
    v10 = 1915LL;
  }
  else
  {
    v10 = 1911LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
    (const char *)(unsigned int)v7);
LABEL_9:
  std::wstring::_Tidy_deallocate((void **)Buffer);
  return v9;
}
