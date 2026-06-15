/*
 * XREFs of ??$find@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@K@std@@@std@@@std@@K@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@K@std@@@std@@@0@V10@V10@AEBK@Z @ 0x18002819C
 * Callers:
 *     ?RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x18000734C (-RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z.c)
 *     ?IsPidInParentList@CProcess@@UEAA_NK@Z @ 0x180038C90 (-IsPidInParentList@CProcess@@UEAA_NK@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x180044920 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 * Callees:
 *     __std_find_trivial_4 @ 0x18002F3F0 (__std_find_trivial_4.c)
 */

_QWORD *__fastcall std::find<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned long>>>,unsigned long>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4)
{
  *a1 = _std_find_trivial_4(a2, a3, *a4);
  return a1;
}
