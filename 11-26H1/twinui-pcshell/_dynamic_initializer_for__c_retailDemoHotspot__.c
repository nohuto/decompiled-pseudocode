/*
 * XREFs of _dynamic_initializer_for__c_retailDemoHotspot__ @ 0x180012670
 * Callers:
 *     <none>
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
int dynamic_initializer_for__c_retailDemoHotspot__()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rcx

  v0 = std::_WChar_traits<wchar_t>::length(L"WindowsRetailDemo");
  std::wstring::_Construct<1,unsigned short const *>(&unk_1808DA950, v1, v0);
  xmmword_1808DA970 = 0LL;
  xmmword_1808DA980 = 0LL;
  v2 = std::_WChar_traits<wchar_t>::length(L"Y24k8UPs");
  std::wstring::_Construct<1,unsigned short const *>(&xmmword_1808DA970, v3, v2);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__c_retailDemoHotspot__);
}
