/*
 * XREFs of ??$AtomicUpdate@V_lambda_bcd0e76ce2dbe9653bfcf27a6de55044_@@V_lambda_31eb4188a7908574ef45863a494633c2_@@@AtomicUpdates@detail@XWinRT@@SAJPECIAEBV_lambda_bcd0e76ce2dbe9653bfcf27a6de55044_@@AEBV_lambda_31eb4188a7908574ef45863a494633c2_@@@Z @ 0x180476DEC
 * Callers:
 *     ??$Do@V_lambda_603221b9b6c913954c8435c703c54208_@@V_lambda_31eb4188a7908574ef45863a494633c2_@@@?$InvalidationChecker@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_603221b9b6c913954c8435c703c54208_@@AEBV_lambda_31eb4188a7908574ef45863a494633c2_@@@Z @ 0x18047710C (--$Do@V_lambda_603221b9b6c913954c8435c703c54208_@@V_lambda_31eb4188a7908574ef45863a494633c2_@@@-.c)
 * Callees:
 *     ??R_lambda_bcd0e76ce2dbe9653bfcf27a6de55044_@@QEBAJIPEAI@Z @ 0x180477710 (--R_lambda_bcd0e76ce2dbe9653bfcf27a6de55044_@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_bcd0e76ce2dbe9653bfcf27a6de55044_,_lambda_31eb4188a7908574ef45863a494633c2_>(
        volatile signed __int32 *a1,
        __int64 a2,
        _BYTE ***a3)
{
  unsigned __int32 v3; // ebx
  bool v7; // zf
  signed __int32 v8; // eax
  int v9; // r9d
  signed __int32 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  while ( 1 )
  {
    v11 = 0;
    v9 = _lambda_bcd0e76ce2dbe9653bfcf27a6de55044_::operator()(a2, v3, &v11);
    if ( v9 < 0 )
      break;
    v8 = _InterlockedCompareExchange(a1, v11, v3);
    v7 = v3 == v8;
    v3 = v8;
    if ( v7 )
      break;
    ***a3 = 0;
  }
  return (unsigned int)v9;
}
