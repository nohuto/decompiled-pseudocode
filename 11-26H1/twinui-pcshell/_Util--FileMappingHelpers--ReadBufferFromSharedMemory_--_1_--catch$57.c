/*
 * XREFs of _Util::FileMappingHelpers::ReadBufferFromSharedMemory_::_1_::catch$57 @ 0x180703D10
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x1802D7A70 (-to_abi@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 */

__int64 __fastcall Util::FileMappingHelpers::ReadBufferFromSharedMemory_::_1_::catch_57(__int64 a1, __int64 a2)
{
  if ( *winrt::hresult_error::to_abi(*(_QWORD *)(a2 + 184), (_DWORD *)(a2 + 256)) != -2147023496 )
    throw;
  **(_QWORD **)(a2 + 264) = 0LL;
  return 0LL;
}
