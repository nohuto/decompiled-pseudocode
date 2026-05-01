/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_39a728035cbc11bf105c92e6056dabb4___::Run @ 0x18006AAE0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_39a728035cbc11bf105c92e6056dabb4_::operator() @ 0x18006AB04 (_lambda_39a728035cbc11bf105c92e6056dabb4_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_39a728035cbc11bf105c92e6056dabb4___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 40);
  result = lambda_39a728035cbc11bf105c92e6056dabb4_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
