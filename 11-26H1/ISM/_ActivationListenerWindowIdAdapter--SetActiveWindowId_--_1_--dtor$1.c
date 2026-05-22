/*
 * XREFs of _ActivationListenerWindowIdAdapter::SetActiveWindowId_::_1_::dtor$1 @ 0x1801D5E55
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18004E570 (--1-$vector@V-$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V-$allocator@V-$ComP.c)
 */

__int64 __fastcall ActivationListenerWindowIdAdapter::SetActiveWindowId_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 144) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 144) &= ~1u;
    return std::vector<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy>>::~vector<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy>>((__int64 **)(a2 + 32));
  }
  return result;
}
