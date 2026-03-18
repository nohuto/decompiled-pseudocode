/*
 * XREFs of ?NewNode@?$XHashMap@U_GUID@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@AEAAJAEBU_GUID@@IIPEAPEAVCNode@12@@Z @ 0x1802A0A04
 * Callers:
 *     ?CreateNode@?$XHashMap@U_GUID@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@AEAAJAEBU_GUID@@IIPEAPEAVCNode@12@@Z @ 0x18029E10C (-CreateNode@-$XHashMap@U_GUID@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@-$Has.c)
 * Callees:
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x1801B4D2C (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?PickSize@?$XHashMap@U_GUID@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@AEBAI_K@Z @ 0x1802A0B3C (-PickSize@-$XHashMap@U_GUID@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@-$HashM.c)
 *     ?Rehash@?$XHashMap@U_GUID@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@QEAAJI@Z @ 0x1802A0F7C (-Rehash@-$XHashMap@U_GUID@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@-$HashMap.c)
 */

__int64 __fastcall XWinRT::XHashMap<_GUID,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::NewNode(
        __int64 a1,
        _OWORD *a2,
        unsigned int a3,
        int a4,
        _QWORD *a5)
{
  __int64 v6; // rbp
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *i; // rcx
  __int64 v13; // rdi
  __int64 result; // rax
  unsigned __int64 v15; // rdx
  unsigned int v16; // eax
  unsigned __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v6 = a3;
  if ( !*(_QWORD *)(a1 + 72) )
  {
    v9 = *(unsigned int *)(a1 + 60);
    v17 = 0LL;
    if ( (int)ULongLongMult(v9, 0x30uLL, &v17) < 0 )
      return 2147942414LL;
    if ( v17 + 8 < v17 )
      return 2147942414LL;
    v10 = malloc(v17 + 8);
    if ( !v10 )
      return 2147942414LL;
    *v10 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v10;
    v11 = (unsigned int)(*(_DWORD *)(a1 + 60) - 1);
    for ( i = &v10[6 * v11 + 1]; (int)v11 >= 0; LODWORD(v11) = v11 - 1 )
    {
      i[4] = *(_QWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 72) = i;
      i -= 6;
    }
  }
  v13 = *(_QWORD *)(a1 + 72);
  if ( !v13 )
    return 2147549183LL;
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(v13 + 32);
  *(_OWORD *)v13 = *a2;
  *(_QWORD *)(v13 + 16) = 0LL;
  *(_BYTE *)(v13 + 24) = 0;
  *(_DWORD *)(v13 + 40) = a4;
  ++*(_QWORD *)(a1 + 16);
  *(_QWORD *)(v13 + 32) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v6);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v6) = v13;
  v15 = *(_QWORD *)(a1 + 16);
  if ( v15 <= *(_QWORD *)(a1 + 40)
    || *(_DWORD *)(a1 + 56)
    || (v16 = XWinRT::XHashMap<_GUID,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::PickSize(
                a1,
                v15),
        result = XWinRT::XHashMap<_GUID,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::Rehash(
                   a1,
                   v16),
        (int)result >= 0) )
  {
    *a5 = v13;
    return 0LL;
  }
  return result;
}
