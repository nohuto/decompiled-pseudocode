/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_245d2a2be388f7a941ea2187d291aeff___::Run @ 0x18042B3D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_245d2a2be388f7a941ea2187d291aeff_::operator() @ 0x180428980 (_lambda_245d2a2be388f7a941ea2187d291aeff_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_245d2a2be388f7a941ea2187d291aeff___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 24);
  result = lambda_245d2a2be388f7a941ea2187d291aeff_::operator()((__int64 *)(a1 + 16));
  *v1 = result;
  return result;
}
