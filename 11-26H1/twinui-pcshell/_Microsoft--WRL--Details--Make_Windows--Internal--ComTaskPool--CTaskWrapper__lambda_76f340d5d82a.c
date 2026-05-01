/*
 * XREFs of _Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307_____lambda_76f340d5d82a2ae937276f5837d7f307____::_1_::dtor$0 @ 0x1806E7BC5
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL::ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__&___::_ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__&___ @ 0x1801A7398 (Microsoft--WRL--ComPtr_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_88c52b909d46191f2a7b.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307_____lambda_76f340d5d82a2ae937276f5837d7f307____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int32 *result; // rax

  result = (volatile signed __int32 *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36______::_ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36______(*(volatile signed __int32 ***)(a2 + 64));
  }
  return result;
}
