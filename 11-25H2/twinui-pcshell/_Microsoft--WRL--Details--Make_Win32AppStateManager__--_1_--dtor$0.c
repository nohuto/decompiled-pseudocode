/*
 * XREFs of _Microsoft::WRL::Details::Make_Win32AppStateManager__::_1_::dtor$0 @ 0x1806AFC27
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VWin32AppStateManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18022F498 (--1-$ComPtr@VWin32AppStateManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_Win32AppStateManager__::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<Win32AppStateManager>::~ComPtr<Win32AppStateManager>(*(__int64 **)(a2 + 80));
  }
  return result;
}
