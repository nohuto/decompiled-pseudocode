/*
 * XREFs of _lambda_846207132ca0d62201dd0675f9ebdb0a_::operator() @ 0x18010C0EC
 * Callers:
 *     ?Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z @ 0x1800433D0 (-Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z.c)
 *     wil::details::lambda_call__lambda_846207132ca0d62201dd0675f9ebdb0a___::_lambda_call__lambda_846207132ca0d62201dd0675f9ebdb0a___ @ 0x1800994D4 (wil--details--lambda_call__lambda_846207132ca0d62201dd0675f9ebdb0a___--_lambda_call__lambda_8462.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_846207132ca0d62201dd0675f9ebdb0a_::operator()(__int64 *a1)
{
  HKEY v2; // rcx
  __int64 result; // rax
  void *v4; // rcx

  v2 = *(HKEY *)(*a1 + 24);
  if ( v2 )
  {
    RegCloseKey(v2);
    *(_QWORD *)(*a1 + 24) = 0LL;
  }
  result = *a1;
  v4 = *(void **)(*a1 + 32);
  if ( v4 )
  {
    CloseHandle(v4);
    result = *a1;
    *(_QWORD *)(*a1 + 32) = 0LL;
  }
  return result;
}
