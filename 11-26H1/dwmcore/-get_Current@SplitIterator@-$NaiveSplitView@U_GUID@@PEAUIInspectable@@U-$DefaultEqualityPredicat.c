/*
 * XREFs of ?get_Current@SplitIterator@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@456@@Z @ 0x1802A1ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureForced@SplitIterator@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x18029E3E4 (-EnsureForced@SplitIterator@-$NaiveSplitView@U_GUID@@PEAUIInspectable@@U-$DefaultEqualityPredica.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::SplitIterator::get_Current(
        __int64 a1,
        __int64 a2)
{
  RTL_SRWLOCK *v2; // rbx
  int v5; // edi

  v2 = (RTL_SRWLOCK *)(a1 + 72);
  if ( *(_DWORD *)(a1 + 64) == 1 )
  {
    if ( !LODWORD(v2->Ptr) )
      LODWORD(v2->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 72));
  }
  v5 = Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::SplitIterator::EnsureForced(a1);
  if ( v5 >= 0 )
  {
    if ( *(_QWORD *)(a1 + 88) )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 48LL))(*(_QWORD *)(a1 + 88), a2);
    }
    else
    {
      v5 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
  }
  if ( *(_DWORD *)(a1 + 64) == 1 )
    LODWORD(v2->Ptr) += 0x10000000;
  else
    ReleaseSRWLockExclusive(v2);
  return (unsigned int)v5;
}
