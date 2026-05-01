/*
 * XREFs of ?IndexOf@?$SimpleVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAIPEAE@Z @ 0x180487FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0_lambda_5724e9f0897f2fd11b6a24af4b09628e_@@QEAA@AEAP8CPinnedList@@EAAJW4TaskbarLayoutType@@H@ZAEAW42@AEAHAEAJ@Z @ 0x1802931FC (--0_lambda_5724e9f0897f2fd11b6a24af4b09628e_@@QEAA@AEAP8CPinnedList@@EAAJW4TaskbarLayoutType@@H@.c)
 *     ??$Do@V_lambda_57044c20c66cf8294c87be4c07a9b9b5_@@V_lambda_123df96a4f524ef8dd161fadb1d10211_@@@?$InvalidationChecker@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_57044c20c66cf8294c87be4c07a9b9b5_@@AEBV_lambda_123df96a4f524ef8dd161fadb1d10211_@@@Z @ 0x180486B4C (--$Do@V_lambda_57044c20c66cf8294c87be4c07a9b9b5_@@V_lambda_123df96a4f524ef8dd161fadb1d10211_@@@-.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,XWinRT::IntVersionTag,0>::IndexOf(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _BYTE *a4)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _BYTE *v7; // [rsp+30h] [rbp-48h] BYREF
  _DWORD *v8; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v9[2]; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v10[5]; // [rsp+50h] [rbp-28h] BYREF

  v8 = a3;
  v7 = a4;
  *a3 = 0;
  *v7 = 0;
  v9[0] = &v8;
  v9[1] = &v7;
  v4 = _lambda_5724e9f0897f2fd11b6a24af4b09628e_::_lambda_5724e9f0897f2fd11b6a24af4b09628e_(
         v10,
         a1,
         a2,
         (__int64)&v8,
         (__int64)&v7);
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,XWinRT::IntVersionTag>::Do<_lambda_57044c20c66cf8294c87be4c07a9b9b5_,_lambda_123df96a4f524ef8dd161fadb1d10211_>(
           (unsigned int *)(v5 + 48),
           *(_QWORD *)(v5 + 40),
           (__int64)v4,
           (__int64)v9);
}
