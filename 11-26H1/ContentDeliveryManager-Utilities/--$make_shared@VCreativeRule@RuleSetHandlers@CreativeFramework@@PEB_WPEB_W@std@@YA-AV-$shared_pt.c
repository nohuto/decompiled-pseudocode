/*
 * XREFs of ??$make_shared@VCreativeRule@RuleSetHandlers@CreativeFramework@@PEB_WPEB_W@std@@YA?AV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@0@$$QEAPEB_W0@Z @ 0x18007B88C
 * Callers:
 *     ?CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18007D1DC (-CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCreativeRule@R.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004554 (--2@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004B658 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall std::make_shared<CreativeFramework::RuleSetHandlers::CreativeRule,wchar_t const *,wchar_t const *>(
        _QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rsi

  v2 = operator new(0x50uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<CreativeFramework::RuleSetHandlers::CreativeRule>::`vftable';
    std::wstring::wstring((__int64)(v2 + 4));
    std::wstring::wstring((__int64)(v3 + 12));
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 4;
  return a1;
}
