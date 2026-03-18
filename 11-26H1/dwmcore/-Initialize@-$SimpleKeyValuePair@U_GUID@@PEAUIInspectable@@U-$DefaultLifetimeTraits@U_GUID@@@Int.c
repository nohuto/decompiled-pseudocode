/*
 * XREFs of ?Initialize@?$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@AEAAJAEBU_GUID@@AEBV?$GitStorageType@UIInspectable@@@detail@XWinRT@@@Z @ 0x18029FF34
 * Callers:
 *     ?Make@?$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@SAJAEBU_GUID@@AEBV?$GitStorageType@UIInspectable@@@detail@XWinRT@@PEAPEAV12345@@Z @ 0x1802A06CC (-Make@-$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U-$DefaultLifetimeTraits@U_GUID@@@Internal@.c)
 * Callees:
 *     ??$Construct@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIInspectable@@@detail@1@V231@@Z @ 0x18029BC08 (--$Construct@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV-$GitStorageType@UIInspectab.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAKXZ @ 0x1802A14E0 (-Release@ReferencedGitCookie@-$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleKeyValuePair<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>::Initialize(
        __int64 a1,
        __int128 *a2,
        __m128i *a3)
{
  __m128i v3; // xmm0
  __int128 v5; // xmm6
  int v6; // ebx
  __int64 v7; // rcx
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  __m128i v11; // [rsp+20h] [rbp-38h] BYREF
  __m128i v12; // [rsp+30h] [rbp-28h] BYREF

  v3 = *a3;
  v5 = *a2;
  v11.m128i_i64[0] = 0LL;
  v12 = v3;
  v11.m128i_i8[8] = 0;
  v6 = XWinRT::InterfaceLifetimeTraits::Construct<IInspectable>((__int64)&v11, &v12);
  if ( v6 >= 0 )
  {
    v8 = v11;
    *(_OWORD *)(a1 + 64) = v5;
    v9 = *(__m128i *)(a1 + 80);
    *(__m128i *)(a1 + 80) = v8;
    v11 = v9;
    if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v9, 8)) )
    {
      XWinRT::detail::GitStorageType<IInspectable>::ReferencedGitCookie::Release((void *)v9.m128i_i64[0]);
      return (unsigned int)v6;
    }
    v7 = v11.m128i_i64[0];
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v6;
}
