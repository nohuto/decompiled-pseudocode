/*
 * XREFs of ??R_lambda_49ef72c3c0df4c7d81076c2b76dc8a5e_@@QEBA@XZ @ 0x1804138A0
 * Callers:
 *     ??$AtomicUpdate@V_lambda_dfdeed7a205ac3b08c6339ac8edc183d_@@V_lambda_49ef72c3c0df4c7d81076c2b76dc8a5e_@@@AtomicUpdates@detail@XWinRT@@SAJPECIAEBV_lambda_dfdeed7a205ac3b08c6339ac8edc183d_@@AEBV_lambda_49ef72c3c0df4c7d81076c2b76dc8a5e_@@@Z @ 0x18040E500 (--$AtomicUpdate@V_lambda_dfdeed7a205ac3b08c6339ac8edc183d_@@V_lambda_49ef72c3c0df4c7d81076c2b76d.c)
 *     ??$Do@V_lambda_36b5c8f95231248674adbd74a944c413_@@V_lambda_49ef72c3c0df4c7d81076c2b76dc8a5e_@@@?$InvalidationChecker@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEBV_lambda_36b5c8f95231248674adbd74a944c413_@@AEBV_lambda_49ef72c3c0df4c7d81076c2b76dc8a5e_@@@Z @ 0x18040EAEC (--$Do@V_lambda_36b5c8f95231248674adbd74a944c413_@@V_lambda_49ef72c3c0df4c7d81076c2b76dc8a5e_@@@-.c)
 * Callees:
 *     <none>
 */

unsigned int **__fastcall _lambda_49ef72c3c0df4c7d81076c2b76dc8a5e_::operator()(unsigned int ***a1)
{
  unsigned int **result; // rax
  unsigned int v2; // r8d
  unsigned int *v3; // rdx
  __int64 v4; // rdx

  result = *a1;
  v2 = 0;
  v3 = **a1;
  if ( *v3 )
  {
    do
    {
      v4 = v2++;
      (*a1[1])[v4] = 0;
      result = *a1;
      v3 = **a1;
    }
    while ( v2 < *v3 );
  }
  *v3 = 0;
  return result;
}
