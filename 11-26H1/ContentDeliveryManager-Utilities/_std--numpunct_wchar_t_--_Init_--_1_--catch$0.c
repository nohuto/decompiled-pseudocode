/*
 * XREFs of _std::numpunct_wchar_t_::_Init_::_1_::catch$0 @ 0x1800BB21A
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180021CDC (_CxxThrowException_0.c)
 *     ?_Tidy@?$numpunct@_W@std@@AEAAXXZ @ 0x18005C7E0 (-_Tidy@-$numpunct@_W@std@@AEAAXXZ.c)
 */

void __fastcall __noreturn std::numpunct_wchar_t_::_Init_::_1_::catch_0(__int64 a1, __int64 a2)
{
  std::numpunct<wchar_t>::_Tidy(*(void ***)(a2 + 64));
  throw;
}
