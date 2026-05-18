/*
 * XREFs of sub_18004F734 @ 0x18004F734
 * Callers:
 *     sub_18004FA2C @ 0x18004FA2C (sub_18004FA2C.c)
 * Callees:
 *     sub_18002085C @ 0x18002085C (sub_18002085C.c)
 */

__int64 __fastcall sub_18004F734(__int64 a1)
{
  __int64 v2; // rdx

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 144) + 4LL) + a1 - 144) = &std::istringstream::`vftable';
  v2 = *(int *)(*(_QWORD *)(a1 - 144) + 4LL);
  *(_DWORD *)(v2 + a1 - 148) = v2 - 144;
  sub_18002085C((_QWORD *)(a1 - 128));
  return std::istream::~istream<char,std::char_traits<char>>(a1 - 120);
}
