/*
 * XREFs of wil::details::lambda_call__lambda_691ed91cc2e49a857a8ae34c054e0d34___::_lambda_call__lambda_691ed91cc2e49a857a8ae34c054e0d34___ @ 0x1800AFECC
 * Callers:
 *     _CAudioSession::RegisterOwnerProcess_::_1_::dtor$1 @ 0x180165052 (_CAudioSession--RegisterOwnerProcess_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_691ed91cc2e49a857a8ae34c054e0d34___::_lambda_call__lambda_691ed91cc2e49a857a8ae34c054e0d34___(
        _QWORD **a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)**a1 + 32LL))(
             **a1,
             (unsigned __int64)(a1[1] + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)a1[1] >> 64));
  }
  return result;
}
