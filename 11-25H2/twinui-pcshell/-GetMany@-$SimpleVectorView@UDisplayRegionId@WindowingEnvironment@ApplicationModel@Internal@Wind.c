/*
 * XREFs of ?GetMany@?$SimpleVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIIPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@PEAI@Z @ 0x18040EB50
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_6614a9cc9bed71c749f37e4aac432a1a_@@V_lambda_f142a9d70bba406ecb3bdbe7c6fa48c3_@@@?$InvalidationChecker@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEBV_lambda_6614a9cc9bed71c749f37e4aac432a1a_@@AEBV_lambda_f142a9d70bba406ecb3bdbe7c6fa48c3_@@@Z @ 0x180404234 (--$Do@V_lambda_6614a9cc9bed71c749f37e4aac432a1a_@@V_lambda_f142a9d70bba406ecb3bdbe7c6fa48c3_@@@-.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,XWinRT::IntVersionTag,1>::GetMany(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  __int64 v5; // rdx
  __int64 v6; // rdx
  _QWORD *v8[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v9[6]; // [rsp+30h] [rbp-30h] BYREF
  int v10; // [rsp+78h] [rbp+18h] BYREF
  unsigned int v11; // [rsp+80h] [rbp+20h] BYREF
  __int64 v12; // [rsp+88h] [rbp+28h] BYREF

  v12 = a4;
  v11 = a3;
  v10 = a2;
  v5 = 0LL;
  if ( a3 )
  {
    while ( 1 )
    {
      *(_DWORD *)(a4 + 4 * v5) = 0;
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v11 )
        break;
      a4 = v12;
    }
  }
  v9[0] = a1;
  *a5 = 0;
  v6 = *(_QWORD *)(a1 + 72);
  v8[0] = &a5;
  v8[1] = &v12;
  v9[1] = &v10;
  v9[2] = &v11;
  v9[3] = &v12;
  v9[4] = &a5;
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_6614a9cc9bed71c749f37e4aac432a1a_,_lambda_f142a9d70bba406ecb3bdbe7c6fa48c3_>(
           (unsigned int *)(a1 + 80),
           v6,
           (__int64)v9,
           v8);
}
