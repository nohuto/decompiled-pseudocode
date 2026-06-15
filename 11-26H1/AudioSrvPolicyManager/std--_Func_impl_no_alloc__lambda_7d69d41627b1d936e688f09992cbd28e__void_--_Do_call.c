/*
 * XREFs of std::_Func_impl_no_alloc__lambda_7d69d41627b1d936e688f09992cbd28e__void_::_Do_call @ 0x180047A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_7d69d41627b1d936e688f09992cbd28e__void_::_Do_call(__int64 a1)
{
  return CApplicationManager::OnVoipCallStateChanged(
           (CApplicationManager *)a1,
           *(struct CProcess **)(a1 + 8),
           *(_BYTE *)(a1 + 16));
}
