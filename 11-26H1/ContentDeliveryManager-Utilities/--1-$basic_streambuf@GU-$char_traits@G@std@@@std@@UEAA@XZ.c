/*
 * XREFs of ??1?$basic_streambuf@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x18004CDB4
 * Callers:
 *     ??1?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x18004CDF4 (--1-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     ??_E?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@UEAAPEAXI@Z @ 0x18004E410 (--_E-$basic_streambuf@_WU-$char_traits@_W@std@@@std@@UEAAPEAXI@Z.c)
 *     _std::basic_stringbuf_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::basic_stringbuf_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____::_1_::dtor$0 @ 0x1800BAA6E (_std--basic_stringbuf_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--basic_stringb.c)
 *     _std::basic_stringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::basic_stringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$3 @ 0x1800BB502 (_std--basic_stringstream_unsigned_short_std--char_traits_unsigned_short__std--alloc_ea_1800BB502.c)
 *     _std::basic_istringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::basic_istringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____::_1_::dtor$3 @ 0x1800BE154 (_std--basic_istringstream_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t__ea_1800BE154.c)
 * Callees:
 *     ??_Glocale@std@@QEAAPEAXI@Z @ 0x18004E694 (--_Glocale@std@@QEAAPEAXI@Z.c)
 */

void **__fastcall std::basic_streambuf<unsigned short>::~basic_streambuf<unsigned short,std::char_traits<unsigned short>>(
        _QWORD *a1)
{
  void **result; // rax
  std::locale *v2; // rcx

  result = &std::wstreambuf::`vftable';
  *a1 = &std::wstreambuf::`vftable';
  v2 = (std::locale *)a1[12];
  if ( v2 )
    return (void **)std::locale::`scalar deleting destructor'(v2, 1u);
  return result;
}
