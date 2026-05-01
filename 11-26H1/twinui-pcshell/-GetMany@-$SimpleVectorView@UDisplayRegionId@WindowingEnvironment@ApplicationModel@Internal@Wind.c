/*
 * XREFs of ?GetMany@?$SimpleVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIIPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@PEAI@Z @ 0x180419820
 * Callers:
 *     <none>
 * Callees:
 *     ??0_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_@@QEAA@PEAV?$SimpleVectorIterator@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@AEAIAEAPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@AEAPEAIAEAV_lambda_990521e561bc13f238039e7a89bd70b9_@@@Z @ 0x1802F9484 (--0_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_@@QEAA@PEAV-$SimpleVectorIterator@UCoreKeyboardPosit.c)
 *     ??$Do@V_lambda_6614a9cc9bed71c749f37e4aac432a1a_@@V_lambda_f142a9d70bba406ecb3bdbe7c6fa48c3_@@@?$InvalidationChecker@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEBV_lambda_6614a9cc9bed71c749f37e4aac432a1a_@@AEBV_lambda_f142a9d70bba406ecb3bdbe7c6fa48c3_@@@Z @ 0x18040EDC8 (--$Do@V_lambda_6614a9cc9bed71c749f37e4aac432a1a_@@V_lambda_f142a9d70bba406ecb3bdbe7c6fa48c3_@@@-.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,XWinRT::IntVersionTag,1>::GetMany(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // r10
  _QWORD *v9[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v10[6]; // [rsp+40h] [rbp-30h] BYREF
  int v11; // [rsp+88h] [rbp+18h] BYREF
  unsigned int v12; // [rsp+90h] [rbp+20h] BYREF
  __int64 v13; // [rsp+98h] [rbp+28h] BYREF

  v13 = a4;
  v12 = a3;
  v11 = a2;
  v5 = 0LL;
  if ( a3 )
  {
    while ( 1 )
    {
      *(_DWORD *)(a4 + 4 * v5) = 0;
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v12 )
        break;
      a4 = v13;
    }
  }
  *a5 = 0;
  v9[0] = &a5;
  v9[1] = &v13;
  v6 = _lambda_712b0f2f9fa774d9b54f88f4633a7b7e_::_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_(
         v10,
         a1,
         (__int64)&v11,
         (__int64)&v12,
         (__int64)&v13,
         (__int64)&a5);
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_6614a9cc9bed71c749f37e4aac432a1a_,_lambda_f142a9d70bba406ecb3bdbe7c6fa48c3_>(
           (unsigned int *)(v7 + 80),
           *(_QWORD *)(v7 + 72),
           (__int64)v6,
           v9);
}
