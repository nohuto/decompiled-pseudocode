/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f6437df0abc95a57934437eecbec2119___::Run @ 0x18043E240
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f6437df0abc95a57934437eecbec2119_::operator() @ 0x18043B048 (_lambda_f6437df0abc95a57934437eecbec2119_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f6437df0abc95a57934437eecbec2119___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_f6437df0abc95a57934437eecbec2119_::operator()((__int64 **)(a1 + 16));
  *v1 = result;
  return result;
}
