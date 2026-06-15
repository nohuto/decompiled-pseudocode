/*
 * XREFs of ?AddEffectPackConfigurationIfApplicable@CEndpointCharacteristics@@QEAAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEA_N@Z @ 0x1801376E4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_6ce6f5b5c48dd15f085b9d66d99ef51d__long_CEndpointCharacteristics___::_Do_call @ 0x180104190 (std--_Func_impl_no_alloc__lambda_6ce6f5b5c48dd15f085b9d66d99ef51d__long_CEndpointCh_ea_180104190.c)
 *     std::_Func_impl_no_alloc__lambda_9c91384c0692fbb0a23d5e4f7048f590__long_std::shared_ptr_EffectPackConfiguration_const___&_::_Do_call @ 0x18013EE40 (std--_Func_impl_no_alloc__lambda_9c91384c0692fbb0a23d5e4f7048f590__long_std--shared_ea_18013EE40.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInstanceFromConfiguration@EffectPack@@SAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEAVCEndpointCharacteristics@@PEBU_tlgProvider_t@@AEAV?$shared_ptr@VEffectPack@@@3@@Z @ 0x1800583D4 (-CreateInstanceFromConfiguration@EffectPack@@SAJAEAV-$shared_ptr@$$CBUEffectPackConfiguration@@@.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     ??$emplace_back@AEAV?$shared_ptr@VEffectPack@@@std@@@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VEffectPack@@@1@AEAV21@@Z @ 0x1801346F8 (--$emplace_back@AEAV-$shared_ptr@VEffectPack@@@std@@@-$vector@V-$shared_ptr@VEffectPack@@@std@@V.c)
 *     ?IsEffectPackConfigurationApplicableToEndpoint@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEA_N@Z @ 0x18013A840 (-IsEffectPackConfigurationApplicableToEndpoint@CEndpointCharacteristics@@AEAAJAEAV-$shared_ptr@$.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::AddEffectPackConfigurationIfApplicable(
        CEndpointCharacteristics *a1,
        __int64 a2,
        _BYTE *a3)
{
  int IsEffectPackConfigurationApplicableToEndpoint; // eax
  const char *v4; // r9
  unsigned int v5; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( a3 )
    *a3 = 0;
  try
  {
    IsEffectPackConfigurationApplicableToEndpoint = CEndpointCharacteristics::IsEffectPackConfigurationApplicableToEndpoint(a1);
    v5 = IsEffectPackConfigurationApplicableToEndpoint;
    if ( IsEffectPackConfigurationApplicableToEndpoint >= 0 )
    {
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x57E,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)IsEffectPackConfigurationApplicableToEndpoint);
      result = v5;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5B1,
                           (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                           v4);
  }
  return result;
}
