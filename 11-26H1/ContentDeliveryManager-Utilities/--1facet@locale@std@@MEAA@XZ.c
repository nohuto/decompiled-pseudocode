/*
 * XREFs of ??1facet@locale@std@@MEAA@XZ @ 0x18004D2F8
 * Callers:
 *     _std::locale::_Locimp::_Locimp_::_1_::dtor$0 @ 0x1800B9223 (_std--locale--_Locimp--_Locimp_--_1_--dtor$0.c)
 *     _std::time_get_char_std::istreambuf_iterator_char_std::char_traits_char_____::_Getcat_::_1_::dtor$2 @ 0x1800B92FB (_std--time_get_char_std--istreambuf_iterator_char_std--char_traits_char_____--_Getc_ea_1800B92FB.c)
 *     _std::locale::_Locimp::_Makeloc_::_1_::dtor$26 @ 0x1800B939F (_std--locale--_Locimp--_Makeloc_--_1_--dtor$26.c)
 *     _std::locale::_Locimp::_Makewloc_::_1_::dtor$69 @ 0x1800B95C1 (_std--locale--_Locimp--_Makewloc_--_1_--dtor$69.c)
 *     _std::locale::_Locimp::_Makexloc_::_1_::dtor$47 @ 0x1800B989F (_std--locale--_Locimp--_Makexloc_--_1_--dtor$47.c)
 *     _std::time_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::time_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t______::_1_::dtor$0 @ 0x1800BAA80 (_std--time_get_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t_____--time_get_.c)
 *     _std::wstring_convert_std::codecvt_utf8_unsigned_short_1114111_0__unsigned_short_std::allocator_unsigned_short__std::allocator_char___::wstring_convert_std::codecvt_utf8_unsigned_short_1114111_0__unsigned_short_std::allocator_unsigned_short__std::allocator_char____::_1_::dtor$6 @ 0x1800BBBFE (_std--wstring_convert_std--codecvt_utf8_unsigned_short_1114111_0__unsigned_short_st_ea_1800BBBFE.c)
 * Callees:
 *     <none>
 */

void __fastcall std::locale::facet::~facet(std::locale::facet *this)
{
  *(_QWORD *)this = &std::_Facet_base::`vftable';
}
