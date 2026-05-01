/*
 * XREFs of _lambda_3415c00afb736d6d54203eb8c7c58983_::operator() @ 0x18057AA50
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_3415c00afb736d6d54203eb8c7c58983___::Invoke @ 0x18057C5E0 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_3415c00afb7.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     _lambda_3415c00afb736d6d54203eb8c7c58983_$_InitCoro$2::operator() @ 0x18057A8D0 (_lambda_3415c00afb736d6d54203eb8c7c58983_$_InitCoro$2--operator().c)
 */

_BYTE *__fastcall lambda_3415c00afb736d6d54203eb8c7c58983_::operator()(__int64 a1, _BYTE *a2, __int64 a3)
{
  void *v6; // rax
  int v8; // [rsp+98h] [rbp+10h] BYREF

  v6 = operator new(0x50uLL);
  v8 = 0;
  lambda_3415c00afb736d6d54203eb8c7c58983___InitCoro_2::operator()(&v8, (__int64)v6, a2, a3, a1);
  return a2;
}
