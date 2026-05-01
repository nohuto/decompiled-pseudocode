/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_087a70eddc18843aa31de864cf62f380___::Run @ 0x18043DC60
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_087a70eddc18843aa31de864cf62f380_::operator() @ 0x180438E80 (_lambda_087a70eddc18843aa31de864cf62f380_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_087a70eddc18843aa31de864cf62f380___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_087a70eddc18843aa31de864cf62f380_::operator()((_QWORD *)(a1 + 16));
  *v1 = result;
  return result;
}
