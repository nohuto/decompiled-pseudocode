/*
 * XREFs of ??0?$iterator_t@V?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@QEAA@PEAUHKEY__@@@Z @ 0x1806736BC
 * Callers:
 *     ?ProcessAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ @ 0x180674490 (-ProcessAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?enumerate_current_index@?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@AEAAJXZ @ 0x180674DD8 (-enumerate_current_index@-$key_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::reg::iterator_t<wil::reg::key_iterator_data<std::wstring>>::iterator_t<wil::reg::key_iterator_data<std::wstring>>(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  *(_QWORD *)(a1 + 32) = a2;
  *(_DWORD *)(a1 + 40) = -1;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( a2 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    v3 = wil::reg::key_iterator_data<std::wstring>::enumerate_current_index((wchar_t *)a1);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6DE,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\registry_helpers.h",
        (const char *)(unsigned int)v3,
        v5);
  }
  return a1;
}
