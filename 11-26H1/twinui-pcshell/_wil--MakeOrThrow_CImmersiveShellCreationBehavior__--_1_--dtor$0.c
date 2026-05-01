/*
 * XREFs of _wil::MakeOrThrow_CImmersiveShellCreationBehavior__::_1_::dtor$0 @ 0x1806E8AE6
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCImmersiveShellCreationBehavior@@@WRL@Microsoft@@QEAA@XZ @ 0x1803D9A14 (--1-$ComPtr@VCImmersiveShellCreationBehavior@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeOrThrow_CImmersiveShellCreationBehavior__::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<CImmersiveShellCreationBehavior>::~ComPtr<CImmersiveShellCreationBehavior>(
             *(__int64 **)(a2 + 64),
             (volatile int *)a2);
  }
  return result;
}
