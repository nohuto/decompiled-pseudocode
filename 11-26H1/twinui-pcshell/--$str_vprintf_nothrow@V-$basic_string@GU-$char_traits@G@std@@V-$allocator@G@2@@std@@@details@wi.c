/*
 * XREFs of ??$str_vprintf_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEAPEAD@Z @ 0x1803D9708
 * Callers:
 *     ??$str_printf@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGZZ @ 0x1803D9688 (--$str_printf@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@wil@@YA-AV-$basic_s.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?make@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAAJPEBG_K@Z @ 0x180032D0C (-make@-$string_maker@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180033674 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z @ 0x18018ABAC (-StringCchVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z.c)
 *     ?release@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1801E810C (-release@-$string_maker@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@w.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _vscwprintf @ 0x1802CA014 (_vscwprintf.c)
 */

__int64 __fastcall wil::details::str_vprintf_nothrow<std::wstring>(_QWORD *a1, wchar_t *a2, va_list *a3)
{
  unsigned __int64 v6; // rbp
  int v7; // eax
  wchar_t *v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wchar_t *v11; // rcx
  _QWORD *v12; // rax
  wchar_t *Buffer[4]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v15[4]; // [rsp+60h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v6 = vscwprintf(a2, *a3);
  std::wstring::wstring((__int64)Buffer);
  v7 = wil::details::string_maker<std::wstring>::make(Buffer, 0LL, v6);
  v9 = v7;
  if ( v7 >= 0 )
  {
    v11 = (wchar_t *)Buffer;
    if ( Buffer[3] > (wchar_t *)7 )
      v11 = Buffer[0];
    v7 = StringCchVPrintfExW(v11, v6 + 1, 0LL, v8, 0x800u, a2, *a3);
    v9 = v7;
    if ( v7 >= 0 )
    {
      v12 = (_QWORD *)wil::details::string_maker<std::wstring>::release((__int64)Buffer, (__int64)v15);
      std::wstring::operator=(a1, v12);
      std::wstring::_Tidy_deallocate(v15);
      v9 = 0;
      goto LABEL_9;
    }
    v10 = 1936LL;
  }
  else
  {
    v10 = 1932LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
    (const char *)(unsigned int)v7);
LABEL_9:
  std::wstring::_Tidy_deallocate(Buffer);
  return v9;
}
