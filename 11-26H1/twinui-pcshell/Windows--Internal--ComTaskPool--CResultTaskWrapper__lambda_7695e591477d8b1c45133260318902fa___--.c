/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7695e591477d8b1c45133260318902fa___::Run @ 0x18017E7F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_7695e591477d8b1c45133260318902fa_::operator() @ 0x18017EAB8 (_lambda_7695e591477d8b1c45133260318902fa_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7695e591477d8b1c45133260318902fa___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_7695e591477d8b1c45133260318902fa_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
