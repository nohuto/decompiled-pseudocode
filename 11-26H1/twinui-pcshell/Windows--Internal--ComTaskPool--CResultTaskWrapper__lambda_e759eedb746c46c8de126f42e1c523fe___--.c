/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e759eedb746c46c8de126f42e1c523fe___::Run @ 0x18043E1E0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e759eedb746c46c8de126f42e1c523fe_::operator() @ 0x18043AF00 (_lambda_e759eedb746c46c8de126f42e1c523fe_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e759eedb746c46c8de126f42e1c523fe___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_e759eedb746c46c8de126f42e1c523fe_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
