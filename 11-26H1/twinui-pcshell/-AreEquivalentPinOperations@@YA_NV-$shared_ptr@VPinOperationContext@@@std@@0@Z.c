/*
 * XREFs of ?AreEquivalentPinOperations@@YA_NV?$shared_ptr@VPinOperationContext@@@std@@0@Z @ 0x1805E4748
 * Callers:
 *     ?IsPinOperationBlocked@PinHistory@@QEBA_NV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x1800E3304 (-IsPinOperationBlocked@PinHistory@@QEBA_NV-$shared_ptr@VPinOperationContext@@@std@@@Z.c)
 *     _anonymous_namespace_::PinConsentPromptManager::IsPromptOutstandingForPinOperation @ 0x1805E7218 (_anonymous_namespace_--PinConsentPromptManager--IsPromptOutstandingForPinOperation.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_f864d990cd59c7d75306b1f1b4f893f3_@@_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@std@@EEAA_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@2@@Z @ 0x1805EC5B0 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_f864d990cd59c7d75306b1f1b4f893f3_@@_NAEBU-$pair@V-$shar.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800303B8 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??B?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@1@XZ @ 0x1801B5C88 (--B-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string_view@GU-$c.c)
 *     ?AreEquivalentPinSources@@YA_NV?$shared_ptr@VPinRequestContext@@@std@@0@Z @ 0x1805E4840 (-AreEquivalentPinSources@@YA_NV-$shared_ptr@VPinRequestContext@@@std@@0@Z.c)
 */

bool __fastcall AreEquivalentPinOperations(_QWORD **a1, _QWORD **a2)
{
  bool v4; // bl
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base *v6; // rcx
  const wchar_t *v8; // [rsp+20h] [rbp-20h] BYREF
  size_t v9; // [rsp+28h] [rbp-18h]
  const wchar_t *v10; // [rsp+30h] [rbp-10h] BYREF
  size_t v11; // [rsp+38h] [rbp-8h]

  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v10, *a2);
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v8, *a1);
  v4 = 0;
  if ( (unsigned __int8)AreEquivalentPinSources(&v8, &v10) )
  {
    std::wstring::operator std::basic_string_view<unsigned short>(*a2 + 3, &v8);
    std::wstring::operator std::basic_string_view<unsigned short>(*a1 + 3, &v10);
    if ( std::_Traits_equal<std::char_traits<unsigned short>>(v10, v11, v8, v9) )
    {
      std::wstring::operator std::basic_string_view<unsigned short>(*a2 + 7, &v10);
      std::wstring::operator std::basic_string_view<unsigned short>(*a1 + 7, &v8);
      if ( std::_Traits_equal<std::char_traits<unsigned short>>(v8, v9, v10, v11) )
        v4 = 1;
    }
  }
  v5 = (std::_Ref_count_base *)a1[1];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  v6 = (std::_Ref_count_base *)a2[1];
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  return v4;
}
