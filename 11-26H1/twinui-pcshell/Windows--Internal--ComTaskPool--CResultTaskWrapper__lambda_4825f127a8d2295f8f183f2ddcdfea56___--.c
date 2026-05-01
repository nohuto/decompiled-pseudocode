/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_4825f127a8d2295f8f183f2ddcdfea56___::Run @ 0x18041D900
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_4825f127a8d2295f8f183f2ddcdfea56_::operator() @ 0x1804137B4 (_lambda_4825f127a8d2295f8f183f2ddcdfea56_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_4825f127a8d2295f8f183f2ddcdfea56___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 24);
  result = lambda_4825f127a8d2295f8f183f2ddcdfea56_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
