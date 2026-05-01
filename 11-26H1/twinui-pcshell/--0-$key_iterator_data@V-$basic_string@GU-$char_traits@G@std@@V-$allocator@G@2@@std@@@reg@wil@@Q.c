/*
 * XREFs of ??0?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@AEBV012@@Z @ 0x180673734
 * Callers:
 *     ??$make_range@V?$iterator_t@V?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@@wil@@YA?AV?$pointer_range@V?$iterator_t@V?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@@details@0@V?$iterator_t@V?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@0@0@Z @ 0x1806735A4 (--$make_range@V-$iterator_t@V-$key_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ?ProcessAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ @ 0x180674490 (-ProcessAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180033674 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?copy_name@reg_iterator_details@reg@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV45@_K@Z @ 0x1803BB738 (-copy_name@reg_iterator_details@reg@wil@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 */

__int64 __fastcall wil::reg::key_iterator_data<std::wstring>::key_iterator_data<std::wstring>(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v5; // rax
  _QWORD v7[4]; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = -1;
  *(_QWORD *)(a1 + 48) = 0LL;
  v5 = (_QWORD *)wil::reg::reg_iterator_details::copy_name((__int64)v7, (char *)a2, *(_QWORD *)(a2 + 48));
  std::wstring::operator=((_QWORD *)a1, v5);
  std::wstring::_Tidy_deallocate(v7);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 48) = v2;
  return a1;
}
