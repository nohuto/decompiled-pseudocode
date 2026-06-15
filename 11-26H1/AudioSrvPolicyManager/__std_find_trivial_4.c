/*
 * XREFs of __std_find_trivial_4 @ 0x18002F3F0
 * Callers:
 *     ?TsSessionIdIsAScreenReaderProcess@@YA_NKKPEAM@Z @ 0x180020850 (-TsSessionIdIsAScreenReaderProcess@@YA_NKKPEAM@Z.c)
 *     ?CanBeRemoved@CProcess@@QEAAHXZ @ 0x180020BB8 (-CanBeRemoved@CProcess@@QEAAHXZ.c)
 *     ?GetScreenReaderPolicyVolume@CProcess@@UEAAMXZ @ 0x180021A00 (-GetScreenReaderPolicyVolume@CProcess@@UEAAMXZ.c)
 *     ?IsScreenReaderProcess@CProcess@@UEAA_NXZ @ 0x180024980 (-IsScreenReaderProcess@CProcess@@UEAA_NXZ.c)
 *     ??$find@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@K@std@@@std@@@std@@K@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@K@std@@@std@@@0@V10@V10@AEBK@Z @ 0x18002819C (--$find@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@K@std@@@std@@@std@@K@std@@YA-AV-$_Ve.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
const __m128i *__fastcall _std_find_trivial_4(const __m128i *a1, const __m128i *a2, unsigned int _R8D)
{
  return anonymous_namespace_::__std_find_trivial_impl__anonymous_namespace_::_Find_traits_4_unsigned_int_(a1, a2, _R8D);
}
