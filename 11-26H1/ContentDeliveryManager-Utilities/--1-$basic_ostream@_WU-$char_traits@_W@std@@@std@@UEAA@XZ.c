/*
 * XREFs of ??1?$basic_ostream@_WU?$char_traits@_W@std@@@std@@UEAA@XZ @ 0x18008533C
 * Callers:
 *     _std::basic_ostringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::basic_ostringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____::_1_::dtor$1 @ 0x1800BCDF9 (_std--basic_ostringstream_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t__ea_1800BCDF9.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wostream::~wostream<wchar_t,std::char_traits<wchar_t>>(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 16) + 4LL) + a1 - 16) = &std::basic_ostream<unsigned short>::`vftable';
  result = *(_QWORD *)(a1 - 16);
  *(_DWORD *)(*(int *)(result + 4) + a1 - 20) = *(_DWORD *)(result + 4) - 16;
  return result;
}
