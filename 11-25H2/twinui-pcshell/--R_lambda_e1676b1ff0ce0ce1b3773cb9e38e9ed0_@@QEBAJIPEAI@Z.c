/*
 * XREFs of ??R_lambda_e1676b1ff0ce0ce1b3773cb9e38e9ed0_@@QEBAJIPEAI@Z @ 0x180477764
 * Callers:
 *     ??$AtomicUpdate@V_lambda_e1676b1ff0ce0ce1b3773cb9e38e9ed0_@@V_lambda_990521e561bc13f238039e7a89bd70b9_@@@AtomicUpdates@detail@XWinRT@@SAJPECIAEBV_lambda_e1676b1ff0ce0ce1b3773cb9e38e9ed0_@@AEBV_lambda_990521e561bc13f238039e7a89bd70b9_@@@Z @ 0x180476E60 (--$AtomicUpdate@V_lambda_e1676b1ff0ce0ce1b3773cb9e38e9ed0_@@V_lambda_990521e561bc13f238039e7a89b.c)
 *     ??$Do@V_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_@@V_lambda_990521e561bc13f238039e7a89bd70b9_@@@?$InvalidationChecker@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_@@AEBV_lambda_990521e561bc13f238039e7a89bd70b9_@@@Z @ 0x180477200 (--$Do@V_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_@@V_lambda_990521e561bc13f238039e7a89bd70b9_@@@-.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall _lambda_e1676b1ff0ce0ce1b3773cb9e38e9ed0_::operator()(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v5; // edi
  __int64 result; // rax

  v5 = a2;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(**(_QWORD **)a1 + 32LL)
                                                                              + 128LL))(
             *(_QWORD *)(**(_QWORD **)a1 + 32LL),
             a2,
             **(unsigned int **)(a1 + 8),
             **(_QWORD **)(a1 + 16),
             **(_QWORD **)(a1 + 24));
  if ( (int)result >= 0 )
    *a3 = v5 + ***(_DWORD ***)(a1 + 24);
  return result;
}
