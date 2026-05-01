/*
 * XREFs of ?AreEquivalentPinOperations@@YA_NV?$shared_ptr@VPinOperationContext@@@std@@0@Z @ 0x1805C0698
 * Callers:
 *     ?IsPinOperationBlocked@PinHistory@@QEBA_NV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x1801EBC78 (-IsPinOperationBlocked@PinHistory@@QEBA_NV-$shared_ptr@VPinOperationContext@@@std@@@Z.c)
 *     _anonymous_namespace_::PinConsentPromptManager::IsPromptOutstandingForPinOperation @ 0x1805C3498 (_anonymous_namespace_--PinConsentPromptManager--IsPromptOutstandingForPinOperation.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_f864d990cd59c7d75306b1f1b4f893f3_@@_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@std@@EEAA_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@2@@Z @ 0x1805C8750 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_f864d990cd59c7d75306b1f1b4f893f3_@@_NAEBU-$pair@V-$shar.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800F2370 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ??B?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@1@XZ @ 0x1801BD538 (--B-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string_view@GU-$c.c)
 *     ?AreEquivalentPinSources@@YA_NV?$shared_ptr@VPinRequestContext@@@std@@0@Z @ 0x1805C078C (-AreEquivalentPinSources@@YA_NV-$shared_ptr@VPinRequestContext@@@std@@0@Z.c)
 */

bool __fastcall AreEquivalentPinOperations(_QWORD **a1, _QWORD **a2)
{
  __int64 v4; // r10
  __int64 v5; // r11
  bool v6; // bl
  std::_Ref_count_base *v7; // rcx
  std::_Ref_count_base *v8; // rcx
  _WORD *v10; // [rsp+20h] [rbp-20h] BYREF
  __int64 v11; // [rsp+28h] [rbp-18h]
  _WORD *v12; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+38h] [rbp-8h]

  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v12, *a2);
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v10, *a1);
  v6 = 0;
  if ( (unsigned __int8)AreEquivalentPinSources(&v10, &v12) )
  {
    std::wstring::operator std::basic_string_view<unsigned short>(*a2 + 3, &v10);
    std::wstring::operator std::basic_string_view<unsigned short>(*a1 + 3, &v12);
    if ( std::_Traits_equal<std::char_traits<unsigned short>>((__int64)v12, v13, v10, v11) )
    {
      std::wstring::operator std::basic_string_view<unsigned short>((_QWORD *)(v4 + 56), &v12);
      std::wstring::operator std::basic_string_view<unsigned short>((_QWORD *)(v5 + 56), &v10);
      if ( std::_Traits_equal<std::char_traits<unsigned short>>((__int64)v10, v11, v12, v13) )
        v6 = 1;
    }
  }
  v7 = (std::_Ref_count_base *)a1[1];
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  v8 = (std::_Ref_count_base *)a2[1];
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return v6;
}
