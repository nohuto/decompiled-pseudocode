/*
 * XREFs of ?GetMany@?$SimpleVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAI@Z @ 0x180487D30
 * Callers:
 *     <none>
 * Callees:
 *     ??0_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_@@QEAA@PEAV?$SimpleVectorIterator@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@AEAIAEAPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@AEAPEAIAEAV_lambda_990521e561bc13f238039e7a89bd70b9_@@@Z @ 0x1802F9484 (--0_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_@@QEAA@PEAV-$SimpleVectorIterator@UCoreKeyboardPosit.c)
 *     ??$Do@V_lambda_8c1c21ab28514f86d440616c30b5b7ab_@@V_lambda_cca8e2aefe646e868e7a8134ba1e0907_@@@?$InvalidationChecker@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_8c1c21ab28514f86d440616c30b5b7ab_@@AEBV_lambda_cca8e2aefe646e868e7a8134ba1e0907_@@@Z @ 0x180486F28 (--$Do@V_lambda_8c1c21ab28514f86d440616c30b5b7ab_@@V_lambda_cca8e2aefe646e868e7a8134ba1e0907_@@@-.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,XWinRT::IntVersionTag,0>::GetMany(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  unsigned int v5; // r10d
  __int64 v6; // rdx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // r11
  unsigned int **v11[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v12[6]; // [rsp+40h] [rbp-30h] BYREF
  int v13; // [rsp+88h] [rbp+18h] BYREF
  unsigned int v14; // [rsp+90h] [rbp+20h] BYREF
  __int64 v15; // [rsp+98h] [rbp+28h] BYREF

  v15 = a4;
  v14 = a3;
  v13 = a2;
  v5 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      v6 = 56LL * v5++;
      v7 = a4 + v6;
      *(_OWORD *)v7 = 0LL;
      *(_OWORD *)(v7 + 16) = 0LL;
      *(_OWORD *)(v7 + 32) = 0LL;
      *(_QWORD *)(v7 + 48) = 0LL;
      if ( v5 >= v14 )
        break;
      a4 = v15;
    }
  }
  *a5 = 0;
  v11[0] = &a5;
  v11[1] = (unsigned int **)&v15;
  v8 = _lambda_712b0f2f9fa774d9b54f88f4633a7b7e_::_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_(
         v12,
         a1,
         (__int64)&v13,
         (__int64)&v14,
         (__int64)&v15,
         (__int64)&a5);
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,XWinRT::IntVersionTag>::Do<_lambda_8c1c21ab28514f86d440616c30b5b7ab_,_lambda_cca8e2aefe646e868e7a8134ba1e0907_>(
           (unsigned int *)(v9 + 48),
           *(_QWORD *)(v9 + 40),
           (__int64)v8,
           v11);
}
