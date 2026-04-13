/*
 * XREFs of ?_Tidy@?$numpunct@_W@std@@AEAAXXZ @ 0x18005C7E0
 * Callers:
 *     ??1?$numpunct@_W@std@@MEAA@XZ @ 0x18004CEE8 (--1-$numpunct@_W@std@@MEAA@XZ.c)
 *     _std::numpunct_wchar_t_::_Init_::_1_::catch$0 @ 0x1800BB21A (_std--numpunct_wchar_t_--_Init_--_1_--catch$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::numpunct<wchar_t>::_Tidy(void **a1)
{
  operator delete[](a1[2]);
  operator delete[](a1[4]);
  operator delete[](a1[5]);
}
