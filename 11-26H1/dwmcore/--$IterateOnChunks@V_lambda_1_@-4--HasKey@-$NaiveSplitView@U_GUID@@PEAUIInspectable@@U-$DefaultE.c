/*
 * XREFs of ??$IterateOnChunks@V_lambda_1_@?4??HasKey@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@PEAE@Z@V_lambda_2_@?4??234567@UEAAJ01@Z@@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJV_lambda_1_@?4??HasKey@01234@UEAAJU_GUID@@PEAE@Z@V_lambda_2_@?4??601234@UEAAJ01@Z@@Z @ 0x18029BC5C
 * Callers:
 *     ?HasKey@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@PEAE@Z @ 0x18029FA50 (-HasKey@-$NaiveSplitView@U_GUID@@PEAUIInspectable@@U-$DefaultEqualityPredicate@U_GUID@@@Internal.c)
 * Callees:
 *     ?Force@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x18029E898 (-Force@-$NaiveSplitView@U_GUID@@PEAUIInspectable@@U-$DefaultEqualityPredicate@U_GUID@@@Internal@.c)
 *     ?HasKey@ChunkView@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@PEAE@Z @ 0x18029FAA0 (-HasKey@ChunkView@-$NaiveSplitView@U_GUID@@PEAUIInspectable@@U-$DefaultEqualityPredicate@U_GUID@.c)
 */

__int64 __fastcall ___IterateOnChunks_V_lambda_1___4__HasKey___NaiveSplitView_U_GUID__PEAUIInspectable__U__DefaultEqualityPredicate_U_GUID___Internal_Collections_Foundation_Windows__U__DefaultLifetimeTraits_U_GUID___4567_U__DefaultLifetimeTraits_PEAUIInspectable___4567_U__HashMapOptions_U_GUID__PEAUIInspectable__U__DefaultLifetimeTraits_U_GUID___Internal_Collections_Foundation_Windows___0A__00_0A__4567__Internal_Collections_Foundation_Windows__UEAAJU_GUID__PEAE_Z_V_lambda_2___4__234567_UEAAJ01_Z____NaiveSplitView_U_GUID__PEAUIInspectable__U__DefaultEqualityPredicate_U_GUID___Internal_Collections_Foundation_Windows__U__DefaultLifetimeTraits_U_GUID___4567_U__DefaultLifetimeTraits_PEAUIInspectable___4567_U__HashMapOptions_U_GUID__PEAUIInspectable__U__DefaultLifetimeTraits_U_GUID___Internal_Collections_Foundation_Windows___0A__00_0A__4567__Internal_Collections_Foundation_Windows__AEAAJV_lambda_1___4__HasKey_01234_UEAAJU_GUID__PEAE_Z_V_lambda_2___4__601234_UEAAJ01_Z__Z(
        __int64 a1,
        __int128 **a2)
{
  bool v2; // di
  __int64 result; // rax
  __int128 *v6; // rsi
  __int64 v7; // rcx
  _BYTE *v8; // r8
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  result = 0LL;
  while ( !v2 )
  {
    if ( !a1 || !*(_DWORD *)(a1 + 104) )
      return 0LL;
    result = Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Force(a1);
    if ( (int)result < 0 )
      return result;
    v6 = a2[1];
    v7 = *(_QWORD *)(a1 + 80);
    v8 = *(_BYTE **)v6;
    v9 = **a2;
    result = Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::ChunkView::HasKey(
               v7,
               &v9,
               v8);
    if ( (int)result < 0 )
      return result;
    v2 = **(_BYTE **)v6 != 0;
    a1 = *(_QWORD *)(a1 + 88);
  }
  return result;
}
