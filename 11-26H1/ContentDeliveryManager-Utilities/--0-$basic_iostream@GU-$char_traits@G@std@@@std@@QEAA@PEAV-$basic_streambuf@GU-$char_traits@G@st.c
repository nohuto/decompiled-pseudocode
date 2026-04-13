/*
 * XREFs of ??0?$basic_iostream@GU?$char_traits@G@std@@@std@@QEAA@PEAV?$basic_streambuf@GU?$char_traits@G@std@@@1@@Z @ 0x180060AA0
 * Callers:
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@H@Z @ 0x180060B3C (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@H@Z.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180067B28 (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@GU.c)
 * Callees:
 *     ??0?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@PEAV?$basic_streambuf@GU?$char_traits@G@std@@@1@_N@Z @ 0x18004B3A4 (--0-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA@PEAV-$basic_streambuf@GU-$char_traits@G@std.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::basic_iostream<unsigned short>::basic_iostream<unsigned short>(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v4; // rcx

  std::basic_istream<unsigned short>::basic_istream<unsigned short>(a1, a2, a3);
  *(_QWORD *)((char *)a1 + *(int *)(a1[2] + 4LL) + 16) = &std::basic_ostream<unsigned short>::`vftable';
  v4 = *(int *)(a1[2] + 4LL);
  *(_DWORD *)((char *)a1 + v4 + 12) = v4 - 16;
  *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL)) = &std::basic_iostream<unsigned short>::`vftable';
  *(_DWORD *)((char *)a1 + *(int *)(*a1 + 4LL) - 4) = *(_DWORD *)(*a1 + 4LL) - 32;
  return a1;
}
