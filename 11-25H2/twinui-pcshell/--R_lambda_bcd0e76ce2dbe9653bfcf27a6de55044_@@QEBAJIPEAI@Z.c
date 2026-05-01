/*
 * XREFs of ??R_lambda_bcd0e76ce2dbe9653bfcf27a6de55044_@@QEBAJIPEAI@Z @ 0x180477710
 * Callers:
 *     ??$AtomicUpdate@V_lambda_bcd0e76ce2dbe9653bfcf27a6de55044_@@V_lambda_31eb4188a7908574ef45863a494633c2_@@@AtomicUpdates@detail@XWinRT@@SAJPECIAEBV_lambda_bcd0e76ce2dbe9653bfcf27a6de55044_@@AEBV_lambda_31eb4188a7908574ef45863a494633c2_@@@Z @ 0x180476DEC (--$AtomicUpdate@V_lambda_bcd0e76ce2dbe9653bfcf27a6de55044_@@V_lambda_31eb4188a7908574ef45863a494.c)
 *     ??$Do@V_lambda_603221b9b6c913954c8435c703c54208_@@V_lambda_31eb4188a7908574ef45863a494633c2_@@@?$InvalidationChecker@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_603221b9b6c913954c8435c703c54208_@@AEBV_lambda_31eb4188a7908574ef45863a494633c2_@@@Z @ 0x18047710C (--$Do@V_lambda_603221b9b6c913954c8435c703c54208_@@V_lambda_31eb4188a7908574ef45863a494633c2_@@@-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _lambda_bcd0e76ce2dbe9653bfcf27a6de55044_::operator()(__int64 a1, unsigned int a2, _DWORD *a3)
{
  bool **v3; // r9
  __int64 *v4; // rax
  __int64 v5; // rcx

  v3 = *(bool ***)a1;
  ***(_BYTE ***)a1 = 0;
  v4 = *(__int64 **)(a1 + 8);
  v5 = *v4;
  if ( a2 >= *(_DWORD *)(*v4 + 44) )
  {
    RoOriginateError(2147483659LL, 0LL);
    return 2147483659LL;
  }
  else
  {
    *a3 = a2 + 1;
    **v3 = a2 + 1 < *(_DWORD *)(v5 + 44);
    return 0LL;
  }
}
