/*
 * XREFs of _std::basic_istream_wchar_t_std::char_traits_wchar_t___::operator___::_1_::catch$3 @ 0x1800BABB4
 * Callers:
 *     <none>
 * Callees:
 *     ?setstate@?$basic_ios@GU?$char_traits@G@std@@@std@@QEAAXH_N@Z @ 0x18005F29C (-setstate@-$basic_ios@GU-$char_traits@G@std@@@std@@QEAAXH_N@Z.c)
 */

__int64 __fastcall std::basic_istream_wchar_t_std::char_traits_wchar_t___::operator___::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  std::basic_ios<unsigned short>::setstate(*(_QWORD *)(a2 + 160) + *(int *)(**(_QWORD **)(a2 + 160) + 4LL), 4, 1);
  return 0LL;
}
