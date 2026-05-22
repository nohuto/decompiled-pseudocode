/*
 * XREFs of std::call_once__lambda_d12edc8f4df206c0d98be8a6673aacf9___ @ 0x18007F370
 * Callers:
 *     ?Create@MPCManager@@SAXXZ @ 0x1800894DC (-Create@MPCManager@@SAXXZ.c)
 * Callees:
 *     _lambda_d12edc8f4df206c0d98be8a6673aacf9_::operator() @ 0x180023EC0 (_lambda_d12edc8f4df206c0d98be8a6673aacf9_--operator().c)
 *     __std_init_once_link_alternate_names_and_abort @ 0x18009C908 (__std_init_once_link_alternate_names_and_abort.c)
 */

// Hidden C++ exception states: #wind=1
BOOL __fastcall std::call_once__lambda_d12edc8f4df206c0d98be8a6673aacf9___(__int64 a1, __int64 a2)
{
  BOOL result; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  WINBOOL fPending; // [rsp+48h] [rbp+10h] BYREF
  int v6; // [rsp+4Ch] [rbp+14h]

  v6 = HIDWORD(a2);
  fPending = 0;
  result = __std_init_once_begin_initialize(&MPCManager::s_singletonCreated, 0, &fPending, 0LL);
  if ( !result )
    abort();
  if ( fPending )
  {
    lambda_d12edc8f4df206c0d98be8a6673aacf9_::operator()();
    result = InitOnceComplete(&MPCManager::s_singletonCreated, 0, 0LL);
    if ( !result )
      _std_init_once_link_alternate_names_and_abort(v4, v3);
  }
  return result;
}
