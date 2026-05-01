/*
 * XREFs of _wil::MakeAndInitializeOrThrow_ApplicationViewOperation__::_1_::dtor$0 @ 0x1806C9C0E
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@QEAA@XZ @ 0x180241E7C (--1-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeAndInitializeOrThrow_ApplicationViewOperation__::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<ApplicationViewOperation>::~ComPtr<ApplicationViewOperation>(*(__int64 **)(a2 + 64));
  }
  return result;
}
