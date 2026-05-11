/*
 * XREFs of _scope_exit__lambda_1ab46f8d786e437f5124283015cdf2a7____::_2_::scope_exit::_scope_exit @ 0x14000BDE8
 * Callers:
 *     ?StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140007438 (-StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     _lambda_1ab46f8d786e437f5124283015cdf2a7_::operator() @ 0x140007724 (_lambda_1ab46f8d786e437f5124283015cdf2a7_--operator().c)
 */

ULONG *__fastcall scope_exit__lambda_1ab46f8d786e437f5124283015cdf2a7____::_2_::scope_exit::_scope_exit(__int64 a1)
{
  ULONG *result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return lambda_1ab46f8d786e437f5124283015cdf2a7_::operator()((PIRP **)a1);
  return result;
}
