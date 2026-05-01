/*
 * XREFs of ??$str_concat@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BA@$$CBGAEAPEBG@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BA@$$CBG0@Z @ 0x1803CF8E4
 * Callers:
 *     ?GetComponents@ImmersiveShellComponentsConfiguration@@CA?AV?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@PEAUHKEY__@@PEBG1@Z @ 0x1803DBF5C (-GetComponents@ImmersiveShellComponentsConfiguration@@CA-AV-$vector@UClassIdAndInfo@ImmersiveShe.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$str_build_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAPEBG_K@Z @ 0x1803CF764 (--$str_build_nothrow@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::str_concat<std::wstring,unsigned short const * &,unsigned short const (&)[16],unsigned short const * &>(
        __int64 a1,
        const unsigned __int16 **a2,
        __int64 a3,
        const unsigned __int16 **a4)
{
  const unsigned __int16 *v5; // rcx
  const unsigned __int16 *v6; // rax
  int v7; // eax
  const unsigned __int16 *v9[4]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  v5 = *a4;
  v6 = *a2;
  v9[0] = (const unsigned __int16 *)a1;
  v9[1] = v6;
  v9[2] = L"\\ImmersiveShell";
  v9[3] = v5;
  v7 = wil::details::str_build_nothrow<std::wstring>(a1, v9);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x75D,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      (const char *)(unsigned int)v7,
      1);
  return a1;
}
