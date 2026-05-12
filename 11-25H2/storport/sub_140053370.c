/*
 * XREFs of sub_140053370 @ 0x140053370
 * Callers:
 *     sub_140053318 @ 0x140053318 (sub_140053318.c)
 * Callees:
 *     sub_1400ADDF8 @ 0x1400ADDF8 (sub_1400ADDF8.c)
 *     sub_1400BB250 @ 0x1400BB250 (sub_1400BB250.c)
 *     sub_140183530 @ 0x140183530 (sub_140183530.c)
 */

__int64 __fastcall sub_140053370(__int64 a1)
{
  int v1; // esi
  bool v3; // zf
  __int64 result; // rax

  v1 = 0;
  v3 = dword_1401684A8 == 0;
  *(_QWORD *)(a1 + 2128) = 0LL;
  *(_QWORD *)(a1 + 2152) = 0LL;
  *(_QWORD *)(a1 + 2160) = 0LL;
  *(_QWORD *)(a1 + 2192) = 1LL;
  *(_QWORD *)(a1 + 2136) = 0LL;
  *(_QWORD *)(a1 + 2144) = 0LL;
  *(_QWORD *)(a1 + 2168) = 0LL;
  *(_QWORD *)(a1 + 2176) = 0LL;
  *(_QWORD *)(a1 + 2184) = 0LL;
  *(_DWORD *)(a1 + 2200) = 0;
  *(_QWORD *)(a1 + 2208) = 0LL;
  *(_QWORD *)(a1 + 2216) = 0LL;
  *(_QWORD *)(a1 + 2224) = 0LL;
  if ( !v3 )
  {
    if ( (unsigned int)sub_140183530() )
    {
      if ( (byte_1401694F6 & 2) != 0 )
        sub_1400ADDF8(
          a1 + 242,
          a1 + 177,
          a1 + 168,
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_BYTE *)(a1 + 104),
          *(_BYTE *)(a1 + 105),
          *(_BYTE *)(a1 + 106),
          a1 + 2104,
          *(_QWORD *)(a1 + 24) + 5064LL,
          *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4720LL),
          a1 + 168,
          a1 + 177,
          a1 + 242,
          *(_BYTE *)(a1 + 506) & 1,
          (__int64)L"Initializing performance telemetry failed.");
      sub_1400BB250(a1);
    }
    else
    {
      v1 = 1;
    }
  }
  result = 2372LL;
  *(_DWORD *)(a1 + 2372) = v1;
  return result;
}
