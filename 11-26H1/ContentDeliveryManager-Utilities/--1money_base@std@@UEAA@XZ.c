/*
 * XREFs of ??1money_base@std@@UEAA@XZ @ 0x180010818
 * Callers:
 *     _std::moneypunct_char_0_::_Getcat_::_1_::dtor$3 @ 0x1800B9404 (_std--moneypunct_char_0_--_Getcat_--_1_--dtor$3.c)
 *     _std::locale::_Locimp::_Makewloc_::_1_::dtor$74 @ 0x1800B95D3 (_std--locale--_Locimp--_Makewloc_--_1_--dtor$74.c)
 *     _std::locale::_Locimp::_Makexloc_::_1_::dtor$46 @ 0x1800B988D (_std--locale--_Locimp--_Makexloc_--_1_--dtor$46.c)
 * Callees:
 *     <none>
 */

void __fastcall std::money_base::~money_base(std::money_base *this)
{
  *(_QWORD *)this = &std::_Facet_base::`vftable';
}
