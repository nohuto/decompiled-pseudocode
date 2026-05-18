/*
 * XREFs of sub_18003167C @ 0x18003167C
 * Callers:
 *     sub_18003200C @ 0x18003200C (sub_18003200C.c)
 * Callees:
 *     sub_180031648 @ 0x180031648 (sub_180031648.c)
 */

__int64 __fastcall sub_18003167C(__int64 a1)
{
  __int64 v2; // rdx

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 152) + 4LL) + a1 - 152) = &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::`vftable';
  v2 = *(int *)(*(_QWORD *)(a1 - 152) + 4LL);
  *(_DWORD *)(v2 + a1 - 156) = v2 - 152;
  sub_180031648((_QWORD *)(a1 - 128));
  return std::wiostream::~basic_iostream<wchar_t,std::char_traits<wchar_t>>(a1 - 120);
}
