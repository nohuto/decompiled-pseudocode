/*
 * XREFs of ??0?$basic_ostringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18068BCD0
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x180690384 (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ??0?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@H@Z @ 0x1803414D8 (--0-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@H@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::basic_ostringstream<unsigned short>::basic_ostringstream<unsigned short>(__int64 a1)
{
  *(_QWORD *)a1 = &std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbtable'{for `std::basic_ostream<unsigned short>'};
  std::basic_ios<unsigned short>::basic_ios<unsigned short>(a1 + 136);
  std::basic_ostream<unsigned short>::basic_ostream<unsigned short>(a1, a1 + 8, 0LL, 0LL);
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1) = &std::basic_ostringstream<unsigned short>::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 - 4) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 136;
  std::basic_stringbuf<unsigned short>::basic_stringbuf<unsigned short>(a1 + 8, 2);
  return a1;
}
