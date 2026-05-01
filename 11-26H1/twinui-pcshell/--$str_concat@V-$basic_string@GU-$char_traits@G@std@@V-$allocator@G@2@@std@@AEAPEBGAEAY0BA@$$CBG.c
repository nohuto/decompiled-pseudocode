/*
 * XREFs of ??$str_concat@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BA@$$CBGAEAPEBG@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BA@$$CBG0@Z @ 0x1803D9538
 * Callers:
 *     ?GetComponents@ImmersiveShellComponentsConfiguration@@CA?AV?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@PEAUHKEY__@@PEBG1@Z @ 0x1803E4EC8 (-GetComponents@ImmersiveShellComponentsConfiguration@@CA-AV-$vector@UClassIdAndInfo@ImmersiveShe.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$str_build_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAPEBG_K@Z @ 0x1803D93E0 (--$str_build_nothrow@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int16 *__fastcall wil::str_concat<std::wstring,unsigned short const * &,unsigned short const (&)[16],unsigned short const * &>(
        unsigned __int16 *a1)
{
  const unsigned __int16 **v2; // r9
  const unsigned __int16 *v3; // rcx
  const unsigned __int16 **v4; // rdx
  const unsigned __int16 *v5; // r8
  const unsigned __int16 *v6; // rax
  int v7; // eax
  const unsigned __int16 *v9[4]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  std::wstring::wstring((__int64)a1);
  v3 = *v2;
  v5 = *v4;
  v6 = a1;
  if ( *((_QWORD *)a1 + 3) > 7uLL )
    v6 = *(const unsigned __int16 **)a1;
  v9[0] = v6;
  v9[1] = v5;
  v9[2] = L"\\ImmersiveShell";
  v9[3] = v3;
  v7 = wil::details::str_build_nothrow<std::wstring>(a1, v9);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x772,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      (const char *)(unsigned int)v7,
      1);
  return a1;
}
