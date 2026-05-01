/*
 * XREFs of _wil::MakeAndInitializeOrThrow_AppViewSwitchItemZOrderSort__::_1_::dtor$0 @ 0x1806DE1AD
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VAppViewSwitchItemZOrderSort@@@WRL@Microsoft@@QEAA@XZ @ 0x1802932D8 (--1-$ComPtr@VAppViewSwitchItemZOrderSort@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeAndInitializeOrThrow_AppViewSwitchItemZOrderSort__::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<AppViewSwitchItemZOrderSort>::~ComPtr<AppViewSwitchItemZOrderSort>();
  }
  return result;
}
