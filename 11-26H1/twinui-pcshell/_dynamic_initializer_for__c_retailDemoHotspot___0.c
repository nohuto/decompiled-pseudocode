/*
 * XREFs of _dynamic_initializer_for__c_retailDemoHotspot___0 @ 0x1802083E0
 * Callers:
 *     <none>
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
int dynamic_initializer_for__c_retailDemoHotspot___0()
{
  unsigned __int64 v0; // rax
  const void *v1; // rcx
  unsigned __int64 v2; // rax
  const void *v3; // rcx

  v0 = std::_WChar_traits<wchar_t>::length((__int64)L"WindowsRetailDemo");
  std::wstring::_Construct<1,unsigned short const *>((char **)&unk_1808DA5A0, v1, v0);
  xmmword_1808DA5C0 = 0LL;
  xmmword_1808DA5D0 = 0LL;
  v2 = std::_WChar_traits<wchar_t>::length((__int64)L"Y24k8UPs");
  std::wstring::_Construct<1,unsigned short const *>((char **)&xmmword_1808DA5C0, v3, v2);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__c_retailDemoHotspot___0);
}
