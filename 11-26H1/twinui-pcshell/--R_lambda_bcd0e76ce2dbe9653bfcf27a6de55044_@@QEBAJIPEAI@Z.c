/*
 * XREFs of ??R_lambda_bcd0e76ce2dbe9653bfcf27a6de55044_@@QEBAJIPEAI@Z @ 0x180487268
 * Callers:
 *     ??$AtomicUpdate@V_lambda_bcd0e76ce2dbe9653bfcf27a6de55044_@@V_lambda_31eb4188a7908574ef45863a494633c2_@@@AtomicUpdates@detail@XWinRT@@SAJPECIAEBV_lambda_bcd0e76ce2dbe9653bfcf27a6de55044_@@AEBV_lambda_31eb4188a7908574ef45863a494633c2_@@@Z @ 0x180486934 (--$AtomicUpdate@V_lambda_bcd0e76ce2dbe9653bfcf27a6de55044_@@V_lambda_31eb4188a7908574ef45863a494.c)
 *     ??$Do@V_lambda_603221b9b6c913954c8435c703c54208_@@V_lambda_31eb4188a7908574ef45863a494633c2_@@@?$InvalidationChecker@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_603221b9b6c913954c8435c703c54208_@@AEBV_lambda_31eb4188a7908574ef45863a494633c2_@@@Z @ 0x180486C58 (--$Do@V_lambda_603221b9b6c913954c8435c703c54208_@@V_lambda_31eb4188a7908574ef45863a494633c2_@@@-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _lambda_bcd0e76ce2dbe9653bfcf27a6de55044_::operator()(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // edx
  __int64 result; // rax

  ***(_BYTE ***)a1 = 0;
  if ( a2 >= *(_DWORD *)(**(_QWORD **)(a1 + 8) + 44LL) )
  {
    RoOriginateError(2147483659LL, 0LL);
    return 2147483659LL;
  }
  else
  {
    v3 = a2 + 1;
    *a3 = v3;
    result = 0LL;
    ***(_BYTE ***)a1 = v3 < *(_DWORD *)(**(_QWORD **)(a1 + 8) + 44LL);
  }
  return result;
}
