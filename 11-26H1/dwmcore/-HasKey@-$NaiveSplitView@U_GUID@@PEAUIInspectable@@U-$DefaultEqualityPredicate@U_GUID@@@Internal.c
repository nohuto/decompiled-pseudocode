/*
 * XREFs of ?HasKey@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@PEAE@Z @ 0x18029FA50
 * Callers:
 *     <none>
 * Callees:
 *     ??$IterateOnChunks@V_lambda_1_@?4??HasKey@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@PEAE@Z@V_lambda_2_@?4??234567@UEAAJ01@Z@@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJV_lambda_1_@?4??HasKey@01234@UEAAJU_GUID@@PEAE@Z@V_lambda_2_@?4??601234@UEAAJ01@Z@@Z @ 0x18029BC5C (--$IterateOnChunks@V_lambda_1_@-4--HasKey@-$NaiveSplitView@U_GUID@@PEAUIInspectable@@U-$DefaultE.c)
 *     ?EnsureInitialized@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x18029E4C0 (-EnsureInitialized@-$NaiveSplitView@U_GUID@@PEAUIInspectable@@U-$DefaultEqualityPredicate@U_GUID.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::HasKey(
        __int64 a1,
        __int128 *a2,
        _BYTE *a3)
{
  __int64 result; // rax
  _BYTE *v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 *v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v6 = a3;
  *a3 = 0;
  result = Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::EnsureInitialized(a1);
  if ( (int)result >= 0 )
  {
    v7[0] = a2;
    v7[1] = (__int128 *)&v6;
    return ___IterateOnChunks_V_lambda_1___4__HasKey___NaiveSplitView_U_GUID__PEAUIInspectable__U__DefaultEqualityPredicate_U_GUID___Internal_Collections_Foundation_Windows__U__DefaultLifetimeTraits_U_GUID___4567_U__DefaultLifetimeTraits_PEAUIInspectable___4567_U__HashMapOptions_U_GUID__PEAUIInspectable__U__DefaultLifetimeTraits_U_GUID___Internal_Collections_Foundation_Windows___0A__00_0A__4567__Internal_Collections_Foundation_Windows__UEAAJU_GUID__PEAE_Z_V_lambda_2___4__234567_UEAAJ01_Z____NaiveSplitView_U_GUID__PEAUIInspectable__U__DefaultEqualityPredicate_U_GUID___Internal_Collections_Foundation_Windows__U__DefaultLifetimeTraits_U_GUID___4567_U__DefaultLifetimeTraits_PEAUIInspectable___4567_U__HashMapOptions_U_GUID__PEAUIInspectable__U__DefaultLifetimeTraits_U_GUID___Internal_Collections_Foundation_Windows___0A__00_0A__4567__Internal_Collections_Foundation_Windows__AEAAJV_lambda_1___4__HasKey_01234_UEAAJU_GUID__PEAE_Z_V_lambda_2___4__601234_UEAAJ01_Z__Z(
             a1,
             v7);
  }
  return result;
}
