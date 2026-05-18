/*
 * XREFs of sub_18003200C @ 0x18003200C
 * Callers:
 *     sub_18003241C @ 0x18003241C (sub_18003241C.c)
 *     sub_18003412C @ 0x18003412C (sub_18003412C.c)
 *     sub_1800DA00F @ 0x1800DA00F (sub_1800DA00F.c)
 * Callees:
 *     sub_18003167C @ 0x18003167C (sub_18003167C.c)
 */

__int64 __fastcall sub_18003200C(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 152;
  sub_18003167C(a1 + 152);
  return std::wios::~wios<wchar_t,std::char_traits<wchar_t>>(v1);
}
