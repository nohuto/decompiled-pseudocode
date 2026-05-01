/*
 * XREFs of _Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__&___lambda_88c52b909d46191f2a7b9cf853665f36__&__::_1_::dtor$0 @ 0x1806BFC9A
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL::ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__&___::_ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__&___ @ 0x1801AE5E4 (Microsoft--WRL--ComPtr_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_88c52b909d46191f2a7b.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36______lambda_88c52b909d46191f2a7b9cf853665f36_____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int32 *result; // rax

  result = (volatile signed __int32 *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36______::_ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36______(*(volatile signed __int32 ***)(a2 + 80));
  }
  return result;
}
