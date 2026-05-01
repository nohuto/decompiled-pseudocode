/*
 * XREFs of ?IsSearchDisabled@DisableSearchPolicy@@YA_NXZ @ 0x1801EDC24
 * Callers:
 *     ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x1802522E0 (-Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Window.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___IInspectable_____lambda_c8c6bcdae749e4fc3a1182ab2efb8727___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable___::Invoke @ 0x1802AC2B0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1802AC2B0.c)
 *     ?Prelaunch@XamlLauncher@@UEAAJXZ @ 0x18044FDE0 (-Prelaunch@XamlLauncher@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_296f988acd800b6c20d85c9f75e85cb7__void___cdecl(void)_::operator() @ 0x1804541C0 (wistd--__function--__func__lambda_296f988acd800b6c20d85c9f75e85cb7__void___cdecl(void)_--operato.c)
 * Callees:
 *     IsPolicyManager_GetPolicyPresent @ 0x1802D7B68 (IsPolicyManager_GetPolicyPresent.c)
 */

char __fastcall DisableSearchPolicy::IsSearchDisabled(DisableSearchPolicy *this)
{
  char v1; // bl
  __m128i si128; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  if ( !(unsigned __int8)IsPolicyManager_GetPolicyPresent(this) )
    return 0;
  v4 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( (int)PolicyManager_GetPolicy(L"Search", L"DisableSearch", &si128, &v4) < 0 )
  {
    if ( v4 )
      PolicyManager_FreeGetPolicyData(v4);
    return 0;
  }
  v1 = 1;
  if ( *(_DWORD *)(v4 + 8) != 1 || *(_DWORD *)(v4 + 16) != 1 )
    v1 = 0;
  if ( v4 )
    PolicyManager_FreeGetPolicyData(v4);
  return v1;
}
