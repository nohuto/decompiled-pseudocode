/*
 * XREFs of _lambda_3415c00afb736d6d54203eb8c7c58983_::operator() @ 0x18059E190
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_3415c00afb736d6d54203eb8c7c58983___::Invoke @ 0x18059FDB0 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_3415c00afb7.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     _lambda_3415c00afb736d6d54203eb8c7c58983_$_ResumeCoro$1::operator() @ 0x18059E070 (_lambda_3415c00afb736d6d54203eb8c7c58983_$_ResumeCoro$1--operator().c)
 */

_BYTE *__fastcall lambda_3415c00afb736d6d54203eb8c7c58983_::operator()(
        void (__fastcall *a1)(__int64 a1),
        _BYTE *a2,
        void (__fastcall *a3)(__int64 a1))
{
  void (__fastcall **v7)(__int64); // [rsp+40h] [rbp+8h]

  v7 = (void (__fastcall **)(__int64))operator new(0x50uLL);
  v7[7] = a1;
  v7[8] = a3;
  *v7 = lambda_3415c00afb736d6d54203eb8c7c58983___ResumeCoro_1::operator();
  *((_DWORD *)v7 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v7 + 48) = 0;
  lambda_3415c00afb736d6d54203eb8c7c58983___ResumeCoro_1::operator()((__int64)v7);
  return a2;
}
