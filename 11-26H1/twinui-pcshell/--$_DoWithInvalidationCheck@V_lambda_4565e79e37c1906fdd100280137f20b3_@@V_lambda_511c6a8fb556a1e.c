/*
 * XREFs of ??$_DoWithInvalidationCheck@V_lambda_4565e79e37c1906fdd100280137f20b3_@@V_lambda_511c6a8fb556a1e6ad7fa7c7a862627b_@@@?$SimpleVectorIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@AEAAJAEBV_lambda_4565e79e37c1906fdd100280137f20b3_@@AEBV_lambda_511c6a8fb556a1e6ad7fa7c7a862627b_@@@Z @ 0x180411458
 * Callers:
 *     ?get_HasCurrent@?$SimpleVectorIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x180420590 (-get_HasCurrent@-$SimpleVectorIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@In.c)
 * Callees:
 *     ??$?0V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@@IntVersionTag@XWinRT@@QEAA@PEAV?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@@Z @ 0x18040DF30 (--$-0V-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplay.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,XWinRT::IntVersionTag,1>::_DoWithInvalidationCheck<_lambda_4565e79e37c1906fdd100280137f20b3_,_lambda_511c6a8fb556a1e6ad7fa7c7a862627b_>(
        __int64 a1,
        __int64 a2,
        _BYTE ***a3)
{
  int v3; // ebx
  bool v6; // cf
  bool **v7; // rax
  __int64 v8; // rdx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 80);
  if ( v3 >= 0 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 72LL) < *(_DWORD *)(*(_QWORD *)(a2 + 8) + 76LL);
    v7 = *(bool ***)a2;
    v8 = *(_QWORD *)(a1 + 64);
    v3 = 0;
    **v7 = v6;
    XWinRT::IntVersionTag::IntVersionTag(&v10, v8);
    if ( *(_DWORD *)(a1 + 84) != v10 )
    {
      v3 = -2147483636;
      *(_DWORD *)(a1 + 80) = -2147483636;
      RoOriginateError(2147483660LL, 0LL);
      ***a3 = 0;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v3, 0LL);
  }
  return (unsigned int)v3;
}
