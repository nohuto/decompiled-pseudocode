/*
 * XREFs of ?Base32Encode@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAEK@Z @ 0x180571C18
 * Callers:
 *     ?HashAndBase32Encode@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180571D4C (-HashAndBase32Encode@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x180177520 (-resize@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_KG@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetChars@Base32Encoding@Common@@SAJPEBEKKPEAGPEAK@Z @ 0x1806793DC (-GetChars@Base32Encoding@Common@@SAJPEBEKKPEAGPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int16 *__fastcall Base32Encode(unsigned __int16 *a1, const unsigned __int8 *a2, unsigned int a3)
{
  __int64 *v5; // rcx
  unsigned int v6; // edx
  unsigned __int16 *v7; // r9
  int Chars; // eax
  const char *v9; // r9
  int v11; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  std::wstring::wstring((__int64)a1);
  std::wstring::resize(v5, 0xDuLL);
  v13 = 0;
  v7 = a1;
  if ( *((_QWORD *)a1 + 3) > 7uLL )
    v7 = *(unsigned __int16 **)a1;
  Chars = Common::Base32Encoding::GetChars(a2, v6, 0xDu, v7, &v13);
  if ( Chars < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4D,
      (int)"pcshell\\twinui\\familyappusagemanager\\lib\\certsignerhash.cpp",
      (const char *)(unsigned int)Chars,
      v11);
  if ( v13 != 13 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4E,
      (int)"pcshell\\twinui\\familyappusagemanager\\lib\\certsignerhash.cpp",
      v9);
  return a1;
}
