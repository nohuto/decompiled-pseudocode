/*
 * XREFs of ??$AtomicUpdate@V_lambda_87ddd0c40772eaba1c31a94be300d9b9_@@V_lambda_08f4cb743079a90dc8e15f092a1add52_@@@AtomicUpdates@detail@XWinRT@@SAJPECIAEBV_lambda_87ddd0c40772eaba1c31a94be300d9b9_@@AEBV_lambda_08f4cb743079a90dc8e15f092a1add52_@@@Z @ 0x180403908
 * Callers:
 *     ??$Do@V_lambda_8310241115156db3d8926b31d9f5a4c3_@@V_lambda_08f4cb743079a90dc8e15f092a1add52_@@@?$InvalidationChecker@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEBV_lambda_8310241115156db3d8926b31d9f5a4c3_@@AEBV_lambda_08f4cb743079a90dc8e15f092a1add52_@@@Z @ 0x18040433C (--$Do@V_lambda_8310241115156db3d8926b31d9f5a4c3_@@V_lambda_08f4cb743079a90dc8e15f092a1add52_@@@-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_87ddd0c40772eaba1c31a94be300d9b9_,_lambda_08f4cb743079a90dc8e15f092a1add52_>(
        volatile signed __int32 *a1,
        __int64 a2,
        _BYTE ***a3)
{
  unsigned __int32 v3; // edi
  unsigned int v4; // ebx
  __int64 v5; // r9
  bool v6; // zf
  signed __int32 v7; // eax

  v3 = *a1;
  v4 = 0;
  while ( 1 )
  {
    ***(_BYTE ***)a2 = 0;
    v5 = *(_QWORD *)(a2 + 8);
    if ( v3 >= *(_DWORD *)(*(_QWORD *)v5 + 76LL) )
      break;
    ***(_BYTE ***)a2 = v3 + 1 < *(_DWORD *)(*(_QWORD *)v5 + 76LL);
    v7 = _InterlockedCompareExchange(a1, v3 + 1, v3);
    v6 = v3 == v7;
    v3 = v7;
    if ( v6 )
      return v4;
    ***a3 = 0;
  }
  v4 = -2147483637;
  RoOriginateError(2147483659LL, 0LL);
  return v4;
}
