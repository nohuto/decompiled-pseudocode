/*
 * XREFs of ?GetNextChainLinks@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAPEAU?$IVectorView@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@Collections@Foundation@5@@Z @ 0x1800CE334
 * Callers:
 *     ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x1800CE250 (-_RemoveFromChain@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CreateExternalObjectVector@UIChainLink@Chaining@Shell@Internal@Windows@@V?$AgileVector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@$0A@@4Collections@Foundation@5@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$AgileVector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@$0A@@1234@@Z @ 0x1800CE490 (--$CreateExternalObjectVector@UIChainLink@Chaining@Shell@Internal@Windows@@V-$AgileVector@PEAUIC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::GetNextChainLinks(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rsi
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // edi
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 *v18; // [rsp+48h] [rbp+28h] BYREF

  *a2 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
  v5 = Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::Internal::Shell::Chaining::IChainLink,Windows::Foundation::Collections::Internal::AgileVector<Windows::Internal::Shell::Chaining::IChainLink *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::Chaining::IChainLink *>,0>>(
         v4,
         &v18);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x141,
      (int)"onecoreuap\\internal\\shell\\inc\\chaininghelpers.h",
      (const char *)(unsigned int)v5);
    v7 = (__int64)v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return v6;
  }
  v9 = *(_QWORD **)(a1 + 32);
  v10 = *(_QWORD **)(a1 + 40);
  while ( 1 )
  {
    v11 = *v18;
    if ( v9 == v10 )
      break;
    v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v11 + 104))(v18, *v9);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x145,
        (int)"onecoreuap\\internal\\shell\\inc\\chaininghelpers.h",
        (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
      return v13;
    }
    ++v9;
  }
  v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(v11 + 64))(v18, a2);
  v6 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x148,
      (int)"onecoreuap\\internal\\shell\\inc\\chaininghelpers.h",
      (const char *)(unsigned int)v14);
    v15 = (__int64)v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    return v6;
  }
  v16 = (__int64)v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return 0LL;
}
