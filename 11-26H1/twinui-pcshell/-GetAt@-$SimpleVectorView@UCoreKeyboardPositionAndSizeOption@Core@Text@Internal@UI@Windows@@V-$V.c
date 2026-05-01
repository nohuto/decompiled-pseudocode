/*
 * XREFs of ?GetAt@?$SimpleVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x1800DDB80
 * Callers:
 *     <none>
 * Callees:
 *     ??0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV?$SimpleVectorIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@AEAPEAEAEAV_lambda_08f4cb743079a90dc8e15f092a1add52_@@@Z @ 0x180297C24 (--0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV-$SimpleVectorIterator@UDisplayRegionId@W.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,XWinRT::IntVersionTag,0>::GetAt(
        __int64 a1,
        int a2,
        __int64 a3)
{
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rsi
  _OWORD *v8; // rax
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+58h] [rbp+10h] BYREF
  _OWORD *v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = (_OWORD *)a3;
  v10 = a2;
  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 48) = 0LL;
  v4 = _lambda_8310241115156db3d8926b31d9f5a4c3_::_lambda_8310241115156db3d8926b31d9f5a4c3_(v9, a1, &v10, &v11);
  v5 = *(_DWORD *)(a1 + 48);
  v6 = *(_QWORD *)(a1 + 40);
  if ( v5 < 0 )
  {
    RoOriginateError((unsigned int)v5, 0LL);
    return (unsigned int)v5;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v4 + 40LL) + 48LL))(
         *(_QWORD *)(*(_QWORD *)v4 + 40LL),
         **(unsigned int **)(v4 + 8),
         **(_QWORD **)(v4 + 16));
  if ( *(_DWORD *)(a1 + 52) == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(v6 + 24) + 24LL))(v6 + 24) )
    return (unsigned int)v5;
  *(_DWORD *)(a1 + 48) = -2147483636;
  if ( v5 < 0 )
  {
    RoTransformError((unsigned int)v5, 2147483660LL, 0LL);
  }
  else
  {
    RoOriginateError(2147483660LL, 0LL);
    v8 = v11;
    *v11 = 0LL;
    v8[1] = 0LL;
    v8[2] = 0LL;
    *((_QWORD *)v8 + 6) = 0LL;
  }
  return 2147483660LL;
}
