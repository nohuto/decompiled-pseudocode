/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2c3257c2e33b079e26558cd2e5af6cbf___::Run @ 0x18042B4A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_2c3257c2e33b079e26558cd2e5af6cbf_::operator() @ 0x180429328 (_lambda_2c3257c2e33b079e26558cd2e5af6cbf_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2c3257c2e33b079e26558cd2e5af6cbf___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_2c3257c2e33b079e26558cd2e5af6cbf_::operator()((__int64 **)(a1 + 16));
  *v1 = result;
  return result;
}
