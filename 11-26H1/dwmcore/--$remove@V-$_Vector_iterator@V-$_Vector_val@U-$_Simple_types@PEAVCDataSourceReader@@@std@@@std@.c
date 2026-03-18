/*
 * XREFs of ??$remove@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCDataSourceReader@@@std@@@std@@@std@@PEAVCDataSourceReader@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCDataSourceReader@@@std@@@std@@@0@V10@V10@AEBQEAVCDataSourceReader@@@Z @ 0x18022E2BC
 * Callers:
 *     ??1CDataSourceReader@@UEAA@XZ @ 0x180266A0C (--1CDataSourceReader@@UEAA@XZ.c)
 * Callees:
 *     __std_find_trivial_8 @ 0x180220100 (__std_find_trivial_8.c)
 *     __std_remove_8 @ 0x180220110 (__std_remove_8.c)
 */

const __m128i **__fastcall std::remove<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CDataSourceReader *>>>,CDataSourceReader *>(
        const __m128i **a1,
        const __m128i *a2,
        const __m128i *a3,
        unsigned __int64 *a4)
{
  const __m128i *trivial_8; // rax

  trivial_8 = _std_find_trivial_8(a2, a3, *a4);
  if ( trivial_8 != a3 )
    trivial_8 = _std_remove_8(trivial_8, a3, *a4);
  *a1 = trivial_8;
  return a1;
}
